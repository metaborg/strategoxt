include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS = parse-testsuite.str ATerms.str IntCon.str Literals.str RealCon.str Whitespace.str 

pkgdata_DATA = $(subst .str,.rtree,$(SIGS))
noinst_DATA  = explode-aterm.rtree

EXTRA_DIST       = $(SIGS) $(pkgdata_DATA) $(noinst_DATA)
CLEANFILES       = parse-testsuite.def $(wildcard *.dep)
BOOTCLEANFILES   = $(SIGS) $(pkgdata_DATA) explode-aterm.rtree

parse-testsuite.def :
	ln -s $(top_srcdir)/analyse/parse-unit/syn/parse-testsuite.def $@

$(SIGS) : parse-testsuite.def

explode-aterm.rtree :
	cp $(ATERM_TOOLS)/share/aterm-tools/explode-aterm.rtree . 