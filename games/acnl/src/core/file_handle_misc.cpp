// Small helpers at 0x0013bb00-0x0013bcbc: an intrusive list unlink, a handle owner, the sead::FileHandle
// constructor, the ssys::ma::LoadSplit base destructor and a container/resource reset.
#include "core/word_pair.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct LinkNode {
    gptr<LinkNode> prev;
    gptr<LinkNode> next;
};
GUEST_SIZE(LinkNode, 8);

// Takes a node out of its list (patching its neighbours) and clears its links.
void unlink_node(LinkNode &node) {
    if (node.prev) {
        node.prev->next = node.next;
    }
    if (node.next) {
        node.next->prev = node.prev;
    }
    node.next = nullptr;
    node.prev = nullptr;
}
GUEST_EXPORT(0x0013bb00, unlink_node);

constexpr u32 GLOBAL_AE563C = 0x00ae563c;  // passed to both guest calls (meaning not known yet)

inline constexpr guest::Function<0x00135740, void(gptr<void> arg)> call_135740;
inline constexpr guest::Function<0x00137e84, void(gptr<void> arg)> call_137e84;
inline constexpr guest::Function<0x0013ef38, void(gptr<void> handle, gptr<void> owner)> release_handle;

struct HandleOwner {
    u8 unknown_00[0x30];
    gptr<void> handle_30;  // may be null
};
GUEST_OFFSET(HandleOwner, handle_30, 0x30);

// Releases the handle if there is one; true when it did.
bool release_owned_handle(HandleOwner &owner) {
    if (!owner.handle_30) {
        return false;
    }
    call_135740(gptr<void>(GLOBAL_AE563C));
    release_handle(owner.handle_30, guest::addr_of(owner));
    owner.handle_30 = nullptr;
    call_137e84(gptr<void>(GLOBAL_AE563C));
    return true;
}
GUEST_EXPORT(0x0013bb88, release_owned_handle);

struct FileHandle {
    static constexpr u32 VTABLE = 0x00903e0c;

    u32 vtable;
    u8 unknown_04[4];
    gptr<void> handle_08;  // may be null
};
GUEST_OFFSET(FileHandle, handle_08, 8);

// sead::FileHandle::FileHandle
FileHandle &construct_file_handle(FileHandle &self) {
    self.vtable = FileHandle::VTABLE;
    if (self.handle_08) {
        release_handle(self.handle_08, guest::addr_of(self));
    }
    return self;
}
GUEST_EXPORT(0x0013bbd0, construct_file_handle);

inline constexpr guest::Function<0x0013bbd0, FileHandle &(FileHandle &self)> file_handle_ctor;
inline constexpr guest::Function<0x00138744, void(gptr<void> self)> destroy_load_split_base_part;

struct LoadSplitBase {
    static constexpr u32 VTABLE = 0x009062a0;

    u32 vtable;
    u8 unknown_04[8];
    FileHandle file_handle;
};
GUEST_OFFSET(LoadSplitBase, file_handle, 0xc);

// ssys::ma::LoadSplit::virtual_0 (a destructor body): base part, then the file handle member.
LoadSplitBase &destroy_load_split(LoadSplitBase &self) {
    self.vtable = LoadSplitBase::VTABLE;
    destroy_load_split_base_part(guest::addr_of(self));
    file_handle_ctor(self.file_handle);
    return self;
}
GUEST_EXPORT(0x0013bc00, destroy_load_split);

inline constexpr guest::Function<0x0013f274, void(gptr<void> pair)> clear_word_pair_fn;
inline constexpr guest::Function<0x0013f1a8, void(gptr<void> set)> release_all_fn;
inline constexpr guest::Function<0x0013fa10, void(gptr<void> self, u32 arg)> container_update;

// A container of 8-byte elements between begin and end.
struct ElementContainer {
    u8 unknown_00[0xc];
    u32 unknown_0c;
    gptr<u8> begin;
    gptr<u8> end;
};
GUEST_OFFSET(ElementContainer, unknown_0c, 0xc);
GUEST_OFFSET(ElementContainer, begin, 0x10);
GUEST_OFFSET(ElementContainer, end, 0x14);

struct ResourceSetSlot {
    u8 bytes[72];
};
GUEST_SIZE(ResourceSetSlot, 72);

struct ActiveHolder {
    static constexpr u32 SET_COUNT = 2;

    u8 unknown_00[4];
    u8 active;
    u8 unknown_05[3];
    ResourceSetSlot sets[SET_COUNT];  // from 0x08
    ElementContainer container;       // at 0x98

    void reset();
};
GUEST_OFFSET(ActiveHolder, sets, 8);
GUEST_OFFSET(ActiveHolder, container, 0x98);

// When active: empties the container and releases the resource sets, then becomes inactive.
void ActiveHolder::reset() {
    if (!active) {
        return;
    }
    guest::StackObject<WordPair> scratch;
    clear_word_pair_fn(scratch.ptr());

    gptr<ElementContainer> c = guest::addr_of(container);
    gptr<u8> old_end = container.end;
    s32 count = s32(old_end - container.begin) >> 3;
    if (count != 0) {
        container.end = gptr<u8>(old_end.addr() - u32(count) * 8);
        container_update(c, old_end.addr());
    }
    container.unknown_0c = 0;
    container_update(c, 0);
    for (u32 i = 0; i < SET_COUNT; i++) {
        release_all_fn(guest::addr_of(sets[i]));
    }
    active = 0;
}
GUEST_EXPORT(0x0013bc2c, ActiveHolder::reset);

}  // namespace
