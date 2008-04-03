include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

includedir = $(prefix)/include/stratego-ag

nobase_data_DATA = libstratego-ag.rtree libstratego-ag.ctree
lib_LTLIBRARIES  = libstratego-ag.la

libstratego_ag_la_SOURCES =			\
  libstratego-ag.c

aglib =						\
  stratego-ag.str				\
  $(wildcard stratego/ag/graph/*.str)		\
  $(wildcard stratego/ag/propagation/*.str)	\
  $(wildcard stratego/ag/evaluator/*.str)

EXTRA_DIST =						\
  $(aglib) $(aglib:.str=.rtree) $(nobase_data_DATA)

CLEANFILES = $(wildcard *.dep) libstratego-ag.rtree libstratego-ag.c $(aglib:.str=.rtree)

libstratego_ag_la_CFLAGS   = $(STR_CFLAGS)
libstratego_ag_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_ag_la_CPPFLAGS =			\
  $(STRATEGO_UNINSTALLED_CFLAGS)		\
  $(STRATEGO_LIB_UNINSTALLED_CFLAGS)		\
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS)	\
  $(STRATEGO_SREF_UNINSTALLED_CFLAGS)		\
  $(ATERM_CFLAGS)

libstratego_ag_la_LIBADD =			\
  $(STRATEGO_LIB_UNINSTALLED_LIBS)		\
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS)		\
  $(STRATEGO_SREF_UNINSTALLED_LIBS)		\
  $(ATERM_LIBS)

STRCFLAGS =					\
  $(STRATEGO_LIB_UNINSTALLED_STRCFLAGS)		\
  $(STRATEGO_SREF_UNINSTALLED_STRCFLAGS)	\
  -I $(srcdir)

libstratego-ag.rtree libstratego-ag.c : $(aglib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c --library -i stratego-ag.rtree -o libstratego-ag.rtree \
          -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-ag.str

libstratego-ag.ctree : $(aglib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c -F --library -i stratego-ag.rtree -o libstratego-ag.ctree \
          -O 2 --verbose 1 $(STRCFLAGS)
