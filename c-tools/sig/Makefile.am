include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = C.str C-AbstractDeclarators.str C-Constants.str \
       C-Declarators.str C-Enumerators.str C-Expressions.str \
       C-Identifiers.str C-Keywords.str C-Lexical.str \
       C-ParameterDeclarators.str C-Preprocessor.str C-Program.str \
       C-Statements.str C-StructsAndUnions.str C-Types.str

pkgdata_DATA    = $(subst .str,.rtree,$(SIGS))
EXTRA_DIST      = $(SIGS) $(pkgdata_DATA)
CLEANFILES      = C.def
BOOTCLEANFILES	= $(SIGS) $(pkgdata_DATA)

C.def : 
	ln -s $(top_srcdir)/syn/C.def $@

$(SIGS) : C.def
