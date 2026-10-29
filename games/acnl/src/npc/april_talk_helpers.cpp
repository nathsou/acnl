// Small helpers used by the NPC talk receptors (AcNpcApril::AprilTalkRcpt, AcNpcNml::TalkRcpt...).
#include <cstddef>
#include <cstring>

#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"
#include "save/player.hpp"

using guest::gptr;
using guest::MemberFunctionPointer;

namespace {

// Guest addresses of the globals used below.
constexpr u32 CODE_TABLE_FIRST_ADDRESS = 0x00842614;     // rodata
constexpr u32 CODE_TABLE_SECOND_ADDRESS = 0x00842622;    // rodata
constexpr u32 INITIAL_PAIR_SOURCE_ADDRESS = 0x00842604;  // rodata
constexpr u32 TALK_FLAGS_ADDRESS = 0x0094daac;
constexpr u32 SAVE_HOLDER_ADDRESS = 0x00aaef18;
constexpr u32 HANDLER_TABLE_ADDRESS = 0x00984cc0;

// ---- 0x006326a0: clears a block of an object

// The block cleared by clear_owner_block (meaning not known yet).
struct ClearedBlock {
    u32 words[2];
    u8 byte_08;
    u8 unknown_09;
    u16 half_0a;
    u8 byte_0c;
};
GUEST_OFFSET(ClearedBlock, byte_08, 8);
GUEST_OFFSET(ClearedBlock, half_0a, 0xa);
GUEST_OFFSET(ClearedBlock, byte_0c, 0xc);

struct BlockOwner {
    u8 unknown_00[0x28];
    ClearedBlock block;
};
GUEST_OFFSET(BlockOwner, block, 0x28);

// The object holding a pointer to the owner at 0x102c.
struct BlockOwnerRef {
    u8 unknown_0000[0x102c];
    gptr<BlockOwner> owner;
};
GUEST_OFFSET(BlockOwnerRef, owner, 0x102c);

inline constexpr guest::Function<0x00632428, u32(gptr<void> self, u32 value)> reset_talk_state_00632428;

// ---- 0x00632904: talk codes

// The object the speaker points to at 0x68; its virtual 6 returns an object with two halfwords.
struct TalkEffectTarget {
    static constexpr u32 SLOT_6 = 6;

    gptr<u32> vtable;
    u8 unknown_04[0xc];
    u16 code_10;
    u16 code_12;
};
GUEST_OFFSET(TalkEffectTarget, code_10, 0x10);
GUEST_OFFSET(TalkEffectTarget, code_12, 0x12);

struct TalkSpeaker {
    u8 unknown_00[0x68];
    gptr<TalkEffectTarget> target;
    u8 unknown_6c[0x830 - 0x6c];
    u16 code_830;
    u16 code_832;
    u8 unknown_834[0x9ac - 0x834];
    u8 state_object_9ac[4];  // an object given to f_0071b8d0
};
GUEST_OFFSET(TalkSpeaker, target, 0x68);
GUEST_OFFSET(TalkSpeaker, code_830, 0x830);
GUEST_OFFSET(TalkSpeaker, code_832, 0x832);
GUEST_OFFSET(TalkSpeaker, state_object_9ac, 0x9ac);

constexpr u32 CODE_COUNT = 7;
constexpr u32 INDEX_QUERIED = 4;  // replaced by 3 or 2 depending on f_0071b8d0
constexpr u32 STATE_A = 0;
constexpr u32 STATE_B = 4;
constexpr u32 INDEX_FOR_STATE_A_OR_B = 3;
constexpr u32 INDEX_OTHERWISE = 2;

// Two tables of 7 codes (meaning not known yet), one entry per index.
guest::global<u16[CODE_COUNT], CODE_TABLE_FIRST_ADDRESS> code_table_first;
guest::global<u16[CODE_COUNT], CODE_TABLE_SECOND_ADDRESS> code_table_second;

constexpr u16 CODE_C = 0x0c;
constexpr u16 CODE_19E = 0x19e;
constexpr u16 CODE_1A0 = 0x1a0;
constexpr u16 CODE_1A2 = 0x1a2;
constexpr u16 PAIR_A[2] = {0xfa, 0xfb};
constexpr u16 PAIR_B[2] = {0xfc, 0xfd};

inline constexpr guest::Function<0x00632488, u32(gptr<void> self, TalkSpeaker &speaker, u32 index)>
    index_is_available_00632488;
inline constexpr guest::Function<0x0071b8d0, u32(gptr<void> object)> query_state_0071b8d0;
inline constexpr guest::Function<0x00579eb4, void(gptr<u16> codes, u32 code)> apply_code_00579eb4;

// ---- 0x00632a44

struct NpcNmlPart {
    static constexpr u8 INITIAL_MODE = 7;

