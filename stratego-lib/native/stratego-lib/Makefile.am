includedir = $(prefix)/include/stratego-lib

include_HEADERS = \
  io.h stratego-lib.h tables.h sets.h ssl-time.h exec.h number.h \
  ssl-string.h term.h placeholder.h dir.h

# todo: should the headers of the baseline runtime be used?
AM_CPPFLAGS = $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS)

lib_LTLIBRARIES = libstratego-lib-native.la

# todo: should we link against the baseline runtime library?
libstratego_lib_native_la_SOURCES = $(LIB_SOURCES)
libstratego_lib_native_la_LIBADD  = ../../../srts/src/libstratego-runtime.la $(ATERM_LIBS)
libstratego_lib_native_la_CFLAGS  = -Wall
libstratego_lib_native_la_LDFLAGS = -avoid-version -no-undefined

LIB_SOURCES = \
  io.h stratego-lib.h tables.h sets.h ssl-time.h exec.h number.h \
  ssl-string.h term.h dir.h \
  io.c tables.c sets.c time.c exec.c number.c string.c term.c \
  placeholder.c dir.c

bootclean:
