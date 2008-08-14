include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = pp-c

EXTRA_DIST      += $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES      += $(wildcard *.dep) $(wildcard *.o)
XT_BUILD_DIST    = $(wildcard *.c)   $(wildcard *.h)

SCFLAGS          = --main io-$* 
STRINCLUDES      = -I $(XTC)/share/xtc
LDADD           += $(SSL_LIBS)
