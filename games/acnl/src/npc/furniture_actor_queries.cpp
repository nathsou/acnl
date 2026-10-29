// Queries on an actor that carries a furniture record (FurnitureRef): its effective kind, tests of that kind and
// reads of some of its fields. The record's kind decides what the actor is (kinds below FurnitureRef::KIND_COUNT).
#include "core/fuzz_helpers.hpp"
#include "item/furniture_ref.hpp"
#include "item/item.hpp"

using guest::gptr;

namespace {

constexpr u8 MODE_SPECIAL = 2;  // with no kind, the actor counts as kind 1
constexpr u32 SPECIAL_KIND = 1;
constexpr u8 PROPERTY_MASK = 0x0f;
constexpr u8 PROPERTY_LIMIT = 5;  // properties at or above read as 0
constexpr u16 VALUE_08_LIMIT = 0x198;
constexpr u8 MODE_7B4_LIMIT = 2;

// Effective kinds the tests compare against (what they stand for is not known yet).
enum ActorKind : u32 {
    KIND_B = 0x0b,
    KIND_C = 0x0c,
    KIND_D = 0x0d,
    KIND_E = 0x0e,
    KIND_12 = 0x12,
    KIND_14 = 0x14,
    KIND_16 = 0x16,
    KIND_29 = 0x29,
    KIND_2A = 0x2a,
};

// A record whose signed byte at 3 is added to the actor's float at 0x18.
struct OffsetRecord {
    u8 unknown_00[3];
    s8 offset;
};
GUEST_OFFSET(OffsetRecord, offset, 3);

}  // namespace

struct FurnitureActor {
    u8 unknown_000[0xc];
    u16 id_0c;
    u8 unknown_0e[0x18 - 0x0e];
    float base_18;
    u8 unknown_1c[0x5ec - 0x1c];
    u8 mode_5ec;
    u8 unknown_5ed[3];
    gptr<FurnitureRef> furniture;
    gptr<OffsetRecord> offset_record;
    u8 unknown_5f8[0x7a2 - 0x5f8];
    s8 value_7a2;
    s8 value_7a3;
    u8 unknown_7a4[0x7b4 - 0x7a4];
    u8 mode_7b4;
    u8 unknown_7b5[3];

    u32 effective_kind() const;
    bool is_kind(u32 kind) const;
    bool has_id(u16 id) const;
    u32 property_17() const;
};
GUEST_OFFSET(FurnitureActor, id_0c, 0xc);
GUEST_OFFSET(FurnitureActor, base_18, 0x18);
GUEST_OFFSET(FurnitureActor, mode_5ec, 0x5ec);
GUEST_OFFSET(FurnitureActor, furniture, 0x5f0);
GUEST_OFFSET(FurnitureActor, offset_record, 0x5f4);
GUEST_OFFSET(FurnitureActor, value_7a2, 0x7a2);
GUEST_OFFSET(FurnitureActor, mode_7b4, 0x7b4);
GUEST_SIZE(FurnitureActor, 0x7b8);

namespace {

gptr<FurnitureActor> fuzz_actor(guest::Fuzz &f) {
    auto actor = f.object<FurnitureActor>();
    actor->furniture = nullptr;
    actor->offset_record = nullptr;
    if (f.below(5) != 0) {
        auto furniture = f.object<FurnitureRef>();
        furniture->kind = f.pick<u8>({0, 1, 0xb, 0xc, 0xd, 0xe, 0x12, 0x14, 0x16, 0x29, 0x2a, 0x55, 0x56, 0xff, u8(f.below(0x60))});
        furniture->value_08 = f.pick<u16>({0, 0x197, 0x198, 0x199, 0xffff, u16(f.number())});
        furniture->byte_17 = f.pick<u8>({0, 4, 5, 0x0f, 0xf4, u8(f.number())});
        actor->furniture = furniture;
    }
    if (f.below(2) != 0) {
        actor->offset_record = f.object<OffsetRecord>();
    }
    actor->mode_5ec = f.pick<u8>({0, 1, MODE_SPECIAL, 3});
    actor->mode_7b4 = f.pick<u8>({0, 1, 2, 3, 0xff});
    actor->id_0c = f.pick<u16>({0, 1, 0x1234, u16(f.number())});
    return actor;
}

inline guest::global<u16, 0x0088709c> id_88709c;
inline guest::global<u16, 0x008870a0> id_8870a0;
inline guest::global<u16, 0x0088709a> id_88709a;
inline guest::global<u16, 0x0088709e> id_88709e;
inline guest::global<u16, 0x008870ce> id_8870ce;

}  // namespace

