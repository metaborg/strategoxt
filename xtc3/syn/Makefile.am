include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA   = Xtd.rtg #StrategoXtd.pp.af

TBLS_DEFS      = Xtd.tbl Xtd.def \
		 StrategoXtd.tbl StrategoXtd.def 

sdfdata_DATA   = $(TBLS_DEFS) XtdPrefixed.sdf

EXTRA_DIST     = $(sdfdata_DATA) $(pkgdata_DATA) $(wildcard *.sdf)
CLEANFILES     = 
BOOTCLEANFILES = $(sdfdata_DATA) $(pkgdata_DATA) $(wildcard *.dep)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*
SDF2RTG_FLAGS  = --main $* 

Xtd.def : Xtd.sdf XtcMeta.sdf XtcLexicals.sdf XtcComments.sdf XtcTemplate.sdf
StrategoXtd.def : StrategoXtd.sdf XtdPrefixed.sdf

XtdPrefixed.sdf: Xtd.def
	$(SDF_TOOLS)/bin/gen-renamed-sdf-module -i $< -o $@ \
	--main Xtd --name XtdPrefixed --prefix Xtc