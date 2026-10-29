// Escape minigame action chains (escape::ActionChainBase and subclasses): constructors and small helpers.
#include <cstddef>

#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

float literal_float(u32 address) {
    return *gptr<float>(address);
}

// An object with a vtable.
struct EscapeVirtualObject {
    gptr<u32> vtable;
};

// An object holding a position at 0xc.
struct EscapePositionSource {
    u8 unknown_00[0xc];
    Float3 position;
};
GUEST_OFFSET(EscapePositionSource, position, 0xc);

// An object that places the part at 0x60 relative to the position of the object at 0x4c.
struct EscapePartMover {
    static constexpr u32 SET_POSITION_SLOT = 30;  // vtable offset 0x78
    static constexpr u32 SECOND_SLOT = 31;        // vtable offset 0x7c
    static constexpr u32 FLAG_MODE = 1;

    gptr<u32> vtable;
    u8 unknown_04[0x48];
    gptr<EscapePositionSource> source;
    u8 unknown_50[0x10];
    gptr<EscapeVirtualObject> part;
    u8 unknown_64[0x31];
    u8 mode;  // 0x95
};
GUEST_OFFSET(EscapePartMover, source, 0x4c);
GUEST_OFFSET(EscapePartMover, part, 0x60);
GUEST_OFFSET(EscapePartMover, mode, 0x95);

constexpr u32 OFFSET_Y_DEFAULT_ADDRESS = 0x402fc178;
constexpr u32 OFFSET_Y_MODE_1_ADDRESS = 0x402fc17c;
constexpr u32 OFFSET_XZ_ADDRESS = 0x402fc174;

inline constexpr guest::Function<0x402ff854, u32(gptr<void> object, u32 argument)> model_virtual_31;
inline constexpr guest::Function<0x40290c20, gptr<void>(gptr<void> object)> construct_embedded_object;
inline constexpr guest::Function<0x40290b38, void(gptr<void> target, gptr<void> vector, u32 text, u32 flag)>
    apply_vector_with_text;
inline constexpr guest::Function<0x40290b88, void(gptr<void> vector, gptr<void> target)> use_vector;

}  // namespace

// Moves the part to the source's position plus a fixed offset, then calls the part's second virtual and the model
// virtual 31.
u32 move_part_to_offset_position(EscapePartMover &self) {
    float offset_x = literal_float(OFFSET_XZ_ADDRESS);
    float offset_z = offset_x;
    float offset_y = literal_float(self.mode == EscapePartMover::FLAG_MODE ? OFFSET_Y_MODE_1_ADDRESS
                                                                           : OFFSET_Y_DEFAULT_ADDRESS);
    gptr<EscapeVirtualObject> part = self.part;
    const Float3 &base = self.source->position;
    guest::StackObject<Float3> target;
    target->v[0] = base.v[0] + offset_x;
    target->v[2] = base.v[2] + offset_z;
    target->v[1] = base.v[1] + offset_y;
    guest::call_address<void>(part->vtable[EscapePartMover::SET_POSITION_SLOT], part, target.ptr());
    gptr<EscapeVirtualObject> current = self.part;
    guest::call_address<void>(current->vtable[EscapePartMover::SECOND_SLOT], current, 0u);
    return model_virtual_31(guest::addr_of(self), 1);
}
GUEST_EXPORT(0x402fc09c, move_part_to_offset_position);

// The base of all action chains.
struct ActionChainBase {
    static constexpr u32 VTABLE = 0x4036f4d8;
    static constexpr u32 FLOAT_ADDRESS = 0x402fc208;

    u32 vtable;
    u8 flag_04;
    u8 unknown_05[3];
    u32 words_08[4];
    u32 word_18;
    u32 word_1c;
    float floats_20[4];
    u8 byte_30;
    u8 unknown_31[3];
};
GUEST_OFFSET(ActionChainBase, word_18, 0x18);
GUEST_OFFSET(ActionChainBase, floats_20, 0x20);
GUEST_OFFSET(ActionChainBase, byte_30, 0x30);
GUEST_SIZE(ActionChainBase, 0x34);

ActionChainBase &construct_action_chain_base(ActionChainBase &self) {
    float value = literal_float(ActionChainBase::FLOAT_ADDRESS);
    self.vtable = ActionChainBase::VTABLE;
    self.flag_04 = 0;
    self.word_18 = 0;
    self.word_1c = 0;
    for (float &f : self.floats_20) {
        f = value;
    }
    self.byte_30 = 0;
    for (u32 &w : self.words_08) {
        w = 0;
    }
    return self;
}
GUEST_EXPORT(0x402fc1c4, construct_action_chain_base);