    u8 unknown_00[0x10];
    u8 mode_10;
    u8 unknown_11[3];
    u32 pair_14[2];
    u8 particle_handle_1c[0x34 - 0x1c];  // SeadParticleHandle
    s32 value_34;
    u8 bytes_38[5];
};
GUEST_OFFSET(NpcNmlPart, mode_10, 0x10);
GUEST_OFFSET(NpcNmlPart, pair_14, 0x14);
GUEST_OFFSET(NpcNmlPart, particle_handle_1c, 0x1c);
GUEST_OFFSET(NpcNmlPart, value_34, 0x34);
GUEST_OFFSET(NpcNmlPart, bytes_38, 0x38);

// The handle constructor returns the address of the handle; the part starts this far before it.
constexpr u32 PARTICLE_HANDLE_OFFSET = offsetof(NpcNmlPart, particle_handle_1c);

struct InitialPairSource {
    u32 unknown_00[2];
    u32 pair[2];
};
guest::global<InitialPairSource, INITIAL_PAIR_SOURCE_ADDRESS> initial_pair_source;

struct TalkFlags {
    u8 flag_0;
    u8 flag_1;
};
guest::global<TalkFlags, TALK_FLAGS_ADDRESS> talk_flags;

inline constexpr guest::Function<0x0051dffc, gptr<NpcNmlPart>(gptr<NpcNmlPart> self)> construct_npc_nml_base;
inline constexpr guest::Function<0x003166a8, gptr<void>(gptr<void> self)> construct_sead_particle_handle;
inline constexpr guest::Function<0x0051dfe4, void(gptr<NpcNmlPart> self)> finish_npc_nml_part;

// ---- 0x00632acc

struct TalkPartnerRef {
    u8 unknown_0000[0x1028];
    u32 handle;  // 0 when absent
};
GUEST_OFFSET(TalkPartnerRef, handle, 0x1028);

struct TalkReceptWithPartner {
    u8 unknown_00[0xf0];
    gptr<TalkPartnerRef> partner;  // may be null
};
GUEST_OFFSET(TalkReceptWithPartner, partner, 0xf0);

struct SaveHolder {
    u8 unknown_000[0x234];
    gptr<SavePlayer> player;  // may be null
};
GUEST_OFFSET(SaveHolder, player, 0x234);
guest::global<SaveHolder, SAVE_HOLDER_ADDRESS> save_holder;

inline constexpr guest::Function<0x00309f85, u32(u32 handle, gptr<const PersonalId> identity)> check_handle_with_identity;

// ---- 0x006330ec

struct HandlerObject {
    gptr<u32> vtable;
    u32 key;
};

struct HandlerEntry {
    u32 key;
    u32 argument;
    MemberFunctionPointer handler;
};
GUEST_SIZE(HandlerEntry, 16);

struct HandlerTable {
    gptr<HandlerEntry> entries;
    u32 count;
    MemberFunctionPointer default_handler;  // used when no entry matches
};
guest::global<HandlerTable, HANDLER_TABLE_ADDRESS> handler_table;

constexpr u32 OBJECT_VIRTUAL_2 = 2;

inline constexpr guest::Function<0x00713a70, gptr<HandlerObject>(gptr<void> self)> find_handler_object;
inline constexpr guest::Function<0x001509dc, u32(u32 key, u32 object_key, u32 argument)> compare_entry;  // 0: match

// ---- fuzz helpers

constexpr u32 SELF_SCRATCH_SIZE = 0x100;       // generic receptor / object scratch
constexpr u32 BIG_SELF_SCRATCH_SIZE = 0x1000;  // objects the callee reads deep into
constexpr u32 OWNER_REF_SCRATCH_SIZE = sizeof(BlockOwnerRef) + 0x10;
constexpr u32 OWNER_SCRATCH_SIZE = sizeof(BlockOwner) + 0x10;
constexpr u32 SPEAKER_SCRATCH_SIZE = sizeof(TalkSpeaker) + 0x10;
constexpr u32 VTABLE_SCRATCH_SIZE = 0x40;
constexpr u32 TARGET_SCRATCH_SIZE = 0x20;
constexpr u32 PARTNER_SCRATCH_SIZE = sizeof(TalkPartnerRef) + 0x10;
constexpr u32 ENCRYPTED_INT_GET_ADDRESS = 0x00303660;  // used as a virtual 6 that returns 0 on a bad checksum
constexpr u32 PICK_LIMIT = 7;                          // one past the last valid code index

gptr<void> zeroed_block(guest::Fuzz &f, u32 size) {
    gptr<void> p = f.allocate(size);
    std::memset(p.get(), 0, size);
    return p;
}

}  // namespace

