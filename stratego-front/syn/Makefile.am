SDFMAIN = Stratego

# bin_SCRIPTS =

pkgdata_DATA = Stratego.tbl StrategoStratego.tbl StrategoStrategoC.tbl $(wildcard *.sdf)

#TESTS = 

CLEANFILES = $(bin_SCRIPTS) $(wildcard *.tbl) $(TESTS)

EXTRA_DIST = Stratego.def StrategoStratego.def Stratego.tbl StrategoStratego.tbl \
	$(wildcard *.def) $(wildcard *.sdf)

# GENERIC RULES ###############################################

%.def: %.sdf $(wildcard *.sdf)
	$(SDF_TOOLS)/bin/pack-sdf -I $(CGEN)/share/cgen -i $< -o $ $*.adef
	asource -i $*.adef -o $@ 

%.tbl: %.def
	$(SDF)/bin/sdf2table -i $< -o $@ -m $*

# DEPENDENCIES ###############################################

%.dep:
	touch $@

include $(wildcard *.dep)
