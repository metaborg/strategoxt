include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-gpp.rtree
lib_LTLIBRARIES  = libstratego-gpp.la
EXTRA_DIST = $(gpplib:.str=.rtree) $(gpplib) libstratego-gpp.rtree
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = pp-table-aterm.c libstratego-gpp.rtree libstratego-gpp.c $(gpplib:.str=.rtree)

gpplib = stratego-gpp.str $(wildcard stratego/gpp/*.str)

libstratego_gpp_la_SOURCES = libstratego-gpp.c pp-table-aterm.c
libstratego_gpp_la_CFLAGS   = -Wall
libstratego_gpp_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_gpp_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS)
libstratego_gpp_la_LIBADD   = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) $(STRATEGO_UNINSTALLED_STRCFLAGS)

pp-table-aterm.c : $(top_builddir)/../gpp/syn/pp-table/pp-table.tbl
	$(top_builddir)/build-tools/cgen-aterm --name STRGPP_get_pptable_parsetable -i $< > $@

libstratego-gpp.rtree libstratego-gpp.c :
	$(STRC_UNINSTALLED) -c --library -i stratego-gpp.str -o libstratego-gpp.rtree -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-gpp.str
