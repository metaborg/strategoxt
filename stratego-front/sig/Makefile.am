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

EXTRA_DIST 	= $(wildcard *.str) $(pkgdata_DATA)

#PPSTRATEGO = $(top_srcdir)/pp/Stratego.pp
#PPSTRATEGO = $(top_srcdir)/pp/stratego.pp
#SDFTBL = $(SDF_TOOLS)/share/sdf-tools/sdf.cons.tbl

#%.def.asfix: $(top_srcdir)/syn/%.def $(SDFTBL)
#	$(SGLR)/bin/sglr -2 -p $(SDFTBL) -i $< -o $@

#%.def.af: %.def.asfix
#	$(ASFIX_TOOLS)/bin/implode-asfix -i $< -o $@

#%.rdef.af : %.def.af
#	$(STRATEGO_TOOLS)/bin/sdf2sig -i $< -o $@

#%.rdef.abox: %.rdef.af $(PPSTRATEGO)
#	$(GPP)/bin/ast2abox -p $(PPSTRATEGO) -i $< -o $@

#%.rdef: %.rdef.abox
#	$(GPP)/bin/abox2text -i $< -o $@

#%.r: %.rdef
#	$(SDF_TOOLS)/bin/unpack $< r

#%.dep:
#	touch $@

#%.rtree: %.r $(SC)/libexec/sc-0.8.1/parse-mod
#	$(SC)/libexec/sc-0.8.1/parse-mod -i $< -o $@
