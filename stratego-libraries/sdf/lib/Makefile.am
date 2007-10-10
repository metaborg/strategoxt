include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

nobase_data_DATA = libstratego-sdf.rtree libstratego-sdf.ctree
lib_LTLIBRARIES  = libstratego-sdf.la
EXTRA_DIST = $(sdflib) $(sdflib:.str=.rtree) libstratego-sdf.rtree
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = libstratego-sdf.rtree libstratego-sdf.c $(sdflib:.str=.rtree)

sdflib = stratego-sdf.str $(wildcard stratego/sdf/*.str)

libstratego_sdf_la_SOURCES = libstratego-sdf.c
libstratego_sdf_la_CFLAGS   = $(AM_CFLAGS)
libstratego_sdf_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_sdf_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) \
        -I $(top_srcdir)/runtime/lib \
        -I $(top_builddir)/runtime/lib/srts \
        -I $(top_srcdir)/lib/native
libstratego_sdf_la_LIBADD   = \
  $(STRATEGO_SGLR_UNINSTALLED_LIBS) \
  $(STRATEGO_GPP_UNINSTALLED_LIBS) \
  $(STRATEGO_ATERM_UNINSTALLED_LIBS) \
  $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = \
  $(STRATEGO_SGLR_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_GPP_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_ATERM_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS) \
  -I $(SDFTBL_UNINSTALLED) \
  -I $(SDFPPTBL_UNINSTALLED)

libstratego-sdf.rtree libstratego-sdf.c : $(sdflib:.str=.rtree) 
	$(STRC_UNINSTALLED) -c --library -i $(srcdir)/stratego-sdf.str -o libstratego-sdf.rtree -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-sdf.str

libstratego-sdf.ctree : $(sdflib:.str=.rtree) 
	$(STRC_UNINSTALLED) -F -c --library -i $(srcdir)/stratego-sdf.str -o libstratego-sdf.ctree -O 2 \
	  --verbose 1 $(STRCFLAGS)
