#ifndef _ATERM_H
#define _ATERM_H

#include "aterm2.h"

typedef struct ProtEntry
{
	struct ProtEntry *next;
	ATerm *start;
	int    size;
} ProtEntry;

#define STRING_MARK 0xFF
#define STRING_MARK 0xFF /* marker for binary strings */   
#define LENSPEC 8

extern ATbool silent;
extern ProtEntry **at_prot_table;
extern int at_prot_table_size;

void AT_markTerm(ATerm t);
void AT_unmarkTerm(ATerm t);
void AT_unmarkIfAllMarked(ATerm t);
int  AT_calcTextSize(ATerm t);
int  AT_calcCoreSize(ATerm t);
int  AT_calcSubterms(ATerm t);
int  AT_calcUniqueSubterms(ATerm t);
int  AT_calcUniqueSymbols(ATerm t);
int  AT_calcTermDepth(ATerm t);
void AT_writeToStringBuffer(ATerm t, char *buffer);
void AT_assertUnmarked(ATerm t);
void AT_assertMarked(ATerm t);
int AT_calcAllocatedSize();

#endif
