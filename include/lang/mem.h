#ifndef   __LANG_MEM_H
#define   __LANG_MEM_H
#include  <lang/types.h>



/********************************** Memory ***********************************/

/* Copyright 2020, 2022- Daniel Campos do Nascimento
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*** Testing */
/****** Return pointer to first differing char between `lb` and `rb` */
void *mcmp(void const * restrict lb, void const * restrict rb, size l);
/****** Return position of first occurrence of `c` in `b` */
void *mmark(void const *b, size l, char c);
/****** Return position of last occurrence of `c` in `b` */
void *mterm(void const *b, size l, char c);

/*** Manipulation */
/****** Set all `l` bytes of `a` to `v` */
err setm(void *a, size l, unsigned char v);
/****** Move all `l` bytes of `s` to `d`, potentially with overlap */
err movem(void *d, void const *s, size l);
/****** Move all `l` bytes of `s` to `d`, without overlap */
err copym(void * restrict d, void const * restrict s, size l);



#endif /* __LANG_MEM_H */
