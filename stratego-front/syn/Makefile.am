include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

sdfdata_DATA 	= Stratego.def StrategoStratego.def \
	          Stratego.tbl StrategoStratego.tbl \
	      	  $(wildcard *.sdf)				       

CLEANFILES 	= $(wildcard *.tbl) $(TESTS)

BOOTCLEANFILES	= $(wildcard *.def) 

EXTRA_DIST 	= Stratego.def StrategoStratego.def	      \
		  Stratego.tbl StrategoStratego.tbl	      \
		  $(wildcard *.def) $(wildcard *.sdf)

Stratego.def 	: Stratego.sdf Stratego-Signatures.sdf	\
		  Stratego-Modules.sdf Stratego-Strategies.sdf		\
		  Stratego-Overlays.sdf Stratego-Constants.sdf		\
		  StrategoRenamed.sdf Stratego-Terms.sdf		\
		  Stratego-Identifiers.sdf Stratego-Rules.sdf		\
		  Stratego-Layout.sdf Stratego-Script.sdf

StrategoStratego.def 	: StrategoStratego.sdf Stratego.def

PGEN_FLAGS	= -m $*

