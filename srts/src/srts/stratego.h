#ifndef SRTS_STRATEGO_H
#define SRTS_STRATEGO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>
#include <aterm2.h>
#include "stratego-config.h"
#include "aterm-extension.h"  
#include "stratego-choice.h"

ATerm _id(ATerm);
ATerm _fail(ATerm);
ATerm _all(ATerm, ATerm f(ATerm));
ATerm _one(ATerm, ATerm f(ATerm));
ATerm _some(ATerm, ATerm f(ATerm));
ATerm _thread(ATerm, ATerm f(ATerm));

ATerm _bagof(ATerm t, ATerm f(ATerm));

ATerm _cpl_loaded(ATerm);

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

#endif
