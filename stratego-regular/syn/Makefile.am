include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = rtg.def Stratego-rtg.def
TBLS = rtg.tbl Stratego-rtg.tbl

sdfdata_DATA   = $(TBLS) $(DEFS) $(wildcard *.sdf)
EXTRA_DIST     = $(DEFS) $(wildcard *.sdf)
CLEANFILES     = $(TBLS) $(wildcard *.dep)
BOOTCLEANFILES = $(DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*

REUSED = rg-identifier.sdf rg-nonterm.sdf rg-term.sdf rg-layout.sdf

rtg.def : rtg.sdf $(REUSED)
Stratego-rtg.def : rtg.def Stratego-rtg.sdf
