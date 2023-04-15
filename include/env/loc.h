#ifndef   __ENV_LOC_H
#define   __ENV_LOC_H



/********************* Functions for respecting locale ***********************/

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



#include  <lang/types.h>



typedef struct {
	/*** Incoming type conversions */
	/****** Interpret `s` as representing an integer to the base `b` */
	err (*stoi)(
		long long int *i,
		char const *s,
		unsigned char b,
		unsigned int o
	);

	/****** Interpret `s` as representing an unsigned integer to the base `b` */
	err (*stou)(
		unsigned long long int *u,
		char const *s,
		unsigned char b,
		unsigned int o
	);

	/****** Interpret `s` as representing a float to the base `b` */
	err (*stof)(
		long double *d,
		char const *s,
		unsigned char b,
		unsigned int o
	);


	/*** Outgoing type conversions */
	/****** Represent `i` in a string to the base `b` */
	err (*itos)(
		char ** const c,
		long long int i,
		unsigned char b,
		unsigned int o
	);

	/****** Represent `u` in a string to the base `b` */
	err (*utos)(
		char ** const c,
		unsigned long long int u,
		unsigned char b,
		unsigned int o
	);

	/****** Represent `f` in a string to the base `b` */
	err (*ftos)(
		char ** const c,
		long double f,
		unsigned char b,
		unsigned int o
	);


	/*** Collation */
	/****** Return the location at which `l` and `r` differ */
	ptrdiff (*coll)(char const * restrict l, char const * restrict r);


	/*** Examination */
	/*** Locale conversion */
	/****** Transform `s` such that, for any locales X and Y, */
	err (*enc)(char *d, char const *s);

	/****** Transform `s` such that, for any locales X and Y,
	        C->coll(X->dec(s), Y->dec(s)) == 0 */
	err (*dec)(char *d, char const *s);

} *locale;

/* Example:
#include <env/io.h>
#include <env/loc.h>

int main(int argc, char **argv) {
	assert(argc > 1, sput0(stderr, "Usage: fact $num\n"));

	unsigned int n, f = 1;
	assert(!en_US_UTF8->stoi(argv[1], 10, EN_US_UTF8_I_DEFAULT), sput0(stderr, "Error parsing input\n"));
	while (n) f *= n--;
	sput0(stdout, en_US_UTF8->itos(f, 10, EN_US_UTF8_I_DEFAULT));
	sput0(stdout, "\n");

	return 0;
}

*/



#endif /* __ENV_LOC_H */
