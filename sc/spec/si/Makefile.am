include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		 = -I $(top_srcdir)/spec/sig \
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

#$(top_builddir)/spec/si/primitives
eval-lib-primitives.rtree: 
	$(top_builddir)/spec/syn/pack-stratego -I $(STRATEGOLIB)/share/ssl -i lib \
		-dep eval-lib-primitives.rtree \
	| ./primitives > $@

BOOTSOURCES = si.c primitives.c stratego.in stratego

BOOTCLEANFILES = eval-lib-primitives.rtree si.c primitives.c stratego


