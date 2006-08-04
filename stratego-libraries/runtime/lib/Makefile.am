SUBDIRS = srts

AM_CPPFLAGS = -I. -I$(ATERM)/include -I$(srcdir) 

lib_LTLIBRARIES = libstratego-runtime.la

libstratego_runtime_la_SOURCES = $(LIB_SOURCES)
libstratego_runtime_la_LIBADD  = $(ATERM_LIBS)
libstratego_runtime_la_CFLAGS  = $(STR_CFLAGS)
libstratego_runtime_la_LDFLAGS = -avoid-version -no-undefined $(STR_LDFLAGS)

LIB_SOURCES = \
  stratego.c \
  aterm-extension.c \
  stratego-dynamic-call.c \
  srts/stratego.h \
  srts/aterm-extension.h


stratego.lo: srts/stratego-config.h

bootclean:
