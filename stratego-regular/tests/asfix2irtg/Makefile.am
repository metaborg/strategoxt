include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_DATA     = Exp.tbl
check_PROGRAMS = asfix2irtg-test

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/sig \
                 -I $(top_srcdir)/lib \
                 -I $(XTC)/share/xtc
LDADD += $(SSL_LIBS)

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.sdf)  $(wildcard *.def)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) Exp.tbl

nodist_asfix2irtg_test_SOURCES = asfix2irtg-test.c