struct ActionChainWait {
    static constexpr u32 VTABLE = 0x4036f544;
    static constexpr u32 FLOAT_ADDRESS = 0x402fc1c0;

    ActionChainBase base;
    float value_34;
    float value_38;
};
GUEST_OFFSET(ActionChainWait, value_34, 0x34);
GUEST_SIZE(ActionChainWait, 0x3c);

ActionChainWait &construct_action_chain_wait(ActionChainWait &self) {
    construct_action_chain_base(self.base);
    float value = literal_float(ActionChainWait::FLOAT_ADDRESS);
    self.base.vtable = ActionChainWait::VTABLE;
    self.value_34 = value;
    self.value_38 = value;
    for (float &f : self.base.floats_20) {
        f = value;
    }
    self.base.word_1c = 0;
    self.base.byte_30 = 0;
    return self;
}
GUEST_EXPORT(0x402fc180, construct_action_chain_wait);

struct ActionChainVActEx {
    static constexpr u32 VTABLE = 0x4036fa98;
    static constexpr u32 FLOAT_DC_ADDRESS = 0x402fc2d8;
    static constexpr u32 FLOAT_E4_ADDRESS = 0x402fc2dc;
    static constexpr u32 FLOAT_108_ADDRESS = 0x402fc2e0;
    static constexpr u8 BYTE_FC_INITIAL = 0xff;

    ActionChainBase base;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u8 unknown_48[0x4c];
    u8 byte_94;
    u8 unknown_95[3];
    u32 word_98;
    u8 embedded_9c[0xb4 - 0x9c];  // an object built by f_40290c20
    u8 byte_b4;
    u8 unknown_b5[0xc4 - 0xb5];
    u32 words_c4[5];
    u8 unknown_d8[4];
    float float_dc;
    u8 byte_e0;
    u8 unknown_e1[3];
    float float_e4;
    u8 bytes_e8[5];
    u8 unknown_ed[3];
    u32 word_f0;
    u8 byte_f4;
    u8 unknown_f5[7];
    u8 byte_fc;
    u8 unknown_fd[7];
    u32 word_104;
    float float_108;
    u8 byte_10c;
    u8 unknown_10d[3];
};
GUEST_OFFSET(ActionChainVActEx, byte_94, 0x94);
GUEST_OFFSET(ActionChainVActEx, embedded_9c, 0x9c);
GUEST_OFFSET(ActionChainVActEx, byte_b4, 0xb4);
GUEST_OFFSET(ActionChainVActEx, words_c4, 0xc4);
GUEST_OFFSET(ActionChainVActEx, float_dc, 0xdc);
GUEST_OFFSET(ActionChainVActEx, float_e4, 0xe4);
GUEST_OFFSET(ActionChainVActEx, bytes_e8, 0xe8);
GUEST_OFFSET(ActionChainVActEx, word_f0, 0xf0);
GUEST_OFFSET(ActionChainVActEx, byte_fc, 0xfc);
GUEST_OFFSET(ActionChainVActEx, word_104, 0x104);
GUEST_OFFSET(ActionChainVActEx, float_108, 0x108);
GUEST_SIZE(ActionChainVActEx, 0x110);

ActionChainVActEx &construct_action_chain_vactex(ActionChainVActEx &self) {
    construct_action_chain_base(self.base);
    self.base.vtable = ActionChainVActEx::VTABLE;
    self.word_34 = 0;
    self.word_38 = 0;
    self.word_3c = 0;
    self.byte_94 = 0;
    self.word_98 = 0;
    gptr<void> embedded = construct_embedded_object(guest::addr_of(self.embedded_9c[0]));
    // the constructor returns its object: the rest is addressed from it
    ActionChainVActEx &s = *gptr<ActionChainVActEx>(embedded.addr() - offsetof(ActionChainVActEx, embedded_9c));

    float value_dc = literal_float(ActionChainVActEx::FLOAT_DC_ADDRESS);
    float value_e4 = literal_float(ActionChainVActEx::FLOAT_E4_ADDRESS);
    float value_108 = literal_float(ActionChainVActEx::FLOAT_108_ADDRESS);
    s.byte_b4 = 0;
    for (u32 &w : s.words_c4) {
        w = 0;
    }
    s.float_dc = value_dc;
    s.byte_e0 = 0;
    s.float_e4 = value_e4;
    for (u8 &b : s.bytes_e8) {
        b = 0;
    }
    s.word_f0 = 0;
    s.byte_f4 = 0;
    s.byte_fc = ActionChainVActEx::BYTE_FC_INITIAL;
    s.word_104 = 0;
    s.float_108 = value_108;
    s.byte_10c = 0;
    s.base.word_1c = 0;
    for (float &f : s.base.floats_20) {
        f = value_dc;
    }
    s.base.byte_30 = 0;
    s.word_34 = 0;
    s.word_3c = 0;
    s.word_40 = 0;
    s.word_44 = 0;
    s.byte_94 = 0;
    return s;
}
GUEST_EXPORT(0x402fc210, construct_action_chain_vactex);

