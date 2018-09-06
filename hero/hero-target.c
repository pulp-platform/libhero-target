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
#include <hal/pulp.h>
#include <archi-host/arm/pgtable_hwdef.h>

unsigned int
hero_tryread(const unsigned int* const addr)
{
  return pulp_tryread(addr);
}

int
hero_tryread_prefetch(const unsigned int* const addr)
{
  return pulp_tryread_prefetch(addr);
}

void
hero_trywrite(unsigned int* const addr, const unsigned int val)
{
  return pulp_trywrite(addr, val);
}

int
hero_trywrite_prefetch(unsigned int* const addr)
{
  return pulp_trywrite_prefetch(addr);
}

int 
hero_dma_memcpy_async(void *dst, void *src, int size)
{
  int ext2loc;
  unsigned int ext_addr_tmp, ext_addr, loc_addr;

  if ((unsigned int) dst < ARCHI_CLUSTER_ADDR &&
      (unsigned int) dst > (ARCHI_CLUSTER_ADDR + ARCHI_CLUSTER_SIZE))
  {
    ext2loc = 1;
    ext_addr = (unsigned int ) src;
    loc_addr = (unsigned int) dst;
  }
  else
  {
    ext2loc = 0;
    ext_addr = (unsigned int ) dst;
    loc_addr = (unsigned int) src;
  }
  
  // TLB prefetch
  pulp_tryread_prefetch((unsigned *)ext_addr);
  for (ext_addr_tmp = ( ext_addr & PAGE_MASK) + PAGE_SIZE;
        ext_addr_tmp < ((ext_addr + size - 1) & PAGE_MASK);
        ext_addr_tmp += PAGE_SIZE)
    pulp_tryread_prefetch((unsigned *)ext_addr_tmp);
  pulp_tryread_prefetch((unsigned *)((ext_addr + size - 1) & 0xFFFFFFFC));

  // TLB tryread
  pulp_tryread((unsigned *)ext_addr);
  for (ext_addr_tmp = ( ext_addr & PAGE_MASK) + PAGE_SIZE;
        ext_addr_tmp < ((ext_addr + size - 1) & PAGE_MASK);
        ext_addr_tmp += PAGE_SIZE)
    pulp_tryread((unsigned *)ext_addr_tmp);
  pulp_tryread((unsigned *)((ext_addr + size - 1) & 0xFFFFFFFC));
  
  return plp_dma_memcpy_priv(ext_addr,loc_addr,size,ext2loc);
}

void
hero_dma_memcpy(void *dst, void *src, int size)
{
  plp_dma_wait(hero_dma_memcpy_async(dst, src, size));
}

void
hero_dma_wait(int id)
{
  plp_dma_wait(id);
}

void *
hero_l1malloc(int size)
{
  return l1malloc(size);
}

void *
hero_l2malloc(int size)
{
  return l2malloc(size);
}

void
hero_l1free(void * a)
{
  l1free(a);
}

void
hero_l2free(void * a)
{
  l2free(a);
}
