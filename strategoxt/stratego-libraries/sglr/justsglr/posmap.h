/*
 $Id: posmap.h 10242 2003-07-24 19:43:37Z markvdb $
 */   

#ifndef LENGTHMAP_H
#define LENGTHMAP_H

#include <aterm2.h> 

typedef int* PosMap;

PosMap PosMapCreate(int size);
void PosMapDestroy(PosMap b);
void PosMapSet(PosMap b, int index, int pos);
void PosMapUnset(PosMap b, int index);
int PosMapIsSet(PosMap b, int index);

#endif
