/*
 $Id: bitmap.h 5413 2001-07-11 10:53:56Z markvdb $
 */   

#ifndef BITMAP_H
#define BITMAP_H

#include <aterm2.h> 

typedef int* Bitmap;

Bitmap BitmapCreate(int size);
void BitmapDestroy(Bitmap b);
Bitmap BitmapSet(Bitmap b, int index);
Bitmap BitmapUnset(Bitmap b, int index);
int BitmapIsSet(Bitmap b, int index);

#endif
