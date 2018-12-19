/*
* Copyright (C) 2018 ETH Zurich and University of Bologna
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __HERO_HERO_BUILTIN_H__
#define __HERO_HERO_BUILTIN_H__

/** @defgroup GCC built-ins for HERO RISC-V ISA extensions
@ingroup groupBuiltins
@{ */

typedef   signed short hero_v2s __attribute__((vector_size (4)));
typedef unsigned short hero_v2u __attribute__((vector_size (4)));

typedef   signed char  hero_v4s __attribute__((vector_size (4)));
typedef unsigned char  hero_v4u __attribute__((vector_size (4)));
#if 0
// /* Packing of scalars into vectors */
// #define __HERO_PACK2(x, y)		__builtin_hero_pack2((signed short)   (x), (signed short)   (y))
// #define __HERO_PACKU2(x, y)		__builtin_hero_pack2((unsigned short) (x), (unsigned short) (y))
// 
// #define __HERO_PACK4(x, y, z, t)		__builtin_hero_pack4((signed char)   (x), (signed char)   (y), (signed char)   (z), (signed char)   (t))
// #define __HERO_PACKU4(x, y, z, t)		__builtin_hero_pack4((unsigned char) (x), (unsigned char) (y), (unsigned char) (z), (unsigned char) (t))
// 
// /* Max */
// #define __HERO_MAX(a, b)         __builtin_hero_maxsi((a), (b))
// 
// #define __HERO_MAX2(x, y) 		__builtin_hero_max2((x), (y))
// #define __HERO_MAX4(x, y) 		__builtin_hero_max4((x), (y))
// 
// #define __HERO_MAXU2(x, y) 		__builtin_hero_maxu2((x), (y))
// #define __HERO_MAXU4(x, y) 		__builtin_hero_maxu4((x), (y))
// 
// /* Min */
// #define __HERO_MIN(x, y) 		__builtin_hero_minsi((x), (y))
// 
// #define __HERO_MIN2(x, y) 		__builtin_hero_min2((x), (y))
// #define __HERO_MIN4(x, y) 		__builtin_hero_min4((x), (y))
// 
// #define __HERO_MINU2(x, y) 		__builtin_hero_minu2((x), (y))
// #define __HERO_MINU4(x, y) 		__builtin_hero_minu4((x), (y))
// 
// /* Clip */
// #define __HERO_CLIP(x, precision) 	__builtin_hero_clip((x), -(1<<(precision)), (1<<precision)-1)
// #define __HERO_CLIP_R(x, bound) 		__builtin_hero_clip_r((x), (bound))
// 
// #define __HERO_CLIPU(x, precision) 	__builtin_hero_clipu((x), 0, (1<<precision)-1)
// #define __HERO_CLIPU_R(x, bound) 		__builtin_hero_clipu_r((x), (bound))
// 
// /* Abs */
// #define __HERO_ABS2(x) 			__builtin_hero_abs2((x))
// #define __HERO_ABS4(x) 			__builtin_hero_abs4((x))
// 
// /* Unary minus */
// #define __HERO_NEG2(x) 			__builtin_hero_neg2((x))
// #define __HERO_NEG4(x) 			__builtin_hero_neg4((x))
// 
// /* Addition */
// #define __HERO_ADD2(x, y) 		__builtin_hero_add2((x), (y))
// #define __HERO_ADD4(x, y) 		__builtin_hero_add4((x), (y))
// 
// /* Substraction */
// #define __HERO_SUB2(x, y) 		__builtin_hero_sub2((x), (y))
// #define __HERO_SUB4(x, y) 		__builtin_hero_sub4((x), (y))
// 
// /* Average */
// #define __HERO_AVG2(x, y) 		__builtin_hero_avg2((x), (y))
// #define __HERO_AVG4(x, y) 		__builtin_hero_avg4((x), (y))
// 
// /* Average unsigned */
// #define __HERO_AVGU2(x, y) 		__builtin_hero_avgu2((x), (y))
// #define __HERO_AVGU4(x, y) 		__builtin_hero_avgu4((x), (y))
// 
// /* Bitwise and */
// #define __HERO_AND2(x, y) 		__builtin_hero_and2((x), (y))
// #define __HERO_AND4(x, y) 		__builtin_hero_and4((x), (y))
// 
// /* Bitwise or */
// #define __HERO_OR2(x, y) 			__builtin_hero_or2((x), (y))
// #define __HERO_OR4(x, y) 			__builtin_hero_or4((x), (y))
// 
// /* Bitwise exor */
// #define __HERO_EXOR2(x, y) 		__builtin_hero_exor2(x, y)
// #define __HERO_EXOR4(x, y) 		__builtin_hero_exor4(x, y)
// 
// /* Logical shift right */
// #define __HERO_SRL2(x, y) 		__builtin_hero_srl2(x, y)
// #define __HERO_SRL4(x, y) 		__builtin_hero_srl4(x, y)
// 
// /* Arithmetic shift right */
// #define __HERO_SRA2(x, y) 		__builtin_hero_sra2(x, y)
// #define __HERO_SRA4(x, y) 		__builtin_hero_sra4(x, y)
// 
// /* Logical shift left */
// #define __HERO_SLL2(x, y) 		__builtin_hero_sll2(x, y)
// #define __HERO_SLL4(x, y) 		__builtin_hero_sll4(x, y)
// 
// /* Mac */
// #define	__HERO_MAC(Acc, x, y)		__builtin_hero_mac((x), (y), (Acc))
// #define	__HERO_MSU(Acc, x, y)		__builtin_hero_msu((x), (y), (Acc))
// 
// #define	__HERO_MACS(Acc, x, y)		__builtin_hero_macs((x), (y), (Acc))
// #define	__HERO_MACHHS(Acc, x, y)		__builtin_hero_machhs((x), (y), (Acc))
// #define	__HERO_MACU(Acc, x, y)		__builtin_hero_macu((x), (y), (Acc))
// #define	__HERO_MACHHU(Acc, x, y)		__builtin_hero_machhu((x), (y), (Acc))
// 
// #define __HERO_MACSN(Acc, x, y, n)	__builtin_hero_macsN((x), (y), (Acc), (n))
// #define __HERO_MACUN(Acc, x, y, n)	__builtin_hero_macuN((x), (y), (Acc), (n))
// #define __HERO_MACSRN(Acc, x, y, n)	__builtin_hero_macsRN((x), (y), (Acc), (n), (1<<((n)-1)))
// #define __HERO_MACURN(Acc, x, y, n)	__builtin_hero_macuRN((x), (y), (Acc), (n), (1<<((n)-1)))
// 
// #define __HERO_MACHHSN(Acc, x, y, n)	__builtin_hero_machhsN((x), (y), (Acc), (n))
// #define __HERO_MACHHUN(Acc, x, y, n)	__builtin_hero_machhuN((x), (y), (Acc), (n))
// #define __HERO_MACHHSRN(Acc, x, y, n)	__builtin_hero_machhsN((x), (y), (Acc), (n), (1<<((n)-1)))
// #define __HERO_MACHHURN(Acc, x, y, n)	__builtin_hero_machhuN((x), (y), (Acc), (n), (1<<((n)-1)))
// 
// /* Multiplications */
// #define __HERO_MULS(x, y)			__builtin_hero_muls((x), (y))
// #define __HERO_MULU(x, y)			__builtin_hero_mulu((x), (y))
// #define __HERO_MULHHS(x, y)		__builtin_hero_mulhhs((x), (y))
// #define __HERO_MULHHU(x, y)		__builtin_hero_mulhhu((x), (y))
// 
// #define __HERO_MULSN(x, y, n)		__builtin_hero_mulsN((x), (y), (n))
// #define __HERO_MULSRN(x, y, n)		__builtin_hero_mulsRN((x), (y), (n), (1<<((n)-1)))
// #define __HERO_MULUN(x, y, n)		__builtin_hero_muluN((x), (y), (n))
// #define __HERO_MULURN(x, y, n)		__builtin_hero_muluRN((x), (y), (n), (1<<((n)-1)))
// 
// #define __HERO_MULHHSN(x, y, n)		__builtin_hero_mulhhsN((x), (y), (n))
// #define __HERO_MULHHSRN(x, y, n)		__builtin_hero_mulhhsRN((x), (y), (n), (1<<((n)-1)))
// #define __HERO_MULHHUN(x, y, n)		__builtin_hero_mulhhuN((x), (y), (n))
// #define __HERO_MULHHURN(x, y, n)		__builtin_hero_mulhhuRN((x), (y), (n), (1<<((n)-1)))
// 
// /* Vectorial product and sum of products */
// #define __HERO_DOTP2(x, y)     		__builtin_hero_dotsp2((x), (y))
// #define __HERO_DOTPU2(x, y)     		__builtin_hero_dotup2((x), (y))
// #define __HERO_DOTPUS2(x, y)    		__builtin_hero_dotusp2((x), (y))
// 
// #define __HERO_DOTPSC2(x, y)     		__builtin_hero_dotspsc2((x), (y))
// #define __HERO_DOTPUSC2(x, y)     	__builtin_hero_dotupsc2((x), (y))
// #define __HERO_DOTPUSSC2(x, y)    	__builtin_hero_dotuspsc2((x), (y))
// 
// #define __HERO_SUMDOTP2(x, y, z)		__builtin_hero_sdotsp2((x), (y), (z))
// #define __HERO_SUMDOTPU2(x, y, z)		__builtin_hero_sdotup2((x), (y), (z))
// #define __HERO_SUMDOTPUS2(x, y, z)	__builtin_hero_sdotusp2((x), (y), (z))
// 
// #define __HERO_SUMDOTPSC2(x, y, z)	__builtin_hero_sdotspsc2((x), (y), (z))
// #define __HERO_SUMDOTPUSC2(x, y, z)	__builtin_hero_sdotupsc2((x), (y), (z))
// #define __HERO_SUMDOTPUSSC2(x, y, z)	__builtin_hero_sdotuspsc2((x), (y), (z))
// 
// #define __HERO_DOTP4(x, y)     		__builtin_hero_dotsp4((x), (y))
// #define __HERO_DOTPU4(x, y)     		__builtin_hero_dotup4((x), (y))
// #define __HERO_DOTPUS4(x, y)    		__builtin_hero_dotusp4((x), (y))
// 
// #define __HERO_DOTPSC4(x, y)     		__builtin_hero_dotspsc4((x), (y))
// #define __HERO_DOTPUSC4(x, y)     	__builtin_hero_dotupsc4((x), (y))
// #define __HERO_DOTPUSSC4(x, y)    	__builtin_hero_dotuspsc4((x), (y))
// 
// #define __HERO_SUMDOTP4(x, y, z)     	__builtin_hero_sdotsp4((x), (y), (z))
// #define __HERO_SUMDOTPU4(x, y, z)     	__builtin_hero_sdotup4((x), (y), (z))
// #define __HERO_SUMDOTPUS4(x, y, z)    	__builtin_hero_sdotusp4((x), (y), (z))
// 
// #define __HERO_SUMDOTPSC4(x, y, z)     	__builtin_hero_sdotspsc4((x), (y), (z))
// #define __HERO_SUMDOTPUSC4(x, y, z)     	__builtin_hero_sdotupsc4((x), (y), (z))
// #define __HERO_SUMDOTPUSSC4(x, y, z)    	__builtin_hero_sdotuspsc4((x), (y), (z))
// 
// /* Position of the most significant bit of x */
// #define __HERO_FL1(x)			__builtin_hero_fl1((x))
// 
// /* Number of sign bits */
// #define __HERO_CLB(x)			__builtin_hero_clb((x))
// 
// /* Bit set */
// #define __HERO_BITSET(x, size, off)               __builtin_hero_bset((x), (((1<<(size))-1)<<(off)))
// #define __HERO_BITSET_R(x, size, off)             __builtin_hero_bset_r((x), ExtInsMaskFast((size), (off)))
// #define __HERO_BITSET_R_SAFE(x, size, off)        __builtin_hero_bset_r((x), ExtInsMaskSafe((size), (off)))
// 
// /* Bit clr */
// #define __HERO_BITCLR(x, size, off)				__builtin_hero_bclr((x), ~(((1<<(size))-1)<<(off)))
// #define __HERO_BITCLR_R(x, size, off)			__builtin_hero_bclr_r((x), ExtInsMaskFast((size), (off)))
// #define __HERO_BITCLR_R_SAFE(x, size, off)		__builtin_hero_bclr_r((x), ExtInsMaskSafe((size), (off)))
// 
// /* Bit Extraction */
// #define __HERO_BITEXTRACT(x, size, off)			__builtin_hero_bextract((x), (size), (off))
// #define __HERO_BITEXTRACTU(x, size, off)			__builtin_hero_bextractu((x), (size), (off))
// 
// #define __HERO_BITEXTRACT_R(x, size, off)		__builtin_hero_bextract_r((x), ExtInsMaskFast((size), (off)))
// #define __HERO_BITEXTRACTU_R(x, size, off)		__builtin_hero_bextractu_r((x), ExtInsMaskFast((size), (off)))
// 
// #define __HERO_BITEXTRACT_R_SAFE(x, size, off)	__builtin_hero_bextract_r((x), ExtInsMaskSafe((size), (off)))
// #define __HERO_BITEXTRACTU_R_SAFE(x, size, off)	__builtin_hero_bextractu_r((x), ExtInsMaskSafe((size), (off)))
// 
// /* Bit insertion */
// #define __HERO_BITINSERT(dst, src, size, off)			__builtin_hero_binsert((dst), ~(((1<<(size))-1)<<(off)), (src), (((1<<(size))-1)<<(off)), (off))
// #define __HERO_BITINSERT_R(dst, src, size, off)			__builtin_hero_binsert_r((dst), (src), ExtInsMaskFast((size), (off)))
// #define __HERO_BITINSERT_R_SAFE(dst, src, size, off)		__builtin_hero_binsert_r((dst), (src), ExtInsMaskSafe((size), (off)))
// 
// /* 1 bit rotation to the right, 32 bits input */
// #define __HERO_ROTR(x,y)									__builtin_hero_rotr((x),(y))
// 
// /* Add with normalization */
// #define __HERO_ADDNORMU(x, y, scale)				__builtin_hero_adduN((x), (y), (scale))
// #define __HERO_ADDNORMU_REG(x, y, scale)			__builtin_hero_adduN_r((x), (y), (scale))
// #define __HERO_ADDNORM(x, y, scale)				__builtin_hero_addN((x), (y), (scale))
// #define __HERO_ADDNORM_REG(x, y, scale)			__builtin_hero_addN_r((x), (y), (scale))
// 
// /* Add with normalization and rounding */
// #define __HERO_ADDROUNDNORMU(x, y, scale)		__builtin_hero_adduRN((x), (y), (scale), (1<<((scale)-1)))
// #define __HERO_ADDROUNDNORMU_REG(x, y, scale)	__builtin_hero_adduRN_r((x), (y), (scale))
// #define __HERO_ADDROUNDNORM(x, y, scale)			__builtin_hero_addRN((x), (y), (scale), (1<<((scale)-1)))
// #define __HERO_ADDROUNDNORM_REG(x, y, scale)		__builtin_hero_addRN_r((x), (y), (scale))
// 
// /* Sub with normalization */
// #define __HERO_SUBNORMU(x, y, scale)				__builtin_hero_subuN((x), (y), (scale))
// #define __HERO_SUBNORMU_REG(x, y, scale)			__builtin_hero_subuN_r((x), (y), (scale))
// #define __HERO_SUBNORM(x, y, scale)				__builtin_hero_subN((x), (y), (scale))
// #define __HERO_SUBNORM_REG(x, y, scale)			__builtin_hero_subN_r((x), (y), (scale))
// 
// /* Sub with normalization and rounding */
// #define __HERO_SUBROUNDNORMU(x, y, scale)		__builtin_hero_subuRN((x), (y), (scale), (1<<((scale)-1)))
// #define __HERO_SUBROUNDNORMU_REG(x, y, scale)	__builtin_hero_subuRN_r((x), (y), (scale))
// #define __HERO_SUBROUNDNORM(x, y, scale)			__builtin_hero_subRN((x), (y), (scale), (1<<((scale)-1)))
// #define __HERO_SUBROUNDNORM_REG(x, y, scale)		__builtin_hero_subRN_r((x), (y), (scale))
// 
// /* Normalization and rounding */
// #define __HERO_ROUNDNORMU(x, scale)				__builtin_hero_adduRN((x), 0, (scale), (1<<((scale)-1)))
// #define __HERO_ROUNDNORMU_REG(x, scale)		__builtin_hero_adduRN_r((x), 0, (scale))
// #define __HERO_ROUNDNORM(x, scale)		__builtin_hero_addRN((x), 0, (scale), (1<<((scale)-1)))
// #define __HERO_ROUNDNORM_REG(x, scale)		__builtin_hero_addRN_r((x), 0, (scale))
// 
// #define __HERO_COREID()					__builtin_hero_CoreId()
// #define __HERO_CLUSTERID()				__builtin_hero_ClusterId()
// #define __HERO_NCORE()					__builtin_hero_CoreCount()
// #define __HERO_ISFC()					__builtin_hero_IsFc()
// 
// #define __HERO_SPRWRITE(x, y)				__builtin_hero_spr_write(x, y)
// #define __HERO_SPRREAD(x)					__builtin_hero_spr_read(x)
// #define __HERO_SPRREAD_VOL(x)				__builtin_hero_spr_read_vol(x)
// 
// #define __HERO_SPRBITSET(spr, off)			__builtin_hero_spr_bit_set((spr), (off))
// #define __HERO_SPRBITCLR(spr, off)			__builtin_hero_spr_bit_clr((spr), (off))
// 
// #define __HERO_SPRREADTHENWRITE(spr, x)			__builtin_hero_read_then_spr_write((spr), (x))
// #define __HERO_SPRREADTHENBITSET(spr, off)		__builtin_hero_read_then_spr_bit_set((spr), (off))
// #define __HERO_SPRREADTHENBITCLR(spr, off)		__builtin_hero_read_then_spr_bit_clr((spr), (off))
// 
// #define __HERO_READ_BASE_OFF(base, off)           	__builtin_hero_read_base_off((base), (off))
// #define __HERO_WRITE_BASE_OFF(base, off, val)     	__builtin_hero_write_base_off((base), (off), (val))
// 
// #define __HERO_READ_BASE_OFF_VOL(base, off)       	__builtin_hero_OffsetedRead((base), (off))
// #define __HERO_READ_BASE_OFF_HALF_VOL(base, off)  	__builtin_hero_OffsetedReadHalf((base), (off))
// #define __HERO_READ_BASE_OFF_BYTE_VOL(base, off)  	__builtin_hero_OffsetedReadByte((base), (off))
// 
// #define __HERO_WRITE_BASE_OFF_VOL(x, base, off)       	__builtin_hero_OffsetedWrite((x), (base), (off))
// #define __HERO_WRITE_BASE_OFF_HALF_VOL(x, base, off)  	__builtin_hero_OffsetedWriteHalf((x), (base), (off))
// #define __HERO_WRITE_BASE_OFF_BYTE_VOL(x, base, off)  	__builtin_hero_OffsetedWriteByte((x), (base), (off))
// 
// /* Utilities, Target independant */
// #define FIX2FP(Val, Precision)						((float) (Val) / (float) (1<<(Precision)))
// #define FP2FIXR(Val, Precision)						((int)((Val)*((1 << (Precision))-1) + 0.5))
// #define FP2FIX(Val, Precision)						((int)((Val)*((1 << (Precision))-1)))


