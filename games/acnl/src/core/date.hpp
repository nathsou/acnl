// A calendar date: year, month and day (4 bytes).
#pragma once

#include "guest/guest.hpp"

struct Date {
    u16 year;
    u8 month;
    u8 day;

    void set(u32 year, u32 month, u32 day);
    bool is_today(bool game_day) const;  // see game_clock.cpp
};
GUEST_SIZE(Date, 4);

// A date as the game also keeps it, with two bytes between the year and the month.
struct WideDate {
    u16 year;
    u8 unknown_02[2];
    u8 month;
    u8 day;
};
GUEST_SIZE(WideDate, 6);

// Copies the year, month and day of the wide form.
void narrow_date(Date &out, const WideDate &date);

// The constructor: a date with the given fields (the game builds 2199-12-31 as its latest date).
Date &construct_date(Date &self, u32 year, u32 month, u32 day);
