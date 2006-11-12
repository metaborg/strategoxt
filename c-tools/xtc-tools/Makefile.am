include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = pp-c

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
MOSTLYCLEANFILES = $(wildcard *.dep) $(wildcard *.o)
BOOTCLEANFILES   = $(wildcard *.c)   $(wildcard *.h)

SCFLAGS          = --main io-$* 
STRINCLUDES      = -I $(XTC)/share/xtc
LDADD           += $(SSL_LIBS)