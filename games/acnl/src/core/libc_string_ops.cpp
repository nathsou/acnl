// C library string helpers near 0x00100d2c: memory compare, bounded concatenation, character case mapping and a
// snprintf-style formatter.
#include "guest/guest.hpp"

namespace {

using guest::gptr;

inline constexpr guest::Function<0x002f7a10, gptr<gptr<u8>>()> table_location;
// the shared formatter: (format, output context, va_list, character sink)
inline constexpr guest::Function<0x002f7a2f, s32(gptr<const char> format, gptr<void> context, u32 arguments,
                                                 u32 sink)>
    format_with_sink_fn;
// writes the terminating character through the output context
inline constexpr guest::Function<0x002f7c91, u32(u32 character, gptr<void> context)> terminate_output_fn;

constexpr u32 BUFFER_SINK = 0x00101a95;  // the Thumb function at 0x00101a94 that stores characters

constexpr u8 CHAR_UPPER = 1u << 4;  // character table bits
constexpr u8 CHAR_LOWER = 1u << 3;
constexpr u32 CASE_OFFSET = 0x20;
constexpr u32 SHARP_S = 0xdf;  // has no single-character upper case form

struct OutputBuffer {
    gptr<char> current;
    gptr<char> end;
};
GUEST_SIZE(OutputBuffer, 8);

u8 flags_of_char(u32 c) {
    gptr<u8> table = *table_location();
    return *(table + c);
}

// memcmp: compares n bytes; the result is the first difference. Aligned inputs are compared a word at a time,
// and then the difference is taken over the low 8, 16, 24 bits and finally the top byte of the word.
s32 memory_compare_100d2c(gptr<const u8> a, gptr<const u8> b, u32 n) {
    if (((a.addr() | b.addr()) & 3) == 0) {
        while (n >= 4) {
            u32 x = *a.cast<const u32>();
            u32 y = *b.cast<const u32>();
            a += 4;
            b += 4;
            n -= 4;
            if (x == y) {
                continue;
            }
            for (u32 mask : {0xffu, 0xffffu, 0xffffffu}) {
                s32 difference = s32((x & mask) - (y & mask));
                if (difference != 0) {
                    return difference;
                }
            }
            return s32((x >> 24) - (y >> 24));
        }
    }
    while (n != 0) {
        s32 difference = s32(u32(*a) - u32(*b));
        a++;
        b++;
        n--;
        if (difference != 0) {
            return difference;
        }
    }
    return 0;
}

// strncat: appends at most n characters of source to dest, adding a terminator when n ran out. Returns dest.
gptr<char> string_append_bounded_100da0(gptr<char> dest, gptr<const char> source, u32 n) {
    gptr<char> end = dest;
    while (*end != 0) {
        end++;
    }
    while (n-- != 0) {
        char c = *source;
        source++;
        *end = c;
        end++;
        if (c == 0) {
            return dest;
        }
    }
    *end = 0;
    return dest;
}

// Lower case of a character, by the per-thread character table.
u32 character_to_lower_100dc4(u32 c) {
    if (flags_of_char(c) & CHAR_UPPER) {
        return c + CASE_OFFSET;
    }
    return c;
}

// Upper case of a character, by the per-thread character table.
u32 character_to_upper_100dde(u32 c) {
    if ((flags_of_char(c) & CHAR_LOWER) && c != SHARP_S) {
        return c - CASE_OFFSET;
    }
    return c;
}

// snprintf(buffer, size, format, ...): the first variadic word arrives in r3 and the others on the stack; the
// original lays r3 out right below them to make a va_list, so this does too.
s32 format_to_buffer_100dfc(gptr<char> buffer, u32 size, gptr<const char> format, u32 first_argument) {
    CPU *cpu = guest::cpu();
    u32 saved_sp = cpu->r[13];
    u32 arguments = saved_sp - 4;
    *gptr<u32>(arguments) = first_argument;
    cpu->r[13] = arguments;

    s32 result;
    {
        guest::StackObject<OutputBuffer> out;
        out->current = buffer;
        out->end = size != 0 ? buffer + (size - 1) : buffer;
        result = format_with_sink_fn(format, out.ptr().cast<void>(), arguments, BUFFER_SINK);
        if (size != 0) {
            terminate_output_fn(0, out.ptr().cast<void>());
        }
    }
    cpu->r[13] = saved_sp;
    return result;
}

gptr<u8> fuzz_text(guest::Fuzz &f, u32 max_length, u32 capacity) {
    gptr<u8> text = f.allocate(capacity).cast<u8>();
    f.bytes(text, capacity);
    u32 length = f.below(max_length + 1);
    for (u32 i = 0; i < length; i++) {
        text[i] = u8(f.below(255) + 1);
    }
    text[length] = 0;
    return text;
}

}  // namespace

GUEST_EXPORT(0x00100d2d, memory_compare_100d2c);
GUEST_EXPORT(0x00100da1, string_append_bounded_100da0);
GUEST_EXPORT(0x00100dc5, character_to_lower_100dc4);
GUEST_EXPORT(0x00100ddf, character_to_upper_100dde);
GUEST_EXPORT(0x00100dfd, format_to_buffer_100dfc);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00100d2d, 400, [](guest::Fuzz &f) {
    gptr<u8> a = f.allocate(40).cast<u8>();
    gptr<u8> b = f.allocate(40).cast<u8>();
    f.bytes(a, 40);
    for (u32 i = 0; i < 40; i++) {
        b[i] = a[i];
    }
    if (f.below(4) != 0) {
        b[f.below(28)] = u8(f.number());
    }
    u32 offset = f.below(3) == 0 ? f.below(2) : 0;
    f.arguments(a + offset, b + offset, f.pick<u32>({0, 1, 3, 4, 7, 8, 24, f.below(25)}));
});

GUEST_FUZZ(0x00100da1, 400, [](guest::Fuzz &f) {
    gptr<u8> dest = fuzz_text(f, 15, 64);
    gptr<u8> source = fuzz_text(f, 16, 24);
    f.arguments(dest.cast<char>(), source.cast<const char>(), f.pick<u32>({0, 1, 5, 17, 40, f.below(40)}));
});

GUEST_FUZZ(0x00100dc5, 300, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(256), f.below(128), 0xdf})); });
GUEST_FUZZ(0x00100ddf, 300, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({f.below(256), f.below(128), 0xdf})); });

GUEST_FUZZ(0x00100dfd, 300, [](guest::Fuzz &f) {
    gptr<u8> buffer = f.allocate(64).cast<u8>();
    f.bytes(buffer, 64);
    auto format = "ab%dc"_g;
    switch (f.below(3)) {
    case 0: format = "hello"_g; break;
    case 1: format = "%d"_g; break;
    default: break;
    }
    f.arguments(buffer.cast<char>(), f.pick<u32>({0, 1, 2, 8, 40}), format, f.below(100000));
});
