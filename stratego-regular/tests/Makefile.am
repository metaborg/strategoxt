include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = . syn match sdf2rtg sig2rtg asfix2irtg format-check
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

# check_PROGRAMS = rhg-reduce-test regexp-normalize-test
# TODO: enable rhg-reduce-test when xtc tools can be compiled with separate lib

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