// The link between a script text object (the callers are script::WordFix<N> constructors) and a peer object that
// points back at it.
#include "guest/guest.hpp"

namespace {

// The object at the other end of the link: its second word points back into the owner.
struct LinkPeer {
    u32 unknown_00;
    u32 back_link;  // guest address inside the owner (owner + 0x10 when linked)
};
GUEST_OFFSET(LinkPeer, back_link, 4);
GUEST_SIZE(LinkPeer, 8);

struct LinkOwner {
    u8 unknown_000[0x24];
    gptr<LinkPeer> peer;
    u8 unknown_028[0xb34 - 0x28];
    gptr<LinkPeer> peer_b34;  // set together with peer when linking

    void unlink();
};
GUEST_OFFSET(LinkOwner, peer, 0x24);
GUEST_OFFSET(LinkOwner, peer_b34, 0xb34);
GUEST_SIZE(LinkOwner, 0xb38);

}  // namespace

// Drops the link to the peer (clearing the peer's pointer back), then the second copy of the peer pointer.
void LinkOwner::unlink() {
    if (peer) {
        peer->back_link = 0;
        peer = nullptr;
    }
    peer_b34 = nullptr;
}
GUEST_EXPORT(0x005ea8dc, LinkOwner::unlink);
