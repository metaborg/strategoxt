include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = core-rtg2sig core-sig2rtg core-rtg2typematch core-sig-apply-param-sorts
SCFLAGS          = --main main-$* --dr new

STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/lib \
                   -I $(XTC)/share/xtc \
                   -I $(STRATEGO_FRONT)/share/stratego-front

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)