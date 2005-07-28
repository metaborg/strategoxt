SUBDIRS = srts

includedir = $(prefix)/include/srts

AM_CPPFLAGS = -I. -I$(ATERM)/include -I$(srcdir) 
AM_CFLAGS   = -Wall
AM_LDFLAGS  = -avoid-version

pkglib_LTLIBRARIES = \
  libstratego-runtime.la \
  libstratego-runtime-dbg.la \
  libstratego-runtime-opt.la \
  libstratego-runtime-prof.la \
  libstratego-runtime-choice.la \
  libstratego-runtime-choice-dbg.la \
  libstratego-runtime-choice-opt.la \
  libstratego-runtime-choice-prof.la

LIB_SOURCES = \
  stratego.c \
  aterm-extension.c \
  mprotect.c \
  stratego-dynamic-call.c \
  srts/stratego.h \
  srts/aterm-extension.h \
  srts/mprotect.h \
  srts/stratego-choice.h

CHOICE_SOURCES = \
  srts/stratego-choice.h \
  stratego-choice.c

libstratego_runtime_la_SOURCES      = $(LIB_SOURCES)
libstratego_runtime_dbg_la_SOURCES  = $(LIB_SOURCES)
libstratego_runtime_prof_la_SOURCES = $(LIB_SOURCES)
libstratego_runtime_opt_la_SOURCES  = $(LIB_SOURCES)

libstratego_runtime_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_runtime_prof_la_CFLAGS = -pg $(AM_CFLAGS)
libstratego_runtime_opt_la_CFLAGS  = -O2 $(AM_CFLAGS)

libstratego_runtime_choice_la_SOURCES      = $(CHOICE_SOURCES)
libstratego_runtime_choice_dbg_la_SOURCES  = $(CHOICE_SOURCES)
libstratego_runtime_choice_prof_la_SOURCES = $(CHOICE_SOURCES)
libstratego_runtime_choice_opt_la_SOURCES  = $(CHOICE_SOURCES)

libstratego_runtime_choice_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_runtime_choice_prof_la_CFLAGS = -pg $(AM_CFLAGS)
libstratego_runtime_choice_opt_la_CFLAGS  = -O2 $(AM_CFLAGS)

stratego.lo: srts/stratego-choice.h srts/stratego-config.h
