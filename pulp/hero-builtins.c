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

#include <hero-target.h>
#include <pulp.h>
#if 0
hero_v2s __builtin_hero_pack2(short int x, short int y){
	return __builtin_pulp_pack2(x,y);
}

hero_v4s __builtin_hero_pack4(char x, char y, char z, char t){
	return __builtin_pulp_pack4(x,y,z,t);
}

hero_v2s __builtin_hero_shuffleh(hero_v2s x, hero_v2s mask){
	return __builtin_pulp_shuffleh(x,mask);
}

hero_v4s __builtin_hero_shuffleb(hero_v4s x, hero_v4s mask){
	return __builtin_pulp_shuffleb(x,mask);
}

hero_v2s __builtin_hero_shuffle2h(hero_v2s x, hero_v2s y, hero_v2s mask){
	return __builtin_pulp_shuffle2h(x,y,mask);
}

hero_v4s __builtin_hero_shuffle4b(hero_v4s x, hero_v4s y, hero_v4s mask){
	return __builtin_pulp_shuffle4b(x,y,mask);
}

int __builtin_hero_maxsi(int x, int y){
	return __builtin_pulp_maxsi(x,y);
}

hero_v2s __builtin_hero_max2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_max2(x,y);
}

hero_v4s __builtin_hero_max4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_max4(x,y);
}

hero_v2u __builtin_hero_maxu2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_maxu2(x,y);
}

hero_v4u __builtin_hero_maxu4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_maxu4(x,y);
}

hero_v2s __builtin_hero_min2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_min2(x,y);
}

int __builtin_hero_minsi(int x, int y){
	return __builtin_pulp_minsi(x,y);
}

hero_v4s __builtin_hero_min4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_min4(x,y);
}

hero_v2u __builtin_hero_minu2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_minu2(x,y);
}

hero_v4u __builtin_hero_minu4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_minu4(x,y);
}

int __builtin_hero_clip(int x, int lb, int ub){
	return __builtin_pulp_clip(x,lb,ub);
}

int __builtin_hero_clip_r(int x, int bound){
	return __builtin_pulp_clip_r(x,bound);
}

unsigned int __builtin_hero_clipu(int x, int lb, int ub){
	return __builtin_pulp_clipu(x,lb,ub);
}

unsigned int __builtin_hero_clipu_r(int x, int bound){
	return __builtin_pulp_clipu_r(x, bound);
}

unsigned int __builtin_hero_abs(int x){
	return __builtin_pulp_abs(x);
}

hero_v2u __builtin_hero_abs2(hero_v2s x){
	return __builtin_pulp_abs2(x);
}

hero_v4u __builtin_hero_abs4(hero_v4s x){
	return __builtin_pulp_abs4(x);
}

hero_v2u __builtin_hero_neg2(hero_v2s x){
	return __builtin_pulp_neg2(x);
}

hero_v4u __builtin_hero_neg4(hero_v4s x){
	return __builtin_pulp_neg4(x);
}

hero_v2s __builtin_hero_add2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_add2(x,y);
}
#endif
int __builtin_hero_add4(int x, int y){
	hero_v4s VA = (hero_v4s) x;
	hero_v4s VB = (hero_v4s) y;
	return (int) __builtin_pulp_add4(VA, VB);
}
#if 0
hero_v2s __builtin_hero_sub2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_sub2(x,y);
}

hero_v4s __builtin_hero_sub4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_sub4(x,y);
}

hero_v2s __builtin_hero_avg2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_avg2(x,y);
}

hero_v4s __builtin_hero_avg4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_avg4(x,y);
}

hero_v2u __builtin_hero_avgu2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_avgu2(x,y);
}

hero_v4u __builtin_hero_avgu4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_avgu4(x,y);
}

hero_v2s __builtin_hero_and2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_and2(x,y);
}

hero_v4s __builtin_hero_and4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_and4(x,y);
}

hero_v2s __builtin_hero_or2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_or2(x,y);
}

hero_v4s __builtin_hero_or4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_or4(x,y);
}

hero_v2s __builtin_hero_exor2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_exor2(x,y);
}

hero_v4s __builtin_hero_exor4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_exor4(x,y);
}

hero_v2u __builtin_hero_srl2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_srl2(x,y);
}

hero_v4u __builtin_hero_srl4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_srl4(x,y);
}

hero_v2s __builtin_hero_sra2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_sra2(x,y);
}

hero_v4s __builtin_hero_sra4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_sra4(x,y);
}

