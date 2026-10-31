// Operations on WordQuad built from WordPairs.
#include "core/word_pair.hpp"

// Builds a quad from two pairs (a second copy of the constructor at 0x0052f200). Copies in order, so overlapping
// sources behave as in the game.
WordQuad &construct_word_quad_from_pairs_copy(WordQuad &self, const WordPair &low, const WordPair &high) {
    self.words[0] = low.first;
    self.words[1] = low.second;
    self.words[2] = high.first;
    self.words[3] = high.second;
    return self;
}
GUEST_EXPORT(0x0052f188, construct_word_quad_from_pairs_copy);

// Adds a pair to both halves of the quad (words 0-1 and 2-3), wrapping; the pair is re-read for each addition.
WordQuad &add_pair_to_both_halves(WordQuad &self, const WordPair &pair) {
    self.words[0] = self.words[0] + pair.first;
    self.words[1] = self.words[1] + pair.second;
    self.words[2] = pair.first + self.words[2];
    self.words[3] = pair.second + self.words[3];
    return self;
}
GUEST_EXPORT(0x0052f2a8, add_pair_to_both_halves);
