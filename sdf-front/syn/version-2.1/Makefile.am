include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Sdf2-Syntax.def Sdf2-Syntax.tbl Stratego-Sdf2-Syntax.def Stratego-Sdf2-Syntax.tbl

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

Sdf2-Syntax.def : \
  Alias-Sdf-Syntax.sdf \
  ATerms.sdf \
  Basic-Sdf-Syntax.sdf \
  CC-Sdf-Syntax.sdf \
  Character-Class-Syntax.sdf \
  Character-Syntax.sdf \
  Grammar-Syntax.sdf \
  IntCon.sdf \
  Kernel-Sdf-Syntax.sdf \
  Label-Sdf-Syntax.sdf \
  Layout.sdf \
  Literals-Sdf-Syntax.sdf \
  Literals.sdf \
  Modular-Sdf-Syntax.sdf \
  Priority-Sdf-Syntax.sdf \
  RealCon.sdf \
  Regular-Sdf-Syntax.sdf \
  Renaming-Sdf-Syntax.sdf \
  Restrictions-Sdf-Syntax.sdf \
  Sdf-Disamb.sdf \
  Sdf2-Syntax.sdf \
  Sorts-Sdf-Syntax.sdf \
  Symbols.sdf 

Stratego-Sdf2-Syntax.def : \
  Stratego-Sdf2-Syntax.sdf \
  Sdf2-Syntax.def
