SUBDIRS      = data

EXTRA_DIST   = README gt-paths.str.src $(wildcard *.str) $(wildcard *.meta) 

pkgdata_DATA = $(wildcard *.str) gt-paths.str

%.str : %.str.src Makefile
	sed 's@__SGLR__@$(SGLR)@g;\
             s@__GPP__@$(GPP)@g;\
             s@__PGEN__@$(PGEN)@g;\
             s@__STRATEGO__@$(SC_BOOT)@g;\
             s@__GRAPHTOOLS__@$(GRAPH_TOOLS)@g;\
             s@__ASFIXTOOLS__@$(ASFIX_TOOLS)@g;\
             s@__SDFTOOLS__@$(prefix)@g'\
             < $< > ${srcdir}/$@
