#ifndef TAFIO_H
#define TAFIO_H

#include "aterm1.h"

#define START_OF_SHARED_TEXT_FILE '!'

extern ATerm AT_readFromSharedTextFile(int *c, FILE *f);

#endif /* BAFIO_H */
