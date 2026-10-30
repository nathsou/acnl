// Amounts kept in encrypted integers: a random share of a counter, and a counter that collects its parts.
#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr float ROUNDING_UP = 0.99999f;  // added before the amount is truncated
constexpr u32 PARTS = 5;
constexpr u32 TOTAL_LIMIT = 99'999;  // the most the total can hold

inline constexpr guest::Function<0x00565c10, float(float scale)> random_up_to;

gptr<EncryptedInt> some_counter(guest::Fuzz &f) {
    auto value = f.object<EncryptedInt>();
    *value = EncryptedInt::make(f.pick<u32>({0, 1, 50, 99'999, f.below(1000)}), u16(f.number()), u8(f.below(EncryptedInt::ROTATIONS)));
    return value;
}

// A counter with five parts that are folded into it.
struct CounterWithParts {
    EncryptedInt total;
    EncryptedInt parts[PARTS];

    void fold_parts_into_total();
};

}  // namespace

// The counter multiplied by a random factor between `low` and `high` (the factor is low + random_up_to(high - low)),
// rounded up.
u32 counter_times_random_factor(const EncryptedInt &counter, float high, float low) {
    float count = float(counter.get());
    float factor = random_up_to(high - low) + low;
    return u32(count * factor + ROUNDING_UP);
}
GUEST_EXPORT(0x001b5dc4, counter_times_random_factor);
GUEST_FUZZ(0x001b5dc4, 200, [](guest::Fuzz &f) {
    f.arguments(some_counter(f), f.pick<float>({0.0f, 1.0f, 2.5f, f.real()}), f.pick<float>({0.0f, 0.5f, 1.0f, f.real()}));
});

// Adds the five parts to the total (up to TOTAL_LIMIT) and sets them to zero.
void CounterWithParts::fold_parts_into_total() {
    u32 sum = 0;
    for (const EncryptedInt &part : parts) {
        sum += part.get();
    }
    total.add(sum, TOTAL_LIMIT);
    for (EncryptedInt &part : parts) {
        part.set(0);
    }
}
GUEST_EXPORT(0x002bef5c, CounterWithParts::fold_parts_into_total);
GUEST_FUZZ(0x002bef5c, 100, [](guest::Fuzz &f) {
    auto counters = f.object<CounterWithParts>();
    counters->total = EncryptedInt::make(f.below(100'000), u16(f.number()), u8(f.below(EncryptedInt::ROTATIONS)));
    for (EncryptedInt &part : counters->parts) {
        part = EncryptedInt::make(f.below(30'000), u16(f.number()), u8(f.below(EncryptedInt::ROTATIONS)));
    }
    f.arguments(counters);
});
