include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = \
  Sdf2-Syntax.str \
  Alias-Sdf-Syntax.str \
  ATerms.str \
  Basic-Sdf-Syntax.str \
  CC-Sdf-Syntax.str \
  Character-Class-Syntax.str \
  Character-Syntax.str \
  Grammar-Syntax.str \
  IntCon.str \
  Kernel-Sdf-Syntax.str \
  Label-Sdf-Syntax.str \
  Layout.str \
  Literals-Sdf-Syntax.str \
  Literals.str \
  Modular-Sdf-Syntax.str \
  Priority-Sdf-Syntax.str \
  RealCon.str \
  Regular-Sdf-Syntax.str \
  Renaming-Sdf-Syntax.str \
  Restrictions-Sdf-Syntax.str \
  Sdf-Disamb.str \
  Sorts-Sdf-Syntax.str \
  Symbols.str 

pkgdata_DATA     = $(subst .str,.rtree,$(SIGS))

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) 
CLEANFILES       = Sdf2-Syntax.def $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) $(SIGS) $(pkgdata_DATA)

Sdf2-Syntax.def :
	ln -s $(top_srcdir)/syn/Sdf2-Syntax.def $@

$(SIGS) : Sdf2-Syntax.def