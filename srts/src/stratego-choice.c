/*

SRTS -- The Stratego Run-Time System

Copyright (c) 1998-2003 Eelco Visser <visser@acm.org>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU General Public License
along with this library; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

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

// #define JMPBUFS 16384
#define JMPBUFS 163840
jmp_buf jmpbufs[JMPBUFS];
unsigned int nr_jmpbuf = 0;
unsigned int stack_ptr = 0;

inline unsigned int allocJmpBuf()
{
    assert(nr_jmpbuf < JMPBUFS);
    return nr_jmpbuf++;
}

ATerm _fail(ATerm t)
{
  // using setjmp and longjmp
  // ATfprintf(stderr, "_fail(%t) %d\n", t, nr_jmpbuf);
  assert(nr_jmpbuf > 0);
  longjmp(jmpbufs[--nr_jmpbuf], 1);
  
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
