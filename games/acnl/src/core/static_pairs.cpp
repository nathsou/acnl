// Function-local statics that other code asks for by address.
#include "core/word_pair.hpp"

namespace {

inline constexpr guest::Function<0x002fe7dd, bool(guest::gptr<u32> flag)> claim_flag;

constexpr u32 INITIALISED = 1;  // bit 0 of a static's guard word
inline guest::global<u32, 0x00952b90> zero_pair_guard;
inline guest::global<WordPair, 0x00952b94> zero_pair;

}  // namespace

// The address of a pair of zeros, set the first time it is asked for.
guest::gptr<WordPair> zero_word_pair() {
    if ((*zero_pair_guard & INITIALISED) == 0 && claim_flag(zero_pair_guard.ptr())) {
        zero_pair->first = 0;
        zero_pair->second = 0;
    }
    return zero_pair.ptr();
}
GUEST_EXPORT(0x0052f074, zero_word_pair);
