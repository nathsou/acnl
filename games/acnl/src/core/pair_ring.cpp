// A ring of the three most recent byte pairs of an object (the last pair written is at `newest`).
#include "guest/guest.hpp"

struct PairRing {
    static constexpr u32 CAPACITY = 3;

    struct Pair {
        u8 first;
        u8 second;
    };

    u8 unknown_00[0x10];
    Pair pairs[CAPACITY];
    u8 count;   // pairs stored, up to CAPACITY
    u8 newest;  // index of the latest pair

    void push(u32 first, u32 second);
};
GUEST_OFFSET(PairRing, pairs, 0x10);
GUEST_OFFSET(PairRing, count, 0x16);
GUEST_OFFSET(PairRing, newest, 0x17);

// Adds a pair; once the ring is full the oldest is overwritten.
void PairRing::push(u32 first, u32 second) {
    if (count < CAPACITY) {
        newest = count;
        count++;
    } else {
        newest = u8(newest + 1);
        if (newest >= CAPACITY) {
            newest = 0;
        }
    }
    pairs[newest].first = u8(first);
    pairs[newest].second = u8(second);
}
GUEST_EXPORT(0x0030ac48, PairRing::push);
GUEST_FUZZ(0x0030ac48, 300, [](guest::Fuzz &f) {
    auto ring = f.object<PairRing>();
    ring->count = f.pick<u8>({0, 1, 2, 3, 3, 3, 4, 0xff});
    ring->newest = f.pick<u8>({0, 1, 2, 2, 0xfe, 0xff});
    f.arguments(ring, f.number(), f.number());
});
