include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = . syn sdf2rtg sig2rtg asfix2irtg format-check
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(top_srcdir)/sig \
                 -I $(top_srcdir)/lib \
                 -I $(top_srcdir)/trans \
                 -I $(top_srcdir)/xtc

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.rhg)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)