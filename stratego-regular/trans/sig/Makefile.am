include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = core-rtg2sig core-rtg2typematch core-sig-apply-param-sorts

#core-sig2rtg 

SCFLAGS          = --main main-$* 
STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/lib \
                   -I $(XTC)/share/xtc \
                   -I $(top_srcdir)/../stratego-front/sig
LDADD += $(SSL_LIBS)

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)


