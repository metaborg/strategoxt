/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>


This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
USA
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h> 
#include "srts/stratego-choice.h"
#include "srts/mprotect.h"
#include "srts/stratego-config.h"

#ifdef HAVE_CPL

ATerm _fail(ATerm t)
{
  fail();
  return NULL;
}

ATerm _cpl_loaded(ATerm t)
{
  return t;
}

#else

// Choice point implementation

/* Pointer to the start of  a dynamically allocated array of jmp_buf
   structures. */
jmp_buf *jmpbufs_start = 0;

/* Pointer just past the end of the jmpbufs array. */
jmp_buf *jmpbufs_end = 0;

/* The lowest free element of the jmpbufs array. */
jmp_buf *jmpbufs_pos = 0;

/* For compatibility with the cpl implementation; always 0. */
unsigned int stack_ptr = 0;


void resizeJmpBufs()
{
    unsigned int n = jmpbufs_end - jmpbufs_start;
    jmp_buf *new;

    n = n == 0 ? 1 : n * 2;
#ifdef DEBUG
    fprintf(stderr, "srts: resizing jump buffer array to hold %d elements\n", n);
#endif

    new = realloc(jmpbufs_start, n * sizeof(jmp_buf));
    if (!new) {
        fprintf(stderr, "srts: cannot resize jump buffer array to hold %d elements", n);
        abort();
    }

    jmpbufs_pos = new + (jmpbufs_pos - jmpbufs_start);
    jmpbufs_end = new + n;
    jmpbufs_start = new;
}

ATerm _fail(ATerm t)
{
  // using setjmp and longjmp
  // ATfprintf(stderr, "_fail(%t) %d\n", t, nr_jmpbuf);
  assert(jmpbufs_pos > jmpbufs_start);
  longjmp(*--jmpbufs_pos, 1);

  // localFail();
  //fail();
  return (ATerm)ATempty;
}

ATerm _cpl_loaded(ATerm t)
{
  _fail(t);
  return t;
}

/* choice: s1 <+ s2
   if(PushChoice() == 0) {s1; PopChoice();} else s2
*/

#endif
