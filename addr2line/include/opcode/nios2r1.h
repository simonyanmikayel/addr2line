/* Nios II R1 opcode list for GAS, the GNU assembler.
   Copyright (C) 2013-2016 Free Software Foundation, Inc.
   Contributed by Mentor Graphics, Inc.

   This file is part of GAS, the GNU Assembler, and GDB, the GNU disassembler.

   GAS/GDB is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS/GDB is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS or GDB; see the file COPYING3.  If not, write to
   the Free Software Foundation, 51 Franklin Street - Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#ifndef _NIOS2R1_H_
#define _NIOS2R1_H_

/* R1 fields.  */
#define IW_R1_OP_LSB 0 
#define IW_R1_OP_SIZE 6 
#define IW_R1_OP_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_R1_OP_SIZE)) 
#define IW_R1_OP_SHIFTED_MASK (IW_R1_OP_UNSHIFTED_MASK << IW_R1_OP_LSB) 
#define GET_IW_R1_OP(W) (((W) >> IW_R1_OP_LSB) & IW_R1_OP_UNSHIFTED_MASK) 
#define SET_IW_R1_OP(V) (((V) & IW_R1_OP_UNSHIFTED_MASK) << IW_R1_OP_LSB) 

#define IW_I_A_LSB 27 
#define IW_I_A_SIZE 5 
#define IW_I_A_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_I_A_SIZE)) 
#define IW_I_A_SHIFTED_MASK (IW_I_A_UNSHIFTED_MASK << IW_I_A_LSB) 
#define GET_IW_I_A(W) (((W) >> IW_I_A_LSB) & IW_I_A_UNSHIFTED_MASK) 
#define SET_IW_I_A(V) (((V) & IW_I_A_UNSHIFTED_MASK) << IW_I_A_LSB) 

#define IW_I_B_LSB 22 
#define IW_I_B_SIZE 5 
#define IW_I_B_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_I_B_SIZE)) 
#define IW_I_B_SHIFTED_MASK (IW_I_B_UNSHIFTED_MASK << IW_I_B_LSB) 
#define GET_IW_I_B(W) (((W) >> IW_I_B_LSB) & IW_I_B_UNSHIFTED_MASK) 
#define SET_IW_I_B(V) (((V) & IW_I_B_UNSHIFTED_MASK) << IW_I_B_LSB) 

#define IW_I_IMM16_LSB 6 
#define IW_I_IMM16_SIZE 16 
#define IW_I_IMM16_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_I_IMM16_SIZE)) 
#define IW_I_IMM16_SHIFTED_MASK (IW_I_IMM16_UNSHIFTED_MASK << IW_I_IMM16_LSB) 
#define GET_IW_I_IMM16(W) (((W) >> IW_I_IMM16_LSB) & IW_I_IMM16_UNSHIFTED_MASK) 
#define SET_IW_I_IMM16(V) (((V) & IW_I_IMM16_UNSHIFTED_MASK) << IW_I_IMM16_LSB) 

#define IW_R_A_LSB 27 
#define IW_R_A_SIZE 5 
#define IW_R_A_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_R_A_SIZE)) 
#define IW_R_A_SHIFTED_MASK (IW_R_A_UNSHIFTED_MASK << IW_R_A_LSB) 
#define GET_IW_R_A(W) (((W) >> IW_R_A_LSB) & IW_R_A_UNSHIFTED_MASK) 
#define SET_IW_R_A(V) (((V) & IW_R_A_UNSHIFTED_MASK) << IW_R_A_LSB) 

#define IW_R_B_LSB 22 
#define IW_R_B_SIZE 5 
#define IW_R_B_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_R_B_SIZE)) 
#define IW_R_B_SHIFTED_MASK (IW_R_B_UNSHIFTED_MASK << IW_R_B_LSB) 
#define GET_IW_R_B(W) (((W) >> IW_R_B_LSB) & IW_R_B_UNSHIFTED_MASK) 
#define SET_IW_R_B(V) (((V) & IW_R_B_UNSHIFTED_MASK) << IW_R_B_LSB) 

