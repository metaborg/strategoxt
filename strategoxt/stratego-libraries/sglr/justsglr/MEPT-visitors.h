#ifndef MEPT_VISITORS
#define MEPT_VISITORS
#include <MEPT.h>

typedef void *PT_TreeVisitorData;
typedef PT_Tree(*PT_TreeVisitor) (PT_Tree tree, PT_TreeVisitorData data);
PT_Args PT_foreachTreeInArgs(PT_Args args, PT_TreeVisitor visitor,
			     PT_TreeVisitorData data);

typedef void *PT_SymbolVisitorData;
typedef PT_Symbol(*PT_SymbolVisitor) (PT_Symbol symbol,
				      PT_SymbolVisitorData data);
PT_Symbols PT_foreachSymbolInSymbols(PT_Symbols symbols,
				     PT_SymbolVisitor visitor,
				     PT_SymbolVisitorData data);
typedef void *PT_AttrVisitorData;
typedef PT_Attr(*PT_AttrVisitor) (PT_Attr attr, PT_AttrVisitorData data);
PT_Attrs PT_foreachAttrInAttrs(PT_Attrs attrs, PT_AttrVisitor visitor,
			       PT_AttrVisitorData data);

#endif
