include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

# Hack for problem with .meta file.
stratego/aterm/PrettyPrintRules.rtree : stratego/aterm/PrettyPrintRules.str
	$(SGLRI) --heuristic-filters on -p $(STRATEGOBOXTBL_UNINSTALLED) -i $< | $(METAEXPLODE) -o $@

nobase_data_DATA = libstratego-aterm.rtree
lib_LTLIBRARIES  = libstratego-aterm.la
EXTRA_DIST = $(atermlib) $(atermlib:.str=.rtree) libstratego-aterm.rtree
CLEANFILES = $(wildcard *.dep) 
BOOTCLEANFILES = libstratego-aterm.rtree libstratego-aterm.c $(atermlib:.str=.rtree)

atermlib = stratego-aterm.str $(wildcard stratego/aterm/*.str)

libstratego_aterm_la_SOURCES = libstratego-aterm.c
libstratego_aterm_la_CFLAGS   = $(AM_CFLAGS)
libstratego_aterm_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_aterm_la_CPPFLAGS = $(STRATEGO_UNINSTALLED_CFLAGS) \
	-I $(top_srcdir)/runtime/lib \
	-I $(top_builddir)/runtime/lib/srts \
	-I $(top_srcdir)/lib/native
libstratego_aterm_la_LIBADD   = $(STRATEGO_GPP_UNINSTALLED_LIBS) $(STRATEGO_UNINSTALLED_LIBS)

STRCFLAGS = \
  $(STRATEGO_GPP_UNINSTALLED_STRCFLAGS) \
  $(STRATEGO_UNINSTALLED_STRCFLAGS)

STRINCLUDES = -I $(top_srcdir)/../aterm-front/syn -I $(top_builddir)/../gpp/syn/box

libstratego-aterm.rtree libstratego-aterm.c : $(atermlib:.str=.rtree) 
	$(STRC_UNINSTALLED) $(STRINCLUDES) -c --library -i $(srcdir)/stratego-aterm.str -o libstratego-aterm.rtree --verbose 1 $(STRCFLAGS)
	rm libstratego-aterm.str
