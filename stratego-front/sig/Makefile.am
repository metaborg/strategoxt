include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA 	= Stratego.rtree				       \
		  Stratego-Constants.rtree Stratego-Overlays.rtree     \
		  Stratego-Identifiers.rtree Stratego-Rules.rtree      \
		  Stratego-Terms.rtree Stratego-Layout.rtree	       \
		  Stratego-Script.rtree Stratego-Modules.rtree	       \
		  Stratego-Signatures.rtree Stratego-Strategies.rtree  \
		  Stratego-Amb.rtree				       \
		  Stratego-Core.rtree Stratego-Core-Constants.rtree    \
		  Stratego-Core-Terms.rtree Stratego-Core-Layout.rtree \
		  Stratego-Core-Modules.rtree			       \
		  Stratego-Core-Signatures.rtree		       \
		  Stratego-Core-Strategies.rtree

CLEANFILES	= $(wildcard *.atree)
BOOTCLEANFILES	= $(signatures) $(wildcard *.rtree) Stratego.def Stratego-Amb.def

signatures 	= Stratego-Amb.str Stratego-Modules.str Stratego.str \
	          Stratego-Constants.str Stratego-Overlays.str	     \
	          Stratego-Strategies.str			     \
	          Stratego-Rules.str Stratego-Terms.str		     \
	          Stratego-Identifiers.str Stratego-Script.str	     \
	          Stratego-Layout.str Stratego-Signatures.str	     \
		  Stratego-Core.str Stratego-Core-Constants.str	     \
		  Stratego-Core-Terms.str Stratego-Core-Layout.str   \
		  Stratego-Core-Modules.str			     \
		  Stratego-Core-Signatures.str			     \
		  Stratego-Core-Strategies.str    

Stratego.def: 
	rm -f Stratego.def
	ln -s ../syn/Stratego.def .

Stratego-Core.def: 
	rm -f Stratego-Core.def
	ln -s ../syn/Stratego-Core.def .

Stratego-Amb.def: 
	rm -f Stratego-Amb.def
	ln -s ../syn/Stratego-Amb.def .

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.rtree) $(pkgdata_DATA) Stratego.def 

Stratego.str Stratego-Constants.str Stratego-Overlays.str Stratego-Identifiers.str Stratego-Rules.str Stratego-Terms.str Stratego-Layout.str Stratego-Script.str Stratego-Modules.str Stratego-Signatures.str Stratego-Strategies.str : Stratego.def

Stratego-Core.str Stratego-Core-Constants.str Stratego-Identifiers.str Stratego-Core-Terms.str Stratego-Core-Layout.str Stratego-Core-Modules.str Stratego-Core-Signatures.str Stratego-Core-Strategies.str : Stratego-Core.def

Stratego-Amb.str : Stratego-Amb.def