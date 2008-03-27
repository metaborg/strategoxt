include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

includedir = $(prefix)/include/stratego-sref

include_HEADERS = \
  native/stratego-sref.h

nobase_data_DATA = libstratego-sref.rtree libstratego-sref.ctree
lib_LTLIBRARIES  = libstratego-sref.la

libstratego_sref_la_SOURCES =			\
  libstratego-sref.c				\
  native/sref-destroy.c				\
  native/sref-create.c				\
  native/sref-deref.c				\
  native/sref-bind.c


sreflib =					\
  stratego-sref.str				\
  $(wildcard stratego/*.str)			\
  $(wildcard stratego/utils/*.str)

EXTRA_DIST =						\
  $(sreflib) $(sreflib:.str=.rtree) $(nobase_data_DATA)	\
  $(wildcard native/*.h) $(wildcard native/*.c)

CLEANFILES = $(wildcard *.dep) libstratego-sref.rtree libstratego-sref.c $(sreflib:.str=.rtree)

libstratego_sref_la_CFLAGS   = $(STR_CFLAGS)
libstratego_sref_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_sref_la_CPPFLAGS =			\
  -I $(srcdir)/native				\
  $(STRATEGO_UNINSTALLED_CFLAGS)		\
  $(STRATEGO_LIB_UNINSTALLED_CFLAGS)		\
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS)	\
  $(ATERM_CFLAGS)

libstratego_sref_la_LIBADD =			\
  $(STRATEGO_LIB_UNINSTALLED_LIBS)		\
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS)		\
  $(ATERM_LIBS)

STRCFLAGS =					\
  $(STRATEGO_LIB_UNINSTALLED_STRCFLAGS)		\
  -I $(srcdir)

libstratego-sref.rtree libstratego-sref.c : $(sreflib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c --library -i stratego-sref.rtree -o libstratego-sref.rtree \
          --C-include "\"stratego-sref.h\"" -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-sref.str

libstratego-sref.ctree : $(sreflib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c -F --library -i stratego-sref.rtree -o libstratego-sref.ctree \
          -O 2 --verbose 1 $(STRCFLAGS)