#define IW_R_C_LSB 17 
#define IW_R_C_SIZE 5 
#define IW_R_C_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_R_C_SIZE)) 
#define IW_R_C_SHIFTED_MASK (IW_R_C_UNSHIFTED_MASK << IW_R_C_LSB) 
#define GET_IW_R_C(W) (((W) >> IW_R_C_LSB) & IW_R_C_UNSHIFTED_MASK) 
#define SET_IW_R_C(V) (((V) & IW_R_C_UNSHIFTED_MASK) << IW_R_C_LSB) 

#define IW_R_OPX_LSB 11 
#define IW_R_OPX_SIZE 6 
#define IW_R_OPX_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_R_OPX_SIZE)) 
#define IW_R_OPX_SHIFTED_MASK (IW_R_OPX_UNSHIFTED_MASK << IW_R_OPX_LSB) 
#define GET_IW_R_OPX(W) (((W) >> IW_R_OPX_LSB) & IW_R_OPX_UNSHIFTED_MASK) 
#define SET_IW_R_OPX(V) (((V) & IW_R_OPX_UNSHIFTED_MASK) << IW_R_OPX_LSB) 

#define IW_R_IMM5_LSB 6 
#define IW_R_IMM5_SIZE 5 
#define IW_R_IMM5_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_R_IMM5_SIZE)) 
#define IW_R_IMM5_SHIFTED_MASK (IW_R_IMM5_UNSHIFTED_MASK << IW_R_IMM5_LSB) 
#define GET_IW_R_IMM5(W) (((W) >> IW_R_IMM5_LSB) & IW_R_IMM5_UNSHIFTED_MASK) 
#define SET_IW_R_IMM5(V) (((V) & IW_R_IMM5_UNSHIFTED_MASK) << IW_R_IMM5_LSB) 

#define IW_J_IMM26_LSB 6 
#define IW_J_IMM26_SIZE 26 
#define IW_J_IMM26_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_J_IMM26_SIZE)) 
#define IW_J_IMM26_SHIFTED_MASK (IW_J_IMM26_UNSHIFTED_MASK << IW_J_IMM26_LSB) 
#define GET_IW_J_IMM26(W) (((W) >> IW_J_IMM26_LSB) & IW_J_IMM26_UNSHIFTED_MASK) 
#define SET_IW_J_IMM26(V) (((V) & IW_J_IMM26_UNSHIFTED_MASK) << IW_J_IMM26_LSB) 

#define IW_CUSTOM_A_LSB 27 
#define IW_CUSTOM_A_SIZE 5 
#define IW_CUSTOM_A_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_A_SIZE)) 
#define IW_CUSTOM_A_SHIFTED_MASK (IW_CUSTOM_A_UNSHIFTED_MASK << IW_CUSTOM_A_LSB) 
#define GET_IW_CUSTOM_A(W) (((W) >> IW_CUSTOM_A_LSB) & IW_CUSTOM_A_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_A(V) (((V) & IW_CUSTOM_A_UNSHIFTED_MASK) << IW_CUSTOM_A_LSB) 

#define IW_CUSTOM_B_LSB 22 
#define IW_CUSTOM_B_SIZE 5 
#define IW_CUSTOM_B_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_B_SIZE)) 
#define IW_CUSTOM_B_SHIFTED_MASK (IW_CUSTOM_B_UNSHIFTED_MASK << IW_CUSTOM_B_LSB) 
#define GET_IW_CUSTOM_B(W) (((W) >> IW_CUSTOM_B_LSB) & IW_CUSTOM_B_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_B(V) (((V) & IW_CUSTOM_B_UNSHIFTED_MASK) << IW_CUSTOM_B_LSB) 

#define IW_CUSTOM_C_LSB 17 
#define IW_CUSTOM_C_SIZE 5 
#define IW_CUSTOM_C_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_C_SIZE)) 
#define IW_CUSTOM_C_SHIFTED_MASK (IW_CUSTOM_C_UNSHIFTED_MASK << IW_CUSTOM_C_LSB) 
#define GET_IW_CUSTOM_C(W) (((W) >> IW_CUSTOM_C_LSB) & IW_CUSTOM_C_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_C(V) (((V) & IW_CUSTOM_C_UNSHIFTED_MASK) << IW_CUSTOM_C_LSB) 