/** @defgroup BitManip BitManipulation
@{ */

/*
Bit manipulation builtins
*/

/** @brief Bit position of the last bit set in x starting from MSB.

Bit position of the last bit set in x starting from MSB. If bit 31 is set, returns 31. If only bit 0 is set returns 0.
If x is 0, returns 32.

Equivalent to pure gcc sequence (31 - __builtin_hero_clz((x)))
*/
unsigned int __builtin_hero_fl1(
	int x	/**< Argument */
	);
/** @brief Count leading bits of x

Count leading bits of x. This is the number of consecutive 1’s or 0’s from MSB.  If x0 is 0, returns 0.

Equivalent to pure gcc sequence __builtin_hero_clrsb((x))
*/
unsigned int __builtin_hero_clb(
	int x	/**< Argument */
	);
/** @brief Count number of bits at 1 in x.

Count number of bits at 1 in x.

Equivalent to pure gcc sequence __builtin_hero_popcount((x))
*/
unsigned int __builtin_hero_cnt(
	int x	/**< Argument */
	);
/** @brief Clears x's bit not at 1 in mask, mask = ~((2^size -1)<<pos), mask is immediate.

Clears x's bit not at 1 in mask, mask = ~((2^size -1)<<pos), mask is immediate.

*/
int __builtin_hero_bclr (
	int x,			/**< Argument */
	unsigned int mask	/**< mask = ~((2^size -1)<<pos), immediate */
	);
