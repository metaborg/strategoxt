include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = format-check-tests
SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(top_srcdir)/lib

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rtg) $(wildcard *.rhg)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)