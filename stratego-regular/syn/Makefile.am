include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = rhg.def Stratego-rhg.def rtg.def Stratego-rtg.def
TBLS = rhg.tbl Stratego-rhg.tbl rtg.tbl Stratego-rtg.tbl

sdfdata_DATA   = $(TBLS) $(DEFS) $(wildcard *.sdf)
EXTRA_DIST     = $(DEFS) $(wildcard *.sdf)
CLEANFILES     = $(DEFS)
BOOTCLEANFILES = $(DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

REUSED = rg-identifier.sdf rg-nonterm.sdf rg-term.sdf rg-layout.sdf

rtg.def : rtg.sdf $(REUSED)
rhg.def : rhg.sdf regexp.sdf $(REUSED)

Stratego-rhg.def : rhg.def Stratego-rhg.sdf
Stratego-rtg.def : rtg.def Stratego-rtg.sdf
