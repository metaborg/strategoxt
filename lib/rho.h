/* $Id: rho.h,v 1.19 2001/07/02 21:27:38 eelco Exp $ */

#ifndef _RHO_H
#define _RHO_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <assert.h>


#define DEBUG 0


#if DEBUG
#define DPRINTF(format, args...) \
  fprintf(stderr, format, ## args)
#else
#define DPRINTF(format, args...)
#endif


typedef struct _Constr Constr;
typedef struct _Closure Closure;
typedef struct _Env Env;


typedef void (* ClosureCode)(
    Closure * thk, Env * env);
typedef void (* FuncCode)(
    Closure * thk, Env * env, Closure * arg);


#define MKCLOSURECODE(name) void name( \
    Closure * thk, Env * env)
#define MKFUNCCODE(name)  void name( \
    Closure * thk, Env * env, Closure * arg)


struct _Constr {
    int registered;
    const char * name;
    Constr * next;
};


struct _Closure {
    ClosureCode code;
    union {
        Env * env;
        int integer;
        const char * string;
        Constr * constr;
        struct {
            FuncCode code;
            Env * env;
            unsigned int cuts;
        } func;
        struct {
            Closure * lhs;
            Closure * rhs;
        } app;
    } u;
};


struct _Env {
    Env * up;
    unsigned int size;
    Closure * thks[0];
};


typedef struct 
{
    Closure * e1;
    Closure * e2;
    unsigned int n_parms;
    Closure * parms[0];
} Prop;


/* Objects defined in the C support code. */

MKCLOSURECODE(intdone);
MKCLOSURECODE(strdone);
MKCLOSURECODE(funcdone);
MKCLOSURECODE(constrdone);
MKCLOSURECODE(appdone);

MKCLOSURECODE(p_add);
MKCLOSURECODE(p_sub);
MKCLOSURECODE(p_mul);
MKCLOSURECODE(p_div);
MKCLOSURECODE(p_gt);
MKCLOSURECODE(p_primeq);
MKCLOSURECODE(p_putstr);
MKCLOSURECODE(p_readfile);
MKCLOSURECODE(p_writefile);
MKCLOSURECODE(p_readterm);
MKCLOSURECODE(p_writeterm);
MKCLOSURECODE(p_print);

void * alloc(size_t bytes);
void fail();
void failTest(Closure * arg);
void cut(Closure * thk, Closure * arg);
void lchoice(Closure * thk, Closure * e1, Closure * e2);
void registerConstr(Constr * c);
Constr * findConstr(const char * name);
void mkIOResult(Closure * thk, Closure * r2);
Closure * nulltuple();
void initMemory();


/* Declare constructors as weak objects so that multiple declarations
   don't cause linker errors.  GCC extension. */
#define CONSTR(name, cname)                             \
  Constr cname __attribute__ ((weak)) = { 0, #name };   \
  void register_##cname()                               \
      __attribute__ ((weak, constructor));              \
  void register_##cname()                               \
  {                                                     \
      registerConstr(&cname);                           \
  }

#define ALLOC(size) alloc(size)

#define ALLOCENV(size)                          \
  ((Env *) ALLOC(sizeof(Env) + (size) * sizeof(Closure *)))

#define ALLOCCLOSURE() ((Closure *) ALLOC(sizeof(Closure)))

#define ALLOCSTATIC(name)                       \
  Closure name##_thk = { code: name };

#define EXTERNSTATIC(name)                      \
  extern Closure name##_thk;

static inline void NOARG()
{
}

#define VARPAT()                                \
  MKENV(1);                                     \
  env->thks[0] = arg;

#define DECOMPPAT()                             \
  ENTER(arg);                                   \
  if (arg->code != appdone) {                   \
      DPRINTF("failed app match\n");            \
      fail();                                   \
  }                                             \
  MKENV(2);                                     \
  env->thks[0] = arg->u.app.lhs;                \
  env->thks[1] = arg->u.app.rhs;

#define INTPAT(n)                                       \
  ENTER(arg);                                           \
  if (arg->code != intdone || arg->u.integer != n) {    \
      DPRINTF("failed int match\n");                    \
      fail();                                           \
  }

#define STRPAT(s)                               \
  ENTER(arg);                                   \
  if (arg->code != strdone ||                   \
      strcmp(arg->u.string, s) != 0) {          \
      DPRINTF("failed string match\n");         \
      fail();                                   \
  }

#define CONSTRPAT(name)                         \
  ENTER(arg);                                   \
  if (arg->code != constrdone ||                \
      arg->u.constr != &name) {                 \
      DPRINTF("failed constr match\n");         \
      fail();                                   \
  }

#define FAILPAT()                               \
  failTest(arg);
  
#define MKENV(_size)                            \
  {                                             \
      Env * envnew = ALLOCENV(_size);           \
      envnew->size = _size;                     \
      envnew->up = env;                         \
      env = envnew;                             \
  }

static inline void MKSUSP(Env * env, unsigned int disp, ClosureCode code)
{
  env->thks[disp] = ALLOCCLOSURE();
  env->thks[disp]->code = code;
  env->thks[disp]->u.env = env;
}

static inline void MKINT(Closure * thk, int n)
{
    thk->code = intdone;
    thk->u.integer = n;
}

static inline void MKSTR(Closure * thk, char * s)
{
    thk->code = strdone;
    thk->u.string = s;
}

static inline void MKFUNC(Closure * thk, Env * env, FuncCode func)
{
    thk->code = funcdone;
    thk->u.func.code = func;
    if (env == (Env *) 0xdeadface) abort();
    thk->u.func.env = env;
    thk->u.func.cuts = 0;
}

static inline void MKCONSTR(Closure * thk, Constr * constr)
{
    thk->code = constrdone;
    thk->u.constr = constr;
}

static inline void FAIL()
{
    fail();
}

static inline void ENTER(Closure * thk)
{
    thk->code(thk, thk->u.env);
}

#define ENTERED(name)                           \
  DPRINTF("entered " #name "\n");

static inline void COPY(Closure * dst, Closure * src)
{
    *dst = *src;
}

static inline void CALL(Closure * thk, Closure * rhs)
{
    if (thk->code == funcdone) {
        thk->u.func.code(thk, thk->u.func.env, rhs);
    } else {
        Closure * lhs = ALLOCCLOSURE();
        COPY(lhs, thk);
        thk->code = appdone;
        thk->u.app.lhs = lhs;
        thk->u.app.rhs = rhs;
    }
}

static inline void LCHOICE(Closure * thk, Closure * e1, Closure * e2)
{
    lchoice(thk, e1, e2);
}

static inline void CUT(Closure * thk, Closure * arg)
{
    cut(thk, arg);
}

#define CALLPRIMOP(thk, name)                   \
  name(thk, env);


/* Useful for the C support code. */

/* Gcc is not smart enough to unroll the while-loop when delta
   is known.  Grr... */
static inline Closure * followEnv(Env * env, unsigned int delta, 
    unsigned int disp)
{
    while (delta--) env = env->up;
    return env->thks[disp];
}

#define intAt(env, delta, disp) (followEnv(env, delta, disp)->u.integer)
#define strAt(env, delta, disp) (followEnv(env, delta, disp)->u.string)
#define conAt(env, delta, disp) (followEnv(env, delta, disp)->u.constr)


#endif /* _RHO_H */
