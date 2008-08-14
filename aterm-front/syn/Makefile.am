include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Internal.mk
include $(wildcard *.dep)

TBLS_DEFS = ATerms.def ATerms.tbl
SIGS      = ATerms.str

PGEN_FLAGS     = -m $*
SDFINCLUDES    = -I $(SDF_LIBRARY)/share/sdf-library/library
SDF2RTG_FLAGS  = -m $*

sdfdata_DATA   = $(TBLS_DEFS)
pkgdata_DATA   = ATerms.str

XT_BUILD_DIST  =  ATerms.def $(SIGS)
EXTRA_DIST    += ATerms.sdf
CLEANFILES    += $(wildcard *.dep) ATerms.tbl
