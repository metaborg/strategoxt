SUBDIRS = srts

AM_CPPFLAGS = -I. -I$(ATERM)/include -I$(srcdir) 

lib_LTLIBRARIES = libstratego-runtime.la

libstratego_runtime_la_SOURCES = $(LIB_SOURCES)
libstratego_runtime_la_LIBADD  = $(ATERM_LIBS)
libstratego_runtime_la_CFLAGS  = -Wall
libstratego_runtime_la_LDFLAGS = -avoid-version -no-undefined

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

stratego.lo: srts/stratego-choice.h srts/stratego-config.h

bootclean: