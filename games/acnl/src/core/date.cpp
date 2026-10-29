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
GUEST_FUZZ(0x005caf28, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<Date>(), f.pick<u32>({0, 2199, 0x10000, 0xffffffffu, f.number()}), f.pick<u32>({0, 1, 12, 13, 0x1ff, f.number()}),
                f.pick<u32>({0, 1, 31, 32, 0x1ff, f.number()}));
});

Date &construct_date(Date &self, u32 year, u32 month, u32 day) {
    self.set(year, month, day);
    return self;
}
GUEST_EXPORT(0x0030a704, construct_date);
GUEST_FUZZ(0x0030a704, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<Date>(), f.pick<u32>({0, 2199, 0x10000, f.number()}), f.pick<u32>({0, 1, 12, 13, f.number()}),
                f.pick<u32>({0, 1, 31, 32, f.number()}));
});

// The time value of midnight at the start of a date.
void make_value12_from_date(guest::gptr<Value12> out, guest::gptr<const Date> date) {
    make_time_value(out, date->year, date->month, date->day, 0, 0, 0);
}
GUEST_EXPORT(0x0030a34c, make_value12_from_date);
GUEST_FUZZ(0x0030a34c, 200, [](guest::Fuzz &f) {
    auto date = f.object<Date>();
    date->year = f.pick<u16>({2000, 2013, 2099, 2199});
    date->month = f.pick<u8>({1, 2, 6, 12});
    date->day = f.pick<u8>({1, 15, 28, 31});
    f.arguments(f.object<Value12>(), date);
});

// A date zeroed, then set from the wide form.
Date &construct_date_from_wide(Date &self, const WideDate &date) {
    self.year = 0;
    self.month = 0;
    self.day = 0;
    narrow_date(self, date);
    return self;
}
GUEST_EXPORT(0x00312080, construct_date_from_wide);
GUEST_FUZZ(0x00312080, 100, [](guest::Fuzz &f) { f.arguments(f.object<Date>(), f.object<WideDate>()); });