/** @brief Clears size x's bit starting from off, mask[9..5] = size-1, mask[4..0] = off.

Clears size x's bit starting from off, mask[9..5] = size-1, mask[4..0] = off.

*/
int __builtin_hero_bclr_r(
	int x,			/**< Argument */
	unsigned int mask	/**< mask[9..5] = size-1, mask[4..0] = off */
	);

/** @brief Sets x's at 1 in mask, mask = (2^size -1)<<pos, mask is immediate.

Sets x's at 1 in mask, mask = (2^size -1)<<pos, mask is immedidate.

*/
int __builtin_hero_bset (
	int x,			/**< Argument */
	unsigned int mask	/**< mask = (2^size -1)<<pos, mask is immediate. */
	);
/** @brief Sets size x's starting at off, mask = (2^size -1)<<pos

Sets size x's starting at off, mask = (2^size -1)<<pos

*/
int __builtin_hero_bset_r(
	int x,			/**< Argument */
	unsigned int mask	/**< mask[9..5] = size-1, mask[4..0] = off */
	);

/** @brief Extracts size bits from x starting at offset off, sign extended. size and off immediates and in [0..31], (off+size)<=32

Extracts size bits from x starting at offset off, sign extended. size and off immediates and in [0..31], (off+size)<=32

*/
int __builtin_hero_bextract (
	int x,			/**< Argument */
	unsigned int size,	/**< Extract size bits from x */
	unsigned int off	/**< Extract from x at position off, in [0..31] */
	);
/** @brief Extracts size bits from x starting at offset off, size-1 in mask[9..5], off in mask[4..0], sign extended.

Extracts size bits from x starting at offset off, size-1 in mask[9..5], off in mask[4..0], sign extended.

*/
int __builtin_hero_bextract_r(
	int x,			/**< Argument */
	unsigned int mask	/**< mask[9..5]: extract size, mask[4..0]: extract offset */
	);

/** @brief Extracts size bits from x starting at offset off, zero extended. size and off immediates and in [0..31], (off+size)<=32

Extracts size bits from x starting at offset off, zero extended. size and off immediates and in [0..31], (off+size)<=32

*/
unsigned int __builtin_hero_bextractu (
	int x,			/**< Argument */
	unsigned int size,	/**< Extract size bits from x */
	unsigned int off	/**< Extract from x at position off, in [0..31] */
	);
/** @brief Extracts size bits from x starting at offset off, size-1 in mask[9..5], off in mask[4..0], zero extended.

Extracts size bits from x starting at offset off, size-1 in mask[9..5], off in mask[4..0], zero extended.

*/
unsigned int __builtin_hero_bextractu_r(
	int x,			/**< Argument */
	unsigned int mask	/**< mask[9..5]: extract size, mask[4..0]: extract offset */
	);

/** @brief Inserts first size bits of src into dst at offset off. size and off given by 2 immediate masks: not_mask_imm, mask_imm.

Inserts first size bits of src into dst at offset off. size and off given by 2 immediate masks: not_mask_imm, mask_imm.
Returns dst after insertion of src.

        Given size and off:
                not_mask_imm = ~((2^size-1)<<off)
                mask_imm = ((2^size-1)<<off)
        Warning: if mask_imm != ~not_mask_imm an error wil be generated

*/
int __builtin_hero_binsert(
	int dst,			/**< Insert into dst */
	unsigned int not_mask_imm,	/**< Not extraction mask: ~((2^size-1)<<off) */
	int src,			/**< Source. First size bits of src are inserted into dst at position off */
	unsigned int mask_imm,		/**< Extraction mask: (2^size-1)<<off */
	unsigned int off		/**< offset, in [0..31] */
	);
/** @brief Inserts first size bits of src into dst at offset off. size-1 in mask_extract_insert[9..5], off in mask_extract_insert[4..0]

Inserts first size bits of src into dst at offset off. size-1 in mask_extract_insert[9..5], off in mask_extract_insert[4..0].xi
Returns dst after insertion of src.

*/
int __builtin_hero_binsert_r(
	int dst,				/**< Destination */
	int src,				/**< Source. First size bits of src are inserted into dst at position off */
	unsigned int mask
	);

/** @brief One bit right rotation

One bit right rotation

*/
int __builtin_hero_rotr(
	int x,	/**< 1st Argument */
    int y	/**< 2nd Argument */
	);

/** @} */ // End of bit manipulation
/*
Arithmetic
*/


/** @defgroup Arith ArithmeticOperations
@{ */

/* Monadic */
/** @brief Absolute value

Absolute value
*/
unsigned int __builtin_hero_abs(
	int x	/**< Argument */
	);

/* Diadid */

/** @brief Maximum of two signed integers

aximum of two signed integers
*/
int __builtin_hero_maxsi(
	int x,	/**< 1st Argument */
	int y	/**< 2nd Argument */
	);
/** @brief Minimum of two signed integers

Minimum of two signed integers
*/
int __builtin_hero_minsi(
	int x,	/**< 1st Argument */
	int y	/**< 2nd Argument */
	);
/** @brief Unsigned maximum of two integers

Unsigned maximum of two integers
*/
unsigned int __builtin_hero_maxusi(
	unsigned int x,	/**< 1st Argument */
	unsigned int y	/**< 2bd Argument */
	);
/** @brief Unsigned minimum of two integers

Unsigned minimum of two integers
*/
unsigned int __builtin_hero_minusi(
	unsigned int x,	/**< 1st Argument */
	unsigned int y	/**< 2bd Argument */
	);

/** @brief Fixed point addition followed by normalization, normalization is an immediate [0..31]

Fixed point addition followed by normalization, normalization is an immediate [0..31].

returns (x+y)>>n

*/
int __builtin_hero_addN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate, arithmetic shift right */
	);

/** @brief Fixed point addition followed by normalization

Fixed point addition followed by normalization

returns (x+y)>>n

*/
int __builtin_hero_addN_r(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, arithmetic shift right */
	);

/** @brief Fixed point addition followed by rounding and then by normalization, normalization is an immediate [0..31]

Fixed point addition followed by rounding and then by normalization, normalization is an immediate [0..31]

Returns ((x + y) + r) >> n; r = 2^(n-1)

*/
int __builtin_hero_addRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r 	/**< Rounding factor, = 2^(n-1) */
	);

/** @brief Fixed point addition followed by rounding and then by normalization.

Fixed point addition followed by rounding and then by normalization.

Returns ((x + y) + 2^(n-1)) >> n

*/
int __builtin_hero_addRN_r(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization and rounding factor */
	);

/** @brief Fixed point unsigned addition followed by normalization, normalization is an immediate [0..31]

Fixed point unsigned addition followed by normalization, normalization is an immediate [0..31]

Returns (x + y) >> n

*/
unsigned int __builtin_hero_adduN(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate in [0..31] */
	);

/** @brief Fixed point unsigned addition followed by normalization, normalization is in [0..31]

Fixed point unsigned addition followed by normalization, normalization is in [0..31]

Returns ((x + y) + 2^(n-1)) >> n

*/
unsigned int __builtin_hero_adduN_r(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization factor */
	);

/** @brief Fixed point unsigned addition followed by rounding and then by normalization, normalization is an immediate in [0..31]

Fixed point unsigned addition followed by rounding and then by normalization, normalization is an immediate in [0..31]

Returns ((x + y) + r) >> n; r = 2^(n-1)

*/
unsigned int __builtin_hero_adduRN(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r	/**< Rounding factor, = 2^(n-1) */
	);

/** @brief Fixed point unsigned addition followed by rounding and then by normalization, normalization is in [0..31]

Fixed point unsigned addition followed by rounding and then by normalization, normalization is in [0..31]

Returns ((x + y) + 2^(n-1)) >> n

*/
unsigned int __builtin_hero_adduRN_r(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization and rounding factor */
	);


/** @brief Fixed point substraction followed by normalization, normalization is an immediate [0..31]

Fixed point substraction followed by normalization, normalization is an immediate [0..31].

returns (x-y)>>n

*/
int __builtin_hero_subN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate in [0..31], arithmetic shift right */
	);

/** @brief Fixed point substraction followed by normalization

Fixed point substraction followed by normalization

returns (x-y)>>n

*/
int __builtin_hero_subN_r(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, arithmetic shift right */
	);


/** @brief Fixed point substraction followed by rounding and then by normalization, normalization is an immediate [0..31]

Fixed point substraction followed by rounding and then by normalization, normalization is an immediate [0..31]

Returns ((x - y) + r) >> n; r = 2^(n-1)

*/
int __builtin_hero_subRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r	/**< Rounding factor, = 2^(n-1) */
	);

