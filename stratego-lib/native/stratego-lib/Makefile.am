includedir = $(prefix)/include/stratego-lib

include_HEADERS = \
	collection-hash-table-common.h  \
	file-table.h \
	stratego-lib.h \
	system-io-dir.h \
	system-io-term.h \
	system-posix-file.h \
	term-common.h  \
	term-placeholder.h \
	term-string.h \
	collection-set-indexed.h \
	stratego-lib-common.h  \
	system-io-char.h \
	system-io-file.h \
	system-posix-error.h \
	system-posix-process.h \
	term-integer.h \
	term-real.h \
	util-time.h

# todo: should the headers of the baseline runtime be used?
AM_CPPFLAGS = $(STRATEGO_RUNTIME_CFLAGS) $(ATERM_CFLAGS)

lib_LTLIBRARIES = libstratego-lib-native.la

# todo: should we link against the baseline runtime library?
libstratego_lib_native_la_SOURCES = $(LIB_SOURCES)
libstratego_lib_native_la_LIBADD  = ../../../srts/src/libstratego-runtime.la $(ATERM_LIBS)
libstratego_lib_native_la_CFLAGS  = -Wall
libstratego_lib_native_la_LDFLAGS = -avoid-version -no-undefined

LIB_SOURCES = \
	$(include_HEADERS) \
	collection-hash-table-common.c \
	file-table.c \
	system-io-dir.c \
	system-io-term.c \
	system-posix-file.c \
	term-common.c \
	term-placeholder.c \
	term-string.c \
	collection-set-indexed.c \
	stratego-lib-common.c  \
	system-io-char.c \
	system-io-file.c \
	system-posix-error.c \
	system-posix-process.c \
	term-integer.c \
	term-real.c \
	util-time.c

bootclean:

