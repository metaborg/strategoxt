include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = \
  rhg.tbl \
  rhg.def \
  Stratego-rhg.def \
  Stratego-rhg.tbl \
  rtg.tbl \
  rtg.def \
  Stratego-rtg.def \
  Stratego-rtg.tbl

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf)
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

REUSED = rg-identifier.sdf rg-nonterm.sdf rg-term.sdf rg-layout.sdf

rtg.def : rtg.sdf $(REUSED)
rhg.def : rhg.sdf regexp.sdf $(REUSED)

Stratego-rhg.def : rhg.def Stratego-rhg.sdf
Stratego-rtg.def : rtg.def Stratego-rtg.sdf