/** @brief Fixed point substraction followed by rounding and then by normalization.

Fixed point substraction followed by rounding and then by normalization.

Returns ((x - y) + 2^(n-1)) >> n

*/
int __builtin_hero_subRN_r(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization and rounding factor */
	);


/** @brief Fixed point unsigned substraction followed by normalization, normalization is an immediate [0..31]

Fixed point unsigned substraction followed by normalization, normalization is an immediate [0..31]

Returns (x - y) >> n

*/
unsigned int __builtin_hero_subuN(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization factor */
	);

/** @brief Fixed point unsigned substraction followed by normalization.

Fixed point unsigned substraction followed by normalization.

Returns (x - y) >> n

*/
unsigned int __builtin_hero_subuN_r(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization factor */
	);



/** @brief Fixed point unsigned substration followed by rounding and then by normalization, normalization is an immediate in [0..31]

Fixed point unsigned substration followed by rounding and then by normalization, normalization is an immediate in [0..31]

Returns: ((x - y) + r) >> n; r = 2^(n-1)

*/
unsigned int __builtin_hero_subuRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate value in [0..31] */
	unsigned int r	/**< Rounding factor, should be equal to 2^(n-1) */
	);

/** @brief Fixed point unsigned substration followed by rounding and then by normalization.

Fixed point unsigned substration followed by rounding and then by normalization.

Returns: ((x - y) + r) >> n; r = 2^(n-1)

*/
unsigned int __builtin_hero_subuRN_r(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization and rounding factor */
	);

/** @brief LSP short int by LSP short int into int multiplication

LSP short int by LSP short int into int multiplication

Returns (((short int) (x) * (short int) (y)))

*/
int __builtin_hero_muls(
	int x,	/**< 1st Argument */
	int y	/**< 2nd Argument */
	);

/** @brief LSP short int by LSP short int into int multiplication followed by normalization (immediate value)

LSP short int by LSP short int into int multiplication followed by normalization (immediate value)

Returns ((((short int) (x) * (short int) (y))) >> n)

*/
int __builtin_hero_mulsN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate value in [0..31] */
	);


/** @brief LSP short int by LSP short int into int multiplication followed by rounding and then normalization (immediate value)

LSP short int by LSP short int into int multiplication followed by rounding and then normalization (immediate value)

Returns ((((short int) (x) * (short int) (y)) + r; r = (1<<((n)-1)))>>(n)

*/
int __builtin_hero_mulsRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate value in [0..31] */
	unsigned int r	/**< Rounding factor, must be equal to 2^(n-1) */
	);

/** @brief MSP Short int by MSP short int into int multiplication

MSP short int by MSP short int into int multiplication

Returns  (((short int) ((x)>>16) * (short int) ((y)>>16)))

*/
int __builtin_hero_mulhhs(
	int x,	/**< 1st Argument */
	int y	/**< 2nd Argument */
	);

/** @brief MSP short int by MSP short int into int multiplication followed by normalization (immediate value)

MSP short int by MSP short int into int multiplication followed by normalization (immediate value)

Returns ((((short int) (x) * (short int) (y))) >> n)

*/
int __builtin_hero_mulhhsN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate value in [0..31] */
	);


/** @brief MSP short int by MSP short int into int multiplication followed by rounding and then normalization (immediate value)

MSP short int by MSP short int into int multiplication followed by rounding and then normalization (immediate value)

Returns ((((short int) (x) * (short int) (y)) + r); r = (1<<((n)-1)))>>(n)

*/
int __builtin_hero_mulhhsRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate value in [0..31] */
	unsigned int r	/**< Rounding factor, must be equal to 2^(n-1) */
	);

/** @brief LSP short int by LSP short int into int unsigned multiplication

LSP short int by LSP short int into unsigned int multiplication

Returns (((unsigned short int) (x) * (unsigned short int) (y)))

*/
int __builtin_hero_mulu(
	unsigned int x,	/**< 1st Argument */
	unsigned int y	/**< 2nd Argument */
	);

/** @brief LSP short int by LSP short int into int unsigned multiplication followed by normalization (immediate value)

LSP short int by LSP short int into int unsigned multiplication followed by normalization (immediate value)

Returns ((((unsigned short int) (x) * (unsigned short int) (y))) >> n)

*/
int __builtin_hero_muluN(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate value in [0..31] */
	);


/** @brief LSP short int by LSP short int into int unsigned multiplication followed by rounding and then normalization (immediate value)

LSP short int by LSP short int into int unsigned multiplication followed by rounding and then normalization (immediate value)

Returns ((((unsigned short int) (x) * (unsigned short int) (y)) + r)>>(n)); r = 2^(n-1)

*/
int __builtin_hero_muluRN(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n,	/**< Normalization factor, immediate value in [0..31]. */
	unsigned int r  /**< Rounding factor, must be equal to 2^(n-1) */
	);

/** @brief MSP Short int by MSP short int into int unsigned multiplication

MSP short int by MSP short int into int unsigned multiplication

Returns  (((unsigned short int) ((x)>>16) * (unsigned short int) ((y)>>16)))

*/
int __builtin_hero_mulhhu(
	unsigned int x,	/**< 1st Argument */
	unsigned int y	/**< 2nd Argument */
	);

/** @brief MSP short int by MSP short int into int unsigned multiplication followed by normalization (immediate value)

MSP short int by MSP short int into int unsigned multiplication followed by normalization (immediate value)

Returns ((((unsigned short int) (x) * (unsigned short int) (y))) >> n)

*/
int __builtin_hero_mulhhuN(
	unsigned int x,	/**< 1st Argument */
	unsigned int y,	/**< 2nd Argument */
	unsigned int n	/**< Normalization factor, immediate value in [0..31] */
	);


/** @brief MSP short int by MSP short int into int unsigned multiplication followed by rounding and then normalization (immediate value)

MSP short int by MSP short int into int unsigned multiplication followed by rounding and then normalization (immediate value)

Returns ((((unsigned short int) (x) * (unsigned short int) (y)) + r)>>(n)); r = 2^(n-1)

*/
unsigned int __builtin_hero_mulhhuRN(
	short int x,		/**< 1st Argument */
	short int y,		/**< 1st Argument */
	unsigned int n,		/**< Normalization factor, immediate value in [0..31] */
	unsigned int r		/**< Rounding factor, must be equal to 2^(n-1) */
	);


/* Triadic */

/** @brief Multiply accumulate, int operands

Multiply accumulate, int operands

Returns Acc + x*y

*/
int __builtin_hero_mac(
	int x,	/**< 1st Argument */
	int y,	/**< 2nd Argument */
	int Acc	/**< Accumulator */
	);
/** @brief Multiply MSP short int by MSP short int into int and Accumulate

Multiply MSP short int by MSP short int into int and Accumulate

Returns (Acc + ((short int) (x>>16) * (short int) (y>>16)))

*/
int __builtin_hero_machhs(
	int x,	/**< 1st Argument */
	int y,	/**< 2nd Argument */
	int Acc	/**< Accumulator */
	);

/** @brief unsigned multiply MSP short int by MSP short int into int and Accumulate

unsigned multiply MSP short int by MSP short int into int and Accumulate

Returns (Acc + ((unsigned short int) (x>>16) * (unsigned short int) (y>>16)))

*/
int __builtin_hero_machhu(
	int x,	/**< 1st Argument */
	int y,	/**< 2nd Argument */
	int Acc	/**< Accumulator */
	);

/** @brief Multiply substract, int operands

Multiply substract, int operands

Returns Acc - x*y

*/
int __builtin_hero_msu(
	int x,	/**< 1st Argument */
	int y,	/**< 2nd Argument */
	int Acc	/**< Accumulator */
	);


/** @brief Multiply LSP short int by LSP short int into int and Accumulate

Multiply LSP short int by LSP short int into int and Accumulate

Returns (Acc + ((short int) x * (short int) y))

*/
int __builtin_hero_macs(
	int x,	/**< 1st Argument */
	int y,	/**< 2nd Argument */
	int Acc	/**< Accumulator */
	);


/** @brief Unsigned multiply LSP short int by LSP short int into int and Accumulate

Unsigned multiply LSP short int by LSP short int into int and Accumulate

Returns (Acc + ((unsigned short int) x * (unsigned short int) y))

*/
unsigned int __builtin_hero_macu(
	int x,	/**< 1st Argument */
	int y,	/**< 2nd Argument */
	int Acc	/**< Accumulator */
	);

/** @brief Multiply LSP short int by LSP short int into int and Accumulate then normalization

Multiply LSP short int by LSP short int into int and Accumulate then normalization

Returns (Acc + ((short int) x * (short int) y)) >> n

*/
int __builtin_hero_macsN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n	/**< Normalization factor, immediate in [0..31] */
	);

/** @brief Unsigned multiply LSP short int by LSP short int into int and Accumulate then normalization

Unsigned multiply LSP short int by LSP short int into int and Accumulate then normalization

Returns (Acc + ((unsigned short int) x * (unsigned short int) y)) >> n

*/
unsigned int __builtin_hero_macuN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n	/**< Normalization factor, immediate in [0..31] */
	);

/** @brief Multiply LSP short int by LSP short int into int and Accumulate then rounding followed by normalization

Multiply LSP short int by LSP short int into int and Accumulate then rounding followed by normalization

Returns ((Acc + ((short int) x * (short int) y)) + r) >> n; r = 2^(n-1)

*/
int __builtin_hero_macsRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r	/**< Rounding factor, must be equal to 2^(n-1) */
	);

/** @brief Unsigned multiply LSP short int by LSP short int into int and Accumulate then rounding followed by normalization

Unsigned multiply LSP short int by LSP short int into int and Accumulate then rounding followed by normalization

Returns ((Acc + ((unsigned short int) x * (unsigned short int) y)) + r) >> n; r = 2^(n-1)

*/
unsigned int __builtin_hero_macuRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r	/**< Rounding factor, must be equal to 2^(n-1) */
	);

