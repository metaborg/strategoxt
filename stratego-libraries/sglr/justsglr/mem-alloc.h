/* $Id: mem-alloc.h 5413 2001-07-11 10:53:56Z markvdb $ */

#ifndef _MEM_ALLOC_H_
#define _MEM_ALLOC_H_ 1

#include <stdlib.h>
#define SG_Calloc(m,n)    calloc(m,n)
#define SG_Malloc(m,n)    malloc((m)*(n))
#define SG_Realloc(o,m,n) realloc(o,(m)*(n))
#define SG_Free(o)        free(o)

#endif  /* _MEM_ALLOC_H_ */
