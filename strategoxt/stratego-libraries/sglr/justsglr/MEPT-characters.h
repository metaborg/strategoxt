#ifndef MEPT_CHARACTERS
#define MEPT_CHARACTERS
#include <MEPT.h>
#include <aterm2.h>

ATbool PT_subsetOfCharClass(PT_Symbol smaller, PT_Symbol larger);
ATbool PT_elementOfCharClass(PT_Tree character, PT_Symbol charClass);

#endif
