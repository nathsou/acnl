// script::TalkRuby: the message engine for ruby text (small reading aids above the main text), shown at a rate.
#include "guest/guest.hpp"

namespace script {

struct TalkRuby {
    u8 msg_engine[0x6c];  // the script::MsgEngine base (its fields past 0x60 are used differently here)
    u8 unknown_6c;
    u8 finished;
    s8 use_alternate_rate;
    u8 unknown_6f;
    u32 unknown_70;
    s32 characters_shown;  // counted up as characters are written
    float budget;          // characters that may still be shown
    float rate_scale;
    float rate;
    float alternate_rate;
    float rate_override;   // used when not negative

    void finish();
    bool update_budget();
};
GUEST_OFFSET(TalkRuby, finished, 0x6d);
GUEST_OFFSET(TalkRuby, use_alternate_rate, 0x6e);
GUEST_OFFSET(TalkRuby, characters_shown, 0x74);
GUEST_OFFSET(TalkRuby, budget, 0x78);
GUEST_OFFSET(TalkRuby, rate_override, 0x88);

// virtual 3
void TalkRuby::finish() {
    finished = 1;
}
GUEST_EXPORT(0x005fd724, TalkRuby::finish);

// virtual 4: takes the characters shown from the budget and adds this frame's allowance; true (and nothing
// changes) while the budget covers them.
bool TalkRuby::update_budget() {
    if (finished) {
        return false;
    }
    float current_rate = rate_override;
    if (current_rate < 0.0f) {
        current_rate = use_alternate_rate != 0 ? alternate_rate : rate;
    }
    float allowance = rate_scale * current_rate;
    float left = budget - static_cast<float>(characters_shown);
    if (!(left < 0.0f)) {
        return true;
    }
    budget = left + allowance;
    characters_shown = 0;
    return false;
}
GUEST_EXPORT(0x005fd738, TalkRuby::update_budget);

}  // namespace script
