include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = ssl-test stratego-shell-test
SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(STRATEGO_FRONT)/share/stratego-front

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)