default: test1.x.txt

bin_SCRIPTS = astratego2text

pkgdata_DATA = Stratego.pp Stratego-pretty.pp StrategoStratego.pp astratego2text.config

#TESTS = 

CLEANFILES = astratego2text

EXTRA_DIST = \
	$(wildcard *.pp) \
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

SCFLAGS = --main $@ --C-include "\"conf.h\"" -CI "-I.."

SCcomp = $(STRATEGO)/bin/sc

% : %.r
	$(SCcomp) $(SCFLAGS) -i $*

%.dep:
	touch $@

include $(wilcard *.dep)

