include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS           = sig implode asfix sdf2rtg interpret
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

libexec_PROGRAMS= \
  rhg-parsefix \
  rhg-reduce\
  rhg-group \
  rtg-parsefix \
  rtg-reduce\
  rtg-group \
  irhg2irtg

SCFLAGS           = --main main-$* 
STRINCLUDES       = -I $(top_srcdir)/sig \
                    -I $(top_srcdir)/lib

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c)

rhg_group_LDADD = $(SRTS)/lib/srts/libliblib.la -L$(SRTS)/lib/srts -lstratego.opt -lstratego-lib.opt -L$(ATERM)/lib -lATerm-gcc -lm
rtg_group_LDADD = $(SRTS)/lib/srts/libliblib.la -L$(SRTS)/lib/srts -lstratego.opt -lstratego-lib.opt -L$(ATERM)/lib -lATerm-gcc -lm