// Calls the reset helper, then clears the block of the owner the second object points to. Returns the block.
gptr<void> clear_owner_block(gptr<void> self, gptr<BlockOwnerRef> ref) {
    reset_talk_state_00632428(self, 0);
    ClearedBlock &block = ref->owner->block;
    block.words[0] = 0;
    block.words[1] = 0;
    block.byte_08 = 0;
    block.half_0a = 0;
    block.byte_0c = 0;
    return guest::addr_of(block);
}
GUEST_EXPORT(0x006326a0, clear_owner_block);

// Picks the code index (replaced by 0 when unavailable), translates the speaker's two codes through the tables and
// sets the target's two halfwords for some codes. Returns the target (null if it has none).
gptr<TalkEffectTarget> update_talk_codes(gptr<void> self, gptr<TalkSpeaker> speaker_ptr, u32 index) {
    TalkSpeaker &speaker = *speaker_ptr;
    if (index >= CODE_COUNT || index_is_available_00632488(self, speaker, index) == 0) {
        index = 0;
    } else if (index == INDEX_QUERIED) {
        u32 state = query_state_0071b8d0(guest::addr_of(speaker.state_object_9ac[0]).cast<void>());
        index = (state == STATE_A || state == STATE_B) ? INDEX_FOR_STATE_A_OR_B : INDEX_OTHERWISE;
    }

    for (u32 i = 0; i < CODE_COUNT; i++) {
        if (code_table_first[i] == speaker.code_830) {
            speaker.code_830 = code_table_first[index];
            break;
        }
    }
    for (u32 i = 0; i < CODE_COUNT; i++) {
        if (code_table_second[i] == speaker.code_832) {
            apply_code_00579eb4(guest::addr_of(speaker.code_830), code_table_second[index]);
            break;
        }
    }

    gptr<TalkEffectTarget> target = guest::call_address<gptr<TalkEffectTarget>>(
        speaker.target->vtable[TalkEffectTarget::SLOT_6], speaker.target);
    if (!target) {
        return target;
    }
    const u16 *pair = nullptr;
    switch (speaker.code_830) {
    case CODE_C:
    case CODE_1A0:
        pair = PAIR_A;
        break;
    case CODE_19E:
    case CODE_1A2:
        pair = PAIR_B;
        break;
    default:
        break;
    }
    if (pair) {
        target->code_10 = pair[0];
        target->code_12 = pair[1];
    }
    return target;
}
GUEST_EXPORT(0x00632904, update_talk_codes);

// A constructor of a part of AcNpcNml: base constructor, initial values, particle handle, and the shared flags reset.
gptr<NpcNmlPart> construct_npc_nml_part(gptr<NpcNmlPart> self) {
    gptr<NpcNmlPart> base = construct_npc_nml_base(self);
    base->mode_10 = NpcNmlPart::INITIAL_MODE;
    base->pair_14[0] = initial_pair_source->pair[0];
    base->pair_14[1] = initial_pair_source->pair[1];
    gptr<void> handle = construct_sead_particle_handle(guest::addr_of(base->particle_handle_1c).cast<void>());
    gptr<NpcNmlPart> part = (handle - PARTICLE_HANDLE_OFFSET).cast<NpcNmlPart>();
    part->value_34 = -1;
    for (u8 &byte : part->bytes_38) {
        byte = 0;
    }
    finish_npc_nml_part(part);
    talk_flags->flag_0 = 0;
    talk_flags->flag_1 = 0;
    return part;
}
GUEST_EXPORT(0x00632a44, construct_npc_nml_part);

