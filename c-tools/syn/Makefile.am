include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

LANGUAGE     = C
TBLS         = $(LANGUAGE).tbl Stratego-$(LANGUAGE).tbl
DEFS         = $(LANGUAGE).def Stratego-$(LANGUAGE).def

pkgdata_DATA = $(TBLS) $(DEFS) $(wildcard *.sdf)
CLEANFILES   = $(TBLS) $(DEFS)
EXTRA_DIST   = $(TBLS) $(DEFS) $(wildcard *.sdf)

# MUSTDO: This import should work when c-tools is part of StrategoXT ...
SDFINCLUDES  = -I $(STRATEGO_FRONT)/share/stratego-front
PGEN_FLAGS   = -m $*

