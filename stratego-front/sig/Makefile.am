include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

autogensignatures = \
  Stratego.rtg      \
  Stratego-Amb.rtg  \
  Stratego-Core.rtg \
  Stratego-Sugar.rtg\
  Stratego.str      \
  Stratego-Amb.str  \
  Stratego-Core.str \
  Stratego-Sugar.str

staticsignatures = \
  Stratego-MetaTransition.str \
  Stratego-Sugar-MetaTransition.str

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

Stratego-Sugar.def: 
	rm -f Stratego-Sugar.def
	ln -s ../syn/Stratego-Sugar.def .

Stratego-Amb.def: 
	rm -f Stratego-Amb.def
	ln -s ../syn/Stratego-Amb.def .

$(autogensignatures) : Stratego.def Stratego-Core.def Stratego-Sugar.def Stratego-Amb.def

%.rtg : %.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m $* -o $@

%.str : %.rtg
	$(STRATEGO_REGULAR)/bin/rtg2sig -i $< -o $@
