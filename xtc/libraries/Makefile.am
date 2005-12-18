lib_LTLIBRARIES = libstratego-xtc.la

libstratego_xtc_la_SOURCES = libxtclib.c
libstratego_xtc_la_CFLAGS  = -Wall
libstratego_xtc_la_LDFLAGS  = -avoid-version -no-undefined
libstratego_xtc_la_LIBADD  = \
  ../../stratego-lib/libraries/libstratego-lib.la \
  ../../srts/src/libstratego-runtime.la $(ATERM_LIBS)

#AM_CPPFLAGS = $(STRATEGO_LIB_CFLAGS) $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS)

AM_CPPFLAGS = \
	-I$(top_srcdir)/../stratego-lib/native \
	-I$(top_srcdir)/../srts/src \
	$(ATERM_CFLAGS)

pkgdata_DATA = libxtclib.rtree liblib.rtree

EXTRA_DIST      = xtclib.str libxtclib.rtree liblib.rtree liblib.str
CLEANFILES      = $(wildcard *.dep)
BOOTCLEANFILES  = libxtclib.str libxtclib.rtree libxtclib.c liblib.rtree

bootclean :
	rm -f $(BOOTCLEANFILES)

libxtclib.c : 
	XTC_REPOSITORY=$(BUILD_REPOSITORY) \
	$(top_srcdir)/../strc-core/spec/strc/strc -c --library \
        -I ../src \
        -i ./xtclib.str -o libxtclib.rtree && \
        rm libxtclib.str

PARSESTRATEGO = $(STRATEGO_FRONT)/bin/parse-stratego
.str.rtree :
	$(PARSESTRATEGO) $(STRINCLUDES) -i $< -o $@ --verbose 0
