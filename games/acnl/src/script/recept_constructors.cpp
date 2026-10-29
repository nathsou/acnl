// Constructors of the receptors the script code talks to (IFlowRecept, IMailRecept, ITalkRecept) and of the
// Searcher: each builds its text sub-objects and sets a few fields to their starting values.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x00810f00, gptr<void>(gptr<void> self)> construct_string_32;
inline constexpr guest::Function<0x00811190, gptr<void>(gptr<void> self)> construct_string_8;
inline constexpr guest::Function<0x0081e8d0, gptr<void>(gptr<void> self)> construct_word_fix_9;
inline constexpr guest::Function<0x00601a20, gptr<void>(gptr<void> self)> construct_msg_engine;

constexpr u32 STRING_32_SIZE = 0x2c;
constexpr u32 STRING_8_SIZE = 0x14;
constexpr u32 NO_INDEX = 0xffffffff;

struct FlowRecept {
    static constexpr u32 VTABLE = 0x00908cf0;

    u32 vtable;
    u32 value_04;
    u32 value_08;
    u8 string_0c[STRING_32_SIZE];
    u8 string_38[STRING_32_SIZE];
    u32 values_64[4];
};
GUEST_OFFSET(FlowRecept, string_0c, 0x0c);
GUEST_OFFSET(FlowRecept, string_38, 0x38);
GUEST_OFFSET(FlowRecept, values_64, 0x64);

struct MailRecept {
    static constexpr u32 VTABLE = 0x00908d30;
    static constexpr u8 BYTE_AC = 3;
    static constexpr u8 BYTE_AD = 4;

    u32 vtable;
    u32 values_04[4];
    u8 string_14[STRING_32_SIZE];
    u8 string_40[STRING_32_SIZE];
    u8 string_6c[STRING_32_SIZE];
    u32 indices_98[5];
    u8 byte_ac;
    u8 byte_ad;
};
GUEST_OFFSET(MailRecept, values_04, 4);
GUEST_OFFSET(MailRecept, string_14, 0x14);
GUEST_OFFSET(MailRecept, string_40, 0x40);
GUEST_OFFSET(MailRecept, string_6c, 0x6c);
GUEST_OFFSET(MailRecept, indices_98, 0x98);
GUEST_OFFSET(MailRecept, byte_ac, 0xac);

struct TalkRecept {
    static constexpr u32 VTABLE = 0x00908dd4;
    static constexpr u8 BYTE_78 = 3;

    u32 vtable;
    u32 value_04;
    u8 string_08[STRING_32_SIZE];
    u8 string_34[STRING_8_SIZE];
    u32 index_48;
    u8 word_fix_4c[0x78 - 0x4c];
    u8 byte_78;
};
GUEST_OFFSET(TalkRecept, string_08, 8);
GUEST_OFFSET(TalkRecept, string_34, 0x34);
GUEST_OFFSET(TalkRecept, index_48, 0x48);
GUEST_OFFSET(TalkRecept, word_fix_4c, 0x4c);
GUEST_OFFSET(TalkRecept, byte_78, 0x78);

struct SearcherObject {
    static constexpr u32 VTABLE = 0x0090a5a8;
    static constexpr u8 BYTE_60 = 4;
    static constexpr u32 LIMIT = 0x7fffffff;

    u8 engine[0x60];
    u8 byte_60;
    u8 unknown_61[3];
    u32 value_64;
    u16 half_68;
    u8 unknown_6a[2];
    u32 limit_6c;
    u32 limit_70;
    u8 byte_74;
    u8 unknown_75[3];
    u32 value_78;
};
GUEST_OFFSET(SearcherObject, byte_60, 0x60);
GUEST_OFFSET(SearcherObject, value_64, 0x64);
GUEST_OFFSET(SearcherObject, half_68, 0x68);
GUEST_OFFSET(SearcherObject, limit_6c, 0x6c);
GUEST_OFFSET(SearcherObject, byte_74, 0x74);
GUEST_OFFSET(SearcherObject, value_78, 0x78);

}  // namespace

FlowRecept &construct_flow_recept(FlowRecept &self, u32 value) {
    self.vtable = FlowRecept::VTABLE;
    self.value_04 = value;
    self.value_08 = 0;
    construct_string_32(guest::addr_of(self.string_0c[0]).cast<void>());
    construct_string_32(guest::addr_of(self.string_38[0]).cast<void>());
    for (u32 &word : self.values_64) {
        word = 0;
    }
    return self;
}
GUEST_EXPORT(0x005dd230, construct_flow_recept);
GUEST_FUZZ(0x005dd230, 100, [](guest::Fuzz &f) { f.arguments(f.object<FlowRecept>(), f.number()); });

MailRecept &construct_mail_recept(MailRecept &self) {
    self.values_04[0] = 0;
    self.vtable = MailRecept::VTABLE;
    self.values_04[1] = 0;
    self.values_04[2] = 0;
    self.values_04[3] = 0;
    construct_string_32(guest::addr_of(self.string_14[0]).cast<void>());
    construct_string_32(guest::addr_of(self.string_40[0]).cast<void>());
    construct_string_32(guest::addr_of(self.string_6c[0]).cast<void>());
    for (u32 &index : self.indices_98) {
        index = NO_INDEX;
    }
    self.byte_ac = MailRecept::BYTE_AC;
    self.byte_ad = MailRecept::BYTE_AD;
    return self;
}
GUEST_EXPORT(0x005dd490, construct_mail_recept);
GUEST_FUZZ(0x005dd490, 100, [](guest::Fuzz &f) { f.arguments(f.object<MailRecept>()); });

TalkRecept &construct_talk_recept(TalkRecept &self) {
    self.vtable = TalkRecept::VTABLE;
    self.value_04 = 0;
    construct_string_32(guest::addr_of(self.string_08[0]).cast<void>());
    construct_string_8(guest::addr_of(self.string_34[0]).cast<void>());
    self.index_48 = NO_INDEX;
    construct_word_fix_9(guest::addr_of(self.word_fix_4c[0]).cast<void>());
    self.byte_78 = TalkRecept::BYTE_78;
    return self;
}
GUEST_EXPORT(0x005dd69c, construct_talk_recept);
GUEST_FUZZ(0x005dd69c, 100, [](guest::Fuzz &f) { f.arguments(f.object<TalkRecept>()); });

SearcherObject &construct_searcher(SearcherObject &self) {
    construct_msg_engine(guest::addr_of(self).cast<void>());
    *guest::addr_of(self).cast<u32>() = SearcherObject::VTABLE;
    self.byte_60 = SearcherObject::BYTE_60;
    self.value_64 = 0;
    self.half_68 = 0;
    self.limit_6c = SearcherObject::LIMIT;
    self.limit_70 = NO_INDEX;
    self.byte_74 = 0;
    self.value_78 = 0;
    return self;
}
GUEST_EXPORT(0x005fd310, construct_searcher);
GUEST_FUZZ(0x005fd310, 100, [](guest::Fuzz &f) { f.arguments(f.object<SearcherObject>()); });
