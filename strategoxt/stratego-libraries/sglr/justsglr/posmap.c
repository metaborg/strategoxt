/*
 $Id: posmap.c 10242 2003-07-24 19:43:37Z markvdb $
 */   

#include "posmap.h"
#include <stdlib.h>
#include <stdio.h>

PosMap PosMapCreate(int size)
{
  PosMap b;
  int i;

  if (size <= 0) {
    b = NULL;
  }
  else {
    b = calloc(size, sizeof(int));

    if (b == NULL) {
      ATerror("out of memory in PosMapCreate\n");
    }    
    for (i = 0; i < size; i++) {
      b[i] = -1;
    }
  }
 
  return b;
}

void PosMapDestroy(PosMap b)
{
  if (b) {
    free(b);
  }
}

void PosMapSet(PosMap b, int index, int length)
{
   b[index] = length;
}

void PosMapUnset(PosMap b, int index)
{
  b[index] = -1;
}

int PosMapIsSet(PosMap b, int index)
{
  return b[index];
}
