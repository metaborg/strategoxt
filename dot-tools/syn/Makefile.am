include $(top_srcdir)/Makefile.xt

SDFINCLUDES	= -I $(STRATEGO_FRONT)/share/sdf/stratego-front

pkgdata_DATA 	= $(wildcard *.sdf) \
		  Dot.def Dot.tbl Dot.rtree Dot.pp.af \
	          Dot-pretty.pp Dot-pretty.pp.af \
		  StrategoDot.def StrategoDot.tbl \
		  Dot.rtree  Layout.rtree QuotedLiterals.rtree

EXTRA_DIST 	= Dot.str  Layout.str  QuotedLiterals.str \
		  $(pkgdata_DATA)

BOOTCLEANFILES 	= Dot.str Layout.str  QuotedLiterals.str \
		  $(wildcard *.rtree) $(wildcard *.tbl) $(wildcard *.def) \
		  $(wildcard *.pp) $(wildcard *.pp.af)

Dot.def		: $(wildcard *.sdf)
StrategoDot.def	: $(wildcard *.sdf)

PGEN_FLAGS	= -m $*
