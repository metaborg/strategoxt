include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/MakefileLocal.xt
include $(wildcard *.dep)

includedir = $(prefix)/include/stratego-lazy

include_HEADERS = \
  native/stratego-lazy.h

nobase_data_DATA = libstratego-lazy.rtree libstratego-lazy.ctree
lib_LTLIBRARIES  = libstratego-lazy.la

libstratego_lazy_la_SOURCES =			\
  libstratego-lazy.c				\
  native/stratego-lazy-scope.c			\
  native/stratego-lazy-init.c			\
  native/stratego-lazy-call.c			\
  native/lazy-blobs.c				\
  native/stratego-lazy-bind.c			\
  native/lazy-scope-links.c

lazylib =					\
  stratego-lazy.str				\
  $(wildcard stratego/*.str)

EXTRA_DIST =						\
  $(lazylib) $(lazylib:.str=.rtree) $(nobase_data_DATA)	\
  $(wildcard native/*.h) $(wildcard native/*.c)

CLEANFILES = $(wildcard *.dep) libstratego-lazy.rtree libstratego-lazy.c $(lazylib:.str=.rtree)

libstratego_lazy_la_CFLAGS   = $(STR_CFLAGS)
libstratego_lazy_la_LDFLAGS  = -avoid-version -no-undefined $(AM_LDFLAGS)
libstratego_lazy_la_CPPFLAGS =			\
  -I $(srcdir)/native				\
  $(STRATEGO_UNINSTALLED_CFLAGS)		\
  $(STRATEGO_LIB_UNINSTALLED_CFLAGS)		\
  $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS)	\
  $(ATERM_CFLAGS)

libstratego_lazy_la_LIBADD =			\
  $(STRATEGO_LIB_UNINSTALLED_LIBS)		\
  $(STRATEGO_RUNTIME_UNINSTALLED_LIBS)		\
  $(ATERM_LIBS)

STRCFLAGS =					\
  $(STRATEGO_LIB_UNINSTALLED_STRCFLAGS)		\
  -I $(srcdir)

libstratego-lazy.rtree libstratego-lazy.c : $(lazylib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c --library -i stratego-lazy.rtree -o libstratego-lazy.rtree \
          --C-include "\"stratego-lazy.h\"" -O 2 --verbose 1 $(STRCFLAGS)
	rm libstratego-lazy.str

libstratego-lazy.ctree : $(lazylib:.str=.rtree)
	@$(STRC_UNINSTALLED) -c -F --library -i stratego-lazy.rtree -o libstratego-lazy.ctree \
          -O 2 --verbose 1 $(STRCFLAGS)
