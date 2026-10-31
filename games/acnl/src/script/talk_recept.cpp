#include "script/talk_recept.hpp"

namespace script {

ITalkRecept &destroy_ITalkRecept(ITalkRecept &self) {
    self.vtable = ITalkRecept::VTABLE;
    self.second_vtable = ITalkRecept::SECOND_VTABLE;
    return self;
}
GUEST_EXPORT(0x003170d0, destroy_ITalkRecept);

}  // namespace script
