include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-gpp.rtree libstratego-gpp.ctree
lib_LTLIBRARIES  = libstratego-gpp.la
EXTRA_DIST = $(gpplib) $(gpplib:.str=.rtree) $(nobase_data_DATA)
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = libstratego-gpp.rtree libstratego-gpp.c $(gpplib:.str=.rtree)

gpplib = stratego-gpp.str $(wildcard stratego/gpp/*.str)

libstratego_gpp_la_SOURCES = libstratego-gpp.c
libstratego_gpp_la_CFLAGS   = $(AM_CFLAGS)
libstratego_gpp_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_gpp_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) \
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) \
	-I $(top_srcdir)/lib/native
libstratego_gpp_la_LIBADD   = $(STRATEGO_SGLR_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

# XTC import is workaround for STR-673
STRCFLAGS = \
  $(STRATEGO_XTC_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS) \
  -I $(PPTABLETBL_UNINSTALLED)

libstratego-gpp.rtree libstratego-gpp.c : $(gpplib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c --library -i $(srcdir)/stratego-gpp.str -o libstratego-gpp.rtree -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-gpp.str

libstratego-gpp.ctree : $(gpplib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c -F --library -i $(srcdir)/stratego-gpp.str -o libstratego-gpp.ctree \
	  -O 2 --verbose 1 $(STRCFLAGS)
