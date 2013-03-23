include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SIGS             = parse-testsuite.str
pkgdata_DATA     = parse-testsuite.str

EXTRA_DIST       = $(SIGS)
CLEANFILES       = $(wildcard *.dep) parse-testsuite.def
BOOTCLEANFILES   = $(SIGS) 

parse-testsuite.str : parse-testsuite.def
	$(STRATEGO_REGULAR)/bin/sdf2rtg -i $< -m parse-testsuite | \
	$(STRATEGO_REGULAR)/bin/rtg2sig -o $@

parse-testsuite.def :
	ln -s ../syn/parse-testsuite.def $@
