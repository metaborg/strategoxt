include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Sdf2.def Sdf2.tbl Stratego-Sdf2.def Stratego-Sdf2.tbl 

SDF2_MODULES = \
  Sdf2.sdf \
  basic/Comments.sdf \
  basic/Whitespace.sdf \
  languages/aterm/syntax/ATerms.sdf \
  languages/aterm/syntax/IntCon.sdf \
  languages/aterm/syntax/Literals.sdf \
  languages/aterm/syntax/RealCon.sdf \
  languages/sdf2/syntax/Aliases.sdf \
  languages/sdf2/syntax/Basic.sdf \
  languages/sdf2/syntax/CC.sdf \
  languages/sdf2/syntax/Character-Class.sdf \
  languages/sdf2/syntax/Character.sdf \
  languages/sdf2/syntax/Grammars.sdf \
  languages/sdf2/syntax/Kernel.sdf \
  languages/sdf2/syntax/Labels.sdf \
  languages/sdf2/syntax/Lifting.sdf \
  languages/sdf2/syntax/Literals.sdf \
  languages/sdf2/syntax/Modules.sdf \
  languages/sdf2/syntax/Priority.sdf \
  languages/sdf2/syntax/Regular.sdf \
  languages/sdf2/syntax/Renaming.sdf \
  languages/sdf2/syntax/Restrictions.sdf \
  languages/sdf2/syntax/Sdf2.sdf \
  languages/sdf2/syntax/Sdf2-Syntax.sdf \
  languages/sdf2/syntax/Sorts.sdf \
  languages/sdf2/syntax/Symbols.sdf

STRATEGO_SDF2_MODULES = \
  $(SDF2_MODULES) \
  Stratego-Sdf2.sdf \
  embeddings/stratego/Stratego-Sdf2.sdf

PGEN_FLAGS = -m $*

sdfdata_DATA   = $(TBLS_DEFS)
EXTRA_DIST     = $(sdfdata_DATA) $(SDF2_MODULES) $(STRATEGO_SDF2_MODULES)
BOOTCLEANFILES = $(TBLS_DEFS)

Sdf2.def : Sdf2.sdf $(SDF2_MODULES)

Stratego-Sdf2.def: Stratego-Sdf2.sdf $(STRATEGO_SDF2_MODULES)