// Asks the check function about the partner's handle and the current player's identity; 0 when either is missing.
u32 check_partner_handle(gptr<TalkReceptWithPartner> self) {
    if (!self->partner) {
        return 0;
    }
    gptr<SavePlayer> player = save_holder->player;
    if (!player) {
        return 0;
    }
    u32 handle = self->partner->handle;
    if (handle == 0) {
        return 0;
    }
    return check_handle_with_identity(handle, guest::addr_of(player->identity));
}
GUEST_EXPORT(0x00632acc, check_partner_handle);

// AcNpcApril::AprilTalkRcpt::virtual_75: finds the handler registered for the handler object's key (or the default)
// and calls it on this. Returns what the handler returns (0 without a handler object, the adjustment when the
// handler is empty).
u32 april_talk_rcpt_virtual_75(gptr<void> self) {
    gptr<HandlerObject> object = find_handler_object(self);
    if (!object) {
        return 0;
    }
    guest::call_address<void>(object->vtable[OBJECT_VIRTUAL_2], object);
    u32 key = object->key;

    MemberFunctionPointer handler = handler_table->default_handler;
    gptr<HandlerEntry> entry = handler_table->entries;
    while (entry != handler_table->entries + handler_table->count) {
        if (compare_entry(entry->key, key, entry->argument) == 0) {
            handler = entry->handler;
            break;
        }
        ++entry;
    }

    if (handler.function == 0 && !(handler.adjust & 1)) {
        return u32(handler.adjust);
    }
    return guest::call_member<u32>(handler, self);
}
GUEST_EXPORT(0x006330ec, april_talk_rcpt_virtual_75);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x006326a0, 200, [](guest::Fuzz &f) {
    auto self = zeroed_block(f, SELF_SCRATCH_SIZE);
    auto ref = zeroed_block(f, OWNER_REF_SCRATCH_SIZE).cast<BlockOwnerRef>();
    auto owner = f.allocate(OWNER_SCRATCH_SIZE);
    f.bytes(owner, OWNER_SCRATCH_SIZE);
    ref->owner = owner.cast<BlockOwner>();
    f.arguments(self, ref);
});

GUEST_FUZZ(0x00632904, 300, [](guest::Fuzz &f) {
    auto self = zeroed_block(f, BIG_SELF_SCRATCH_SIZE);
    auto speaker = zeroed_block(f, SPEAKER_SCRATCH_SIZE).cast<TalkSpeaker>();
    // a target whose virtual 6 is EncryptedInt::get on an object with a bad checksum: it returns 0
    auto vtable = zeroed_block(f, VTABLE_SCRATCH_SIZE).cast<u32>();
    vtable[TalkEffectTarget::SLOT_6] = ENCRYPTED_INT_GET_ADDRESS;
    auto target = zeroed_block(f, TARGET_SCRATCH_SIZE).cast<EncryptedInt>();
    target->scrambled = vtable.addr();
    target->checksum = EncryptedInt::checksum_of(target->scrambled) + 1;
    speaker->target = target.cast<TalkEffectTarget>();
    speaker->code_830 = f.below(2) ? code_table_first[f.below(CODE_COUNT)] : u16(f.number());
    speaker->code_832 = f.below(2) ? code_table_second[f.below(CODE_COUNT)] : u16(f.number());
    f.arguments(self, speaker, f.pick<u32>({0, 1, 2, 3, 4, 5, 6, PICK_LIMIT, f.number()}));
});

GUEST_FUZZ(0x00632a44, 200, [](guest::Fuzz &f) { f.arguments(zeroed_block(f, SELF_SCRATCH_SIZE).cast<NpcNmlPart>()); });

GUEST_FUZZ(0x00632acc, 200, [](guest::Fuzz &f) {
    auto self = zeroed_block(f, SELF_SCRATCH_SIZE).cast<TalkReceptWithPartner>();
    if (f.below(2) != 0) {
        self->partner = zeroed_block(f, PARTNER_SCRATCH_SIZE).cast<TalkPartnerRef>();  // no handle: nothing is called
    }
    f.arguments(self);
});

GUEST_FUZZ(0x006330ec, 200, [](guest::Fuzz &f) { f.arguments(zeroed_block(f, BIG_SELF_SCRATCH_SIZE)); });
