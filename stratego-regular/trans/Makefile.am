include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = sig sdf2rtg interpret
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

libexec_PROGRAMS= \
  rtg-parsefix \
  rtg-reduce\
  rtg-group 

SCFLAGS           = --main main-$* 
STRINCLUDES       = -I $(top_srcdir)/sig \
                    -I $(top_srcdir)/lib
LDADD            += $(SSL_LIBS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)



