#include "nes/instructions.hpp"
#include "smb/ram.hpp"
#include "smb/routines.hpp"

namespace smb {

using namespace nes;

// Makes the player's score the top score if it is higher. Scores are 6 BCD digits; X indexes the player's last
// digit from PlayerScoreDisplay - 6 (5 for Mario, 11 for Luigi).
void top_score_check() {
    // subtract the top score from the player's, from the last digit to the first: the final carry is "no borrow"
    ldy<immediate>(5);
    sec();
    do {
        lda<absolute_x>(PlayerScoreDisplay - 6);
        sbc<absolute_y>(TopScoreDisplay);
        dex();
        dey();
    } while (!cpu->negative);
    if (!cpu->carry) return;  // lower

    inx();
    iny();
    do {
        lda<absolute_x>(PlayerScoreDisplay - 6);
        sta(TopScoreDisplay + cpu->y);
        inx();
        iny();
        cpy<immediate>(6);
    } while (!cpu->carry);
}
GUEST_EXPORT(0x00103518, top_score_check);

}  // namespace smb
