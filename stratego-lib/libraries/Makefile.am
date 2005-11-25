lib_LTLIBRARIES = libstratego-lib.la

#AM_CPPFLAGS = -I$(top_srcdir)/native $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS)

AM_CPPFLAGS = \
	-I$(top_srcdir)/native \
	-I../../srts/src \
	$(ATERM_CFLAGS)

libstratego_lib_la_SOURCES = libstrategolib.c
libstratego_lib_la_CFLAGS  = -Wall
libstratego_lib_la_LDFLAGS = -avoid-version -no-undefined
libstratego_lib_la_LIBADD  = \
  ../../srts/src/libstratego-runtime.la \
  ../native/stratego-lib/libstratego-lib-native.la $(ATERM_LIBS)

pkgdata_DATA   	= libstrategolib.rtree 
EXTRA_DIST	= libstrategolib.rtree strategolib.str
CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES 	= libstrategolib.str libstrategolib.rtree libstrategolib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

libstrategolib.c : 
	XTC_REPOSITORY=$(top_srcdir)/../XTC \
	$(top_srcdir)/../strc-core/spec/strc/strc -c --library \
        -I $(top_srcdir)/ssl-compat \
        -I $(top_srcdir)/spec \
        -i ./strategolib.str -o libstrategolib.rtree \
	--verbose 2 --keep 5 \
	&& \
        rm libstrategolib.str
