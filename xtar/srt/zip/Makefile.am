includedir = $(prefix)/include/srts

include_HEADERS = \
  zip.h


AM_CPPFLAGS = -I$(srcdir)/../src -I$(ATERM)/include
AM_LDFLAGS  = -avoid-version -lz

pkglib_LTLIBRARIES = \
  libxtar-lib.la

LIB_SOURCES = \
  zip.h \
  zip.c \
  minizip-ioapi.c minizip-unzip.c minizip-zip.c

libxtar_lib_la_SOURCES      = $(LIB_SOURCES)
