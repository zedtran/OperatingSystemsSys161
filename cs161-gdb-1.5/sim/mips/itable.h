/* This file is part of GDB.

   Copyright 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   --

   This file was generated by the program igen */

#ifndef ITABLE_H
#define ITABLE_H

typedef enum {
#line 93 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_RSVD_SPECIAL,
#line 517 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ADD_SPECIAL,
#line 545 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ADDI_NORMAL,
#line 582 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ADDIU_NORMAL,
#line 611 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ADDU_SPECIAL,
#line 638 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_AND_SPECIAL,
#line 658 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ANDI_NORMAL,
#line 680 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BEQ_NORMAL,
#line 704 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BEQL_NORMAL,
#line 729 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BGEZ_REGIMM,
#line 753 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BGEZAL_REGIMM,
#line 780 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BGEZALL_REGIMM,
#line 810 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BGEZL_REGIMM,
#line 835 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BGTZ_NORMAL,
#line 859 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BGTZL_NORMAL,
#line 886 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BLEZ_NORMAL,
#line 912 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BLEZL_NORMAL,
#line 937 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BLTZ_REGIMM,
#line 961 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BLTZAL_REGIMM,
#line 990 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BLTZALL_REGIMM,
#line 1018 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BLTZL_REGIMM,
#line 1045 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BNE_NORMAL,
#line 1069 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BNEL_NORMAL,
#line 1094 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BREAK_SPECIAL,
#line 1442 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_DIV_SPECIAL,
#line 1483 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_DIVU_SPECIAL,
#line 1894 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_J_NORMAL,
#line 1916 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_JAL_NORMAL,
#line 1938 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_JALR_SPECIAL,
#line 1960 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_JR_SPECIAL,
#line 2089 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LB_NORMAL,
#line 2108 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LBU_NORMAL,
#line 2192 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LH_NORMAL,
#line 2211 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LHU_NORMAL,
#line 2230 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LL_NORMAL,
#line 2311 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LUI_NORMAL,
#line 2332 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LW_NORMAL,
#line 2351 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LWCz_NORMAL,
#line 2370 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LWL_NORMAL,
#line 2389 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LWR_NORMAL,
#line 2476 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MFHI_SPECIAL,
#line 2500 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MFLO_SPECIAL,
#line 2516 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOVN_SPECIAL,
#line 2535 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOVZ_SPECIAL,
#line 2598 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MTHI_SPECIAL,
#line 2615 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MTLO_SPECIAL,
#line 2669 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MULT_SPECIAL,
#line 2712 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MULTU_SPECIAL,
#line 2745 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_NOR_SPECIAL,
#line 2771 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_OR_SPECIAL,
#line 2798 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ORI_NORMAL,
#line 2817 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_PREF_NORMAL,
#line 2965 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SB_NORMAL,
#line 2984 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SC_NORMAL,
#line 3132 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SH_NORMAL,
#line 3159 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SLLa_SPECIAL,
#line 3202 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SLLV_SPECIAL,
#line 3228 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SLT_SPECIAL,
#line 3254 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SLTI_NORMAL,
#line 3280 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SLTIU_NORMAL,
#line 3307 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SLTU_SPECIAL,
#line 3336 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SRA_SPECIAL,
#line 3367 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SRAV_SPECIAL,
#line 3397 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SRL_SPECIAL,
#line 3427 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SRLV_SPECIAL,
#line 3446 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SUB_SPECIAL,
#line 3482 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SUBU_SPECIAL,
#line 3501 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SW_NORMAL,
#line 3520 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SWCz_NORMAL,
#line 3539 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SWL_NORMAL,
#line 3558 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SWR_NORMAL,
#line 3577 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SYNC_SPECIAL,
#line 3596 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SYSCALL_SPECIAL,
#line 3615 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TEQ_SPECIAL,
#line 3633 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TEQI_REGIMM,
#line 3651 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TGE_SPECIAL,
#line 3669 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TGEI_REGIMM,
#line 3687 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TGEIU_REGIMM,
#line 3705 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TGEU_SPECIAL,
#line 3723 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLT_SPECIAL,
#line 3741 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLTI_REGIMM,
#line 3759 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLTIU_REGIMM,
#line 3777 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLTU_SPECIAL,
#line 3795 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TNE_SPECIAL,
#line 3813 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TNEI_REGIMM,
#line 3838 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_XOR_SPECIAL,
#line 3864 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_XORI_NORMAL,
#line 4077 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ABS_fmt_COP1,
#line 4100 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ADD_fmt_COP1,
#line 4180 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BC1b_COP1S,
#line 4218 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_C_cond_fmtb_COP1,
#line 4257 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CEIL_W_COP1,
#line 4292 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CFC1b_COP1,
#line 4341 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CTC1b_COP1,
#line 4374 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CVT_D_fmt_COP1,
#line 4434 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CVT_S_fmt_COP1,
#line 4482 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CVT_W_fmt_COP1,
#line 4506 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_DIV_fmt_COP1,
#line 4624 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_FLOOR_W_fmt_COP1,
#line 4656 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LDC1b_COP1,
#line 4704 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_LWC1_COP1,
#line 4769 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MFC1b_COP1,
#line 4787 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOV_fmt_COP1,
#line 4811 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOVtf_SPECIAL,
#line 4829 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOVtf_fmt_COP1,
#line 4860 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOVN_fmt_COP1,
#line 4885 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MOVZ_fmt_COP1,
#line 4934 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MTC1b_COP1,
#line 4951 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MUL_fmt_COP1,
#line 4973 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_NEG_fmt_COP1,
#line 5101 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_RECIP_fmt_COP1,
#line 5133 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ROUND_W_fmt_COP1,
#line 5154 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_RSQRT_fmt_COP1,
#line 5179 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SDC1b_COP1,
#line 5228 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SQRT_fmt_COP1,
#line 5248 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SUB_fmt_COP1,
#line 5271 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SWC1_COP1,
#line 5317 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_SWXC1_COP1X,
#line 5376 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TRUNC_W_COP1,
#line 5404 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BC0F_COP0,
#line 5427 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BC0FL_COP0,
#line 5442 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BC0T_COP0,
#line 5456 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_BC0TL_COP0,
#line 5471 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_CACHE_NORMAL,
#line 5522 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_ERET_COP0,
#line 5549 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MFC0_COP0,
#line 5569 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_MTC0_COP0,
#line 5588 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_RFE_COP0,
#line 5603 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_COPz_NORMAL,
#line 5622 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLBP_COP0,
#line 5637 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLBR_COP0,
#line 5652 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLBWI_COP0,
#line 5667 "/home/blakedonzac/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/sim/mips/mips.igen"
  itable_TLBWR_COP0,
  nr_itable_entries,
} itable_index;

