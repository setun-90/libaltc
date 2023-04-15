#ifndef   __LANG_TYPES_STR_H
#define   __LANG_TYPES_STR_H
#include <lang/types.h>



/********************************* Strings ***********************************/

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

/*** Types */

/*** Examination */
/****** Determine length of null-terminated string */
size slen(char const *s);
/****** Return whether `s` contains `c` */
bool scin(char const *s, char c);
/****** Return position of first difference between `l` and `r` or NULL */
char *scmp(char * restrict l, char const * restrict r);
/****** Return position of first occurrence of `p` in `s` or NULL */
char *spre(char * restrict s, char const * restrict p); /* (c.f. KMP algorithm) */
/****** Return position of last occurrence of `p` in `s` or NULL */
char *ssuf(char * restrict s, char const * restrict p);
/****** Return position in `s` of first occurrence of any character not in `d`, optionally putting length of non-matching characters, or NULL */
char *smarkd(char * restrict s, char const * restrict d, size *l);
/****** Return position in `s` of last occurrence of any character not in `d`, optionally putting length of non-matching characters, or NULL */
char *stermd(char * restrict s, char const * restrict d, size *l);
/****** Return position in `s` of first occurrence of any character in `d`, optionally putting length of matching characters, or NULL */
char *smarks(char * restrict s, char const * restrict d, size *l);
/****** Return position in `s` of last occurrence of any character in `d`, optionally putting length of matching characters, or NULL */
char *sterms(char * restrict s, char const * restrict d, size *l);

/*** Manipulation */
err copys(char * restrict d, char const * restrict s);



#endif /* __LANG_TYPES_STR_H */
