include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

STRINCLUDES = \
  -I $(STRATEGO_FRONT)/share/stratego-front \
  -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
  -I $(top_srcdir)/spec/sig \
  -I $(top_srcdir)/spec/front \
  -I $(top_srcdir)/spec/lib

SUBDIRS 	 = data

bin_PROGRAMS 	 = stri
bin_SCRIPTS	 = stratego
libexec_PROGRAMS = primitives
check_PROGRAMS   = stratego-eval-test
pkgdata_DATA	 = eval-lib-primitives.rtree

CLEANFILES 	 = $(wildcard *.dep)
EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta) eval-lib-primitives.rtree
TESTS 		 = stratego-eval-test

stri.c		 : eval-lib-primitives.rtree

#primitives
eval-lib-primitives.str: 
	$(MAKE) primitives
	$(top_builddir)/spec/pack/pack-stratego -I $(SSL)/share/ssl -i lib -o lib.packed
	./primitives -i lib.packed | $(STRATEGO_FRONT)/bin/pp-stratego --abstract -o $@

BOOTSOURCES = stri.c primitives.c stratego.in stratego

BOOTCLEANFILES = \
  eval-lib-primitives.str \
  eval-lib-primitives.rtree \
  stri.c primitives.c stratego stratego-eval-test.c
