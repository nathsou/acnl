// The C library linked into the game (newlib), called through the game's own copy.
#pragma once

#include "guest/guest.hpp"

namespace libc {

struct FILE;

inline constexpr guest::Function<0x0012dbb0, gptr<void>(gptr<void> dst, gptr<const void> src, u32 size)> memcpy;
inline constexpr guest::Function<0x0012df2c, gptr<void>(gptr<void> dst, s32 byte, u32 size)> memset;
inline constexpr guest::Function<0x0012df14, s32(gptr<const char> text)> puts;

inline constexpr guest::Function<0x0012de14, gptr<FILE>(gptr<const char> path, gptr<const char> mode)> fopen;
inline constexpr guest::Function<0x0012c38c, u32(gptr<void> buffer, u32 size, u32 count, gptr<FILE> file)> fread;
inline constexpr guest::Function<0x0012b73c, u32(gptr<const void> buffer, u32 size, u32 count, gptr<FILE> file)> fwrite;
inline constexpr guest::Function<0x0012e590, s32(gptr<FILE> file, s32 offset, s32 whence)> fseek;
inline constexpr guest::Function<0x0012c6e0, s32(gptr<FILE> file)> fclose;
// (variadic: only the one-argument use the game makes)
inline constexpr guest::Function<0x0012c6f8, s32(gptr<FILE> file, gptr<const char> format, gptr<const char> arg)> fprintf;

constexpr s32 SEEK_FROM_START = 0;  // SEEK_SET (the host headers define that name as a macro)

// newlib's per-thread state; stdin, stdout and stderr live in it
struct Reent {
    s32 errno_;
    gptr<FILE> stdin_, stdout_, stderr_;
};
inline constexpr guest::Function<0x0013889c, gptr<Reent>()> __getreent;
inline gptr<FILE> stderr_() { return __getreent()->stderr_; }

}  // namespace libc
