include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = syn sig
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

bin_PROGRAMS   = parse-unit parse-parse-testsuite
SCFLAGS        = --main main-$* 
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(ATERM_FRONT)/share/aterm-front \
                 -I sig

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)


