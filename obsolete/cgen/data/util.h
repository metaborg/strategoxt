#ifndef UTIL_H
#define UTIL_H

#include <string.h>

#ifndef streq
#  define streq(s,t)	(!(strcmp(s,t)))
#endif

#ifndef MIN
#  define MIN(a,b)	((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#  define MAX(a,b)	((a) > (b) ? (a) : (b))
#endif

#define IDX_TOTAL               0
#define IDX_MIN                 1
#define IDX_MAX                 2

#define STATS(array, value)  \
  array[IDX_TOTAL] += value; \
  if(value < array[IDX_MIN]) \
    array[IDX_MIN] = value;  \
  if(value > array[IDX_MAX]) \
    array[IDX_MAX] = value
		            

#define MYMAXINT 0x7FFFFFFF

#endif
