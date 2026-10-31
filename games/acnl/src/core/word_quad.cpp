// Constructors of WordQuad, the four-word value type: from two pairs, by copy, and zeroed.
#include "core/word_pair.hpp"

// Builds a quad from two pairs (first pair in words 0-1, second in 2-3). Copies word by word, in order, so
// overlapping sources behave as in the game.
WordQuad &construct_word_quad_from_pairs(WordQuad &self, const WordPair &low, const WordPair &high) {
    self.words[0] = low.first;
    self.words[1] = low.second;
    self.words[2] = high.first;
    self.words[3] = high.second;
    return self;
}
GUEST_EXPORT(0x0052f200, construct_word_quad_from_pairs);

// The copy constructor (word by word, in order).
WordQuad &copy_word_quad(WordQuad &self, const WordQuad &other) {
    for (u32 i = 0; i < 4; i++) {
        self.words[i] = other.words[i];
    }
    return self;
}
GUEST_EXPORT(0x0052f224, copy_word_quad);

// Sets all four words to zero.
WordQuad &construct_word_quad_zero(WordQuad &self) {
    for (u32 i = 0; i < 4; i++) {
        self.words[i] = 0;
    }
    return self;
}
GUEST_EXPORT(0x0052f248, construct_word_quad_zero);

// A second, identical copy constructor (another instantiation in the game).
WordQuad &copy_word_quad_2(WordQuad &self, const WordQuad &other) {
    for (u32 i = 0; i < 4; i++) {
        self.words[i] = other.words[i];
    }
    return self;
}
GUEST_EXPORT(0x0052f284, copy_word_quad_2);
