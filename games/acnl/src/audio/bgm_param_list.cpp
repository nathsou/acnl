#include "audio/bgm_param_list.hpp"

void BgmParamList::update_nodes(u32 kind, u32 id, u32 value_14, u32 float_bits_18, u32 value_10) {
    for (gptr<BgmParamNode> node = head; node && node->kind <= kind; node = node->next) {
        if (node->kind == kind && node->id == id) {
            node->unknown_14 = value_14;
            node->unknown_18 = float_bits_18;
            node->unknown_10 = value_10;
            node->flag_1f = value_10 == 0;
        }
    }
}
GUEST_EXPORT(0x0058aee8, BgmParamList::update_nodes);

void BgmParamList::insert(gptr<BgmParamNode> new_node) {
    new_node->next = nullptr;
    gptr<BgmParamNode> previous = nullptr;
    gptr<BgmParamNode> node = head;
    while (node) {
        if (new_node->kind <= node->kind) {
            new_node->next = node;
            break;
        }
        previous = node;
        node = node->next;
    }
    if (previous) {
        previous->next = new_node;
    } else {
        head = new_node;
    }
}
GUEST_EXPORT(0x0058af50, BgmParamList::insert);

bool BgmParamList::contains(u32 kind, u32 id) const {
    for (gptr<BgmParamNode> node = head; node; node = node->next) {
        if (node->kind == kind && node->id == id) {
            return true;
        }
        if (node->kind > kind) {
            break;
        }
    }
    return false;
}
GUEST_EXPORT(0x0058afb4, BgmParamList::contains);

void BgmParamList::set_current_value(u32 kind, u32 id, u32 value) {
    for (gptr<BgmParamNode> node = head; node && node->kind <= kind; node = node->next) {
        if (node->kind == kind && node->id == value) {
            // The original stores the value and then loops on this same node forever.
            guest::fatal("set_current_value: endless loop in the original");
        }
    }
    if (current.kind == kind && current.id == id && current.state == BgmCurrentRecord::STATE_8) {
        current.value = value;
    }
}
GUEST_EXPORT(0x0058aff8, BgmParamList::set_current_value);

void BgmParamList::set_flag_43c() {
    flag_43c = FLAG_SET;
}
GUEST_EXPORT(0x0058b060, BgmParamList::set_flag_43c);

