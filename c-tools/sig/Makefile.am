include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

LANGUAGE=C
pkgdatadocdir=$(pkgdatadir)/doc

pkgdatadoc_DATA = C-AbstractDeclarators.str C-Constants.str \
C-Declarators.str C-Enumerators.str C-Expressions.str	    \
C-Identifiers.str C-Keywords.str C-Lexical.str		    \
C-ParameterDeclarators.str C-Preprocessor.str C-Program.str \
C-Statements.str C-StructsAndUnions.str C-Types.str

pkgdata_DATA = C.rtree C-AbstractDeclarators.rtree C-Constants.rtree \
C-Declarators.rtree C-Enumerators.rtree C-Expressions.rtree	     \
C-Identifiers.rtree C-Keywords.rtree C-Lexical.rtree		     \
C-ParameterDeclarators.rtree C-Preprocessor.rtree C-Program.rtree    \
C-Statements.rtree C-StructsAndUnions.rtree C-Types.rtree

EXTRA_DIST      = $(LANGUAGE).def $(pkgdatadoc_DATA) $(pkgdata_DATA) 
BOOTCLEANFILES	= $(pkgdatadoc_DATA) $(pkgdata_DATA) $(LANGUAGE).def $(wildcard *.rtree)
CLEANFILES	= $(wildcard *.atree)

#$(LANGUAGE).str : $(LANGUAGE).def
$(LANGUAGE).def : 
	cp $(top_srcdir)/syn/$(LANGUAGE).def $@

