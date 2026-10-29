// g3d::ResourceLoader: the loader embedded in the resource nodes of mutil::BaseResourceMgr. A load-split object
// (not mirrored yet) lives at LOAD_SPLIT_OFFSET.
#pragma once

#include "guest/guest.hpp"

namespace g3d {

struct ResourceLoader {
    static constexpr u32 VTABLE = 0x008eb5cc;
    static constexpr u32 LOAD_SPLIT_OFFSET = 0x1c;
    static constexpr s32 NONE = -1;

    guest::gptr<u32> vtable;
    u32 unknown_04;
    u32 unknown_08;
    s32 value_0c;
    u32 unknown_10;
    u32 unknown_14;
    u32 unknown_18;
    // 0x1c: the load-split part (size not known yet)
};
GUEST_OFFSET(ResourceLoader, unknown_04, 4);
GUEST_OFFSET(ResourceLoader, value_0c, 0xc);
GUEST_OFFSET(ResourceLoader, unknown_18, 0x18);

ResourceLoader &construct_resource_loader(ResourceLoader &self);

}  // namespace g3d
