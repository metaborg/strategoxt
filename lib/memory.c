/* $Id: memory.c,v 1.5 2001/07/02 21:27:37 eelco Exp $ */

#include "rho.h"

#include <unistd.h>


static void * arenaStart, * arenaEnd, * arenaPos;
static void * arena2Start, * arena2End, * arena2Pos;
static unsigned int arenaSize = 32 * 1024 * 1024;

unsigned int cAllocs, cbAllocs;


void initMemory()
{
    arenaStart = arenaPos = malloc(arenaSize);
    if (!arenaStart) {
        fprintf(stderr, "unable to initialize GC\n");
        abort();
    }
    arenaEnd = arenaStart + arenaSize;
}


#if 0
static void * alloc2(size_t bytes)
{
    void * res;
    if (arena2Pos + bytes >= arena2End) abort(); /* can't happen */
    res = arena2Pos;
    arena2Pos += bytes;
    return res;
}


static inline void verify(void * p)
{
    if (p < arenaStart || p >= arenaEnd) {
        fprintf(stderr, "pointer points out of arena\n");
        abort();
    }
}


typedef struct {
    unsigned int magic;
    void * where;
} Evac;

    
#define MAGIC 0xdefaced


static Env * evacuateEnv(Env * env);
MKFUNCCODE(proplchoice);


static Thunk * evacuateThunk(Thunk * thk)
{
    Thunk * copy;
    Prop * prop, propcopy;
    unsigned int b;
    
    fprintf(stderr, "evacuating thunk %p...\n", thk);

    verify(thk);

    if (((Evac *) thk)->magic == MAGIC) {
        fprintf(stderr, "thunk already evaced\n");
        return (Thunk *) ((Evac *) thk)->where;
    }

    copy = alloc2(sizeof(Thunk));
    *copy = *thk;

    ((Evac *) thk)->magic = MAGIC;
    ((Evac *) thk)->where = copy;

    if (copy->code == intdone || copy->code == constrdone)
        ;
    else if (copy->code == strdone) {
        fprintf(stderr, "don't know about strdone!\n");
        abort();
    } else if (copy->code == appdone) {
        fprintf(stderr, "don't know about appdone!\n");
        abort();
    } else if (copy->code == funcdone) {
        fprintf(stderr, "function to %p\n", copy->u.func.code);
        if (copy->u.func.code == proplchoice) {
            fprintf(stderr, "foo!\n");
            prop = (Prop *) copy->u.func.env;
/*             propcopy = alloc2(sizeof(Prop) +  */
/*                 prop->n_parms * sizeof(Thunk *)); */
/*             propcopy->e1 = propcopy */
/*             propcopy->n_parms = prop->n_parms; */
            abort();
        } else
            copy->u.func.env = evacuateEnv(copy->u.func.env);
    } else {
        fprintf(stderr, "bar %p!\n", copy->code);
        copy->u.env = evacuateEnv(copy->u.env);
    }
    
    fprintf(stderr, "thunk done\n");

    return copy;
}


static Env * evacuateEnv(Env * env)
{
    Env * copy;
    unsigned int i;

    fprintf(stderr, "evacuating env %p...\n", env);

    if (!env) return 0;

    verify(env);

    if (((Evac *) env)->magic == MAGIC) {
        fprintf(stderr, "env already evaced\n");
        return (Env *) ((Evac *) env)->where;
    }

    fprintf(stderr, "evacuating env (size %d)...\n", env->size);

    copy = alloc2(sizeof(Env) + env->size * sizeof(Thunk *));
    copy->size = env->size;
    copy->up = env->up;
    for (i = 0; i < env->size; i++)
        copy->thks[i] = env->thks[i];
    ((Evac *) env)->magic = MAGIC;
    ((Evac *) env)->where = copy;
    copy->up = evacuateEnv(copy->up);
    for (i = 0; i < copy->size; i++)
        copy->thks[i] = evacuateThunk(copy->thks[i]);

    fprintf(stderr, "env done\n");

    return copy;
}


void collectGarbage(CChain * cchain)
{
    fprintf(stderr, "GCing...\n");

    arena2Start = arena2Pos = malloc(arenaSize);
    if (!arena2Start) {
        fprintf(stderr, "unable to alloc second arena in GC\n");
        abort();
    }
    arena2End = arena2Start + arenaSize;

    while (cchain) {
        fprintf(stderr, "frame %p\n", cchain);
        cchain->env = evacuateEnv(cchain->env);
        cchain = cchain->up;
    }

    /* Destroy the old arena, use the new one. */
    free(arenaStart);
    arenaStart = arena2Start;
    arenaEnd = arena2End;
    arenaPos = arena2Pos;
}
#endif


void * alloc(size_t bytes)
{
    void * res;

    if (arenaPos + bytes >= arenaEnd) {
#if 0
        collectGarbage(cchain);
#endif
        if (arenaPos + bytes >= arenaEnd) {
            fprintf(stderr, "out of memory\n");
            abort();
        }
    }

    res = arenaPos;
    arenaPos += bytes;
    
    cAllocs++;
    cbAllocs += bytes;

    return res;
}


#if 0
void * alloc(size_t bytes)
{
    void * p;
    p = malloc(bytes + 128);
    assert(p);
    fprintf(stderr, "alloc %d/%p\n", bytes, p);
    return p;
}
#endif
