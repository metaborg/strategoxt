/*
 $Id: bitmap.h,v 1.2 2001/07/11 10:53:55 markvdb Exp $
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