hero_v2s __builtin_hero_sll2(hero_v2s x, hero_v2s y){
	return __builtin_pulp_sll2(x,y);
}

hero_v4s __builtin_hero_sll4(hero_v4s x, hero_v4s y){
	return __builtin_pulp_sll4(x,y);
}

int __builtin_hero_mac(int x, int y, int Acc){
	return __builtin_pulp_mac(x,y,Acc);
}

int __builtin_hero_msu(int x, int y, int Acc){
	return __builtin_pulp_msu(x,y,Acc);
}

int __builtin_hero_macs(int x, int y, int Acc){
	return __builtin_pulp_macs(x,y,Acc);
}

int __builtin_hero_machhs(int x, int y, int Acc){
	return __builtin_pulp_machhs(x,y,Acc);
}

unsigned int __builtin_hero_macu(int x, int y, int Acc){
	return __builtin_pulp_macu(x,y,Acc);
}

int __builtin_hero_machhu(int x, int y, int Acc){
	return __builtin_pulp_machhu(x,y,Acc);
}

int __builtin_hero_macsN(int x, int y, int Acc, unsigned int n){
	return __builtin_pulp_macsN(x,y,Acc,n);
}

unsigned int __builtin_hero_macuN(int x, int y, int Acc, unsigned int n){
	return __builtin_pulp_macuN(x,y,Acc,n);
}

int __builtin_hero_macsRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return __builtin_pulp_macsRN(x,y,Acc,n,r);
}

unsigned int __builtin_hero_macuRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return __builtin_pulp_macuRN(x,y,Acc,n,r);
}

int __builtin_hero_machhsN(int x, int y, int Acc, unsigned int n){
	return __builtin_pulp_machhsN(x,y,Acc,n);
}

unsigned int __builtin_hero_machhuN(int x, int y, int Acc, unsigned int n){
	return __builtin_pulp_machhuN(x,y,Acc,n);
}

int __builtin_hero_machhsRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return __builtin_pulp_machhsRN(x,y,Acc,n,r);
}

unsigned int __builtin_hero_machhuRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return __builtin_pulp_machhuRN(x,y,Acc,n,r);
}

int __builtin_hero_muls(int x, int y){
	return __builtin_pulp_muls(x,y);
}

int __builtin_hero_mulu(unsigned int x, unsigned int y){
	return __builtin_pulp_mulu(x,y);
}

int __builtin_hero_mulhhs(int x, int y){
	return __builtin_pulp_mulhhs(x,y);
}

int __builtin_hero_mulhhu(unsigned int x, unsigned int y){
	return __builtin_pulp_mulhhu(x,y);
}

int __builtin_hero_mulsN(int x, int y, unsigned int n){
	return __builtin_pulp_mulsN(x,y,n);
}

int __builtin_hero_mulsRN(int x, int y, unsigned int n, unsigned int r){
	return __builtin_pulp_mulsRN(x,y,n,r);
}

int __builtin_hero_muluN(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_muluN(x,y,n);
}

int __builtin_hero_muluRN(unsigned int x, unsigned int y, unsigned int n, unsigned int r){
	return __builtin_pulp_muluRN(x,y,n,r);
}

int __builtin_hero_mulhhsN(int x, int y, unsigned int n){
	return __builtin_pulp_mulhhsN(x,y,n);
}

int __builtin_hero_mulhhsRN(int x, int y, unsigned int n, unsigned int r){
	return __builtin_pulp_mulhhsRN(x,y,n,r);
}

int __builtin_hero_mulhhuN(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_mulhhuN(x,y,n);
}

unsigned int __builtin_hero_mulhhuRN(short int x, short int y, unsigned int n, unsigned int r){
	return __builtin_pulp_mulhhuRN(x,y,n,r);
}

int __builtin_hero_dotsp2 (hero_v2s x, hero_v2s y){
	return __builtin_pulp_dotsp2(x,y);
}

unsigned int __builtin_hero_dotup2 (hero_v2u x, hero_v2u y){
	return __builtin_pulp_dotup2(x,y);
}

int __builtin_hero_dotusp2 (hero_v2u x, hero_v2s y){
	return __builtin_pulp_dotusp2(x,y);
}

int __builtin_hero_dotspsc2(hero_v2s x, short int y){
	return __builtin_pulp_dotspsc2(x,y);
}

unsigned int __builtin_hero_dotupsc2(hero_v2u x, unsigned short int y){
	return __builtin_pulp_dotupsc2(x,y);
}

int __builtin_hero_dotuspsc2(hero_v2u x, short int y){
	return __builtin_pulp_dotuspsc2(x,y);
}

