include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = char-match-test
STRINCLUDES    = -I $(top_srcdir)/sig \
                 -I $(top_srcdir)/lib \
                 -I $(top_srcdir)/trans/implode

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

LDADD += $(SSL_LIBS)