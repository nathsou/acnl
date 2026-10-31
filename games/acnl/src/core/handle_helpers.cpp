// Small helpers at 0x0013f134-0x0013f28c: an intrusive queue, a resource set that gives its blocks back to a
// device, and a handle query.
#include "core/word_pair.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

struct QueueNode {
    u32 unknown_00;
    gptr<QueueNode> prev;
    gptr<QueueNode> next;
};
GUEST_SIZE(QueueNode, 12);

struct Queue {
    u32 unknown_00;
    gptr<QueueNode> head;
    gptr<QueueNode> tail;
};
GUEST_OFFSET(Queue, head, 4);
GUEST_OFFSET(Queue, tail, 8);

// Appends a node that is not linked yet (both links null); a linked node is left alone.
void queue_append(Queue &queue, QueueNode &node) {
    if (node.next || node.prev) {
        return;
    }
    gptr<QueueNode> self = guest::addr_of(node);
    if (!queue.head) {
        queue.head = self;
        queue.tail = self;
        node.prev = nullptr;
        queue.head->next = nullptr;
        return;
    }
    queue.tail->next = self;
    node.prev = queue.tail;
    queue.tail = self;
    node.next = nullptr;
}
GUEST_EXPORT(0x0013f134, queue_append);

struct TwoWords {
    u32 first;
    u32 second;
};
inline guest::global<TwoWords, 0x0097e098> words_97e098;

void clear_words_97e098() {
    words_97e098->first = 0;
    words_97e098->second = 0;
}
GUEST_EXPORT(0x0013f18c, clear_words_97e098);

struct Releaser {
    gptr<u32> vtable;  // slot 1: gives a block back (this, block)
};
struct ReleaserRef {
    gptr<Releaser> inner;
};

// An object holding blocks (taken from a device) that it gives back all at once.
struct ResourceSet {
    static constexpr u32 RELEASE_SLOT = 1;
    static constexpr u8 STATE_RELEASED = 2;

    gptr<ReleaserRef> device;  // may be null
    u8 state;
    u8 unknown_05[3];
    u32 unknown_08;
    gptr<void> block_0c;
    gptr<void> block_10;
    u32 unknown_14;
    u8 unknown_18[8];
    gptr<void> block_20;
    u32 unknown_24;
    u32 unknown_28;
    u8 unknown_2c[8];
    gptr<void> block_34;
    u32 unknown_38;
    u32 unknown_3c;

    void release_block(gptr<void> block) const;
    void release_all();
};
GUEST_OFFSET(ResourceSet, state, 4);
GUEST_OFFSET(ResourceSet, block_0c, 0x0c);
GUEST_OFFSET(ResourceSet, block_10, 0x10);
GUEST_OFFSET(ResourceSet, block_20, 0x20);
GUEST_OFFSET(ResourceSet, block_34, 0x34);
GUEST_SIZE(ResourceSet, 0x40);

void ResourceSet::release_block(gptr<void> block) const {
    gptr<Releaser> inner = device->inner;
    u32 function = inner->vtable[RELEASE_SLOT];
    guest::call_address<void>(function, inner, block);
}

// Gives every block back to the device and forgets the device.
void ResourceSet::release_all() {
    if (!device) {
        return;
    }
    if (block_20) {
        release_block(block_20);
        block_20 = nullptr;
        unknown_24 = 0;
        unknown_28 = 0;
    }
    if (block_34) {
        release_block(block_34);
        block_34 = nullptr;
        unknown_38 = 0;
        unknown_3c = 0;
    }
    if (block_10) {
        release_block(block_10);
        block_10 = nullptr;
        unknown_14 = 0;
    }
    if (block_0c) {
        release_block(block_0c);
        block_0c = nullptr;
    }
    device = nullptr;
    state = STATE_RELEASED;
    unknown_08 = 0;
}
GUEST_EXPORT(0x0013f1a8, ResourceSet::release_all);

}  // namespace

void clear_word_pair(WordPair &pair) {
    pair.first = 0;
    pair.second = 0;
}
GUEST_EXPORT(0x0013f274, clear_word_pair);
GUEST_EXPORT(0x001515bc, clear_word_pair);
GUEST_EXPORT(0x001515e4, clear_word_pair);
GUEST_EXPORT(0x003d464c, clear_word_pair);
GUEST_EXPORT(0x005a8b14, clear_word_pair);
GUEST_EXPORT(0x005aa450, clear_word_pair);

namespace {

struct QueryResult {
    WordPair pair;
    u32 unknown_08;
};
inline constexpr guest::Function<0x0013fefc, s32(gptr<QueryResult> out, u32 handle)> query_handle;

struct HandleHolder {
    u32 handle;  // bit 0 is ignored
    u8 unknown_04[8];
    WordPair result;
};
GUEST_OFFSET(HandleHolder, result, 0x0c);

// Queries the handle; on success the answer is kept in the holder and copied to out, otherwise cleared in the holder.
s32 handle_holder_query(HandleHolder &holder, WordPair &out) {
    guest::StackObject<QueryResult> answer;
    s32 status = query_handle(answer.ptr(), holder.handle & ~1u);
    if (status < 0) {
        holder.result.first = 0;
        holder.result.second = 0;
        return status;
    }
    holder.result = answer->pair;
    out = answer->pair;
    return status;
}
GUEST_EXPORT(0x0013f28c, handle_holder_query);

}  // namespace
