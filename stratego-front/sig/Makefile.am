include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA 	= Stratego.rtree				   \
		  Stratego-Constants.rtree Stratego-Overlays.rtree \
		  Stratego-Identifiers.rtree Stratego-Rules.rtree  \
		  Stratego-Terms.rtree Stratego-Layout.rtree	   \
		  Stratego-Script.rtree Stratego-Modules.rtree	   \
		  Stratego-Signatures.rtree	

CLEANFILES	= $(wildcard *.atree)
BOOTCLEANFILES	= $(wildcard *.str) $(wildcard *.rtree)

Stratego.def: 
	rm -f Stratego.def
	ln -s ../syn/Stratego.def .

EXTRA_DIST 	= $(wildcard *.str) $(pkgdata_DATA) Stratego.def
