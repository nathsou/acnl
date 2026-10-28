#include "net/shared_entry.hpp"

namespace {

using guest::gptr;

constexpr u32 STATIONS = 4;
constexpr u32 TEMPLATE_ID_OFFSET = 9;  // an entry's template id is its entry id plus this
constexpr u32 MESSAGE_TYPE_CLAIMED = 4;   // (names are guesses from the flag bits set alongside)
constexpr u32 MESSAGE_TYPE_RELOADED = 8;
constexpr u32 SEND_CHANNEL = 0x40;     // arguments of the send function (meaning not known yet)
constexpr u32 SEND_UNKNOWN = 4;

inline constexpr guest::Function<0x00624f00, u32(u32 station)> station_is_waited_for;
inline constexpr guest::Function<0x00305f44, u32()> own_station;
inline constexpr guest::Function<0x006268f8, gptr<SharedEntry>(u32 template_id)> entry_template;
inline constexpr guest::Function<0x0062512c, void(u32 template_id, SharedEntry &entry, u32 unknown)>
    apply_entry_template;
inline constexpr guest::Function<0x0029cf44, void(SharedEntry &entry, u32 id)> prepare_entry_release;
inline constexpr guest::Function<0x0029cf30, void(SharedEntry &entry, u32 id, u32 unknown)> finish_entry_release;
inline constexpr guest::Function<0x006249b0, void(u32 channel, u32 unknown, const SharedEntryMessage &message, u32 size)>
    send_message;

// Marks a station as reported in the mask; true once no station the session waits for is missing.
bool all_stations_reported(u8 &reported, u32 station) {
    if (station < STATIONS) {
        reported |= u8(1u << station);
    }
    for (u32 i = 0; i < STATIONS; i++) {
        if (reported & (1u << i)) {
            continue;
        }
        if (station_is_waited_for(i) != 0) {
            return false;
        }
    }
    return true;
}

// Reloads an entry from its template, with the given flag bits in place of the station and top bits.
SharedEntry &reload_entry(SharedEntryTable &table, u32 entry_id, u32 template_id, u8 new_bits, u32 unknown) {
    SharedEntry &entry = table.entry(entry_id);
    entry = *entry_template(template_id);
    entry.flags = u8((entry.flags & ~(SharedEntry::TOP_BITS | SharedEntry::STATION_MASK)) | new_bits);
    entry.counter++;
    apply_entry_template(template_id, entry, unknown);
    return entry;
}

}  // namespace

void SharedEntry::reset() {
    flags = RESET_FLAGS;
    counter = 0;
    unknown_04 = RESET_MARKER;
}
GUEST_EXPORT(0x00206430, SharedEntry::reset);

void SharedEntry::reset_flags() {
    flags = RESET_FLAGS;
    counter = 0;
}
GUEST_EXPORT(0x00206454, SharedEntry::reset_flags);

// Once every station reported: clears the mask and, if the entry belongs to this station, clears its top bits and
// finishes the release.
void apply_entry_release(u8 &reported, const SharedEntryMessage &message, u32 station) {
    if (!all_stations_reported(reported, station)) {
        return;
    }
    reported = 0;
    u8 id = message.entry_id();
    gptr<SharedEntryTable> table = *shared_entry_table;
    if (!table) {
        return;
    }
    SharedEntry &entry = table->entry(id);
    prepare_entry_release(entry, id);
    u32 own = own_station();
    if (own != (entry.flags & SharedEntry::STATION_MASK)) {
        return;
    }
    entry.flags &= u8(~SharedEntry::TOP_BITS);
    finish_entry_release(entry, id, 1);
}
GUEST_EXPORT(0x0020649c, apply_entry_release);

// Once every station reported: reloads the entry with both top bits set and tells the stations, then clears the mask.
void apply_entry_claim(u8 &reported, const SharedEntryMessage &message, u32 station) {
    u8 id = message.entry_id();
    if (!all_stations_reported(reported, station)) {
        return;
    }
    gptr<SharedEntryTable> table = *shared_entry_table;
    if (!table) {
        return;
    }
    u32 template_id = u8(message.entry_id() + TEMPLATE_ID_OFFSET);
    SharedEntry &entry = reload_entry(*table, id, template_id, SharedEntry::TOP_BITS | 4, 0);

    guest::StackObject<SharedEntryMessage> reply;
    *reply = {};
    reply->counter = entry.counter;
    reply->set_header(MESSAGE_TYPE_CLAIMED, message.entry_id(), message.sender());
    send_message(SEND_CHANNEL, SEND_UNKNOWN, *reply, sizeof(SharedEntryMessage));
    reported = 0;
}
GUEST_EXPORT(0x00206594, apply_entry_claim);

// Once every station reported: reloads the entry with its top bits cleared, clears the mask and the entry's bit 0,
// and tells the stations as this station.
void apply_entry_reload(u8 &reported, const SharedEntryMessage &message, u32 station) {
    u8 id = message.entry_id();
    if (!all_stations_reported(reported, station)) {
        return;
    }
    gptr<SharedEntryTable> table = *shared_entry_table;
    if (!table) {
        return;
    }
    u32 template_id = u8(message.entry_id() + TEMPLATE_ID_OFFSET);
    reload_entry(*table, id, template_id, 4, 1);
    reported = 0;
    table->entry_bits[SharedEntryTable::slot_of(id)] &= u8(~1u);

    guest::StackObject<SharedEntryMessage> notice;
    *notice = {};
    u32 own = own_station();
    notice->set_header(MESSAGE_TYPE_RELOADED, id, own);
    send_message(SEND_CHANNEL, SEND_UNKNOWN, *notice, sizeof(SharedEntryMessage));
}
GUEST_EXPORT(0x00206728, apply_entry_reload);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static void some_entry_message_call(guest::Fuzz &f) {
    auto reported = f.object<u8>();
    *reported = f.pick<u8>({0, 0x0f, 0x07, 0x0e, u8(f.number())});
    auto message = f.object<SharedEntryMessage>();
    u32 id = f.below(4) ? f.below(SharedEntryTable::ENTRY_COUNT) : 0;
    message->set_header(f.below(32), id, f.below(STATIONS));
    f.arguments(reported, message, f.pick<u32>({0, 1, 2, 3, 4, f.number()}));
}

GUEST_FUZZ(0x00206430, 200, [](guest::Fuzz &f) { f.arguments(f.object<SharedEntry>()); });
GUEST_FUZZ(0x00206454, 200, [](guest::Fuzz &f) { f.arguments(f.object<SharedEntry>()); });
GUEST_FUZZ(0x0020649c, 200, some_entry_message_call);
GUEST_FUZZ(0x00206594, 200, some_entry_message_call);
GUEST_FUZZ(0x00206728, 200, some_entry_message_call);
