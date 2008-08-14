include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/tests/Makefile.parse-unit

SUBDIRS           = translation-units
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(call srcwildcard,*.testsuite)

TESTSUITES = \
  translation-units.testsuite \
  expressions.testsuite \
  statements.testsuite

PARSE_UNIT_PTABLE = $(top_builddir)/syn/C.tbl
