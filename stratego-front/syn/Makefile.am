include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

sdfdata_DATA 	= Stratego.def StrategoStratego.def \
	          Stratego.tbl StrategoStratego.tbl \
	      	  $(wildcard *.sdf)				       

CLEANFILES 	= $(wildcard *.tbl) $(wildcard *.def) $(TESTS)

EXTRA_DIST 	= Stratego.def StrategoStratego.def	      \
		  Stratego.tbl StrategoStratego.tbl	      \
		  $(wildcard *.def) $(wildcard *.sdf)

Stratego.def		: $(wildcard *.sdf)
StrategoStratego.def 	: $(wildcard *.sdf)
StrategoStrategoC.def	: $(wildcard *.sdf)

PGEN_FLAGS	= -m $*


