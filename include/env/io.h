#ifndef   __ENV_IO_H
#define   __ENV_IO_H



/************************** Input/Output Support *****************************/

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



#include <lang/types.h>
/*
 * #include your system's device types here:
 * dev
 * pos
 * name
 * perm
 * mode
 */



/*** Manipulation */
dev open(name const *, perm, mode);
err rename(dev, name const *);
err remode(dev, mode const *);
void close(dev);



/* ONLY Sequential access devices */
/*** Examination */
err tell(dev const, pos);
err seek(dev, pos const);



/*** Input/Output proper */
/****** Read `c` records of size `bs` from `d` into the buffer pointed to by `b`,
 ****** updating `s` as necessary */
err sgetn(dev d, char **b, size *s, size c, size bs);
/****** Read bytes from `d` into the buffer pointed to by `b`, updating `s` as necessary,
 ****** until any of the characters in `d` are found */
err sgetd(dev d, char ** restrict b, size *s, char const * restrict dl);


/****** Write the minimum between `c` records of size `bs` and `s` bytes from `b` to `d` */
err sputn(dev d, char const *b, size s, size c, size bs);
/****** Write at most `size` bytes from `b` to `d`, until any of the characters in `dl` are found */
err sputd(dev d, char const * restrict b, size s, char const * restrict dl);



/* ONLY Random access devices */
/*** Input/Output proper */
/****** Read `c` records of size `bs` starting from `p` from `d` into the buffer pointed to by `b`,
 ****** updating `s` as necessary */
err rgetn(dev const d, pos p, char **b, size *s, size c, size bs);
/****** Read bytes starting from `p` from `d` into the buffer pointed to by `b`, updating `s` as necessary,
 ****** until any of the characters in `dl` are found */
err rgetd(dev const d, pos p, char ** restrict b, size *s, char const * restrict dl);


/****** Write the minimum between `c` records of size `b` and `s` bytes from `b` to `d` starting at `p` */
err rputn(dev d, pos p, char const *b, size s, size c, size bs);
/****** Write at most `s` bytes from `b` to `d` starting at `p`, until any of the characters in `dl` are found */
err rputd(dev d, pos p, char const * restrict b, size s, char const * restrict dl);



/* Convenience */
/*** Standard streams */
dev stdin, stdout, stderr;

/****** Read bytes from `d` into the buffer pointed to by `b`, updating `s` as necessary,
 ****** until a newline is found */
err sgetl(dev d, char **b, size *s);
/****** Write at most `s` bytes from `b` to `d`, until a newline is found */
err sputl(dev d, char const *b, size s);
/****** Write bytes from `b` to `d`, until a null terminator is found */
err sput0(dev d, char const *b);


/****** Read bytes starting from `p` from `d` into the buffer pointed to by `b`, updating `s` as necessary,
 ****** until a newline is found */
err rgetl(dev const d, pos *p, char **b, size *s);
/****** Write at most `s` bytes from `b` to `d` starting at `p`, until a newline is found */
err rputl(dev d, pos *p, char const *b, size s);
/****** Write bytes from `b` to `d` starting at `p`, until a null terminator is found */
err rput0(dev d, pos *p, char const *b);



#endif /* __ENV_IO_H */
