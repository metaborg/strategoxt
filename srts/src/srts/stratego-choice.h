#ifndef SRTS_STRATEGO_CHOICE_H
#define SRTS_STRATEGO_CHOICE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h>
#include "aterm-extension.h"
#include "stratego-config.h"

#ifdef HAVE_CPL

#include "choice-cpl.h"

#define PushChoice() localSetChoicePoint()
#define PopChoice() --stack_ptr
#define LocalPopChoice(i) removeChoicePoint(i)

#define GlobalPushChoice() setChoicePoint()

#else

extern jmp_buf jmpbufs[];
extern unsigned int nr_jmpbuf;
extern unsigned int stack_ptr;
extern unsigned int allocJmpBuf();
 
#define PushChoice() (setjmp(jmpbufs[allocJmpBuf()]))
#define PopChoice() --nr_jmpbuf
#define LocalPopChoice(i) --nr_jmpbuf

#define GlobalPushChoice() PushChoice()
#define GlobalPopChoice() PopChoice()

#endif

#endif
