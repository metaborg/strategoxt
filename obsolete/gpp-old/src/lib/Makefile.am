SUBDIRS      = data

PGEN_FLAGS   = -m GB-Main

pkgdata_DATA = gpp.Makefile pp-tables.tbl pp-tables.pp pp-tables.pp.af

EXTRA_DIST   = $(wildcard *.str) gpp.Makefile.src \
               pp-tables.def pp-tables.pp pp-tables.pp.af 

CLEANFILES   = gpp.Makefile pp-tables.pp.af pp-tables.tbl

gpp.Makefile : gpp.Makefile.src Makefile
	sed 's@__ASFIX2ABOX__@$(prefix)@g;\
	     s@__ABOX2LATEX__@$(prefix)@g;\
	     s@__ABOX2HTML__@$(prefix)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__ASFIXTOOLS__@$(ASFIX_TOOLS)@g;\
	     s@__PKGDATA__@$(pkgdatadir)@g'\
	       < $< > $@
#%.tbl : %.def
#	PATH=$(PGEN)/bin:$${PATH} sdf2table -m GB-Main $< -o $@

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	PATH=$(bindir):$(SGLR)/bin:$${PATH}; export PATH ;\
	sglr -2 -p ./pp-tables.tbl -i $< \
	   | implode-asfix -S -o $@ 
