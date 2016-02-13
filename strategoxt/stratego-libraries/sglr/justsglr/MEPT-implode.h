#ifndef MEPT_IMPLODE
#define MEPT_IMPLODE
#include <aterm2.h>
#include <MEPT.h>

ATerm PT_implodeParseTree(PT_ParseTree tree,
			  ATbool _interpret_cons,
			  ATbool _remove_layout,
			  ATbool _remove_literals,
			  ATbool _remove_injections,
			  ATbool _remove_parsetree,
			  ATbool _implode_lexicals,
			  ATbool _keep_annotations,
			  ATbool _interpret_alt,
			  ATbool _interpret_seq,
			  ATbool _interpret_opt,
			  ATbool _interpret_layout_place_holder);

#endif
