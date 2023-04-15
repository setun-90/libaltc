#ifndef   __LANG_TYPES_INT_H
#define   __LANG_TYPES_INT_H



/************************ Properties of integer types ************************/

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

/*** Definitions here for the constants: */
/****** C_BITS  Number of bits per `char` */
/****** SC_MIN  Minimum value of `signed char` */
/****** S_MIN   Minimum value of `short` */
/****** I_MIN   Minimum value of `int` */
/****** L_MIN   Minimum value of `long` */
/****** LL_MIN  Minimum value of `long long` */
/****** SC_MAX  Maximum value of `signed char` */
/****** S_MAX   Maximum value of `short` */
/****** I_MAX   Maximum value of `int` */
/****** L_MAX   Maximum value of `long` */
/****** L_MAX   Maximum value of `long long` */
/****** UC_MAX  Maximum value of `unsigned char` */
/****** US_MAX  Maximum value of `unsigned short` */
/****** UI_MAX  Maximum value of `unsigned int` */
/****** UL_MAX  Maximum value of `unsigned long` */
/****** ULL_MAX Maximum value of `unsigned long long` */
/****** C_MIN   Minimum value of `char` */
/****** C_MAX   Maximum value of `char` */



/************************ Fixed-width integer types **************************/

/*** Typedefs here for: */
/****** n1     Unsigned integer type with `sizeof(n1) == 1` */
/****** n2     Unsigned integer type with `sizeof(n2) == 2` */
/****** n4     Unsigned integer type with `sizeof(n4) == 4` */
/****** n8     Unsigned integer type with `sizeof(n8) == 8` */
/****** nmax   Unsigned integer type of maximum size */
/****** i1     Signed integer type with `sizeof(i1) == 1` */
/****** i2     Signed integer type with `sizeof(i2) == 2` */
/****** i4     Signed integer type with `sizeof(i4) == 4` */
/****** i8     Signed integer type with `sizeof(i8) == 8` */
/****** zmax   Signed integer type of maximum size */
/****** byte   Implementation-defined alias for either `n1` or `i1` */

/***************** Properties of fixed-width integer types *******************/

/*** Definitions here for the constants: */
/****** N1_MAX Maximum value of `n1` */
/****** N2_MAX Maximum value of `n2` */
/****** N4_MAX Maximum value of `n4` */
/****** N8_MAX Maximum value of `n8` */
/****** I1_MIN Minimum value of `i1` */
/****** I2_MIN Minimum value of `i2` */
/****** I4_MIN Minimum value of `i4` */
/****** I8_MIN Minimum value of `i8` */
/****** I1_MAX Maximum value of `i1` */
/****** I2_MAX Maximum value of `i2` */
/****** I4_MAX Maximum value of `i4` */
/****** I8_MAX Maximum value of `i8` */



#endif /* __LANG_TYPES_INT_H */
