// Copies of the item at an index from the item tables of the player's furniture and clothing screens: each table
// is a row of items with a flag byte for each that swaps the item for a placeholder (the replacement items 0x2083 and
// the like), and the empty item stands in for an index past the end.
#include "item/item.hpp"

namespace {

constexpr u16 PLACEHOLDER_2083 = 0x2083;
constexpr u16 PLACEHOLDER_2084 = 0x2084;
constexpr u16 PLACEHOLDER_2085 = 0x2085;
constexpr u16 PLACEHOLDER_2086 = 0x2086;
constexpr u16 PLACEHOLDER_2087 = 0x2087;
constexpr u16 PLACEHOLDER_341E = 0x341e;
constexpr u32 COUNT_4 = 4;
constexpr u32 COUNT_6 = 6;
constexpr u32 COUNT_7 = 7;
constexpr u32 COUNT_8 = 8;
constexpr u32 COUNT_12 = 0x12;
constexpr u32 COUNT_11 = 0xb;
constexpr u32 COUNT_13 = 0xd;
constexpr u32 COUNT_18 = 0x18;
constexpr u8 CATEGORY_7C = 0x7c;
constexpr u32 FOURTH = 3;
constexpr u32 GLOBAL_BYTE_SKIP = 2;

inline constexpr guest::Function<0x00303acc, bool(const Item &item)> item_is_kind_11_with_class_4_or_5;
inline constexpr guest::Function<0x006b9df8, void(Item &item)> clear_kind_11_flags_top;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x002fc900, u32()> mode_above_1;

struct Table18 {
    u8 unknown_00[2];
    Item items[COUNT_12];
    u8 flags[COUNT_12];
};
GUEST_OFFSET(Table18, items, 2);
GUEST_OFFSET(Table18, flags, 0x4a);

struct Table11 {
    u8 unknown_00[0x12];
    Item items[COUNT_11];
    u8 flags[COUNT_11];
};
GUEST_OFFSET(Table11, items, 0x12);
GUEST_OFFSET(Table11, flags, 0x3e);

struct Table8 {
    Item items[COUNT_8];
    u8 flags[COUNT_8];
};
GUEST_OFFSET(Table8, flags, 0x20);

struct Table6 {
    u8 unknown_00[0x12];
    Item items[COUNT_6];
    u8 flags[COUNT_6];
};
GUEST_OFFSET(Table6, items, 0x12);
GUEST_OFFSET(Table6, flags, 0x2a);

struct Table24 {
    u8 unknown_00[0x20];
    Item items[COUNT_18];
    u8 flags[COUNT_18];
};
GUEST_OFFSET(Table24, items, 0x20);
GUEST_OFFSET(Table24, flags, 0x80);

struct Table13 {
    Item items[COUNT_13];
    u8 unknown_34[8];
    u8 flags[COUNT_13];
};
GUEST_OFFSET(Table13, flags, 0x3c);

struct Table7 {
    Item items[COUNT_7];
    u8 flags[COUNT_7];
};
GUEST_OFFSET(Table7, flags, 0x1c);

struct TwoRows4 {
    Item first[COUNT_4];
    Item second[COUNT_4];
    u8 flags[COUNT_4];
};
GUEST_OFFSET(TwoRows4, second, 0x10);
GUEST_OFFSET(TwoRows4, flags, 0x20);

struct Row4 {
    Item items[COUNT_4];
};

struct Row4After16 {
    u8 unknown_00[0x10];
    Item items[COUNT_4];
};
GUEST_OFFSET(Row4After16, items, 0x10);

struct Row8After20 {
    u8 unknown_00[0x14];
    Item items[COUNT_8];
};
GUEST_OFFSET(Row8After20, items, 0x14);

template <typename Table>
void fill_flags(guest::Fuzz &f, gptr<Table> table) {
    for (u8 &flag : table->flags) {
        flag = u8(f.below(2));
    }
    for (Item &item : table->items) {
        item.id = f.below(4) != 0 ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
    }
}

}  // namespace

// The items of the table are copied; flagged ones become the placeholder; and kind-11 items of class 4 or 5 get another.
void copy_table18_item(Item &out, Table18 &table, u32 index) {
    if (index >= COUNT_12) {
        copy_item(out, *empty_item);
        return;
    }
    if (table.flags[index] == 0) {
        copy_item(out, table.items[index]);
    } else if (item_is_kind_11_with_class_4_or_5(table.items[index])) {
        construct_item(out, PLACEHOLDER_2087);
    } else {
        construct_item(out, PLACEHOLDER_2084);
    }
}
GUEST_EXPORT(0x00710a34, copy_table18_item);
GUEST_FUZZ(0x00710a34, 200, [](guest::Fuzz &f) {
    auto table = f.object<Table18>();
    fill_flags(f, table);
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 5, 17, 18, f.number()}));
});

