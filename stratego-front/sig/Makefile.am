include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

autogensignatures = \
  Stratego.str      \
  Stratego-Amb.str  \
  Stratego-Core.str

staticsignatures = \
  Stratego-MetaTransition.str

signatures = $(autogensignatures) $(staticsignatures)

CLEANFILES	= $(wildcard *.atree)
BOOTCLEANFILES	= $(autogensignatures) $(wildcard *.rtree) Stratego.def Stratego-Amb.def

pkgdata_DATA    = $(signatures:.str=.rtree)
EXTRA_DIST      = $(wildcard *.str) $(wildcard *.rtree) $(pkgdata_DATA) Stratego.def

Stratego.def: 
	rm -f Stratego.def
	ln -s ../syn/Stratego.def .

Stratego-Core.def: 
	rm -f Stratego-Core.def
	ln -s ../syn/Stratego-Core.def .

Stratego-Amb.def: 
	rm -f Stratego-Amb.def
	ln -s ../syn/Stratego-Amb.def .

$(autogensignatures) : Stratego.def Stratego-Core.def Stratego-Amb.def

%.str : %.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m $* | \
	$(STRATEGO_REGULAR)/bin/rtg2sig -o $@
