includedir = $(prefix)/include/srts

include_HEADERS = \
  zip.h


AM_CPPFLAGS = -I$(SRTS)/include -I$(ATERM)/include
AM_LDFLAGS  = -avoid-version 
LDADD       = -lz

pkglib_LTLIBRARIES = \
  libxtar-lib.la

LIB_SOURCES = \
  zip.h \
  zip.c \
  minizip-ioapi.c \
  minizip-unzip.c \
  minizip-zip.c \
  minizip-crypt.h \
  minizip-ioapi.h \
  minizip-unzip.h \
  minizip-zip.h

libxtar_lib_la_SOURCES = $(LIB_SOURCES)