void copy_table6_item(Item &out, Table6 &table, u32 index) {
    if (index >= COUNT_6) {
        copy_item(out, *empty_item);
    } else if (table.flags[index] != 0) {
        construct_item(out, PLACEHOLDER_2083);
    } else {
        copy_item(out, table.items[index]);
    }
}
GUEST_EXPORT(0x00710d10, copy_table6_item);
GUEST_FUZZ(0x00710d10, 200, [](guest::Fuzz &f) {
    auto table = f.object<Table6>();
    fill_flags(f, table);
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 3, 5, 6, f.number()}));
});

void copy_table24_item(Item &out, Table24 &table, u32 index) {
    if (index >= COUNT_18) {
        copy_item(out, *empty_item);
        return;
    }
    if (table.flags[index] == 0) {
        copy_item(out, table.items[index]);
    } else if (item_is_kind_11_with_class_4_or_5(table.items[index])) {
        construct_item(out, PLACEHOLDER_2086);
    } else {
        construct_item(out, PLACEHOLDER_2083);
    }
}
GUEST_EXPORT(0x007118bc, copy_table24_item);
GUEST_FUZZ(0x007118bc, 200, [](guest::Fuzz &f) {
    auto table = f.object<Table24>();
    fill_flags(f, table);
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 11, 23, 24, f.number()}));
});

// The fourth item becomes a placeholder unless the global byte is 2 or the mode is above 1.
void copy_row4_item_with_placeholder(Item &out, gptr<Item> items, u32 index) {
    if (index >= COUNT_4) {
        copy_item(out, *empty_item);
        return;
    }
    if (index == FOURTH && read_global_object_byte() != GLOBAL_BYTE_SKIP && mode_above_1() == 0) {
        construct_item(out, PLACEHOLDER_341E);
        return;
    }
    copy_item(out, items[index]);
}
GUEST_EXPORT(0x00712dc0, copy_row4_item_with_placeholder);
GUEST_FUZZ(0x00712dc0, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<Item>(), f.allocate(COUNT_4 * sizeof(Item)).cast<Item>(), f.pick<u32>({0, 1, 2, 3, 4, f.number()}));
});

void copy_row4_after_16_item(Item &out, Row4After16 &row, u32 index) {
    copy_item(out, index < COUNT_4 ? row.items[index] : *empty_item);
}
GUEST_EXPORT(0x00713054, copy_row4_after_16_item);
GUEST_FUZZ(0x00713054, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<Item>(), f.object<Row4After16>(), f.pick<u32>({0, 3, 4, f.number()}));
});

// Whether the first row's item at the index is empty and the second row's is not.
bool pair_row_first_empty_second_not(TwoRows4 &rows, u32 index) {
    if (index >= COUNT_4) {
        return false;
    }
    return rows.first[index].is_empty() && !rows.second[index].is_empty();
}
GUEST_EXPORT(0x00713074, pair_row_first_empty_second_not);
GUEST_FUZZ(0x00713074, 100, [](guest::Fuzz &f) {
    auto rows = f.object<TwoRows4>();
    for (u32 i = 0; i < COUNT_4; i++) {
        rows->first[i].id = f.below(2) != 0 ? Item::EMPTY : u16(Item::FIRST_ITEM);
        rows->second[i].id = f.below(2) != 0 ? Item::EMPTY : u16(Item::FIRST_ITEM);
    }
    f.arguments(rows, f.pick<u32>({0, 1, 3, 4, f.number()}));
});

// The first row's item when the flag is set, the second row's otherwise.
void copy_two_rows_item(Item &out, TwoRows4 &rows, u32 index) {
    if (index >= COUNT_4) {
        copy_item(out, *empty_item);
    } else if (rows.flags[index] != 0) {
        copy_item(out, rows.first[index]);
    } else {
        copy_item(out, rows.second[index]);
    }
}
GUEST_EXPORT(0x007130b0, copy_two_rows_item);
GUEST_FUZZ(0x007130b0, 100, [](guest::Fuzz &f) {
    auto rows = f.object<TwoRows4>();
    for (u8 &flag : rows->flags) {
        flag = u8(f.below(2));
    }
    f.arguments(f.object<Item>(), rows, f.pick<u32>({0, 3, 4, f.number()}));
});

