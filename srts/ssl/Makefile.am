includedir = $(prefix)/include/srts

include_HEADERS = \
  io.h stratego-lib.h tables.h sets.h ssl-time.h exec.h number.h \
  ssl-string.h term.h annotations.h placeholder.h dir.h

AM_CPPFLAGS = -I$(srcdir)/../src -I$(ATERM)/include
AM_LDFLAGS  = -avoid-version -no-undefined

pkglib_LTLIBRARIES = \
  libstratego-lib.la \
  libstratego-lib_dbg.la \
  libstratego-lib_opt.la \
  libstratego-lib_prof.la

LIB_SOURCES = \
  io.h stratego-lib.h tables.h sets.h ssl-time.h exec.h number.h \
  ssl-string.h term.h dir.h \
  io.c tables.c sets.c time.c exec.c number.c string.c term.c \
  annotations.c placeholder.c dir.c

libstratego_lib_la_SOURCES      = $(LIB_SOURCES)
libstratego_lib_dbg_la_SOURCES  = $(LIB_SOURCES)
libstratego_lib_prof_la_SOURCES = $(LIB_SOURCES)
libstratego_lib_opt_la_SOURCES  = $(LIB_SOURCES)

libstratego_lib_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_lib_prof_la_CFLAGS = -pg $(AM_CFLAGS)
libstratego_lib_opt_la_CFLAGS  = -O2 $(AM_CFLAGS)