// The record's kind (0 when it is out of range), or 1 for the special mode without a kind; 0 without a record.
u32 FurnitureActor::effective_kind() const {
    if (!furniture) {
        return 0;
    }
    u32 kind = furniture->kind;
    if (kind >= FurnitureRef::KIND_COUNT) {
        kind = 0;
    }
    if (mode_5ec == MODE_SPECIAL && kind == 0) {
        return SPECIAL_KIND;
    }
    return kind;
}
GUEST_EXPORT(0x00751870, FurnitureActor::effective_kind);
GUEST_FUZZ(0x00751870, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

// Several copies of "the effective kind is one of ...", each compiled for its own caller.
static bool kind_is(const FurnitureActor &actor, u32 kind) {
    return actor.effective_kind() == kind;
}
bool kind_is_b_or_12(const FurnitureActor &actor) {
    u32 kind = actor.effective_kind();
    return kind == KIND_B || kind == KIND_12;
}
GUEST_EXPORT(0x00751a30, kind_is_b_or_12);
GUEST_FUZZ(0x00751a30, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool kind_is_c(const FurnitureActor &actor) { return kind_is(actor, KIND_C); }
GUEST_EXPORT(0x00751a4c, kind_is_c);
GUEST_FUZZ(0x00751a4c, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool kind_is_16(const FurnitureActor &actor) { return kind_is(actor, KIND_16); }
GUEST_EXPORT(0x00751d48, kind_is_16);
GUEST_FUZZ(0x00751d48, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool kind_is_d(const FurnitureActor &actor) { return kind_is(actor, KIND_D); }
GUEST_EXPORT(0x00751d60, kind_is_d);
GUEST_FUZZ(0x00751d60, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool kind_is_e(const FurnitureActor &actor) { return kind_is(actor, KIND_E); }
GUEST_EXPORT(0x00751d78, kind_is_e);
GUEST_FUZZ(0x00751d78, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool kind_is_14(const FurnitureActor &actor) { return kind_is(actor, KIND_14); }
GUEST_EXPORT(0x007513e4, kind_is_14);
GUEST_FUZZ(0x007513e4, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool kind_is_29_or_2a(const FurnitureActor &actor) {
    u32 kind = actor.effective_kind();
    return kind == KIND_29 || kind == KIND_2A;
}
GUEST_EXPORT(0x00751808, kind_is_29_or_2a);
GUEST_FUZZ(0x00751808, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool is_special_mode(const FurnitureActor &actor) {
    return actor.mode_5ec == MODE_SPECIAL;
}
GUEST_EXPORT(0x00751500, is_special_mode);
GUEST_FUZZ(0x00751500, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

u32 mode_7b4_below_2(const FurnitureActor &actor) {
    return actor.mode_7b4 >= MODE_7B4_LIMIT ? 0 : actor.mode_7b4;
}
GUEST_EXPORT(0x00751a20, mode_7b4_below_2);
GUEST_FUZZ(0x00751a20, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

// The record's property (the low nibble of byte 0x17 when below 5), 0 without a record.
u32 FurnitureActor::property_17() const {
    if (!furniture) {
        return 0;
    }
    u32 property = furniture->byte_17 & PROPERTY_MASK;
    return property >= PROPERTY_LIMIT ? 0 : property;
}
GUEST_EXPORT(0x00751970, FurnitureActor::property_17);
GUEST_FUZZ(0x00751970, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

// The record's value at 8 when it does not exceed the limit, else 0; 0 without a record.
u32 furniture_value_08(const FurnitureActor &actor) {
    if (!actor.furniture) {
        return 0;
    }
    u32 value = actor.furniture->value_08;
    return value > VALUE_08_LIMIT ? 0 : value;
}
GUEST_EXPORT(0x00751824, furniture_value_08);
GUEST_FUZZ(0x00751824, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

// ItemData::class_19 of the record, 0 without a record.
u32 furniture_class_19(const FurnitureActor &actor) {
    if (!actor.furniture) {
        return 0;
    }
    return actor.furniture.cast<ItemData>()->class_19();
}
GUEST_EXPORT(0x00751d34, furniture_class_19);
GUEST_FUZZ(0x00751d34, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

// The base float plus the offset record's signed byte; 0 without a record.
float offset_height(const FurnitureActor &actor) {
    if (!actor.offset_record) {
        return 0.0f;
    }
    return float(s32(actor.offset_record->offset)) + actor.base_18;
}
GUEST_EXPORT(0x00751d00, offset_height);
GUEST_FUZZ(0x00751d00, 200, [](guest::Fuzz &f) { f.arguments(fuzz_actor(f)); });

bool values_7a2_and_7a3_differ(const FurnitureActor &actor) {
    return actor.value_7a2 != actor.value_7a3;
}
GUEST_EXPORT(0x00751224, values_7a2_and_7a3_differ);
GUEST_FUZZ(0x00751224, 100, [](guest::Fuzz &f) {
    auto actor = fuzz_actor(f);
    actor->value_7a3 = f.below(2) != 0 ? actor->value_7a2 : actor->value_7a3;
    f.arguments(actor);
});

bool FurnitureActor::has_id(u16 id) const {
    return id_0c == id;
}

bool id_is_88709c(const FurnitureActor &actor) { return actor.has_id(id_88709c); }
GUEST_EXPORT(0x00751840, id_is_88709c);
bool id_is_8870a0(const FurnitureActor &actor) { return actor.has_id(id_8870a0); }
GUEST_EXPORT(0x00751990, id_is_8870a0);
bool id_is_88709a(const FurnitureActor &actor) { return actor.has_id(id_88709a); }
GUEST_EXPORT(0x007519b4, id_is_88709a);
bool id_is_88709e(const FurnitureActor &actor) { return actor.has_id(id_88709e); }
GUEST_EXPORT(0x007519d8, id_is_88709e);
bool id_is_8870ce(const FurnitureActor &actor) { return actor.has_id(id_8870ce); }
GUEST_EXPORT(0x007519fc, id_is_8870ce);

static gptr<FurnitureActor> fuzz_actor_with_id(guest::Fuzz &f, u16 id) {
    auto actor = fuzz_actor(f);
    if (f.below(2) != 0) {
        actor->id_0c = id;
    }
    return actor;
}
GUEST_FUZZ(0x00751840, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor_with_id(f, id_88709c)); });
GUEST_FUZZ(0x00751990, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor_with_id(f, id_8870a0)); });
GUEST_FUZZ(0x007519b4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor_with_id(f, id_88709a)); });
GUEST_FUZZ(0x007519d8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor_with_id(f, id_88709e)); });
GUEST_FUZZ(0x007519fc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_actor_with_id(f, id_8870ce)); });
