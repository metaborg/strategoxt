include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = syn sig tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS = parse-unit

STRATEGO_SGLR = $(top_builddir)/../asfix-tools/libraries/stratego-sglr
parse_unit_LDADD = $(STRATEGO_SGLR)/lib/libstratego-sglr.la $(SSL_LIBS)

STRCFLAGS   = --main main-$* 
STRINCLUDES = -I $(XTC)/share/xtc \
              -I $(ATERM_FRONT)/share/aterm-front \
              -I $(STRATEGO_SGLR)/lib \
              -I sig

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

LDADD += $(SSL_LIBS)

