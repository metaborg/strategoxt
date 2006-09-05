include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS	= pp2c
pkgdata_DATA	= pptools.c

STRCFLAGS	= --main $*

STRINCLUDES	=				\
  -I $(C_TOOLS)/share/sdf/c-tools		\
  -I ../tools

LDADD		+= $(SSL_LIBS)
EXTRA_DIST	= $(wildcard *.str) $(wildcard *.meta)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= $(wildcard *.c)