typedef enum {
  itable_flag_32,
  itable_flag_f,
  nr_itable_flags,
} itable_flags;
extern const char *itable_flag_names[];

typedef enum {
  nr_itable_options,
} itable_options;
extern const char *itable_option_names[];

typedef enum {
  itable_processor_dsp,
  itable_processor_mdmx,
  itable_processor_mips16,
  itable_processor_mips16e,
  itable_processor_mips32,
  itable_processor_mips32r2,
  itable_processor_mips3d,
  itable_processor_mips64,
  itable_processor_mips64r2,
  itable_processor_mipsI,
  itable_processor_mipsII,
  itable_processor_mipsIII,
  itable_processor_mipsIV,
  itable_processor_mipsV,
  itable_processor_r3900,
  itable_processor_sb1,
  itable_processor_smartmips,
  itable_processor_vr4100,
  itable_processor_vr4120,
  itable_processor_vr5000,
  itable_processor_vr5400,
  itable_processor_vr5500,
  nr_itable_processors,
} itable_processors;
extern const char *itable_processor_names[];

typedef struct _itable_instruction_info {
  itable_index nr;
  char *format;
  char *form;
  char *flags;
  char flag[nr_itable_flags + 1];
  char *options;
  char option[nr_itable_options + 1];
  char *processors;
  char processor[nr_itable_processors + 1];
  char *name;
  char *file;
  int line_nr;
} itable_info;

extern itable_info itable[nr_itable_entries];

enum {
  sizeof_itable_form = 8,
  sizeof_itable_name = 12,
  sizeof_itable_file = 10,
};

#endif /* _ITABLE_H_*/