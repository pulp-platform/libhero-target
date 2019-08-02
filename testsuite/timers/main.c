/*
 * HERO HelloWorld Example Application
 *
 * Copyright 2018 ETH Zurich, University of Bologna
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

#include <omp.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <hero-target.h>

struct timespec start, stop;
double start_ns, stop_ns, exe_time;

#pragma omp declare target
void test(int *ret, int *aux)
{
	int cycles1=0x0;
	int cycles2=0x0;

	hero_rt_reset_cycle_cnt();
	hero_rt_start_cycle_cnt();

	for(int i=0; i<1000; i++)
		*aux+=hero_rt_get_cycles();
	
	hero_rt_stop_cycle_cnt();
	cycles1=hero_rt_get_cycles();

	if(cycles1<=0x0)
		*ret=1;
	if(cycles1<1000)
		*ret=2;

	cycles2=hero_rt_get_cycles();
	if(cycles1!=cycles2)
		*ret=3;

	hero_rt_start_cycle_cnt();
	for(int i=0; i<1000; i++)
		*aux+=hero_rt_get_cycles();
	hero_rt_stop_cycle_cnt();
	cycles1=hero_rt_get_cycles();
	if(cycles1==cycles2)
		*ret=4;

	hero_rt_reset_cycle_cnt();
	cycles1=hero_rt_get_cycles();
	if(cycles1!=0x0)
		*ret=5;
}
#pragma omp end declare target

int main(int argc, char *argv[])
{
	int ret=0;
	int aux=0;

	omp_set_default_device(BIGPULP_MEMCPY);

	#pragma omp target map(tofrom:ret,aux)
	test(&ret,&aux);

	return ret;
}
