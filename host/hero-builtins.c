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
#include <omp.h>
#include <stdlib.h>
#include <string.h>
#if 0
hero_v2s __builtin_hero_pack2(short int x, short int y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host // Not supported on the host
}

hero_v4s __builtin_hero_pack4(char x, char y, char z, char t){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_shuffleh(hero_v2s x, hero_v2s mask){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_shuffleb(hero_v4s x, hero_v4s mask){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_shuffle2h(hero_v2s x, hero_v2s y, hero_v2s mask){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_shuffle4b(hero_v4s x, hero_v4s y, hero_v4s mask){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

int __builtin_hero_maxsi(int x, int y){
	return 0; // Not supported on the host
}

hero_v2s __builtin_hero_max2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_max4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2u __builtin_hero_maxu2(hero_v2s x, hero_v2s y){
	return (hero_v2u) {(short)0, (short)0}; // Not supported on the host
}

hero_v4u __builtin_hero_maxu4(hero_v4s x, hero_v4s y){
	return (hero_v4u) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_min2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

int __builtin_hero_minsi(int x, int y){
	return 0; // Not supported on the host
}

hero_v4s __builtin_hero_min4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2u __builtin_hero_minu2(hero_v2s x, hero_v2s y){
	return (hero_v2u) {(short)0, (short)0}; // Not supported on the host
}

hero_v4u __builtin_hero_minu4(hero_v4s x, hero_v4s y){
	return (hero_v4u) {0, 0, 0, 0}; // Not supported on the host
}

int __builtin_hero_clip(int x, int lb, int ub){
	return 0; // Not supported on the host
}

int __builtin_hero_clip_r(int x, int bound){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_clipu(int x, int lb, int ub){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_clipu_r(int x, int bound){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_abs(int x){
	return 0; // Not supported on the host
}

hero_v2u __builtin_hero_abs2(hero_v2s x){
	return (hero_v2u) {(short)0, (short)0}; // Not supported on the host
}

hero_v4u __builtin_hero_abs4(hero_v4s x){
	return (hero_v4u) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2u __builtin_hero_neg2(hero_v2s x){
	return (hero_v2u) {(short)0, (short)0}; // Not supported on the host
}

hero_v4u __builtin_hero_neg4(hero_v4s x){
	return (hero_v4u) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_add2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}
#endif
int __builtin_hero_add4(int x, int y){
	// return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
	return 0;
}
#if 0
hero_v2s __builtin_hero_sub2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_sub4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_avg2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_avg4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2u __builtin_hero_avgu2(hero_v2s x, hero_v2s y){
	return (hero_v2u) {(short)0, (short)0}; // Not supported on the host
}

hero_v4u __builtin_hero_avgu4(hero_v4s x, hero_v4s y){
	return (hero_v4u) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_and2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_and4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_or2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_or4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_exor2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_exor4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2u __builtin_hero_srl2(hero_v2s x, hero_v2s y){
	return (hero_v2u) {(short)0, (short)0}; // Not supported on the host
}

hero_v4u __builtin_hero_srl4(hero_v4s x, hero_v4s y){
	return (hero_v4u) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_sra2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_sra4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

hero_v2s __builtin_hero_sll2(hero_v2s x, hero_v2s y){
	return (hero_v2s) {(short)0, (short)0}; // Not supported on the host
}

hero_v4s __builtin_hero_sll4(hero_v4s x, hero_v4s y){
	return (hero_v4s) {0, 0, 0, 0}; // Not supported on the host
}

int __builtin_hero_mac(int x, int y, int Acc){
	return 0; // Not supported on the host
}

int __builtin_hero_msu(int x, int y, int Acc){
	return 0; // Not supported on the host
}

int __builtin_hero_macs(int x, int y, int Acc){
	return 0; // Not supported on the host
}

int __builtin_hero_machhs(int x, int y, int Acc){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_macu(int x, int y, int Acc){
	return 0; // Not supported on the host
}

int __builtin_hero_machhu(int x, int y, int Acc){
	return 0; // Not supported on the host
}

int __builtin_hero_macsN(int x, int y, int Acc, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_macuN(int x, int y, int Acc, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_macsRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_macuRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_machhsN(int x, int y, int Acc, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_machhuN(int x, int y, int Acc, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_machhsRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_machhuRN(int x, int y, int Acc, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_muls(int x, int y){
	return 0; // Not supported on the host
}

int __builtin_hero_mulu(unsigned int x, unsigned int y){
	return 0; // Not supported on the host
}

int __builtin_hero_mulhhs(int x, int y){
	return 0; // Not supported on the host
}

int __builtin_hero_mulhhu(unsigned int x, unsigned int y){
	return 0; // Not supported on the host
}

int __builtin_hero_mulsN(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_mulsRN(int x, int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_muluN(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_muluRN(unsigned int x, unsigned int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_mulhhsN(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_mulhhsRN(int x, int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_mulhhuN(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_mulhhuRN(short int x, short int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_dotsp2 (hero_v2s x, hero_v2s y){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_dotup2 (hero_v2u x, hero_v2u y){
	return 0; // Not supported on the host
}

int __builtin_hero_dotusp2 (hero_v2u x, hero_v2s y){
	return 0; // Not supported on the host
}

int __builtin_hero_dotspsc2(hero_v2s x, short int y){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_dotupsc2(hero_v2u x, unsigned short int y){
	return 0; // Not supported on the host
}

int __builtin_hero_dotuspsc2(hero_v2u x, short int y){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotsp2 (hero_v2s x, hero_v2s y, int z){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_sdotup2 (hero_v2u x, hero_v2u y, unsigned int z){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotusp2 (hero_v2u x, hero_v2s y, int z){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotspsc2(hero_v2s x, short int y, int z){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_sdotupsc2(hero_v2u x, unsigned short int y, unsigned int z){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotuspsc2(hero_v2s x, short int y, int z){
	return 0; // Not supported on the host
}

int __builtin_hero_dotsp4 (hero_v4s x, hero_v4s y){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_dotup4 (hero_v4u x, hero_v4u y){
	return 0; // Not supported on the host
}

int __builtin_hero_dotusp4 (hero_v4u x, hero_v4s y){
	return 0; // Not supported on the host
}

int __builtin_hero_dotspsc4(hero_v4s x, signed char y){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_dotupsc4(hero_v4u x, unsigned char y){
	return 0; // Not supported on the host
}

int __builtin_hero_dotuspsc4(hero_v4u x, signed char y){
	return 0; // Not supported on the host
}
#endif
int  __builtin_hero_sdotsp4 (hero_v4s x, hero_v4s y, int z){
	return 0; // Not supported on the host
}
#if 0
unsigned int __builtin_hero_sdotup4 (hero_v4u x, hero_v4u y, unsigned int z){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotusp4 (hero_v4u x, hero_v4s y, int z){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotspsc4(hero_v4s x, char  y, int z){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_sdotupsc4(hero_v4u x, unsigned short int y, unsigned int z){
	return 0; // Not supported on the host
}

int __builtin_hero_sdotuspsc4(hero_v4u x,  short int y, int z){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_fl1(int x){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_clb(int x){
	return 0; // Not supported on the host
}

int __builtin_hero_bset (int x, unsigned int mask){
	return 0; // Not supported on the host
}

int __builtin_hero_bset_r(int x, unsigned int mask){
	return 0; // Not supported on the host
}

int __builtin_hero_bclr (int x, unsigned int mask){
	return 0; // Not supported on the host
}

int __builtin_hero_bclr_r(int x, unsigned int mask){
	return 0; // Not supported on the host
}

int __builtin_hero_bextract (int x, unsigned int size, unsigned int off){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_bextractu (int x, unsigned int size, unsigned int off){
	return 0; // Not supported on the host
}

int __builtin_hero_bextract_r(int x, unsigned int mask){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_bextractu_r(int x, unsigned int mask){
	return 0; // Not supported on the host
}

int __builtin_hero_binsert(int dst, unsigned int not_mask_imm, int src, unsigned int mask_imm, unsigned int off){
	return 0; // Not supported on the host
}

int __builtin_hero_binsert_r(int dst, int src, unsigned int mask){
	return 0; // Not supported on the host
}

int __builtin_hero_rotr(int x, int y){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_adduN(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_adduN_r(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_addN(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_addN_r(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_adduRN(unsigned int x, unsigned int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_adduRN_r(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_addRN(int x, int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_addRN_r(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_subuN(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_subuN_r(unsigned int x, unsigned int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_subN(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_subN_r(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_subuRN(int x, int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

unsigned int __builtin_hero_subuRN_r(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_subRN(int x,	int y, unsigned int n, unsigned int r){
	return 0; // Not supported on the host
}

int __builtin_hero_subRN_r(int x, int y, unsigned int n){
	return 0; // Not supported on the host
}

int __builtin_hero_CoreCount(){
	return 0; // Not supported on the host
}

int __builtin_hero_CoreId(){
	return 0; // Not supported on the host
}

int __builtin_hero_ClusterId(){
	return 0; // Not supported on the host
}

int __builtin_hero_spr_read(int spr){
	return 0; // Not supported on the host
}

int __builtin_hero_spr_read_vol(int spr){
	return 0; // Not supported on the host
}

void __builtin_hero_spr_write(int spr, int x){
}

void __builtin_hero_spr_bit_set(int spr, int off){
}

void __builtin_hero_spr_bit_clr(int spr, int off){
}

int __builtin_hero_read_then_spr_write(int spr, int x){
	return 0; // Not supported on the host
}

int __builtin_hero_read_then_spr_bit_set(int spr, int off){
	return 0; // Not supported on the host
}

int __builtin_hero_read_then_spr_bit_clr(int spr, int off){
	return 0; // Not supported on the host
}

int __builtin_hero_OffsetedRead (int *base, int off){
	return 0; // Not supported on the host
}

short int __builtin_hero_OffsetedReadHalf(short int *base, int off){
	return 0; // Not supported on the host
}

char __builtin_hero_OffsetedReadByte(char *base, int off){
	return 0; // Not supported on the host
}

void __builtin_hero_OffsetedWrite (int x, int *base, int off){
}

void __builtin_hero_OffsetedWriteHalf(int x, short int *base, int off){
}

void __builtin_hero_OffsetedWriteByte(int x, char *base, int off){
}
#endif