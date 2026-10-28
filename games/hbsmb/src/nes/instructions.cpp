// The instruction helpers the generated game code calls, by address (see instructions.hpp).
#include "nes/instructions.hpp"

namespace nes {

GUEST_EXPORT(0x00120864, lda<immediate>);
GUEST_EXPORT(0x00120874, lda<zero_page>);
GUEST_EXPORT(0x00120890, lda<zero_page_x>);
GUEST_EXPORT(0x001208ac, lda<zero_page_y>);
GUEST_EXPORT(0x001208c8, lda<absolute>);
GUEST_EXPORT(0x001208e4, lda<absolute_x>);
GUEST_EXPORT(0x00120900, lda<absolute_y>);
GUEST_EXPORT(0x0012091c, lda<indirect_y>);
GUEST_EXPORT(0x00120938, ldx<immediate>);
GUEST_EXPORT(0x00120948, ldx<zero_page>);
GUEST_EXPORT(0x00120964, ldx<zero_page_y>);
GUEST_EXPORT(0x00120980, ldx<absolute>);
GUEST_EXPORT(0x0012099c, ldx<absolute_y>);
GUEST_EXPORT(0x001209b8, ldy<immediate>);
GUEST_EXPORT(0x001209c8, ldy<zero_page>);
GUEST_EXPORT(0x001209e4, ldy<zero_page_x>);
GUEST_EXPORT(0x00120a00, ldy<absolute>);
GUEST_EXPORT(0x00120a1c, ldy<absolute_x>);
GUEST_EXPORT(0x00120e10, tax);
GUEST_EXPORT(0x00120e2c, tay);
GUEST_EXPORT(0x00120e48, txa);
GUEST_EXPORT(0x00120e64, tya);
GUEST_EXPORT(0x00120a38, adc<immediate>);
GUEST_EXPORT(0x00120a74, adc<zero_page>);
GUEST_EXPORT(0x00120ac0, adc<zero_page_x>);
GUEST_EXPORT(0x00120b0c, adc<zero_page_y>);
GUEST_EXPORT(0x00120b58, adc<absolute>);
GUEST_EXPORT(0x00120ba4, adc<absolute_x>);
GUEST_EXPORT(0x00120bf0, adc<absolute_y>);
GUEST_EXPORT(0x00120c3c, sbc<immediate>);
GUEST_EXPORT(0x00120c80, sbc<zero_page>);
GUEST_EXPORT(0x00120cd0, sbc<zero_page_x>);
GUEST_EXPORT(0x00120d20, sbc<absolute>);
GUEST_EXPORT(0x00120d70, sbc<absolute_x>);
GUEST_EXPORT(0x00120dc0, sbc<absolute_y>);
GUEST_EXPORT(0x00120e80, and_<immediate>);
GUEST_EXPORT(0x00120e98, and_<zero_page>);
GUEST_EXPORT(0x00120ebc, and_<absolute>);
GUEST_EXPORT(0x00120ee0, and_<absolute_x>);
GUEST_EXPORT(0x00120f04, and_<absolute_y>);
GUEST_EXPORT(0x00120f28, ora<immediate>);
GUEST_EXPORT(0x00120f40, ora<zero_page>);
GUEST_EXPORT(0x00120f68, ora<zero_page_x>);
GUEST_EXPORT(0x00120f90, ora<zero_page_y>);
GUEST_EXPORT(0x00120fb8, ora<absolute>);
GUEST_EXPORT(0x00120fe0, ora<absolute_x>);
GUEST_EXPORT(0x00121008, ora<absolute_y>);
GUEST_EXPORT(0x00121030, eor<immediate>);
GUEST_EXPORT(0x00121048, eor<zero_page>);
GUEST_EXPORT(0x001216dc, bit<zero_page>);
GUEST_EXPORT(0x0012171c, bit<absolute>);
GUEST_EXPORT(0x001213c4, cmp<immediate>);
GUEST_EXPORT(0x001213f4, cmp<zero_page>);
GUEST_EXPORT(0x00121430, cmp<zero_page_x>);
GUEST_EXPORT(0x0012146c, cmp<zero_page_y>);
GUEST_EXPORT(0x001214a8, cmp<absolute>);
GUEST_EXPORT(0x001214e4, cmp<absolute_x>);
GUEST_EXPORT(0x00121520, cmp<absolute_y>);
GUEST_EXPORT(0x0012155c, cpx<immediate>);
GUEST_EXPORT(0x0012158c, cpx<zero_page>);
GUEST_EXPORT(0x001215c8, cpy<immediate>);
GUEST_EXPORT(0x001215f8, cpy<zero_page>);
GUEST_EXPORT(0x00121634, cpy<absolute>);
GUEST_EXPORT(0x00121268, inx);
GUEST_EXPORT(0x00121284, iny);
GUEST_EXPORT(0x00121384, dex);
GUEST_EXPORT(0x001213a0, dey);
GUEST_EXPORT(0x00121184, inc<at>);    // zero page
GUEST_EXPORT(0x001211b4, inc<at_x>);  // zero page,X
GUEST_EXPORT(0x001211f4, inc<at>);    // absolute
GUEST_EXPORT(0x00121224, inc<at_x>);  // absolute,X
GUEST_EXPORT(0x001212a0, dec<at>);
GUEST_EXPORT(0x001212d0, dec<at_x>);
GUEST_EXPORT(0x00121310, dec<at>);
GUEST_EXPORT(0x00121340, dec<at_x>);
GUEST_EXPORT(0x00121070, asl_a);
GUEST_EXPORT(0x001210dc, lsr_a);
GUEST_EXPORT(0x0012175c, rol_a);
GUEST_EXPORT(0x0012181c, ror_a);
GUEST_EXPORT(0x0012109c, asl);  // absolute
GUEST_EXPORT(0x00121104, lsr);  // zero page
GUEST_EXPORT(0x00121144, lsr);  // absolute
GUEST_EXPORT(0x0012178c, rol);  // zero page
GUEST_EXPORT(0x001217d4, rol);  // absolute
GUEST_EXPORT(0x00121850, ror_absolute_x);
GUEST_EXPORT(0x00121670, pha);
GUEST_EXPORT(0x001216a4, pla);
GUEST_EXPORT(0x001213bc, cld);
GUEST_EXPORT(0x001213c0, sei);

}  // namespace nes
