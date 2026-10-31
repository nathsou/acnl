#include "core/word_pair.hpp"

// Copy constructor.
static WordPair &copy_construct_word_pair(WordPair &self, const WordPair &other) {
    self.first = other.first;
    self.second = other.second;
    return self;
}
GUEST_EXPORT(0x0052f0c0, copy_construct_word_pair);

// Constructor: both words zero.
static WordPair &construct_word_pair(WordPair &self) {
    self.first = 0;
    self.second = 0;
    return self;
}
GUEST_EXPORT(0x0052f0dc, construct_word_pair);

// Assignment (the same code as the copy constructor, a separate function in the binary).
static WordPair &assign_word_pair(WordPair &self, const WordPair &other) {
    self.first = other.first;
    self.second = other.second;
    return self;
}
GUEST_EXPORT(0x0052f0f0, assign_word_pair);

// Adds another pair word by word, wrapping.
static WordPair &add_to_word_pair(WordPair &self, const WordPair &other) {
    self.first += other.first;
    self.second += other.second;
    return self;
}
GUEST_EXPORT(0x0052f104, add_to_word_pair);

// Constructor: all four words zero.
static WordQuad &construct_word_quad(WordQuad &self) {
    for (u32 &word : self.words) {
        word = 0;
    }
    return self;
}
GUEST_EXPORT(0x0052f128, construct_word_quad);
