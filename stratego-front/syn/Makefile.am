include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

sdfdata_DATA 	= Stratego.def StrategoStratego.def StrategoStrategoC.def \
	          Stratego.tbl StrategoStratego.tbl StrategoStrategoC.tbl \
	      	  $(wildcard *.sdf)				       

CLEANFILES 	= $(wildcard *.tbl) $(wildcard *.def) $(TESTS)

EXTRA_DIST 	= Stratego.def StrategoStratego.def	      \
		  Stratego.tbl StrategoStratego.tbl	      \
		  StrategoStrategoC.tbl StrategoStrategoC.def \
		  $(wildcard *.def) $(wildcard *.sdf)

Stratego.def		: $(wildcard *.sdf)
StrategoStratego.def 	: $(wildcard *.sdf)
StrategoStrategoC.def	: $(wildcard *.sdf)

SDFINCLUDES 	= -I $(CGEN)/share/cgen
PGEN_FLAGS	= -m $*


