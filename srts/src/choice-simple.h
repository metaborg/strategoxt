#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h>
#include "aterm-extension.h"

extern jmp_buf jmpbufs[];
extern unsigned int nr_jmpbuf;
extern unsigned int stack_ptr;
extern unsigned int allocJmpBuf();
 
#define PushChoice() (setjmp(jmpbufs[allocJmpBuf()]))
#define PopChoice() --nr_jmpbuf
#define LocalPopChoice(i) --nr_jmpbuf

#define GlobalPushChoice() PushChoice()
#define GlobalPopChoice() PopChoice()
