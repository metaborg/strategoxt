includedir = $(prefix)/include/stratego-lib

include_HEADERS = \
  collection-hash-table-common.h  \
  collection-list-common.h  \
  collection-set-indexed.h \
  lang-dynamic-rules.h \
  stratego-lib.h \
  system-io-dir.h \
  system-io-term.h \
  system-posix-file.h \
  stratego-lib-common.h  \
  system-posix-error.h \
  system-posix-process.h \
  term-common.h  \
  term-placeholder.h \
  term-string.h \
  term-integer.h \
  term-real.h \
  util-time.h

lib_LTLIBRARIES = libstratego-lib-native.la

libstratego_lib_native_la_SOURCES  = $(LIB_SOURCES)
libstratego_lib_native_la_LIBADD   = $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) $(ATERM_LIBS) -lm
libstratego_lib_native_la_CPPFLAGS = $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) $(ATERM_CFLAGS)
# -D_XOPEN_SOURCE=600
libstratego_lib_native_la_CFLAGS   = $(STR_CFLAGS)
libstratego_lib_native_la_LDFLAGS  = -avoid-version -no-undefined

LIB_SOURCES = \
  $(include_HEADERS) \
  collection-hash-table-common.c \
  collection-list-common.c \
  collection-set-indexed.c \
  lang-dynamic-rules.c \
  system-io-dir.c \
  system-io-term.c \
  system-posix-file.c \
  term-common.c \
  term-placeholder.c \
  term-string.c \
  stratego-lib-common.c  \
  system-posix-error.c \
  system-posix-process.c \
  term-integer.c \
  term-real.c \
  util-time.c

bootclean:
