include $(top_srcdir)/Makefile.stratego
include $(wildcard *.dep)

default: test1.x.txt

bin_PROGRAMS = astratego2text

BOOTCLEANFILES = astratego2text.c

SCFLAGS = --main $* --C-include "\"conf.h\"" -CI "-I.."

pkgdata_DATA = \
	Stratego.pp Stratego-pretty.pp StrategoStratego.pp \
	Stratego.pp.af Stratego-pretty.pp.af StrategoStratego.pp.af \
	astratego2text.config 

CLEANFILES += Stratego.pp StrategoStratego.pp \
	Stratego.pp.af Stratego-pretty.pp.af StrategoStratego.pp.af \
	astratego2text.config 

#TESTS = 

EXTRA_DIST = \
	$(wildcard *.pp) \
	$(wildcard *.pp.af) \
	$(wildcard *.r) \
	$(wildcard *.config.src) \
	$(wildcard *.c) \
	$(wildcard *.h.in)

# GENERIC RULES ###############################################

%.pp: $(top_srcdir)/syn/%.def
	$(GPP)/bin/ppgen -i $< -o $@

%: %.src Makefile
	sed 's#__prefix__#$(prefix)#g; \
	     s#__datadir__#$(datadir)#g;\
	     s#__pkgdatadir__#$(pkgdatadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
	     s#__PACKAGE__#$(PACKAGE)#g;\
	     s#__SC__#$(SC)#g; \
	     s#__SGLR__#$(SGLR)#g; \
	     s#__ASFIX_TOOLS__#$(ASFIX_TOOLS)#g; \
	     s#__STRATEGO_TOOLS__#$(STRATEGO_TOOLS)#g; \
	     s#__SDF_TOOLS__#$(SDF_TOOLS)#g; \
	     s#__GPP__#$(GPP)#g; \
	     s#__PGEN__#$(PGEN)#g;' \
	  < $< > $@

# DEPENDENCIES ###############################################

%.pp.af: %.pp dummy
	$(GPP)/bin/ast2abox -i dummy -o /dev/null -p $< 

dummy:
	echo "All(Id)" > dummy



