SUBDIRS = srts

includedir = $(prefix)/include/srts

INCLUDES 	= -I. -I$(ATERM)/include -I$(srcdir) 
AM_CFLAGS       = -Wall

pkglib_LTLIBRARIES = \
  libstratego.la \
  libstratego.dbg.la \
  libstratego.opt.la \
  libstratego.prof.la \
  libstratego-choice.la \
  libstratego-choice.dbg.la \
  libstratego-choice.opt.la \
  libstratego-choice.prof.la

LIB_SOURCES = \
  stratego.c \
  aterm-extension.c \
  debug.c \
  mprotect.c \
  srts/stratego.h \
  srts/aterm-extension.h \
  srts/debug.h \
  srts/mprotect.h \
  srts/stratego-choice.h

CHOICE_SOURCES = \
  srts/stratego-choice.h \
  stratego-choice.c

libstratego_la_SOURCES      = $(LIB_SOURCES)
libstratego_dbg_la_SOURCES  = $(LIB_SOURCES)
libstratego_prof_la_SOURCES = $(LIB_SOURCES)
libstratego_opt_la_SOURCES  = $(LIB_SOURCES)

libstratego_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_prof_la_CFLAGS = -pg $(AM_CFLAGS)
libstratego_opt_la_CFLAGS  = -O2 $(AM_CFLAGS)

libstratego_choice_la_SOURCES      = $(CHOICE_SOURCES)
libstratego_choice_dbg_la_SOURCES  = $(CHOICE_SOURCES)
libstratego_choice_prof_la_SOURCES = $(CHOICE_SOURCES)
libstratego_choice_opt_la_SOURCES  = $(CHOICE_SOURCES)

libstratego_choice_dbg_la_CFLAGS  = -g  $(AM_CFLAGS)
libstratego_choice_prof_la_CFLAGS = -pg $(AM_CFLAGS)
libstratego_choice_opt_la_CFLAGS  = -O2 $(AM_CFLAGS)

stratego.lo: srts/stratego-choice.h srts/stratego-config.h
