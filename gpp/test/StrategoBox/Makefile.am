include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Internal.mk
include $(top_srcdir)/test/Makefile.parse-unit
include $(wildcard *.dep)

TESTSUITES = preterm.testsuite
PARSE_UNIT_PTABLE = Main.tbl

check_DATA = Main.tbl
XT_BUILD_DIST = Main.def Stratego-Box.def
EXTRA_DIST   += Main.sdf $(call srcwildcard,*.testsuite)
CLEANFILES   += Main.tbl

SDFINCLUDES = -Idef Stratego-Box.def

Main.def: Stratego-Box.def
Stratego-Box.def: $(top_builddist)/syn/box/Stratego-Box.def
	-rm -f $@
	$(LN_S) $< $@;