int __builtin_hero_sdotsp2 (hero_v2s x, hero_v2s y, int z){
	return __builtin_pulp_sdotsp2(x,y,z);
}

unsigned int __builtin_hero_sdotup2 (hero_v2u x, hero_v2u y, unsigned int z){
	return __builtin_pulp_sdotup2(x,y,z);
}

int __builtin_hero_sdotusp2 (hero_v2u x, hero_v2s y, int z){
	return __builtin_pulp_sdotusp2(x,y,z);
}

int __builtin_hero_sdotspsc2(hero_v2s x, short int y, int z){
	return __builtin_pulp_sdotspsc2(x,y,z);
}

unsigned int __builtin_hero_sdotupsc2(hero_v2u x, unsigned short int y, unsigned int z){
	return __builtin_pulp_sdotupsc2(x,y,z);
}

int __builtin_hero_sdotuspsc2(hero_v2s x, short int y, int z){
	return __builtin_pulp_sdotuspsc2(x,y,z);
}

int __builtin_hero_dotsp4 (hero_v4s x, hero_v4s y){
	return __builtin_pulp_dotsp4(x,y);
}

unsigned int __builtin_hero_dotup4 (hero_v4u x, hero_v4u y){
	return __builtin_pulp_dotup4(x,y);
}

int __builtin_hero_dotusp4 (hero_v4u x, hero_v4s y){
	return __builtin_pulp_dotusp4(x,y);
}

int __builtin_hero_dotspsc4(hero_v4s x, signed char y){
	return __builtin_pulp_dotspsc4(x,y);
}

unsigned int __builtin_hero_dotupsc4(hero_v4u x, unsigned char y){
	return __builtin_pulp_dotupsc4(x,y);
}

int __builtin_hero_dotuspsc4(hero_v4u x, signed char y){
	return __builtin_pulp_dotuspsc4(x,y);
}
#endif
int __builtin_hero_sdotsp4 (hero_v4s x, hero_v4s y, int z){
	return __builtin_pulp_sdotsp4(x,y,z);
}
#if 0
unsigned int __builtin_hero_sdotup4 (hero_v4u x, hero_v4u y, unsigned int z){
	return __builtin_pulp_sdotup4(x,y,z);
}

int __builtin_hero_sdotusp4 (hero_v4u x, hero_v4s y, int z){
	return __builtin_pulp_sdotusp4(x,y,z);
}

int __builtin_hero_sdotspsc4(hero_v4s x, char  y, int z){
	return __builtin_pulp_sdotspsc4(x,y,z);
}

unsigned int __builtin_hero_sdotupsc4(hero_v4u x, unsigned short int y, unsigned int z){
	return __builtin_pulp_sdotupsc4(x,y,z);
}

int __builtin_hero_sdotuspsc4(hero_v4u x,  short int y, int z){
	return __builtin_pulp_sdotuspsc4(x,y,z);
}

unsigned int __builtin_hero_fl1(int x){
	return __builtin_pulp_fl1(x);
}

unsigned int __builtin_hero_clb(int x){
	return __builtin_pulp_clb(x);
}

int __builtin_hero_bset (int x, unsigned int mask){
	return __builtin_pulp_bset(x,mask);
}

int __builtin_hero_bset_r(int x, unsigned int mask){
	return __builtin_pulp_bset_r(x,mask);
}

int __builtin_hero_bclr (int x, unsigned int mask){
	return __builtin_pulp_bclr(x,mask);
}

int __builtin_hero_bclr_r(int x, unsigned int mask){
	return __builtin_pulp_bclr_r(x,mask);
}

int __builtin_hero_bextract (int x, unsigned int size, unsigned int off){
	return __builtin_pulp_bextract(x,size,off);
}

unsigned int __builtin_hero_bextractu (int x, unsigned int size, unsigned int off){
	return __builtin_pulp_bextractu(x,size,off);
}

int __builtin_hero_bextract_r(int x, unsigned int mask){
	return __builtin_pulp_bextract_r(x,mask);
}

unsigned int __builtin_hero_bextractu_r(int x, unsigned int mask){
	return __builtin_pulp_bextractu_r(x,mask);
}

int __builtin_hero_binsert(int dst, unsigned int not_mask_imm, int src, unsigned int mask_imm, unsigned int off){
	return __builtin_pulp_binsert(dst,not_mask_imm,src,mask_imm,off);
}

