include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TESTSUITES = preterm.testsuite
PARSE_UNIT_PTABLE = Main.tbl

check_DATA = Main.tbl
CLEANFILES = Main.def Main.tbl
EXTRA_DIST = Main.sdf $(call srcwildcard,*.testsuite)
CLEANFILES = Stratego-Box.def

SDFINCLUDES = -Idef Stratego-Box.def

Main.def: Stratego-Box.def
Stratego-Box.def:
	-rm -f $@
	if test -e $(top_srcdir)/syn/box/Stratego-Box.def; then \
	  $(LN_S) $(top_srcdir)/syn/box/Stratego-Box.def $@; \
	else \
	  $(LN_S) $(top_builddir)/syn/box/Stratego-Box.def $@; \
	fi

%.runtestsuite : %.testsuite
	$(SDF_TOOLS)/bin/parse-unit -i $< -p $(PARSE_UNIT_PTABLE)

check: $(TESTSUITES:.testsuite=.runtestsuite)