/** @brief Multiply MSP short int by MSP short int into int and Accumulate then rounding followed by normalization

Multiply MSP short int by MSP short int into int and Accumulate then rounding followed by normalization

Returns ((Acc + ((short int) (x>>16) * (short int) (y>>16))) + r) >> n; r = 2^(n-1)

*/
int __builtin_hero_machhsN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n	/**< Normalization factor, immediate in [0..31] */
	);

/** @brief Unsigned multiply MSP short int by MSP short int into int and Accumulate then normalization

Unsigned multiply MSP short int by MSP short int into int and Accumulate then normalization

Returns (Acc + ((unsigned short int) (x>>16) * (unsigned short int) (y>>16))) >> n

*/
unsigned int __builtin_hero_machhuN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n	/**< Normalization factor, immediate in [0..31] */
	);

/** @brief Multiply MSP short int by MSP short int into int and Accumulate then rounding followed by normalization

Multiply MSP short int by MSP short int into int and Accumulate then rounding followed by normalization

Returns ((Acc + ((short int) (x>>16) * (short int) (y>>16))) + r) >> n; r = 2^(n-1)

*/
int __builtin_hero_machhsRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r	/**< Rounding factor, must be equal to 2^(n-1) */
	);

/** @brief Unsigned multiply MSP short int by MSP short int into int and Accumulate then rounding followed by normalization

Unsigned multiply MSP short int by MSP short int into int and Accumulate then rounding followed by normalization

Returns ((Acc + ((unsigned short int) (x>>16) * (unsigned short int) (y>>16))) + r) >> n; r = 2^(n-1)

*/
unsigned int __builtin_hero_machhuRN(
	int x,		/**< 1st Argument */
	int y,		/**< 2nd Argument */
	int Acc,	/**< Accumulator */
	unsigned int n,	/**< Normalization factor, immediate in [0..31] */
	unsigned int r	/**< Rounding factor, must be equal to 2^(n-1) */
	);

/* Clipping */

/** @brief Clips input to [lb=-2^Precision .. ub=2^Precision-1], lb, ub immediates.

Clips input to [lb=-2^precision .. ub=2^precision-1], lb, ub immediates.

Returns: ((x)<(-(1<<(precision)))?(-(1<<(precision))):(((x)>((1<<(precision))-1))?((1<<(precision))-1):(x)))

*/
int __builtin_hero_clip(
	int x,	/**< Argument */
	int lb,	/**< Lower bound, Immediate: -2^precision     */
	int ub	/**< Upper bound, Immediate:  2^precision - 1 */
	);

/** @brief Clips input x to [-bound-1 .. bound]

Clips input x to [-bound-1 .. bound]

Returns (((x)<=-((bound)+1))?(-((bound)+1)):(((x)>=(bound))?(bound):(x)))

*/
int __builtin_hero_clip_r(
	int x,		/**< Argument */
	int bound	/**< Clipping bound: [-bound-1 .. bound] */
	);

/** @brief Clips input to [lb=0 .. ub=2^Precision-1], lb, ub immediates.

Clips input to [lb=0 .. ub=2^precision-1], lb, ub immediates.

Returns: ((x)<0)?0:(((x)>((1<<(precision))-1))?((1<<(precision))-1):(x))

*/
unsigned int __builtin_hero_clipu(
	int x,	/**< Argument */
	int lb,	/**< Lower bound, must be equal to 0 */
	int ub	/**< Upper bound, Immediate:  2^precision - 1 */
	);

/** @brief Clips input x to [0 .. bound]

Clips input x to [0 .. bound]

Returns (((x)<=0)?(0):(((x)>=(bound))?(bound):(x)))

*/
unsigned int __builtin_hero_clipu_r(
	int x,		/**< Argument */
	int bound	/**< Clipping bound: [0 .. bound] */
	);
/** @} */ // End of Arith

/** @defgroup Simd2and4 SIMD2_4_Arithmetic
@{ */

/* Simd 2 and 4 */

/* Simd pack */
/** @brief Pack 2 short int into a vector

Pack 2 short int into a vector

Returns ((hero_v2s) {(signed short)   (x), (signed short)   (y)}). gcc vector notation.

*/
hero_v2s __builtin_hero_pack2(
	short int x,	/**< Argument going to vect[0] */
	short int y	/**< Argument going to vect[1] */
	);

/** @brief Pack 4 bytes into a vector

Pack 4 bytes into a vector

Returns ((hero_v4s) {(signed char)   (x), (signed char)   (y), (signed char)   (z), (signed char)   (t)}). gcc vector notation.

*/
hero_v4s __builtin_hero_pack4(
	char x,	/**< Argument going to Vect[0] */
	char y,	/**< Argument going to Vect[1] */
	char z,	/**< Argument going to Vect[2] */
	char t	/**< Argument going to Vect[3] */
	);

/* Simd shuffle */
/** @brief Permutes vector elements of x according to positions given in mask (a vector).

Permutes vector elements of x according to positions given in mask (a vector).

Constructs a permutation of elements from input x vector and return a vector of the same type as the input vector.
The mask is an integral vector with the same width (W) and element count (N) as the output vector.

The elements of the input vector are numbered in memory ordering beginning at 0. The elements of mask are considered modulo N.

Available macros:

	__builtin_hero_shuffle(x, mask)
*/
hero_v2s __builtin_hero_shuffleh(
	hero_v2s x,		/**< A vector of 2 short ints */
	hero_v2s mask	/**<  A vector of 2 shorts, member i, in [0..1], states that x[mask[i]] should be the ith member in the ouput vector */
	);

/** @brief Permutes vector elements of x according to positions given in mask (a vector).

Permutes vector elements of x according to positions given in mask (a vector).

Constructs a permutation of elements from input x vector and return a vector of the same type as the input vector.
The mask is an integral vector with the same width (W) and element count (N) as the output vector.

The elements of the input vector are numbered in memory ordering beginning at 0. The elements of mask are considered modulo N.

Available macros:

	__builtin_hero_shuffle(x, mask)
*/
hero_v4s __builtin_hero_shuffleb(
	hero_v4s x,		/**< A vector of 4 bytes */
	hero_v4s mask	/**< A vector of 4 bytes, member i, in [0..3], states that x[mask[i]] should be the ith member in the ouput vector */
	);

/** @brief Picks 2 elements from vectors (x, y) according to positions given in mask (a vector).

Construct a permutation of elements from two vectors and return a vector of the same type as the input vector(s). The mask is an integral vector with the same width (W) and element count (N) as the output vector.

The elements of the input vectors are numbered in memory ordering of vec0 beginning at 0 and vec1 beginning at N. The elements of mask are considered modulo 2*N.

Available macros:

	__builtin_hero_shuffle(x, y, mask)
*/
hero_v2s __builtin_hero_shuffle2h(
	hero_v2s x,		/**< A vector of 2 short ints */
	hero_v2s y,		/**< A vector of 2 short ints */
	hero_v2s mask	/**< A vector of 2 shorts, member i, in [0..3], states that x[mask[i]] (if i<=1) or y[mask[i]] (if i>1) should be the ith member in the ouput vector */
	);

/** @brief Picks 4 elements from vectors (x, y) according to positions given in mask (a vector).

Construct a permutation of elements from two vectors and return a vector of the same type as the input vector(s). The mask is an integral vector with the same width (W) and element count (N) as the output vector.

The elements of the input vectors are numbered in memory ordering of vec0 beginning at 0 and vec1 beginning at N. The elements of mask are considered modulo 2*N.

Available macros:

	__builtin_hero_shuffle(x, y, mask)
*/
hero_v4s __builtin_hero_shuffle4b(
	hero_v4s x,		/**< A vector of 4 bytes */
	hero_v4s y,		/**< A vector of 4 bytes */
	hero_v4s mask	/**< A vector of 4 bytes, member i, in [0..7], states that x[mask[i]] (if i<=3) or y[mask[i]] (if i>3) should be the ith member in the ouput vector*/
	);

/* Simd 2/4 Monadic */

/** @brief Element wise abs on a vector of 2 shorts.

Element wise abs on a vector of 2 shorts.

Returns (hero_v2u) {((x)[0]<0)?-(x)[0]:(x)[0], ((x)[1]<0)?-(x)[1]:(x)[1]}

*/
hero_v2u	 __builtin_hero_abs2(
	hero_v2s x	/**< A vector of 2 shorts */
	);

/** @brief Element wise abs on a vector of 4 bytes.

Element wise abs on a vector of 4 bytes.

Returns (hero_v4u) {((x)[0]<0)?-(x)[0]:(x)[0], ((x)[1]<0)?-(x)[1]:(x)[1], ((x)[2]<0)?-(x)[2]:(x)[2], ((x)[3]<0)?-(x)[3]:(x)[3]}

*/
hero_v4u	 __builtin_hero_abs4(
	hero_v4s x	/**< A vector of 4 bytes */
	);

/** @brief Element wise unary minus on a vector of 2 shorts.

Element wise unary minus on a vector of 2 shorts.

Returns (hero_v2s) {-(x)[0], -(x)[1]}

*/
hero_v2u	 __builtin_hero_neg2(
	hero_v2s x	/**< A vector of 2 shorts */
	);

/** @brief Element wise unary minus on a vector of 4 bytes.

Element wise unary minus on a vector of 4 bytes.

Returns (hero_v4s) {-(x)[0], -(x)[1], -(x)[2], -(x)[3])}

*/
hero_v4u	 __builtin_hero_neg4(
	hero_v4s x	/**< A vector of 4 bytes */
	);

/* Simd 2/4 Diadic */

/** @brief Element wise addition on a vector of 2 shorts.

Element wise addition on a vector of shorts.

Returns (hero_v2s) {(x)[0]+(y)[0], (x)[1]+(y)[1]}

*/
hero_v2s __builtin_hero_add2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise addition on a vector of 4 bytes.

Element wise addition on a vector of 4 bytes.

Returns (hero_v4s) {(x)[0]+(y)[0], (x)[1]+(y)[1], (x)[2]+(y)[2], (x)[3]+(y)[3]}