int __builtin_hero_binsert_r(int dst, int src, unsigned int mask){
	return __builtin_pulp_binsert_r(dst,src,mask);
}

int __builtin_hero_rotr(int x, int y){
	return __builtin_pulp_rotr(x,y);
}

unsigned int __builtin_hero_adduN(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_adduN(x,y,n);
}

unsigned int __builtin_hero_adduN_r(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_adduN_r(x,y,n);
}

int __builtin_hero_addN(int x, int y, unsigned int n){
	return __builtin_pulp_addN(x,y,n);
}

int __builtin_hero_addN_r(int x, int y, unsigned int n){
	return __builtin_pulp_addN_r(x,y,n);
}

unsigned int __builtin_hero_adduRN(unsigned int x, unsigned int y, unsigned int n, unsigned int r){
	return __builtin_pulp_adduRN(x,y,n,r);
}

unsigned int __builtin_hero_adduRN_r(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_adduRN_r(x,y,n);
}

int __builtin_hero_addRN(int x, int y, unsigned int n, unsigned int r){
	return __builtin_pulp_addRN(x,y,n,r);
}

int __builtin_hero_addRN_r(int x, int y, unsigned int n){
	return __builtin_pulp_addRN_r(x,y,n);
}

unsigned int __builtin_hero_subuN(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_subuN(x,y,n);
}

unsigned int __builtin_hero_subuN_r(unsigned int x, unsigned int y, unsigned int n){
	return __builtin_pulp_subuN_r(x,y,n);
}

int __builtin_hero_subN(int x, int y, unsigned int n){
	return __builtin_pulp_subN(x,y,n);
}

int __builtin_hero_subN_r(int x, int y, unsigned int n){
	return __builtin_pulp_subN_r(x,y,n);
}

unsigned int __builtin_hero_subuRN(int x, int y, unsigned int n, unsigned int r){
	return __builtin_pulp_subuRN(x,y,n,r);
}

unsigned int __builtin_hero_subuRN_r(int x, int y, unsigned int n){
	return __builtin_pulp_subuRN_r(x,y,n);
}

int __builtin_hero_subRN(int x,	int y, unsigned int n, unsigned int r){
	return __builtin_pulp_subRN(x,y,n,r);
}

int __builtin_hero_subRN_r(int x, int y, unsigned int n){
	return __builtin_pulp_subRN_r(x,y,n);
}

int __builtin_hero_CoreCount(){
	return __builtin_pulp_CoreCount();
}

int __builtin_hero_CoreId(){
	return __builtin_pulp_CoreId();
}

int __builtin_hero_ClusterId(){
	return __builtin_pulp_ClusterId();
}

int __builtin_hero_spr_read(int spr){
	return __builtin_pulp_spr_read(spr);
}

int __builtin_hero_spr_read_vol(int spr){
	return __builtin_pulp_spr_read_vol(spr);
}

void __builtin_hero_spr_write(int spr, int x){
	return __builtin_pulp_spr_write(spr,x);
}

void __builtin_hero_spr_bit_set(int spr, int off){
	return __builtin_pulp_spr_bit_set(spr,off);
}

void __builtin_hero_spr_bit_clr(int spr, int off){
	return __builtin_pulp_spr_bit_clr(spr,off);
}

int __builtin_hero_read_then_spr_write(int spr, int x){
	return __builtin_pulp_read_then_spr_write(spr,x);
}

int __builtin_hero_read_then_spr_bit_set(int spr, int off){
	return __builtin_pulp_read_then_spr_bit_set(spr,off);
}

int __builtin_hero_read_then_spr_bit_clr(int spr, int off){
	return __builtin_pulp_read_then_spr_bit_clr(spr,off);
}

int __builtin_hero_OffsetedRead (int *base, int off){
	return __builtin_pulp_OffsetedRead(base,off);
}

short int __builtin_hero_OffsetedReadHalf(short int *base, int off){
	return __builtin_pulp_OffsetedReadHalf(base,off);
}

char __builtin_hero_OffsetedReadByte(char *base, int off){
	return __builtin_pulp_OffsetedReadByte(base,off);
}

void __builtin_hero_OffsetedWrite (int x, int *base, int off){
	return __builtin_pulp_OffsetedWrite(x,base,off);
}

void __builtin_hero_OffsetedWriteHalf(int x, short int *base, int off){
	return __builtin_pulp_OffsetedWriteHalf(x,base,off);
}

void __builtin_hero_OffsetedWriteByte(int x, char *base, int off){
	return __builtin_pulp_OffsetedWriteByte(x,base,off);
}
#endif