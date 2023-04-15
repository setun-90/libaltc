#ifndef   __ALGO_RAND_H
#define   __ALGO_RAND_H



/******************************* Random numbers ******************************/

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

/*** Engines */
typedef int (*rneng)(void);

/*** Distributions */
/****** Bernoulli */
float multinomial(rneng e, int n, float p[]);
int   categorical(rneng e, float p[]);
/****** Poisson */
int   poisson(rneng e, int k,   float p);
float exponen(rneng e, float t, float p);
float gamma(rneng e, float a, float b);
float weibull(rneng e, float a, float b);
/****** Normal */
float normal(rneng e, float m, float s);
float lognormal(rneng e, float m, float s);
float chi2(rneng e, float n);
float cauchy(rneng e, float a, float b);
float fisher_f(rneng e, float n, float m);
float student_t(rneng e, float n);

/*** Shuffles */
void shuf(void **d, rneng r);



#endif /* __ALGO_RAND_H */
