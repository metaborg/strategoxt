include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

autogensignatures =            \
  Stratego-Amb.str             \
  Stratego-Modules.str         \
  Stratego.str                 \
  Stratego-Constants.str       \
  Stratego-Overlays.str	       \
  Stratego-Strategies.str      \
  Stratego-DynamicRules.str    \
  Stratego-Rules.str           \
  Stratego-Terms.str           \
  Stratego-Identifiers.str     \
  Stratego-Layout.str          \
  Stratego-Signatures.str      \
  Stratego-Core.str            \
  Stratego-Core-Constants.str  \
  Stratego-Core-Terms.str      \
  Stratego-Core-Layout.str     \
  Stratego-Core-Modules.str    \
  Stratego-Core-Signatures.str \
  Stratego-Core-Strategies.str

staticsignatures =             \
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
