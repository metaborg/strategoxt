include $(top_srcdir)/Makefile.xt

pkgdata_DATA = C.rtree AbstractDeclarators.rtree Expressions.rtree  \
Preprocessor.rtree Constants.rtree Identifiers.rtree Program.rtree  \
Keywords.rtree Statements.rtree Declarators.rtree Lexical.rtree	    \
StructsAndUnions.rtree Enumerators.rtree ParameterDeclarators.rtree \
Types.rtree

EXTRA_DIST = $(pkgdata_DATA) $(wildcard *.str)      

C.def: 
	ln -s ../syn/C.def .

