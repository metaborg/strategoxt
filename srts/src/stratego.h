#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h>
#include <choice.h>
#include "aterm-extension.h"

ATerm _id(ATerm);
ATerm _fail(ATerm);
ATerm _all(ATerm, ATerm f(ATerm));
ATerm _one(ATerm, ATerm f(ATerm));
ATerm _some(ATerm, ATerm f(ATerm));
ATerm _thread(ATerm, ATerm f(ATerm));

#define match_cons(t, sym) \
        ((ATgetType(t) == AT_APPL) && (ATgetSymbol(t) == (sym)))

#define match_string(t, str) \
        ((ATgetType(t) == AT_APPL) && (ATgetSymbol((ATermAppl)t) == ATmakeSymbol(str, 0, ATtrue)))

#define match_int(t, i) \
        ((ATgetType(t) == AT_INT) && (ATgetInt((ATermInt)t) == i))

#define match_real(t, i) \
        ((ATgetType(t) == AT_REAL) && (ATgetInt((ATermReal)t) == i))

#define not_null(x) \
        (x == NULL ? _fail(x) : x)

#define JMPBUFS 16384
extern jmp_buf jmpbufs[];
extern unsigned int nr_jmpbuf;

inline unsigned int allocJmpBuf();

// using setjmp and longjmp
#define PushChoice() (setjmp(jmpbufs[allocJmpBuf()]))
#define PopChoice() --nr_jmpbuf

// using choice point library
//#define PushChoice() setChoicePoint()
//#define PopChoice() removeChoicePoint()
