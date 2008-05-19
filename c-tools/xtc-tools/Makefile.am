include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = pp-c

EXTRA_DIST       = $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
MOSTLYCLEANFILES = $(wildcard *.dep) $(wildcard *.o)
BOOTCLEANFILES   = $(wildcard *.c)   $(wildcard *.h)

SCFLAGS          = --main io-$* 
STRINCLUDES      = -I $(XTC)/share/xtc
LDADD           += $(SSL_LIBS)
