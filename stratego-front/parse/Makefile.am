include $(top_srcdir)/Makefile.stratego
include $(wildcard *.dep)

SCFLAGS 	= -I ../sig --main $* --C-include "\"conf.h\"" -CI "-I.."

bin_PROGRAMS 	= meta-explode stratego-desugar parse-stratego 
#parse-cmod

pkgdata_DATA 	= parse-stratego.config
#parse-cmod.config 

plugindir 	= $(SC)/share/pack-stratego-plugins
plugin_DATA	= parse-stratego.plugin

#parse-cmod.plugin 

CLEANFILES     += parse-cmod.config parse-stratego.config $(wildcard *.dep)

BOOTCLEANFILES = meta-explode.c parse-cmod.c stratego-desugar.c parse-stratego .c

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) \
		  $(wildcard *.rtree) $(wildcard *.src) $(wildcard *.c)  $(wildcard *.h.in)

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
