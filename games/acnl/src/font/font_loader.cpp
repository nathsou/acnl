#include "font/font_loader.hpp"

using guest::addr_of;
using guest::gptr;

namespace {

// sead::StringPrintOutput-like helper chain (still recompiled code).
struct PrintOutput {
    u8 unknown_00[0x20];
};

inline constexpr guest::Function<0x0054a644, gptr<PrintOutput>(gptr<PrintOutput> self, gptr<void> target)>
    construct_print_output;
inline constexpr guest::Function<0x00544fec, gptr<PrintOutput>(gptr<PrintOutput> self, gptr<const char> argument)>
    print_append;
inline constexpr guest::Function<0x00544f18, void(gptr<PrintOutput> self)> print_finish;

inline constexpr guest::Function<0x0012ca50, void(gptr<FontSource> self)> construct_font_source;
inline constexpr guest::Function<0x0012ca7c, void(gptr<LoadSplitData> self)> construct_load_split;
inline constexpr guest::Function<0x002f825c, void(gptr<void> buffer, u32 size)> clear_buffer;
inline constexpr guest::Function<0x004d8f50, void(gptr<ResFontStorage> self)> construct_res_font;

inline constexpr guest::Function<0x005bf790, u32(gptr<FontSource> self, gptr<void> path, gptr<FontHeap> heap, u32 arg)>
    source_start;
inline constexpr guest::Function<0x0056a974, u32(gptr<LoadSplitData> self, gptr<void> path, gptr<FontHeap> heap, u32 arg)>
    load_split_start;
inline constexpr guest::Function<0x0056acfc, u32(gptr<LoadSplitData> self)> load_split_finish;

inline constexpr guest::Function<0x004d8ce0, u32(gptr<ResFontStorage> self, gptr<void> file_data)> res_font_build;
inline constexpr guest::Function<0x004d8eb8, u32(gptr<void> file_data)> res_font_extra_size;
inline constexpr guest::Function<0x0013b7a0, void(gptr<ResFontStorage> self, gptr<void> buffer)> res_font_set_buffer;

// The character that ends a string (a global byte).
inline guest::global<u8, 0x008c9f1c> string_terminator;
// The heap used when none is given (a global holding a pointer).
inline guest::global<gptr<FontHeap>, 0x00952c88> default_heap;

constexpr u32 FILE_NAME_FORMAT = 0x008653b4;  // "%s.bcfnt"
constexpr u32 PATH_FORMAT = 0x008653ac;       // "Font/%s"

constexpr u32 FILE_NAME_VTABLE = 0x009048ec;
constexpr u32 PATH_VTABLE = 0x00904950;
constexpr u32 LOAD_SPLIT_VTABLE = 0x008eb5cc;

constexpr u32 STRING_TEXT_SLOT = 2;  // virtual 2 of the strings, called before the text is read

template <u32 N>
void init_string(FixedString<N> &string, u32 vtable) {
    string.vtable = gptr<u32>(vtable);
    string.text = addr_of(string.buffer[0]);
    string.capacity = N;
    string.buffer[N - 1] = *string_terminator;
    string.buffer[0] = *string_terminator;
}

}  // namespace

gptr<ResFontStorage> FontMgr::get_ready_font(u32 index) {
    u32 slot;
    switch (index) {
    case 0:
    case 1:
    case 2:
    case 4:
        slot = index;
        break;
    default:
        slot = DEFAULT_SLOT;
        break;
    }
    if (slots[slot].state != DLoadSplit::READY) {
        return nullptr;
    }
    return addr_of(slots[slot].res_font);
}
GUEST_EXPORT(0x0052e6c8, FontMgr::get_ready_font);

bool DLoadSplit::update() {
    if (state == NOT_STARTED) {
        state = STARTING;
    }
    if (state == STARTING) {
        if (!use_load_split) {
            result = u8(source_start(addr_of(source), addr_of(path), heap, LOAD_ARGUMENT));
        } else {
            if (!load_split_start(addr_of(load_split), addr_of(path), heap, LOAD_ARGUMENT)) {
                return false;
            }
            result = u8(load_split_finish(addr_of(load_split)));
        }
        state = STARTED;
    }
    if (state == STARTED) {
        gptr<void> file_data = use_load_split ? load_split.file_data : source.file_data;
        if (res_font_build(addr_of(res_font), file_data)) {
            u32 size = res_font_extra_size(file_data);
            gptr<void> buffer = guest::call_address<gptr<void>>(heap->vtable[FontHeap::ALLOCATE_SLOT], heap, size,
                                                               FontHeap::ALLOCATE_ALIGNMENT);
            if (buffer) {
                res_font_set_buffer(addr_of(res_font), buffer);
            }
        }
        state = READY;
    }
    return state == READY;
}
GUEST_EXPORT(0x0052e76c, DLoadSplit::update);

void DLoadSplit::set_font(gptr<const char> name, u8 flag, gptr<FontHeap> heap_or_null) {
    guest::StackObject<PrintOutput> output;

    gptr<PrintOutput> chain = construct_print_output(output.ptr(), addr_of(file_name));
    chain = print_append(chain, gptr<const char>(FILE_NAME_FORMAT));
    chain = print_append(chain, name);
    print_finish(chain);

    chain = construct_print_output(output.ptr(), addr_of(path));
    chain = print_append(chain, gptr<const char>(PATH_FORMAT));
    guest::call_address<void>(file_name.vtable[STRING_TEXT_SLOT], addr_of(file_name));
    chain = print_append(chain, file_name.text);
    print_finish(chain);

    flag_190 = flag;
    if (heap_or_null) {
        heap = heap_or_null;
    } else {
        heap = *default_heap;
    }
}
GUEST_EXPORT(0x0052e858, DLoadSplit::set_font);

DLoadSplit &construct_dload_split(DLoadSplit &self, u8 use_load_split) {
    self.use_load_split = use_load_split;
    self.result = 0;
    construct_font_source(addr_of(self.source));
    clear_buffer(addr_of(self.load_split), sizeof(LoadSplitData));
    construct_load_split(addr_of(self.load_split));
    self.load_split.vtable = gptr<u32>(LOAD_SPLIT_VTABLE);
    init_string(self.path, PATH_VTABLE);
    init_string(self.file_name, FILE_NAME_VTABLE);
    construct_res_font(addr_of(self.res_font));
    self.flag_190 = 0;
    self.state = DLoadSplit::NOT_STARTED;
    self.heap = nullptr;
    return self;
}
GUEST_EXPORT(0x0052e90c, construct_dload_split);

// font::Base::virtual_12: always 2.
static u32 font_base_virtual_12() {
    return 2;
}
GUEST_EXPORT(0x0052e9fc, font_base_virtual_12);
GUEST_EXPORT(0x0052ea58, font_base_virtual_12);