void copy_table13_item(Item &out, Table13 &table, u32 index) {
    if (index >= COUNT_13) {
        copy_item(out, *empty_item);
    } else if (table.flags[index] != 0) {
        construct_item(out, PLACEHOLDER_2083);
    } else {
        copy_item(out, table.items[index]);
    }
}
GUEST_EXPORT(0x00713370, copy_table13_item);
GUEST_FUZZ(0x00713370, 100, [](guest::Fuzz &f) {
    auto table = f.object<Table13>();
    for (u8 &flag : table->flags) {
        flag = u8(f.below(2));
    }
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 6, 12, 13, f.number()}));
});

void copy_row4_item(Item &out, Row4 &row, u32 index) {
    copy_item(out, index < COUNT_4 ? row.items[index] : *empty_item);
}
GUEST_EXPORT(0x00717964, copy_row4_item);
GUEST_FUZZ(0x00717964, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<Item>(), f.object<Row4>(), f.pick<u32>({0, 3, 4, f.number()}));
});

// A copy of the item with its two top flag bits cleared; a category 0x7c item becomes the placeholder.
void copy_row8_item_cleared(Item &out, Row8After20 &row, u32 index) {
    if (index >= COUNT_8) {
        copy_item(out, *empty_item);
        return;
    }
    if (row.items[index].category() == CATEGORY_7C) {
        construct_item(out, PLACEHOLDER_2085);
        return;
    }
    guest::StackObject<Item> copy;
    copy_item(*copy, row.items[index]);
    clear_kind_11_flags_top(*copy);
    copy_item(out, *copy);
}
GUEST_EXPORT(0x00718270, copy_row8_item_cleared);
GUEST_FUZZ(0x00718270, 200, [](guest::Fuzz &f) {
    auto row = f.object<Row8After20>();
    for (Item &item : row->items) {
        item.id = f.below(4) != 0 ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
    }
    f.arguments(f.object<Item>(), row, f.pick<u32>({0, 4, 7, 8, f.number()}));
});

// Whether the row's item at the index is of category 0x7c (true past the end).
bool row8_item_is_category_7c(Row8After20 &row, u32 index) {
    return index >= COUNT_8 || row.items[index].category() == CATEGORY_7C;
}
GUEST_EXPORT(0x007182f0, row8_item_is_category_7c);
GUEST_FUZZ(0x007182f0, 100, [](guest::Fuzz &f) {
    auto row = f.object<Row8After20>();
    for (Item &item : row->items) {
        item.id = f.below(4) != 0 ? u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT)) : Item::EMPTY;
    }
    f.arguments(row, f.pick<u32>({0, 4, 7, 8, f.number()}));
});

void copy_table7_item(Item &out, Table7 &table, u32 index) {
    if (index >= COUNT_7) {
        copy_item(out, *empty_item);
    } else if (table.flags[index] != 0) {
        construct_item(out, PLACEHOLDER_2084);
    } else {
        copy_item(out, table.items[index]);
    }
}
GUEST_EXPORT(0x0071c134, copy_table7_item);
GUEST_FUZZ(0x0071c134, 100, [](guest::Fuzz &f) {
    auto table = f.object<Table7>();
    for (u8 &flag : table->flags) {
        flag = u8(f.below(2));
    }
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 3, 6, 7, f.number()}));
});

// Like copy_table24_item, with a different placeholder for the plain ones.
void copy_table11_item(Item &out, Table11 &table, u32 index) {
    if (index >= COUNT_11) {
        copy_item(out, *empty_item);
        return;
    }
    if (table.flags[index] == 0) {
        copy_item(out, table.items[index]);
    } else if (item_is_kind_11_with_class_4_or_5(table.items[index])) {
        construct_item(out, PLACEHOLDER_2086);
    } else {
        construct_item(out, PLACEHOLDER_2083);
    }
}
GUEST_EXPORT(0x0071c6ac, copy_table11_item);
GUEST_FUZZ(0x0071c6ac, 200, [](guest::Fuzz &f) {
    auto table = f.object<Table11>();
    fill_flags(f, table);
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 5, 10, 11, f.number()}));
});

void copy_table8_item(Item &out, Table8 &table, u32 index) {
    if (index >= COUNT_8) {
        copy_item(out, *empty_item);
    } else if (table.flags[index] != 0) {
        construct_item(out, PLACEHOLDER_2083);
    } else {
        copy_item(out, table.items[index]);
    }
}
GUEST_EXPORT(0x0071e9ac, copy_table8_item);
GUEST_FUZZ(0x0071e9ac, 200, [](guest::Fuzz &f) {
    auto table = f.object<Table8>();
    fill_flags(f, table);
    f.arguments(f.object<Item>(), table, f.pick<u32>({0, 5, 7, 8, f.number()}));
});
