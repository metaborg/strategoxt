SUBDIRS = srts

includedir = $(prefix)/include/srts

AM_CPPFLAGS = -I. -I$(ATERM)/include -I$(srcdir) 

pkglib_LTLIBRARIES = \
  libstratego-runtime.la \
  libstratego-runtime-dbg.la \
  libstratego-runtime-opt.la \
  libstratego-runtime-prof.la

LIB_SOURCES = \
  stratego.c \
  stratego-choice.c \
  aterm-extension.c \
  mprotect.c \
  stratego-dynamic-call.c \
  srts/stratego.h \
  srts/aterm-extension.h \
  srts/mprotect.h \
  srts/stratego-choice.h

libstratego_runtime_la_SOURCES      = $(LIB_SOURCES)
libstratego_runtime_dbg_la_SOURCES  = $(LIB_SOURCES)
libstratego_runtime_prof_la_SOURCES = $(LIB_SOURCES)
libstratego_runtime_opt_la_SOURCES  = $(LIB_SOURCES)

libstratego_runtime_dbg_la_CFLAGS  = -g  $(AM_CFLAGS) -Wall
libstratego_runtime_prof_la_CFLAGS = -pg $(AM_CFLAGS) -Wall
libstratego_runtime_opt_la_CFLAGS  = -O2 $(AM_CFLAGS) -Wall

libstratego_runtime_dbg_la_LDFLAGS  = -avoid-version -no-undefined
libstratego_runtime_prof_la_LDFLAGS = -avoid-version
libstratego_runtime_opt_la_LDFLAGS  = -avoid-version -no-undefined



stratego.lo: srts/stratego-choice.h srts/stratego-config.h
