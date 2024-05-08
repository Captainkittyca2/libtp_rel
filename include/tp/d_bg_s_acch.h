/**	@file d_bg_s_acch.h
 *	@brief i don't know
 *
 *	@author Captain Kitty Cat
 *	@bug No known bugs.
 */
#ifndef TP_BG_D_BG_S_ACCH_H
#define TP_BG_D_BG_S_ACCH_H
#include <cstdint>
#include <tp/f_op_actor.h>

namespace libtp::tp::d_bg_s_acch
{

    struct dBgS_Acch
    {
        uint8_t unk1[0x2c];
        /* 0x02C */ uint32_t m_flags;
        /* 0x030 */ uint8_t unk2[0x14];
        /* 0x044 */ uint8_t m_lin[28];
        /* 0x060 */ uint8_t m_wall_cyl[24];
        /* 0x078 */ int32_t m_bg_index;
        /* 0x07C */ void* field_0x7c;
        /* 0x080 */ uint32_t field_0x80;
        /* 0x084 */ libtp::tp::f_op_actor::fopAc_ac_c* m_my_ac;
        /* 0x088 */ int32_t m_tbl_size;
        /* 0x08C */ uint8_t pm_acch_cir[4];
        /* 0x090 */ float field_0x90;
        /* 0x094 */ float field_0x94;
        /* 0x098 */ float m_ground_h;
        /* 0x09C */ float field_0x9c;
        /* 0x0A0 */ uint8_t field_0xa0[0x14];
        /* 0x0B4 */ uint8_t field_0xb4;
        /* 0x0B5 */ uint8_t padding_0xb5[3];
        /* 0x0B8 */ float field_0xb8;
        /* 0x0BC */ float field_0xbc;
        /* 0x0C0 */ uint8_t field_0xc0;
        /* 0x0c1 */ uint8_t padding_0xc1[3];
        /* 0x0C4 */ float m_roof_height;
        /* 0x0C8 */ float m_roof_crr_height;
        /* 0x0CC */ float field_0xcc;
        /* 0x0D0 */ float m_wtr_chk_offset;
        /* 0x0D4 */ uint8_t pm_out_poly_info[4];
        /* 0x0D8 */ float field_0xd8;
        /* 0x0DC */ uint8_t m_gnd[84];
        /* 0x130 */ uint8_t m_roof[80];
        /* 0x180 */ uint8_t m_wtr[84];
        /* 0x1D4 */ uint8_t m_wtr_mode[4];
    } __attribute__((__packed__));

    static_assert(sizeof(dBgS_Acch) == 0x1d8);
    extern "C"
    {
        bool ChkGroundHit(dBgS_Acch* thing);
        bool ChkRoofHit(dBgS_Acch* thing);
        bool ChkWallHit(dBgS_Acch* thing);
        bool ChkWaterHit(dBgS_Acch* thing);
        bool ChkWaterIn(dBgS_Acch* thing);
    }
} // namespace libtp::tp::d_bg_s_acch
#endif