// The calendar date type, and the conversion of a date to the 12-byte time value (midnight of that day).
#include "core/date.hpp"
#include "save/villager.hpp"

namespace {

// The time value of a date and a time of day (three words passed on the stack, all zero for midnight).
inline constexpr guest::Function<0x0056ca68, void(guest::gptr<Value12> out, u32 year, u32 month, u32 day,
                                                  u32 time_of_day0, u32 time_of_day1, u32 time_of_day2)>
    make_time_value;

}  // namespace

// Stores the fields; only the low 16 bits of the year and the low bytes of month and day are kept.
void Date::set(u32 new_year, u32 new_month, u32 new_day) {
    year = u16(new_year);
    month = u8(new_month);
    day = u8(new_day);
}
GUEST_EXPORT(0x005caf28, Date::set);

Date &construct_date(Date &self, u32 year, u32 month, u32 day) {
    self.set(year, month, day);
    return self;
}
GUEST_EXPORT(0x0030a704, construct_date);

// The time value of midnight at the start of a date.
void make_value12_from_date(guest::gptr<Value12> out, guest::gptr<const Date> date) {
    make_time_value(out, date->year, date->month, date->day, 0, 0, 0);
}
GUEST_EXPORT(0x0030a34c, make_value12_from_date);

// A date zeroed, then set from the wide form.
Date &construct_date_from_wide(Date &self, const WideDate &date) {
    self.year = 0;
    self.month = 0;
    self.day = 0;
    narrow_date(self, date);
    return self;
}
GUEST_EXPORT(0x00312080, construct_date_from_wide);