// An object linked from EscapeVectorTarget at 0x1ec.
struct EscapeVectorLink {
    u8 unknown_00[0xc];
    u32 value_0c;
};
GUEST_OFFSET(EscapeVectorLink, value_0c, 0xc);

struct EscapeVectorTarget {
    static constexpr u32 SET_POSITION_SLOT = 30;  // vtable offset 0x78
    static constexpr u32 TEXT_ADDRESS = 0x00975bee;
    static constexpr float LIFT_ADDRESS = 0;

    gptr<u32> vtable;
    u8 unknown_04[0x1dc];
    u8 part_1e0[0xc];
    gptr<EscapeVectorLink> link_1ec;  // may be null
    u32 value_1f0;
    u8 unknown_1f4[4];
    Float3 position;                  // 0x1f8
    u32 word_204;
    u8 unknown_208[4];
    u32 word_20c;
    u32 word_210;
};
GUEST_OFFSET(EscapeVectorTarget, part_1e0, 0x1e0);
GUEST_OFFSET(EscapeVectorTarget, link_1ec, 0x1ec);
GUEST_OFFSET(EscapeVectorTarget, value_1f0, 0x1f0);
GUEST_OFFSET(EscapeVectorTarget, position, 0x1f8);
GUEST_OFFSET(EscapeVectorTarget, word_20c, 0x20c);
GUEST_OFFSET(EscapeVectorTarget, word_210, 0x210);

constexpr u32 VECTOR_LIFT_ADDRESS = 0x402fcbbc;

// Stores the point lifted by a constant in y as the target's position, passes it to the virtual function and,
// while the link matches, to the linked part; then hands it to two more helpers.
void set_lifted_position(EscapeVectorTarget &self, const Float3 &point) {
    guest::StackObject<Float3> lifted;
    lifted->v[0] = point.v[0];
    lifted->v[1] = point.v[1] + literal_float(VECTOR_LIFT_ADDRESS);
    lifted->v[2] = point.v[2];
    self.position.v[0] = lifted->v[0];
    self.position.v[1] = lifted->v[1];
    self.position.v[2] = lifted->v[2];
    guest::call_address<void>(self.vtable[EscapeVectorTarget::SET_POSITION_SLOT], guest::addr_of(self), lifted.ptr());
    if (self.link_1ec && self.value_1f0 == self.link_1ec->value_0c) {
        apply_vector_with_text(guest::addr_of(self.part_1e0[0]), lifted.ptr(), EscapeVectorTarget::TEXT_ADDRESS, 1);
    }
    use_vector(lifted.ptr(), guest::addr_of(self.word_20c));
    use_vector(lifted.ptr(), guest::addr_of(self.word_210));
}
GUEST_EXPORT(0x402fcb10, set_lifted_position);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

gptr<u32> harmless_vtable(guest::Fuzz &f) {
    auto vtable = f.allocate(0x88).cast<u32>();
    for (u32 i = 0; i < 0x88 / 4; i++) {
        vtable[i] = 0x402fcbc4;
    }
    return vtable;
}

}  // namespace

GUEST_FUZZ(0x402fc09c, 200, [](guest::Fuzz &f) {
    auto mover = f.object<EscapePartMover>();
    mover->vtable = harmless_vtable(f);
    mover->source = f.object<EscapePositionSource>();
    auto part = f.object<EscapeVirtualObject>();
    part->vtable = harmless_vtable(f);
    mover->part = part;
    mover->mode = f.pick<u32>({0, 1, 2, f.below(256)});
    f.arguments(mover);
});
GUEST_FUZZ(0x402fc1c4, 200, [](guest::Fuzz &f) { f.arguments(f.object<ActionChainBase>()); });
GUEST_FUZZ(0x402fc180, 200, [](guest::Fuzz &f) { f.arguments(f.object<ActionChainWait>()); });
GUEST_FUZZ(0x402fc210, 200, [](guest::Fuzz &f) { f.arguments(f.object<ActionChainVActEx>()); });
GUEST_FUZZ(0x402fcb10, 200, [](guest::Fuzz &f) {
    auto target = f.object<EscapeVectorTarget>();
    target->vtable = harmless_vtable(f);
    target->link_1ec = nullptr;  // the path through f_40290b38 depends on game state
    auto point = f.object<Float3>();
    for (float &v : point->v) {
        v = f.real();
    }
    f.arguments(target, point);
});
