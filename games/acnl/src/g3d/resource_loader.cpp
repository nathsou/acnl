#include "g3d/resource_loader.hpp"

using guest::gptr;

namespace g3d {

namespace {

constexpr u32 BASE_VTABLE = 0x0090298c;  // the vtable the load-split constructor's caller starts with

inline constexpr guest::Function<0x0012ca7c, gptr<void>(gptr<void> self)> construct_load_split;

// Scratch for fuzzing: the load-split part's size is not known, so be generous.
constexpr u32 FUZZ_SIZE = 0x400;

}  // namespace

// Clears the loader's fields, builds the load-split part and gives the whole object its vtable.
ResourceLoader &construct_resource_loader(ResourceLoader &self) {
    self.unknown_04 = 0;
    self.unknown_08 = 0;
    self.value_0c = ResourceLoader::NONE;
    self.unknown_10 = 0;
    self.unknown_14 = 0;
    self.vtable = gptr<u32>(BASE_VTABLE);
    self.unknown_18 = 0;
    gptr<void> split = construct_load_split(guest::addr_of(self) .cast<void>() + ResourceLoader::LOAD_SPLIT_OFFSET);
    *split.cast<u32>() = ResourceLoader::VTABLE;
    return *gptr<ResourceLoader>(split.addr() - ResourceLoader::LOAD_SPLIT_OFFSET);
}
GUEST_EXPORT(0x004ee594, construct_resource_loader);
GUEST_FUZZ(0x004ee594, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(FUZZ_SIZE)); });

}  // namespace g3d
