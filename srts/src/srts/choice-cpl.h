/*

    CPL - The Nancy ChoicePoint Library

    Copyright (C) 1996-2001  LORIA (CNRS, INPL, INRIA, UHP, U-Nancy 2)
			     Nancy, France.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

    Pierre-Etienne Moreau	e-mail: Pierre-Etienne.Moreau@loria.fr
    Marian Vittek		e-mail: vittek@guma.ii.fmph.uniba.sk

*/


#ifndef _choice_h
#define _choice_h

#include <setjmp.h>
#include <string.h>

#define DNON_SAVING_SETJMP 1
#define DLONGJMP_RESTORE_FROM_STACK 1

#define INITIAL_BACKTRAIL_SIZE    256
#define INITIAL_BACKCTRAIL_SIZE   8
#define INITIAL_JMPBUF_STACK_SIZE 4

extern void CPL_init_malloc_protect(void* (*f)());
extern void CPL_init_malloc(void* (*f)());
extern void CPL_init_realloc_protect(void* (*f)());
extern void CPL_init_realloc(void* (*f)());

extern int setChoicePoint();
extern void globalFail();

extern void cCutMark(char *ra);
extern char *cCut();
extern int allocStablePointer(int size);
extern char **getStablePointer(long index);

extern void choice_init(long *bp);
extern char *get_sp(long bp);
extern void longjmperror();

extern void backTrackInit();
extern void backTSizes();

typedef struct Pile {
  long data_index;
  long size;
  int backCTraili;
  int in_use; 
} Pile;

extern int     stack_ptr;
extern jmp_buf *jmpbuf_stack;
extern Pile    *tab_pile;

extern volatile char    *backTrail;
extern long    backTraili;

extern long *backCTrail;
extern long backCTraili;
 
#undef CUTOPEN()
#undef CUTCLOSE()
#undef CUT()
#define CUTOPEN()  cCutMark(0)
#define CUTCLOSE() cCut()
#define CUT(X)     {CUTOPEN; {X;} CUTCLOSE();}

/* --- localSetChoicePoint et localFail------------------------------ */

#ifdef localSetChoicePoint
#undef localSetChoicePoint
#endif

//#define localSetChoicePoint _localSetChoicePoint
extern void increment_stack_ptr();

#define localSetChoicePoint()\
  ((increment_stack_ptr()),\
  (stack_ptr++),\
  (tab_pile[stack_ptr].backCTraili = backCTraili),\
  (tab_pile[stack_ptr].size = -1),\
  (tab_pile[stack_ptr].in_use = 1),\
  (setjmp(jmpbuf_stack[stack_ptr])))

#define localFail() \
  backCTraili = tab_pile[stack_ptr].backCTraili; \
  longjmp(jmpbuf_stack[stack_ptr--],1); 

#define fail() \
  while(!(tab_pile[stack_ptr].in_use)) { stack_ptr--; } \
  if(stack_ptr<0) { printf("Error: no more choices.\n"); exit(0); }\
  if((tab_pile[stack_ptr].size) == (-1)) { localFail(); } else { globalFail(); }
   
#define removeChoicePoint(i) \
   if((i+1) == stack_ptr) stack_ptr--; else tab_pile[i+1].in_use = 0;

void showPile(char *msg);

#endif
