include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		 = -I $(STRATEGO_FRONT)/share/stratego-front \
	  	   -I $(top_srcdir)/spec/sig \
	  	   -I $(top_srcdir)/spec/front \
	  	   -I $(top_srcdir)/spec/lib

SUBDIRS 	 = data

bin_PROGRAMS 	 = si 
bin_SCRIPTS	 = stratego
libexec_PROGRAMS = primitives 
check_PROGRAMS   = stratego-eval-test
pkgdata_DATA	 = eval-lib-primitives.rtree

CLEANFILES 	 = $(wildcard *.dep)
EXTRA_DIST 	 = $(wildcard *.str) eval-lib-primitives.rtree
TESTS 		 = stratego-eval-test

si.c		 : eval-lib-primitives.rtree

#primitives
eval-lib-primitives.rtree: 
	$(MAKE) primitives
	$(top_builddir)/spec/pack/pack-stratego -I $(SSL)/share/ssl -i lib -o lib.packed
	./primitives -i lib.packed -o $@

BOOTSOURCES = si.c primitives.c stratego.in stratego

BOOTCLEANFILES = eval-lib-primitives.rtree si.c primitives.c stratego stratego-eval-test.c
