
#bin_SCRIPTS = 

pkgdata_DATA = Stratego.rtree
#StrategoStratego.r

# TESTS = 

# CLEANFILES =

EXTRA_DIST = $(wildcard *.r) $(pkgdata_DATA)

#PPSTRATEGO = $(top_srcdir)/pp/Stratego.pp
PPSTRATEGO = $(top_srcdir)/pp/stratego.pp
SDFTBL = $(SDF_TOOLS)/share/sdf-tools/sdf.cons.tbl

%.def.asfix: $(top_srcdir)/syn/%.def $(SDFTBL)
	$(SGLR)/bin/sglr -2 -p $(SDFTBL) -i $< -o $@

%.def.af: %.def.asfix
	$(ASFIX_TOOLS)/bin/implode-asfix -i $< -o $@

%.rdef.af : %.def.af
	$(STRATEGO_TOOLS)/bin/sdf2sig -i $< -o $@

%.rdef.abox: %.rdef.af $(PPSTRATEGO)
	$(GPP)/bin/ast2abox -p $(PPSTRATEGO) -i $< -o $@

%.rdef: %.rdef.abox
	$(GPP)/bin/abox2text -i $< -o $@

%.r: %.rdef
	$(SDF_TOOLS)/bin/unpack $< r

%.dep:
	touch $@

%.rtree: %.r $(STRATEGO)/bin/parse-mod
	$(STRATEGO)/bin/parse-mod -i $< -o $@

#include $(wilcard *.dep)
