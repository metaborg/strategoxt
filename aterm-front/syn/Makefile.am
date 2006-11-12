include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = ATerms.def ATerms.tbl
SIGS      = ATerms.str

PGEN_FLAGS     = -m $*

# FIXME SDF: bootstrap problem, remove asf library include.
SDFINCLUDES    = -I $(SDF_LIBRARY)/share/sdf-library/library -I $(ASF_LIBRARY)/share/asf-library/library
SDF2RTG_FLAGS  = -m $*

sdfdata_DATA   = $(TBLS_DEFS)
pkgdata_DATA   = ATerms.str ATerms-obsolete.str
EXTRA_DIST     = ATerms.sdf ATerms.def $(SIGS) $(pkgdata_DATA) 

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(TBLS_DEFS) $(SIGS) ATerms.str


