include $(top_srcdir)/Makefile.stratego
include $(wildcard *.dep)

SUBDIRS 	= data

SCFLAGS 	= -I $(srcdir) --verbose 0

pkgdata_DATA 	= $(subst .r,.rtree,$(wildcard *.r))

TESTS 		= $(subst .r,,$(wildcard *-test.r))
EXTRA_DIST 	= $(wildcard *.r) $(pkgdata_DATA)
CLEANFILES     += $(TESTS) $(bin_SCRIPTS)
BOOTCLEANFILES 	= $(parsed)
