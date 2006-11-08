#ifndef MEPT_PRODUCTIONS
#define MEPT_PRODUCTIONS
#include <MEPT.h>
#include <aterm2.h>

ATbool PT_prodHasLitAsRhs(PT_Production arg);
ATbool PT_prodHasSTARTAsRhs(PT_Production prod);
ATbool PT_isLexicalProd(PT_Production arg);
ATbool PT_prodHasLexLayoutAsRhs(PT_Production arg);
ATbool PT_prodHasCfLayoutAsRhs(PT_Production arg);
ATbool PT_isOptLayoutProd(PT_Production arg);
ATbool PT_prodHasVarSymAsRhs(PT_Production arg);
ATbool PT_isLexicalInjectionProd(PT_Production prod);
ATbool PT_isProductionVariable(PT_Production arg);
ATbool PT_isProductionInjection(PT_Production prod);
ATbool PT_prodHasIterSepAsRhs(PT_Production prod);
ATbool PT_prodHasIterAsRhs(PT_Production prod);

ATbool PT_hasProductionCertainAttr(PT_Production prod, PT_Attr attr);
ATbool PT_hasProductionBracketAttr(PT_Production prod);
ATbool PT_hasProductionMemoAttr(PT_Production prod);
ATbool PT_hasProductionLexicalConstructorAttr(PT_Production prod);
ATbool PT_hasProductionConstructorAttr(PT_Production prod);
ATbool PT_hasProductionTraversalAttribute(PT_Production prod);

#endif
