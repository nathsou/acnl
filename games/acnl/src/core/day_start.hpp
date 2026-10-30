// The start of the current game day and what is derived from it (see day_start.cpp).
#pragma once

#include "core/time_stamp.hpp"

// The start of the game day the clock reports: the cached one, or the one worked out from the reference time when the
// clock state asks for that.
void day_start_by_clock_mode(TimeStamp &out);
// Whether that day start's date differs from the date of the day the reference time falls in.
bool day_has_changed();
// A word of the row of the table for the period of the year the day start falls in.
u32 period_table_value(u32 index);
// The byte of the object's table of seven (one per weekday) for the weekday of the game day the time (its three words) falls in.
u32 value_for_weekday(guest::gptr<u8> table_owner, u32 time_word_0, u32 time_word_1, u32 time_word_2);
