// ssys::co::FaderBase: a two-state switch with a start and a stop request (the states are 0 stopped, 1 running,
// 2 stopping, 3 finishing; only the steps the rewritten code takes are known).
#include "guest/guest.hpp"

struct FaderBase {
    static constexpr u32 VTABLE = 0x00906030;
    static constexpr u32 DEFAULT_WORD_08 = 0x14;
    static constexpr u8 STATE_STOPPED = 0;
    static constexpr u8 STATE_RUNNING = 1;
    static constexpr u8 STATE_STOPPING = 2;
    static constexpr u8 STATE_FINISHING = 3;
    static constexpr u8 INITIAL_BYTE_06 = 2;

    u32 vtable;
    u8 byte_04;
    u8 state;
    u8 byte_06;
    u8 unknown_07;
    u32 word_08;
    u32 counter;

    bool virtual_4();  // asks a stopped fader to start stopping...
    bool virtual_5();  // ...and a running one to start finishing; true when it did
    void virtual_2(u32 requested_state);  // sets the state to 0 or 1; other requests change nothing
};
GUEST_OFFSET(FaderBase, byte_04, 4);
GUEST_OFFSET(FaderBase, state, 5);
GUEST_OFFSET(FaderBase, byte_06, 6);
GUEST_OFFSET(FaderBase, word_08, 8);
GUEST_OFFSET(FaderBase, counter, 0xc);

bool FaderBase::virtual_4() {
    if (state != STATE_STOPPED) {
        return false;
    }
    state = STATE_STOPPING;
    counter = 0;
    return true;
}
GUEST_EXPORT(0x00566464, FaderBase::virtual_4);

bool FaderBase::virtual_5() {
    if (state != STATE_RUNNING) {
        return false;
    }
    state = STATE_FINISHING;
    counter = 0;
    return true;
}
GUEST_EXPORT(0x00566498, FaderBase::virtual_5);

void FaderBase::virtual_2(u32 requested_state) {
    if (requested_state == STATE_STOPPED || requested_state == STATE_RUNNING) {
        state = u8(requested_state);
    }
}
GUEST_EXPORT(0x005664c8, FaderBase::virtual_2);

// The constructor: `initial_state` 0 or 1 sets the state, any other value leaves the byte as it was.
FaderBase &construct_fader_base(FaderBase &self, u8 byte_04, u32 initial_state) {
    self.vtable = FaderBase::VTABLE;
    self.byte_04 = byte_04;
    self.word_08 = FaderBase::DEFAULT_WORD_08;
    self.counter = 0;
    self.byte_06 = FaderBase::INITIAL_BYTE_06;
    if (initial_state == FaderBase::STATE_STOPPED) {
        self.state = FaderBase::STATE_STOPPED;
    } else if (initial_state == FaderBase::STATE_RUNNING) {
        self.state = FaderBase::STATE_RUNNING;
    }
    return self;
}
GUEST_EXPORT(0x005664d8, construct_fader_base);

GUEST_FUZZ(0x00566464, 200, [](guest::Fuzz &f) {
    auto fader = f.object<FaderBase>();
    fader->state = f.pick<u8>({0, 1, 2, 3, u8(f.number())});
    f.arguments(fader);
});
GUEST_FUZZ(0x00566498, 200, [](guest::Fuzz &f) {
    auto fader = f.object<FaderBase>();
    fader->state = f.pick<u8>({0, 1, 2, 3, u8(f.number())});
    f.arguments(fader);
});
GUEST_FUZZ(0x005664c8, 200, [](guest::Fuzz &f) { f.arguments(f.object<FaderBase>(), f.pick<u32>({0, 1, 2, 0xffffffffu, f.number()})); });
GUEST_FUZZ(0x005664d8, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<FaderBase>(), f.number() & 0xff, f.pick<u32>({0, 1, 2, 0xffffffffu, f.number()}));
});
