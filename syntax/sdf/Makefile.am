include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = Sdf2.def Stratego-Sdf2.def Sdf2MoreStartSymbols.def
TBLS = Sdf2.tbl Stratego-Sdf2.tbl Sdf2MoreStartSymbols.tbl

PGEN_FLAGS = -m $*
SDFINCLUDES = \
  -I $(SDF_LIBRARY)/share/sdf-library/library \
  -I $(ASF_LIBRARY)/share/asf-library/library \
  -I $(top_srcdir)/../stratego-front/syn

sdfdata_DATA   = $(DEFS) $(TBLS)
EXTRA_DIST     = $(DEFS) Sdf2.sdf Stratego-Sdf2.sdf Sdf2MoreStartSymbols.sdf

CLEANFILES     = $(TBLS)
BOOTCLEANFILES = $(DEFS) $(wildcard *.dep)

