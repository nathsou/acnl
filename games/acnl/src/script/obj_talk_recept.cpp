// ObjTalkRecept: a talk receptor that is both a script::ITalkRecept and (at +0x7c) a script::IFlowRecept.
#include "guest/guest.hpp"

namespace {

constexpr u32 FLOW_RECEPT_OFFSET = 0x7c;  // the script::IFlowRecept base inside ObjTalkRecept

inline constexpr guest::Function<0x005dd284, gptr<void>(gptr<void> self)> destroy_iflow_recept;
inline constexpr guest::Function<0x003170d0, gptr<void>(gptr<void> self)> destroy_italk_recept;

}  // namespace

// The destructor: destroys the IFlowRecept base, then the ITalkRecept base (the object itself).
gptr<void> destroy_obj_talk_recept(gptr<void> self) {
    gptr<void> flow = destroy_iflow_recept(self + FLOW_RECEPT_OFFSET);
    return destroy_italk_recept(flow - FLOW_RECEPT_OFFSET);
}
GUEST_EXPORT(0x0023bc4c, destroy_obj_talk_recept);