#define IW_CUSTOM_READA_LSB 16 
#define IW_CUSTOM_READA_SIZE 1 
#define IW_CUSTOM_READA_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_READA_SIZE)) 
#define IW_CUSTOM_READA_SHIFTED_MASK (IW_CUSTOM_READA_UNSHIFTED_MASK << IW_CUSTOM_READA_LSB) 
#define GET_IW_CUSTOM_READA(W) (((W) >> IW_CUSTOM_READA_LSB) & IW_CUSTOM_READA_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_READA(V) (((V) & IW_CUSTOM_READA_UNSHIFTED_MASK) << IW_CUSTOM_READA_LSB) 

#define IW_CUSTOM_READB_LSB 15 
#define IW_CUSTOM_READB_SIZE 1 
#define IW_CUSTOM_READB_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_READB_SIZE)) 
#define IW_CUSTOM_READB_SHIFTED_MASK (IW_CUSTOM_READB_UNSHIFTED_MASK << IW_CUSTOM_READB_LSB) 
#define GET_IW_CUSTOM_READB(W) (((W) >> IW_CUSTOM_READB_LSB) & IW_CUSTOM_READB_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_READB(V) (((V) & IW_CUSTOM_READB_UNSHIFTED_MASK) << IW_CUSTOM_READB_LSB) 

#define IW_CUSTOM_READC_LSB 14 
#define IW_CUSTOM_READC_SIZE 1 
#define IW_CUSTOM_READC_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_READC_SIZE)) 
#define IW_CUSTOM_READC_SHIFTED_MASK (IW_CUSTOM_READC_UNSHIFTED_MASK << IW_CUSTOM_READC_LSB) 
#define GET_IW_CUSTOM_READC(W) (((W) >> IW_CUSTOM_READC_LSB) & IW_CUSTOM_READC_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_READC(V) (((V) & IW_CUSTOM_READC_UNSHIFTED_MASK) << IW_CUSTOM_READC_LSB) 

#define IW_CUSTOM_N_LSB 6 
#define IW_CUSTOM_N_SIZE 8 
#define IW_CUSTOM_N_UNSHIFTED_MASK (0xffffffffu >> (32 - IW_CUSTOM_N_SIZE)) 
#define IW_CUSTOM_N_SHIFTED_MASK (IW_CUSTOM_N_UNSHIFTED_MASK << IW_CUSTOM_N_LSB) 
#define GET_IW_CUSTOM_N(W) (((W) >> IW_CUSTOM_N_LSB) & IW_CUSTOM_N_UNSHIFTED_MASK) 
#define SET_IW_CUSTOM_N(V) (((V) & IW_CUSTOM_N_UNSHIFTED_MASK) << IW_CUSTOM_N_LSB) 

/* R1 opcodes.  */
#define R1_OP_CALL 0
#define R1_OP_JMPI 1
#define R1_OP_LDBU 3
#define R1_OP_ADDI 4
#define R1_OP_STB 5
#define R1_OP_BR 6
#define R1_OP_LDB 7
#define R1_OP_CMPGEI 8
#define R1_OP_LDHU 11
#define R1_OP_ANDI 12
#define R1_OP_STH 13
#define R1_OP_BGE 14
#define R1_OP_LDH 15
#define R1_OP_CMPLTI 16
#define R1_OP_INITDA 19
#define R1_OP_ORI 20
#define R1_OP_STW 21
#define R1_OP_BLT 22
#define R1_OP_LDW 23
#define R1_OP_CMPNEI 24
#define R1_OP_FLUSHDA 27
#define R1_OP_XORI 28
#define R1_OP_BNE 30
#define R1_OP_CMPEQI 32
#define R1_OP_LDBUIO 35
#define R1_OP_MULI 36
#define R1_OP_STBIO 37
#define R1_OP_BEQ 38
#define R1_OP_LDBIO 39
#define R1_OP_CMPGEUI 40
#define R1_OP_LDHUIO 43
#define R1_OP_ANDHI 44
#define R1_OP_STHIO 45
#define R1_OP_BGEU 46
#define R1_OP_LDHIO 47
#define R1_OP_CMPLTUI 48
#define R1_OP_CUSTOM 50
#define R1_OP_INITD 51
#define R1_OP_ORHI 52
#define R1_OP_STWIO 53
#define R1_OP_BLTU 54
#define R1_OP_LDWIO 55
#define R1_OP_RDPRS 56
#define R1_OP_OPX 58
#define R1_OP_FLUSHD 59
#define R1_OP_XORHI 60

