include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

LANGUAGE=C
pkgdatadocdir=$(pkgdatadir)/doc

SIGS=C.str C-AbstractDeclarators.str C-Constants.str C-Declarators.str C-Enumerators.str \
   C-Expressions.str  C-Identifiers.str C-Keywords.str C-Lexical.str \
   C-ParameterDeclarators.str C-Preprocessor.str C-Program.str C-Statements.str \
   C-StructsAndUnions.str C-Types.str  

P_SIGS=C.rtree C-AbstractDeclarators.rtree C-Constants.rtree C-Declarators.rtree C-Enumerators.rtree \
   C-Expressions.rtree  C-Identifiers.rtree C-Keywords.rtree C-Lexical.rtree \
   C-ParameterDeclarators.rtree C-Preprocessor.rtree C-Program.rtree C-Statements.rtree \
   C-StructsAndUnions.rtree C-Types.rtree

pkgdatadoc_DATA = $(SIGS)
pkgdata_DATA 	= $(P_SIGS)
EXTRA_DIST      = $(LANGUAGE).def $(SIGS) $(P_SIGS) 
BOOTCLEANFILES	= $(SIGS) $(P_SIGS) $(LANGUAGE).def $(wildcard *.rtree)
CLEANFILES	= $(wildcard *.atree)

$(LANGUAGE).str : $(LANGUAGE).def
$(LANGUAGE).def : 
	cp $(top_srcdir)/syn/$(LANGUAGE).def $@

