// A calendar date: year, month and day (4 bytes).
#pragma once

#include "guest/guest.hpp"

struct Date {
    u16 year;
    u8 month;
    u8 day;

    void set(u32 year, u32 month, u32 day);
};
GUEST_SIZE(Date, 4);

// The constructor: a date with the given fields (the game builds 2199-12-31 as its latest date).
Date &construct_date(Date &self, u32 year, u32 month, u32 day);