#define R1_OPX_ERET 1
#define R1_OPX_ROLI 2
#define R1_OPX_ROL 3
#define R1_OPX_FLUSHP 4
#define R1_OPX_RET 5
#define R1_OPX_NOR 6
#define R1_OPX_MULXUU 7
#define R1_OPX_CMPGE 8
#define R1_OPX_BRET 9
#define R1_OPX_ROR 11
#define R1_OPX_FLUSHI 12
#define R1_OPX_JMP 13
#define R1_OPX_AND 14
#define R1_OPX_CMPLT 16
#define R1_OPX_SLLI 18
#define R1_OPX_SLL 19
#define R1_OPX_WRPRS 20
#define R1_OPX_OR 22
#define R1_OPX_MULXSU 23
#define R1_OPX_CMPNE 24
#define R1_OPX_SRLI 26
#define R1_OPX_SRL 27
#define R1_OPX_NEXTPC 28
#define R1_OPX_CALLR 29
#define R1_OPX_XOR 30
#define R1_OPX_MULXSS 31
#define R1_OPX_CMPEQ 32
#define R1_OPX_DIVU 36
#define R1_OPX_DIV 37
#define R1_OPX_RDCTL 38
#define R1_OPX_MUL 39
#define R1_OPX_CMPGEU 40
#define R1_OPX_INITI 41
#define R1_OPX_TRAP 45
#define R1_OPX_WRCTL 46
#define R1_OPX_CMPLTU 48
#define R1_OPX_ADD 49
#define R1_OPX_BREAK 52
#define R1_OPX_SYNC 54
#define R1_OPX_SUB 57
#define R1_OPX_SRAI 58
#define R1_OPX_SRA 59

/* Some convenience macros for R1 encodings, for use in instruction tables.
   MATCH_R1_OPX0(NAME) and MASK_R1_OPX0 are used for R-type instructions
   with 3 register operands and constant 0 in the immediate field.
   The general forms are MATCH_R1_OPX(NAME, A, B, C) where the arguments specify
   constant values and MASK_R1_OPX(A, B, C, N) where the arguments are booleans
   that are true if the field should be included in the mask.
 */
