include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = sig2rtg-test
SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/lib \
                 -I $(XTC)/share/xtc

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)
