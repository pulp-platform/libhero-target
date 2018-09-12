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

#ifndef __HERO_API_H__
#define __HERO_API_H__

// #define __WEAK__ __attribute__((weak))
#define __WEAK__

#include <pulp.h>

#define BIGPULP_SVM     (0)
#define BIGPULP_MEMCPY  (1)
#define HOST            (2)

typedef int hero_dma_job_t;

/** @name SVM-related functions
 *
 * @{
 */

__WEAK__ unsigned int hero_tryread(const unsigned int* const addr);
__WEAK__ int hero_tryread_prefetch(const unsigned int* const addr);
__WEAK__ void hero_trywrite(unsigned int* const addr, const unsigned int val);
__WEAK__ int hero_trywrite_prefetch(unsigned int* const addr);
__WEAK__ int hero_handle_rab_misses(void);

//!@}

/** @name DMA functions
 *
 * @{
 */

__WEAK__ hero_dma_job_t hero_dma_memcpy_async(void *dst, void *src, int size);
__WEAK__ void hero_dma_memcpy(void *dst, void *src, int size);
__WEAK__ void hero_dma_wait(hero_dma_job_t id);

//!@}

/** @name Memory management functions
 *
 * @{
 */

__WEAK__ void *hero_l1malloc(int size);
__WEAK__ void *hero_l2malloc(int size);
__WEAK__ void hero_l1free(void * a);
__WEAK__ void hero_l2free(void * a);

//!@}

/** @name PULP runtime functions
 *
 * @{
 */

__WEAK__ int hero_rt_core_id();
//FIXME: __WEAK__ hero_rt_info();
//FIXME: __WEAK__ hero_rt_error();

//!@}

#endif
