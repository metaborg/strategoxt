include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA 	= Stratego.rtree				   \
		  Stratego-Constants.rtree Stratego-Overlays.rtree \
		  Stratego-Identifiers.rtree Stratego-Rules.rtree  \
		  Stratego-Terms.rtree Stratego-Layout.rtree	   \
		  Stratego-Script.rtree Stratego-Modules.rtree	   \
		  Stratego-Signatures.rtree Stratego-Strategies.rtree \
		  Stratego-Amb.rtree

CLEANFILES	= $(wildcard *.atree)
BOOTCLEANFILES	= $(wildcard *.str) $(wildcard *.rtree) Stratego.def 

Stratego.def: 
	rm -f Stratego.def
	ln -s ../syn/Stratego.def .

Stratego-Amb.def: 
	rm -f Stratego-Amb.def
	ln -s ../syn/Stratego-Amb.def .

EXTRA_DIST 	= $(wildcard *.str) $(pkgdata_DATA) Stratego.def

Stratego.str Stratego-Constants.str Stratego-Overlays.str Stratego-Identifiers.str Stratego-Rules.str Stratego-Terms.str Stratego-Layout.str Stratego-Script.str Stratego-Modules.str Stratego-Signatures.str Stratego-Strategies.str : Stratego.def

Stratego-Amb.str : Stratego-Amb.def