#define MATCH_R1_OP(NAME) \
  (SET_IW_R1_OP (R1_OP_##NAME))
#define MASK_R1_OP \
  IW_R1_OP_SHIFTED_MASK

#define MATCH_R1_OPX0(NAME) \
  (SET_IW_R1_OP (R1_OP_OPX) | SET_IW_R_OPX (R1_OPX_##NAME))
#define MASK_R1_OPX0 \
  (IW_R1_OP_SHIFTED_MASK | IW_R_OPX_SHIFTED_MASK | IW_R_IMM5_SHIFTED_MASK)

#define MATCH_R1_OPX(NAME, A, B, C)				\
  (MATCH_R1_OPX0 (NAME) | SET_IW_R_A (A) | SET_IW_R_B (B) | SET_IW_R_C (C))
#define MASK_R1_OPX(A, B, C, N)				\
  (IW_R1_OP_SHIFTED_MASK | IW_R_OPX_SHIFTED_MASK	\
   | (A ? IW_R_A_SHIFTED_MASK : 0)			\
   | (B ? IW_R_B_SHIFTED_MASK : 0)			\
   | (C ? IW_R_C_SHIFTED_MASK : 0)			\
   | (N ? IW_R_IMM5_SHIFTED_MASK : 0))

/* And here's the match/mask macros for the R1 instruction set.  */
#define MATCH_R1_ADD	MATCH_R1_OPX0 (ADD)
#define MASK_R1_ADD	MASK_R1_OPX0
#define MATCH_R1_ADDI	MATCH_R1_OP (ADDI)
#define MASK_R1_ADDI	MASK_R1_OP
#define MATCH_R1_AND	MATCH_R1_OPX0 (AND)
#define MASK_R1_AND	MASK_R1_OPX0
#define MATCH_R1_ANDHI	MATCH_R1_OP (ANDHI)
#define MASK_R1_ANDHI	MASK_R1_OP
#define MATCH_R1_ANDI	MATCH_R1_OP (ANDI)
#define MASK_R1_ANDI	MASK_R1_OP
#define MATCH_R1_BEQ	MATCH_R1_OP (BEQ)
#define MASK_R1_BEQ	MASK_R1_OP
#define MATCH_R1_BGE	MATCH_R1_OP (BGE)
#define MASK_R1_BGE	MASK_R1_OP
#define MATCH_R1_BGEU	MATCH_R1_OP (BGEU)
#define MASK_R1_BGEU	MASK_R1_OP
#define MATCH_R1_BGT	MATCH_R1_OP (BLT)
#define MASK_R1_BGT	MASK_R1_OP
#define MATCH_R1_BGTU	MATCH_R1_OP (BLTU)
#define MASK_R1_BGTU	MASK_R1_OP
#define MATCH_R1_BLE	MATCH_R1_OP (BGE)
#define MASK_R1_BLE	MASK_R1_OP
#define MATCH_R1_BLEU	MATCH_R1_OP (BGEU)
#define MASK_R1_BLEU	MASK_R1_OP
#define MATCH_R1_BLT	MATCH_R1_OP (BLT)
#define MASK_R1_BLT	MASK_R1_OP
#define MATCH_R1_BLTU	MATCH_R1_OP (BLTU)
#define MASK_R1_BLTU	MASK_R1_OP
#define MATCH_R1_BNE	MATCH_R1_OP (BNE)
#define MASK_R1_BNE	MASK_R1_OP
#define MATCH_R1_BR	MATCH_R1_OP (BR)
#define MASK_R1_BR	MASK_R1_OP | IW_I_A_SHIFTED_MASK | IW_I_B_SHIFTED_MASK
#define MATCH_R1_BREAK	MATCH_R1_OPX (BREAK, 0, 0, 0x1e)
#define MASK_R1_BREAK	MASK_R1_OPX (1, 1, 1, 0)
#define MATCH_R1_BRET	MATCH_R1_OPX (BRET, 0x1e, 0, 0)
#define MASK_R1_BRET	MASK_R1_OPX (1, 1, 1, 1)
#define MATCH_R1_CALL	MATCH_R1_OP (CALL)
#define MASK_R1_CALL	MASK_R1_OP
#define MATCH_R1_CALLR	MATCH_R1_OPX (CALLR, 0, 0, 0x1f)
#define MASK_R1_CALLR	MASK_R1_OPX (0, 1, 1, 1)
#define MATCH_R1_CMPEQ	MATCH_R1_OPX0 (CMPEQ)
#define MASK_R1_CMPEQ	MASK_R1_OPX0
#define MATCH_R1_CMPEQI	MATCH_R1_OP (CMPEQI)
#define MASK_R1_CMPEQI	MASK_R1_OP
#define MATCH_R1_CMPGE	MATCH_R1_OPX0 (CMPGE)
#define MASK_R1_CMPGE	MASK_R1_OPX0
#define MATCH_R1_CMPGEI	MATCH_R1_OP (CMPGEI)
#define MASK_R1_CMPGEI	MASK_R1_OP
#define MATCH_R1_CMPGEU	MATCH_R1_OPX0 (CMPGEU)
#define MASK_R1_CMPGEU	MASK_R1_OPX0
#define MATCH_R1_CMPGEUI	MATCH_R1_OP (CMPGEUI)
#define MASK_R1_CMPGEUI	MASK_R1_OP
#define MATCH_R1_CMPGT	MATCH_R1_OPX0 (CMPLT)
#define MASK_R1_CMPGT	MASK_R1_OPX0
#define MATCH_R1_CMPGTI	MATCH_R1_OP (CMPGEI)
#define MASK_R1_CMPGTI	MASK_R1_OP
#define MATCH_R1_CMPGTU	MATCH_R1_OPX0 (CMPLTU)
#define MASK_R1_CMPGTU	MASK_R1_OPX0
#define MATCH_R1_CMPGTUI	MATCH_R1_OP (CMPGEUI)
#define MASK_R1_CMPGTUI	MASK_R1_OP
#define MATCH_R1_CMPLE	MATCH_R1_OPX0 (CMPGE)
#define MASK_R1_CMPLE	MASK_R1_OPX0
#define MATCH_R1_CMPLEI	MATCH_R1_OP (CMPLTI)
#define MASK_R1_CMPLEI	MASK_R1_OP
#define MATCH_R1_CMPLEU	MATCH_R1_OPX0 (CMPGEU)
#define MASK_R1_CMPLEU	MASK_R1_OPX0
#define MATCH_R1_CMPLEUI	MATCH_R1_OP (CMPLTUI)
#define MASK_R1_CMPLEUI	MASK_R1_OP
#define MATCH_R1_CMPLT	MATCH_R1_OPX0 (CMPLT)
#define MASK_R1_CMPLT	MASK_R1_OPX0
#define MATCH_R1_CMPLTI	MATCH_R1_OP (CMPLTI)
#define MASK_R1_CMPLTI	MASK_R1_OP
#define MATCH_R1_CMPLTU	MATCH_R1_OPX0 (CMPLTU)
#define MASK_R1_CMPLTU	MASK_R1_OPX0
#define MATCH_R1_CMPLTUI	MATCH_R1_OP (CMPLTUI)
#define MASK_R1_CMPLTUI	MASK_R1_OP
#define MATCH_R1_CMPNE	MATCH_R1_OPX0 (CMPNE)
#define MASK_R1_CMPNE	MASK_R1_OPX0
#define MATCH_R1_CMPNEI	MATCH_R1_OP (CMPNEI)
#define MASK_R1_CMPNEI	MASK_R1_OP
#define MATCH_R1_CUSTOM	MATCH_R1_OP (CUSTOM)
#define MASK_R1_CUSTOM	MASK_R1_OP
#define MATCH_R1_DIV	MATCH_R1_OPX0 (DIV)
#define MASK_R1_DIV	MASK_R1_OPX0
#define MATCH_R1_DIVU	MATCH_R1_OPX0 (DIVU)
#define MASK_R1_DIVU	MASK_R1_OPX0
#define MATCH_R1_ERET	MATCH_R1_OPX (ERET, 0x1d, 0x1e, 0)
#define MASK_R1_ERET	MASK_R1_OPX (1, 1, 1, 1)
#define MATCH_R1_FLUSHD	MATCH_R1_OP (FLUSHD) | SET_IW_I_B (0)
#define MASK_R1_FLUSHD	MASK_R1_OP | IW_I_B_SHIFTED_MASK
#define MATCH_R1_FLUSHDA	MATCH_R1_OP (FLUSHDA) | SET_IW_I_B (0)
#define MASK_R1_FLUSHDA	MASK_R1_OP | IW_I_B_SHIFTED_MASK
#define MATCH_R1_FLUSHI	MATCH_R1_OPX (FLUSHI, 0, 0, 0)
#define MASK_R1_FLUSHI	MASK_R1_OPX (0, 1, 1, 1)
#define MATCH_R1_FLUSHP	MATCH_R1_OPX (FLUSHP, 0, 0, 0)
#define MASK_R1_FLUSHP	MASK_R1_OPX (1, 1, 1, 1)
#define MATCH_R1_INITD	MATCH_R1_OP (INITD) | SET_IW_I_B (0)
#define MASK_R1_INITD	MASK_R1_OP | IW_I_B_SHIFTED_MASK
#define MATCH_R1_INITDA	MATCH_R1_OP (INITDA) | SET_IW_I_B (0)
#define MASK_R1_INITDA	MASK_R1_OP | IW_I_B_SHIFTED_MASK
#define MATCH_R1_INITI	MATCH_R1_OPX (INITI, 0, 0, 0)
#define MASK_R1_INITI	MASK_R1_OPX (0, 1, 1, 1)
#define MATCH_R1_JMP	MATCH_R1_OPX (JMP, 0, 0, 0)
#define MASK_R1_JMP	MASK_R1_OPX (0, 1, 1, 1)
#define MATCH_R1_JMPI	MATCH_R1_OP (JMPI)
#define MASK_R1_JMPI	MASK_R1_OP
#define MATCH_R1_LDB	MATCH_R1_OP (LDB)
#define MASK_R1_LDB	MASK_R1_OP
#define MATCH_R1_LDBIO	MATCH_R1_OP (LDBIO)
#define MASK_R1_LDBIO	MASK_R1_OP
#define MATCH_R1_LDBU	MATCH_R1_OP (LDBU)
#define MASK_R1_LDBU	MASK_R1_OP
#define MATCH_R1_LDBUIO	MATCH_R1_OP (LDBUIO)
#define MASK_R1_LDBUIO	MASK_R1_OP
#define MATCH_R1_LDH	MATCH_R1_OP (LDH)
#define MASK_R1_LDH	MASK_R1_OP
#define MATCH_R1_LDHIO	MATCH_R1_OP (LDHIO)
#define MASK_R1_LDHIO	MASK_R1_OP
#define MATCH_R1_LDHU	MATCH_R1_OP (LDHU)
#define MASK_R1_LDHU	MASK_R1_OP
#define MATCH_R1_LDHUIO	MATCH_R1_OP (LDHUIO)
#define MASK_R1_LDHUIO	MASK_R1_OP
#define MATCH_R1_LDW	MATCH_R1_OP (LDW)
#define MASK_R1_LDW	MASK_R1_OP
#define MATCH_R1_LDWIO	MATCH_R1_OP (LDWIO)
#define MASK_R1_LDWIO	MASK_R1_OP
#define MATCH_R1_MOV	MATCH_R1_OPX (ADD, 0, 0, 0)
#define MASK_R1_MOV	MASK_R1_OPX (0, 1, 0, 1)
#define MATCH_R1_MOVHI	MATCH_R1_OP (ORHI) | SET_IW_I_A (0)
#define MASK_R1_MOVHI	MASK_R1_OP | IW_I_A_SHIFTED_MASK
#define MATCH_R1_MOVI	MATCH_R1_OP (ADDI) | SET_IW_I_A (0)
#define MASK_R1_MOVI	MASK_R1_OP | IW_I_A_SHIFTED_MASK
#define MATCH_R1_MOVUI	MATCH_R1_OP (ORI) | SET_IW_I_A (0)
#define MASK_R1_MOVUI	MASK_R1_OP | IW_I_A_SHIFTED_MASK
#define MATCH_R1_MUL	MATCH_R1_OPX0 (MUL)
#define MASK_R1_MUL	MASK_R1_OPX0
#define MATCH_R1_MULI	MATCH_R1_OP (MULI)
#define MASK_R1_MULI	MASK_R1_OP
#define MATCH_R1_MULXSS	MATCH_R1_OPX0 (MULXSS)
#define MASK_R1_MULXSS	MASK_R1_OPX0
#define MATCH_R1_MULXSU	MATCH_R1_OPX0 (MULXSU)
#define MASK_R1_MULXSU	MASK_R1_OPX0
#define MATCH_R1_MULXUU	MATCH_R1_OPX0 (MULXUU)
#define MASK_R1_MULXUU	MASK_R1_OPX0
#define MATCH_R1_NEXTPC	MATCH_R1_OPX (NEXTPC, 0, 0, 0)
#define MASK_R1_NEXTPC	MASK_R1_OPX (1, 1, 0, 1)
#define MATCH_R1_NOP	MATCH_R1_OPX (ADD, 0, 0, 0)
#define MASK_R1_NOP	MASK_R1_OPX (1, 1, 1, 1)
#define MATCH_R1_NOR	MATCH_R1_OPX0 (NOR)
#define MASK_R1_NOR	MASK_R1_OPX0
#define MATCH_R1_OR	MATCH_R1_OPX0 (OR)
#define MASK_R1_OR	MASK_R1_OPX0
#define MATCH_R1_ORHI	MATCH_R1_OP (ORHI)
#define MASK_R1_ORHI	MASK_R1_OP
#define MATCH_R1_ORI	MATCH_R1_OP (ORI)
#define MASK_R1_ORI	MASK_R1_OP
#define MATCH_R1_RDCTL	MATCH_R1_OPX (RDCTL, 0, 0, 0)
#define MASK_R1_RDCTL	MASK_R1_OPX (1, 1, 0, 0)
#define MATCH_R1_RDPRS	MATCH_R1_OP (RDPRS)
#define MASK_R1_RDPRS	MASK_R1_OP
#define MATCH_R1_RET	MATCH_R1_OPX (RET, 0x1f, 0, 0)
#define MASK_R1_RET	MASK_R1_OPX (1, 1, 1, 1)
#define MATCH_R1_ROL	MATCH_R1_OPX0 (ROL)
#define MASK_R1_ROL	MASK_R1_OPX0
#define MATCH_R1_ROLI	MATCH_R1_OPX (ROLI, 0, 0, 0)
#define MASK_R1_ROLI	MASK_R1_OPX (0, 1, 0, 0)
#define MATCH_R1_ROR	MATCH_R1_OPX0 (ROR)
#define MASK_R1_ROR	MASK_R1_OPX0
#define MATCH_R1_SLL	MATCH_R1_OPX0 (SLL)
#define MASK_R1_SLL	MASK_R1_OPX0
#define MATCH_R1_SLLI	MATCH_R1_OPX (SLLI, 0, 0, 0)
#define MASK_R1_SLLI	MASK_R1_OPX (0, 1, 0, 0)
#define MATCH_R1_SRA	MATCH_R1_OPX0 (SRA)
#define MASK_R1_SRA	MASK_R1_OPX0
#define MATCH_R1_SRAI	MATCH_R1_OPX (SRAI, 0, 0, 0)
#define MASK_R1_SRAI	MASK_R1_OPX (0, 1, 0, 0)
#define MATCH_R1_SRL	MATCH_R1_OPX0 (SRL)
#define MASK_R1_SRL	MASK_R1_OPX0
#define MATCH_R1_SRLI	MATCH_R1_OPX (SRLI, 0, 0, 0)
#define MASK_R1_SRLI	MASK_R1_OPX (0, 1, 0, 0)
#define MATCH_R1_STB	MATCH_R1_OP (STB)
#define MASK_R1_STB	MASK_R1_OP
#define MATCH_R1_STBIO	MATCH_R1_OP (STBIO)
#define MASK_R1_STBIO	MASK_R1_OP
#define MATCH_R1_STH	MATCH_R1_OP (STH)
#define MASK_R1_STH	MASK_R1_OP
#define MATCH_R1_STHIO	MATCH_R1_OP (STHIO)
#define MASK_R1_STHIO	MASK_R1_OP
#define MATCH_R1_STW	MATCH_R1_OP (STW)
#define MASK_R1_STW	MASK_R1_OP
#define MATCH_R1_STWIO	MATCH_R1_OP (STWIO)
#define MASK_R1_STWIO	MASK_R1_OP
#define MATCH_R1_SUB	MATCH_R1_OPX0 (SUB)
#define MASK_R1_SUB	MASK_R1_OPX0
#define MATCH_R1_SUBI	MATCH_R1_OP (ADDI)
#define MASK_R1_SUBI	MASK_R1_OP
#define MATCH_R1_SYNC	MATCH_R1_OPX (SYNC, 0, 0, 0)
#define MASK_R1_SYNC	MASK_R1_OPX (1, 1, 1, 1)
#define MATCH_R1_TRAP	MATCH_R1_OPX (TRAP, 0, 0, 0x1d)
#define MASK_R1_TRAP	MASK_R1_OPX (1, 1, 1, 0)
#define MATCH_R1_WRCTL	MATCH_R1_OPX (WRCTL, 0, 0, 0)
#define MASK_R1_WRCTL	MASK_R1_OPX (0, 1, 1, 0)
#define MATCH_R1_WRPRS	MATCH_R1_OPX (WRPRS, 0, 0, 0)
#define MASK_R1_WRPRS	MASK_R1_OPX (0, 1, 0, 1)
#define MATCH_R1_XOR	MATCH_R1_OPX0 (XOR)
#define MASK_R1_XOR	MASK_R1_OPX0
#define MATCH_R1_XORHI	MATCH_R1_OP (XORHI)
#define MASK_R1_XORHI	MASK_R1_OP
#define MATCH_R1_XORI	MATCH_R1_OP (XORI)
#define MASK_R1_XORI	MASK_R1_OP

#endif /* _NIOS2R1_H */