*/
#endif
int __builtin_hero_add4(
	int x,	/**< A vector of 4 bytes */
	int y	/**< A vector of 4 bytes */
	);
#if 0
/** @brief Element wise substraction on a vector of 2 shorts.

Element wise substraction on a vector of shorts.

Returns (hero_v2s) {(x)[0]-(y)[0], (x)[1]-(y)[1]}

*/
hero_v2s __builtin_hero_sub2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise substraction on a vector of 4 bytes.

Element wise substraction on a vector of 4 bytes.

Returns (hero_v4s) {(x)[0]-(y)[0], (x)[1]-(y)[1], (x)[2]-(y)[2], (x)[3]-(y)[3]}

*/
hero_v4s __builtin_hero_sub4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise average on a vector of 2 shorts.

Element wise average on a vector of 2 shorts.

Returns (hero_v2s) {((x)[0]+(y)[0]))>>1, ((x)[1]+(y)[1])>>1}; Addition is performed on 16 bits.

*/
hero_v2s __builtin_hero_avg2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise average on a vector of 4 bytes.

Element wise average on a vector of 4 bytes.

Returns (hero_v2s)  ((hero_v4s) {((x)[0]+(y)[0])>>1, ((x)[1]+(y)[1])>>1, ((x)[2]+(y)[2])>>1, ((x)[3]+(y)[3])>>1}. Addition is performed on 8 bits.

*/
hero_v4s __builtin_hero_avg4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise average on a vector of 2 shorts.

Element wise average on a vector of 2 shorts.

Returns (hero_v2u) {((unsigned short)(x)[0]+(unsigned short)(y)[0])>>1, ((unsigned short)(x)[1]+(unsigned short)(y)[1])>>1}; Addition is performed on 16 bits.

*/
hero_v2u __builtin_hero_avgu2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise unsigned average on a vector of 4 bytes.

Element wise unsigned average on a vector of 4 bytes.

Returns
        (hero_v4u) {((unsigned char)(x)[0]+(unsigned char)(y)[0])>>1, ((unsigned char)(x)[1]+(unsigned char)(y)[1])>>1,
               ((unsigned char)(x)[2]+(unsigned char)(y)[2])>>1, ((unsigned char)(x)[3]+(unsigned char)(y)[3])>>1}; Addition is perfomed on 8 bits.

*/
hero_v4u __builtin_hero_avgu4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise min on a vector of 2 shorts.

Element wise min on a vector of 2 shorts.

Returns
        (hero_v2s) {((signed short)(x)[0]<(signed short)(y)[0])?((signed short)(x)[0]):((signed short)(y)[0]),
               ((signed short)(x)[1]<(signed short)(y)[1])?((signed short)(x)[1]):((signed short)(y)[1])}

*/
hero_v2s __builtin_hero_min2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise min on a vector of 4 bytes.

Element wise min on a vector of 4 bytes.

Returns
        (hero_v4s) {((signed char)(x)[0]<(signed char)(y)[0])?(signed char)(x)[0]:(signed char)(y)[0],
               ((signed char)(x)[1]<(signed char)(y)[1])?(signed char)(x)[1]:(signed char)(y)[1],
               ((signed char)(x)[2]<(signed char)(y)[2])?(signed char)(x)[2]:(signed char)(y)[2],
               ((signed char)(x)[3]<(signed char)(y)[3])?(signed char)(x)[3]:(signed char)(y)[3]}

*/
hero_v4s __builtin_hero_min4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise unsigned min on a vector of 2 shorts.

Element wise unsigned min on a vector of 2 shorts.

Returns
        (hero_v2u) {((unsigned short)(x)[0]<(unsigned short)(y)[0])?(unsigned short)(x)[0]:(unsigned short)(y)[0],
               ((unsigned short)(x)[1]<(unsigned short)(y)[1])?(unsigned short)(x)[1]:(unsigned short)(y)[1]}

*/
hero_v2u __builtin_hero_minu2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise unsigned min on a vector of 4 bytes.

Element wise unsigned min on a vector of 4 bytes.

Returns
        (hero_v4u) {((unsigned char)(x)[0]<(unsigned char)(y)[0])?(unsigned char)(x)[0]:(unsigned char)(y)[0],
               ((unsigned char)(x)[1]<(unsigned char)(y)[1])?(unsigned char)(x)[1]:(unsigned char)(y)[1],
               ((unsigned char)(x)[2]<(unsigned char)(y)[2])?(unsigned char)(x)[2]:(unsigned char)(y)[2],
               ((unsigned char)(x)[3]<(unsigned char)(y)[3])?(unsigned char)(x)[3]:(unsigned char)(y)[3]}

*/
hero_v4u __builtin_hero_minu4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise max on a vector of 2 shorts.

Element wise max on a vector of 2 shorts.

Returns
        (hero_v2s) {((signed short)(x)[0]>(signed short)(y)[0])?((signed short)(x)[0]):((signed short)(y)[0]),
               ((signed short)(x)[1]>(signed short)(y)[1])?((signed short)(x)[1]):((signed short)(y)[1])}

*/
hero_v2s __builtin_hero_max2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise max on a vector of 4 bytes.

Element wise max on a vector of 4 bytes.

Returns
        (hero_v4s) {((signed char)(x)[0]>(signed char)(y)[0])?(signed char)(x)[0]:(signed char)(y)[0],
               ((signed char)(x)[1]>(signed char)(y)[1])?(signed char)(x)[1]:(signed char)(y)[1],
               ((signed char)(x)[2]>(signed char)(y)[2])?(signed char)(x)[2]:(signed char)(y)[2],
               ((signed char)(x)[3]>(signed char)(y)[3])?(signed char)(x)[3]:(signed char)(y)[3]}

*/
hero_v4s __builtin_hero_max4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise unsigned max on a vector of 2 shorts.

Element wise unsigned max on a vector of 2 shorts.

Returns
        (hero_v2u) {((unsigned short)(x)[0]>(unsigned short)(y)[0])?(unsigned short)(x)[0]:(unsigned short)(y)[0],
               ((unsigned short)(x)[1]>(unsigned short)(y)[1])?(unsigned short)(x)[1]:(unsigned short)(y)[1]}

*/
hero_v2u __builtin_hero_maxu2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise unsigned max on a vector of 4 bytes.

Element wise unsigned max on a vector of 4 bytes.

Returns
        (hero_v4u) {((unsigned char)(x)[0]>(unsigned char)(y)[0])?(unsigned char)(x)[0]:(unsigned char)(y)[0],
               ((unsigned char)(x)[1]>(unsigned char)(y)[1])?(unsigned char)(x)[1]:(unsigned char)(y)[1],
               ((unsigned char)(x)[2]>(unsigned char)(y)[2])?(unsigned char)(x)[2]:(unsigned char)(y)[2],
               ((unsigned char)(x)[3]>(unsigned char)(y)[3])?(unsigned char)(x)[3]:(unsigned char)(y)[3]}

*/
hero_v4u __builtin_hero_maxu4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise bitwise and on a vector of 2 shorts.

Element wise bitwise and on a vector of 2 shorts.

Returns (hero_v2s) {(x)[0]&(y)[0], (x)[1]&(y)[1]}

*/
hero_v2s __builtin_hero_and2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise bitwise and on a vector of 4 bytes.

Element wise bitwise and on a vector of 4 bytes.

Returns (hero_v4s) {(x)[0]&(y)[0], (x)[1]&(y)[1], (x)[2]&(y)[2], (x)[3]&(y)[3]}

*/
hero_v4s __builtin_hero_and4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise bitwise or on a vector of 2 shorts.

Element wise bitwise or on a vector of 2 shorts.

Returns (hero_v2s) {(x)[0]|(y)[0], (x)[1]|(y)[1]}

*/
hero_v2s __builtin_hero_or2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise bitwise or on a vector of 4 bytes.

Element wise bitwise or on a vector of 4 bytes.

Returns (hero_v4s) {(x)[0]|(y)[0], (x)[1]|(y)[1], (x)[2]|(y)[2], (x)[3]|(y)[3]}

*/
hero_v4s __builtin_hero_or4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise bitwise exor on a vector of 2 shorts.

Element wise bitwise exor on a vector of 2 shorts.

Returns (hero_v2s) {(x)[0]^(y)[0], (x)[1]^(y)[1]}

*/
hero_v2s __builtin_hero_exor2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise bitwise exor on a vector of 4 bytes.

Element wise bitwise exor on a vector of 4 bytes.

Returns (hero_v4s) {(x)[0]^(y)[0], (x)[1]^(y)[1], (x)[2]^(y)[2], (x)[3]^(y)[3]}

*/
hero_v4s __builtin_hero_exor4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise logical shift right on a vector of 2 shorts.

Element wise logical shift right on a vector of 2 shorts.

Returns (hero_v2u) {((unsigned short)(x)[0]>>(unsigned short)(y)[0]), ((unsigned short)(x)[1]>>(unsigned short)(y)[1])}

*/
hero_v2u __builtin_hero_srl2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise logical shift right on a vector of 4 bytes.

Element wise logical shift right on a vector of 4 bytes.

Returns (hero_v4u) {((unsigned char)(x)[0]>>(unsigned char)(y)[0]), ((unsigned char)(x)[1]>>(unsigned char)(y)[1]),
               ((unsigned char)(x)[2]>>(unsigned char)(y)[2]), ((unsigned char)(x)[3]>>(unsigned char)(y)[3])}

*/
hero_v4u __builtin_hero_srl4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise arithmetic shift right on a vector of 2 shorts.

Element wise arithmetic shift right on a vector of 2 shorts.

Returns (hero_v2s) {((signed short)(x)[0]>>(signed short)(y)[0]), ((signed short)(x)[1]>>(signed short)(y)[1])}

*/
hero_v2s __builtin_hero_sra2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise arithmetic shift right on a vector of 4 bytes.

Element wise arithmetic shift right on a vector of 4 bytes.

Returns (hero_v4s) {((signed char)(x)[0]>>(signed char)(y)[0]), ((signed char)(x)[1]>>(signed char)(y)[1]),
               ((signed char)(x)[2]>>(signed char)(y)[2]), ((signed char)(x)[3]>>(signed char)(y)[3])}

*/
hero_v4s __builtin_hero_sra4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Element wise logical shift left on a vector of 2 shorts.

Element wise logical shift left on a vector of 2 shorts.

Returns (hero_v2s) {(x)[0]<<(y)[0], (x)[1]<<(y)[1]}

*/
hero_v2s __builtin_hero_sll2(
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);

/** @brief Element wise logical shift left on a vector of 4 bytes.

Element wise logical shift left on a vector of 4 bytes.

Returns (hero_v4s) {(x)[0]<<(y)[0], (x)[1]<<(y)[1], (x)[2]<<(y)[2], (x)[3]<<(y)[3]}}

*/
hero_v4s __builtin_hero_sll4(
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);


/** @defgroup DotP DotProducts
@{ */

/* Dot Products */

/** @brief Dot product between 2 vectors of 2 shorts.

Dot product between 2 vectors of 2 shorts.

Returns: ((short)(x)[0]*(short)(y)[0] + (short)(x)[1]*(short)(y)[1])

*/
int __builtin_hero_dotsp2 (
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y	/**< A vector of 2 shorts */
	);


/** @brief Dot product between 1 vectors of 2 shorts and a replicated short scalar.

Dot product between 2 vectors of 2 shorts and a replicated short scalar.

Returns: ((short)(x)[0]*(short)(y) + (short)(x)[1]*(short)(y))

*/
int __builtin_hero_dotspsc2(
	hero_v2s x,		/**< A vector of 2 shorts */
	short int y	/**< A short scalar, will be replicated 2 times */
	);

/** @brief Dot product between 2 vectors of 4 bytes.

Dot product between 2 vectors of 4 bytes.

Returns: ((char)(x)[0]*(char)(y)[0] + (char)(x)[1]*(char)(y)[1] + (char)(x)[2]*(char)(y)[2] + (char)(x)[3]*(char)(y)[3])

*/
int __builtin_hero_dotsp4 (
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y	/**< A vector of 4 bytes */
	);

/** @brief Dot product  between a vector of 4 bytes and a replicated byte scalar.

Dot product  between a vector of 4 bytes and a replicated byte scalar.

Returns: ((char)(x)[0]*(char)(y) + (char)(x)[1]*(char)(y) + (char)(x)[2]*(char)(y) + (char)(x)[3]*(char)(y))

*/
int __builtin_hero_dotspsc4(
	hero_v4s x,		/**< a Vector of 4 bytes */
	signed char y	/**< A byte scalar, will be replicated 4 times */
	);

/** @brief Dot product between 2 vectors of 2 unsigned shorts.

Dot product between 2 vectors of 2 unsigned shorts.

Returns: ((unsigned short)(x)[0]*(unsigned short)(y)[0] + (unsigned short)(x)[1]*(unsigned short)(y)[1])

*/
unsigned int __builtin_hero_dotup2 (
	hero_v2u x,	/**< A vector of 2 unsigned shorts */
	hero_v2u y	/**< A vector of 2 unsigned shorts */
	);

/** @brief Dot product between 1 vector of 2 unsigned shorts and a replicated unsigned short scalar.

Dot product between 1 vector of 2 unsigned shorts and a replicated unsigned short scalar.

Returns: ((unsigned short)(x)[0]*(unsigned short)(y) + (unsigned short)(x)[1]*(unsigned short)(y))

*/
unsigned int __builtin_hero_dotupsc2(
	hero_v2u x,			/**< A vector of 2 unsigned shorts */
	unsigned short int y	/**< An unsigned short scalar, will be replicated 2 times */
	);

/** @brief Dot product between 2 vectors of 4 unsigned bytes.

Dot product between 2 vectors of 4 unsigned bytes.

Returns:
        ((unsigned char)(x)[0]*(unsigned char)(y)[0] + (unsigned char)(x)[1]*(unsigned char)(y)[1] +
         (unsigned char)(x)[2]*(unsigned char)(y)[2] + (unsigned char)(x)[3]*(unsigned char)(y)[3])

*/
unsigned int __builtin_hero_dotup4 (
	hero_v4u x,	/**< A vector of 4 unsigned bytes */
	hero_v4u y	/**< An unsigned byte scalar, will be replicated 4 times */
	);

/** @brief Dot product between 1 vector of 4 unsigned bytes and an unsigned scalar byte replicated 4 times.

Dot product between 1 vector of 4 unsigned bytes and an unsigned scalar byte replicated 4 times.

Returns:
        ((unsigned char)(x)[0]*(unsigned char)(y) + (unsigned char)(x)[1]*(unsigned char)(y) +
         (unsigned char)(x)[2]*(unsigned char)(y) + (unsigned char)(x)[3]*(unsigned char)(y))

*/
unsigned int __builtin_hero_dotupsc4(
	hero_v4u x,		/**< A vector of 4 unsigned bytes */
	unsigned char y	/**< An unsigned byte scalar, will be replicated 4 times */
	);

/** @brief Dot product between a vector of 2 unsigned shorts and a vector of 2 signed shorts.

Dot product between a vector of 2 unsigned shorts and a vector of 2 signed shorts.

Returns: ((unsigned short)(x)[0]*(short)(y)[0] + (unsigned short)(x)[1]*(short)(y)[1])

*/
int __builtin_hero_dotusp2 (
	hero_v2u x,	/**< A vector of 2 unsigned shorts */
	hero_v2s y	/**< A vector of 2 signed shorts */
	);

/** @brief Dot product between a vector of 2 unsigned shorts and a signed short scalar replicated 2 times.

Dot product between a vector of 2 unsigned shorts and a signed short scalar replicated 2 times.

Returns: ((unsigned short)(x)[0]*(short)(y) + (unsigned short)(x)[1]*(short)(y))

*/
int __builtin_hero_dotuspsc2(
	hero_v2u x,		/**< A vector of 2 unsigned shorts */
	short int y	/**< A short scalar, will be replicated 2 times */
	);

/** @brief Dot product between 1 vector of 4 unsigned bytes and 1 vector of 4 signed bytes.

Dot product between 1 vector of 4 unsigned bytes and 1 vector of 4 signed bytes.

Returns:
        ((unsigned char)(x)[0]*(char)(y)[0] + (unsigned char)(x)[1]*(char)(y)[1] +
         (unsigned char)(x)[2]*(char)(y)[2] + (unsigned char)(x)[3]*(char)(y)[3])

*/
int __builtin_hero_dotusp4 (
	hero_v4u x,	/**< A vector of 4 unsigned bytes */
	hero_v4s y	/**< A vector of 4 signed bytes */
	);

/** @brief Dot product between 1 vector of 4 unsigned bytes and one scalar unsigned byte replicated 4 times.

Dot product between 1 vector of 4 unsigned bytes and one scalar unsigned byte replicated 4 times.

Returns:
        ((unsigned char)(x)[0]*(char)(y) + (unsigned char)(x)[1]*(char)(y) +
         (unsigned char)(x)[2]*(char)(y) + (unsigned char)(x)[3]*(char)(y))

*/
int __builtin_hero_dotuspsc4(
	hero_v4u x,		/**< A vector of 4 unsigned bytes */
	signed char y	/**< A signed byte scalar, will be replicated 4 times */
	);

/* Simd 2/4 Triadic */

/** @brief Dot products between 2 vectors of 2 shorts, accumulates result.

Dot products between 2 vectors of 2 shorts, accumulates result.

Returns: z + ((x)[0]*(y)[0] + (x)[1]*(y)[1])

*/
int __builtin_hero_sdotsp2 (
	hero_v2s x,	/**< A vector of 2 shorts */
	hero_v2s y,	/**< A vector of 2 shorts */
	int z	/**< The accumulator */
	);

/** @brief Dot products between 1 vectors of 2 shorts and a replicated short scalar, accumulates result.

Dot products between 2 vectors of 2 shorts and a replicated short scalar, accumulates result.

Returns: z + ((x)[0]*(y) + (x)[1]*(y))

*/
int __builtin_hero_sdotspsc2(
	hero_v2s x,		/**< A vector of 2 shorts */
	short int y,	/**< A short scalar, will be replicated 2 times */
	int z		/**< The accumulator */
	);

/** @brief Dot product between 2 vectors of 4 bytes, accumulates result.

Dot product between 2 vectors of 4 bytes, accumulates result.

Returns: z + ((char)(x)[0]*(char)(y)[0] + (char)(x)[1]*(char)(y)[1] + (char)(x)[2]*(char)(y)[2] + (char)(x)[3]*(char)(y)[3])

*/
#endif
int __builtin_hero_sdotsp4 (
	hero_v4s x,	/**< A vector of 4 bytes */
	hero_v4s y,	/**< A vector of 4 bytes */
	int z	/**< The accumulator */
	);
#if 0
/** @brief Dot product  between a vector of 4 bytes and a replicated byte scalar, accumulates the result.

Dot product  between a vector of 4 bytes and a replicated byte scalar, accumulates the result.

Returns: z + ((char)(x)[0]*(char)(y) + (char)(x)[1]*(char)(y) + (char)(x)[2]*(char)(y) + (char)(x)[3]*(char)(y))

*/
int __builtin_hero_sdotspsc4(
	hero_v4s x,		/**< A vector of 4 bytes */
	char  y,	/**< A byte scalar, will be replicated 4 times */
	int z		/**< The accumulator */
	);

/** @brief Dot product between 2 vectors of 2 unsigned shorts, accumulates the result.

Dot product between 2 vectors of 2 unsigned shorts, accumulates the result.

Returns: z + ((unsigned short)(x)[0]*(unsigned short)(y)[0] + (unsigned short)(x)[1]*(unsigned short)(y)[1])

*/
unsigned int __builtin_hero_sdotup2 (
	hero_v2u x,		/**< A vector of 2 unsigned shorts */
	hero_v2u y,		/**< A vector of 2 unsigned shorts */
	unsigned int z	/**< The accumulator */
	);

/** @brief Dot product between 1 vector of 2 unsigned shorts and a replicated unsigned short scalar, accumulates the result.

Dot product between 1 vector of 2 unsigned shorts and a replicated unsigned short scalar, accumulates the result.

Returns: z + ((unsigned short)(x)[0]*(unsigned short)(y) + (unsigned short)(x)[1]*(unsigned short)(y))

*/
unsigned int __builtin_hero_sdotupsc2(
	hero_v2u x,			/**< A vector of 2 unsigned shorts */
	unsigned short int y,	/**< An unsigned short scalar, will be replicated 2 times */
	unsigned int z		/**< The accumulator */
	);

/** @brief Dot product between 2 vectors of 4 unsigned bytes, accumulates the result.

Dot product between 2 vectors of 4 unsigned bytes, accumulates the result.

Returns:
        z + ((unsigned char)(x)[0]*(unsigned char)(y)[0] + (unsigned char)(x)[1]*(unsigned char)(y)[1] +
             (unsigned char)(x)[2]*(unsigned char)(y)[2] + (unsigned char)(x)[3]*(unsigned char)(y)[3])

*/
unsigned int __builtin_hero_sdotup4 (
	hero_v4u x,		/**< A vector of 4 unsigned bytes */
	hero_v4u y,		/**< A vector of 4 unsigned bytes */
	unsigned int z	/**< The accumulator */
	);

/** @brief Dot product between 1 vector of 4 unsigned bytes and an unsigned scalar byte replicated 4 times, accumulates the result.

Dot product between 1 vector of 4 unsigned bytes and an unsigned scalar byte replicated 4 times, accumulates the result.

Returns:
        z + ((unsigned char)(x)[0]*(unsigned char)(y) + (unsigned char)(x)[1]*(unsigned char)(y) +
             (unsigned char)(x)[2]*(unsigned char)(y) + (unsigned char)(x)[3]*(unsigned char)(y))

*/
unsigned int __builtin_hero_sdotupsc4(
	hero_v4u x,			/**< A vector of 4 unsigned bytes */
	unsigned short int y,	/**< An unsigned scalar byte, will be replicated 4 times */
	unsigned int z		/**< The accumulator */
	);

/** @brief Dot product between a vector of 2 unsigned shorts and a vector of 2 signed shorts, accumulates the result.

Dot product between a vector of 2 unsigned shorts and a vector of 2 signed shorts, accumulates the result.

Returns: z + ((unsigned short)(x)[0]*(short)(y)[0] + (unsigned short)(x)[1]*(short)(y)[1])

*/
int __builtin_hero_sdotusp2 (
	hero_v2u x,	/**< A vector of 2 unsigned shorts */
	hero_v2s y,	/**< A vector of 2 signed shorts */
	int z	/**< The accumulator */
	);
/** @brief Dot product between a vector of 2 unsigned shorts and a signed short scalar replicated 2 times, accumulates the result.

Dot product between a vector of 2 unsigned shorts and a signed short scalar replicated 2 times, accumulates the result.

Returns: z + ((unsigned short)(x)[0]*(short)(y) + (unsigned short)(x)[1]*(short)(y))

*/
int __builtin_hero_sdotuspsc2(
	hero_v2s x,		/**< A vector of 2 unsigned shorts */
	short int y,	/**< A signed scalar short, will be replicated 2 times */
	int z		/**< The accumulator */
	);

/** @brief Dot product between 1 vector of 4 unsigned bytes and 1 vector of 4 signed bytes, accumulates the result.

Dot product between 1 vector of 4 unsigned bytes and 1 vector of 4 signed bytes, accumulates the result.

Returns:
        z + ((unsigned char)(x)[0]*(char)(y)[0] + (unsigned char)(x)[1]*(char)(y)[1] +
             (unsigned char)(x)[2]*(char)(y)[2] + (unsigned char)(x)[3]*(char)(y)[3])

*/
int __builtin_hero_sdotusp4 (
	hero_v4u x,	/**< A vector of 4 unsigned bytes */
	hero_v4s y,	/**< A vector of 4 signed bytes */
	int z	/**< The accumulator */
	);

/** @brief Dot product between 1 vector of 4 unsigned bytes and one scalar unsigned byte replicated 4 times, accumulates the result.

Dot product between 1 vector of 4 unsigned bytes and one scalar unsigned byte replicated 4 times, accumulates the result.

Returns:
        z + ((unsigned char)(x)[0]*(char)(y) + (unsigned char)(x)[1]*(char)(y) +
             (unsigned char)(x)[2]*(char)(y) + (unsigned char)(x)[3]*(char)(y))

*/
int __builtin_hero_sdotuspsc4(
	hero_v4u x,		/**< A vector of 4 unsigned bytes */
	short int y,	/**< A signed scalar byte, will be replicated 4 times */
	int z		/**< The accumulator */
	);
/** @} */ // Endof DotP


/** @defgroup RWBaseOff ReadWriteBaseOffset
@{ */

/* Read/Write base + offset */

/** @brief Read one int at base + off, off is a byte offset.

Read one int at base + off, off is a byte offset.

*/
int __builtin_hero_OffsetedRead (
	int *base,	/**< A pointer */
	int off		/**< Byte offset to be added to base, no pointer type promotion */
	);

/** @brief Read one short int at base + off, off is a byte offset.

Read one short int at base + off, off is a byte offset.

*/
short int __builtin_hero_OffsetedReadHalf(
	short int *base,	/**< A pointer */
	int off			/**< Byte offset to be added to base, no pointer type promotion */
	);

/** @brief Read one byte at base + off, off is a byte offset.

Read one byte at base + off, off is a byte offset.

*/
char __builtin_hero_OffsetedReadByte(
	char *base,	/**< A pointer */
	int off		/**< Byte offset to be added to base, no pointer type promotion */
	);

/* @brief Write one int, x, at base + off, off is a byte offset.

Write one int, x, at base + off, off is a byte offset.

*/
void __builtin_hero_OffsetedWrite (
	int x,		/**< Value to be written */
	int *base,	/**< A pointer */
	int off		/**< Byte offset to be added to base, no pointer type promotion */
	);

/** @brief Write one short int, x, at base + off, off is a byte offset.

Write one short int, x, at base + off, off is a byte offset.

*/
void __builtin_hero_OffsetedWriteHalf(
	int x,			/**< Value to be written */
	short int *base,	/**< A pointer */
	int off			/**< Byte offset to be added to base, no pointer type promotion */
	);

/** @brief Write one byte, x, at base + off, off is a byte offset.

Write one byte, x, at base + off, off is a byte offset.

*/
void __builtin_hero_OffsetedWriteByte(
	int x,		/**< Value to be written */
	char *base,	/**< A pointer */
	int off		/**< Byte offset to be added to base, no pointer type promotion */
	);
/** @} */ // Endof RWBaseOff

/** @defgroup RWSPR ReadWriteSpecialRegisters
@{ */

/* Special purpose registers */

/** @brief Reads special purpose register spr.

Reads special purpose register spr.

*/
int __builtin_hero_spr_read(
	int spr		/**< Special purpose register number */
	);

/** @brief Reads special purpose register spr. Read is volatile.

Reads special purpose register spr. Read is volatile.

*/
int __builtin_hero_spr_read_vol(
	int spr		/**< Special purpose register number */
	);
/** @brief Writes x into special purpose register spr.

Writes x into special purpose register spr.

*/
void __builtin_hero_spr_write(
	int spr,	/**< Special purpose register number */
	int x		/**< Value to be written */
	);
/** @brief Sets bit off of special purpose register spr. off is immediare in [0..31]

Sets bit off of special purpose register spr. off is immediare in [0..31]

*/
void __builtin_hero_spr_bit_set(
	int spr,	/**< Special purpose register number */
	int off		/**< Bit offset, immediate in [0..31] */
	);

/** @brief Clears bit off of special purpose register spr. off is immediare in [0..31]

Clears bit off of special purpose register spr. off is immediare in [0..31]

*/
void __builtin_hero_spr_bit_clr(
	int spr,	/**< Special purpose register number */
	int off		/**< Bit offset, immediate in [0..31] */
	);

/** @brief Reads spr special purpose register and then writes x it. Returns the read content.

Reads spr special purpose register and then writes x it. Returns the read content.

*/
int __builtin_hero_read_then_spr_write(
	int spr,	/**< Special purpose register number */
	int x		/**< Value to be written */
	);

/** @brief Reads spr special purpose register and then sets bit at position off of spr. off is immediate in [0..31].

Reads spr special purpose register and then sets bit at position off of spr. off is immediate in [0..31].

*/
int __builtin_hero_read_then_spr_bit_set(
	int spr,	/**< Special purpose register number */
	int off		/**< Bit offset, immediate in [0..31] */
	);

/** @brief Reads spr special purpose register and then clears bit at position off of spr. off is immediate in [0..31].

Reads spr special purpose register and then clears bit at position off of spr. off is immediate in [0..31].

*/
int __builtin_hero_read_then_spr_bit_clr(
	int spr,	/**< Special purpose register number */
	int off		/**< Bit offset, immediate in [0..31] */
	);
/** @} */ // End of RWSPR

/** @defgroup OthersG Others
@{ */

/* Others */

/** @brief Returns number of cores in the cluster

Returns number of cores in the cluster.

Default is 8 but can be overidden by the gcc option -mPE=<value>

*/
int __builtin_hero_CoreCount();

/** @brief Returns the core number on which a program is currently executing.

Returns the core number on which a program is currently executing.

*/
int __builtin_hero_CoreId();

/** @brief Returns the cluster number on which a program is currently execution.

Returns the cluster number on which a program is currently execution.

*/
int __builtin_hero_ClusterId();

/** @}*/ // End of OthersG

/** @}*/
#endif
#endif /*__HERO_BUILTIN_H__*/