include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS	= pp2c

STRCFLAGS	= --main $*

STRINCLUDES	=				\
  -I $(C_TOOLS)/share/sdf/c-tools		\
  -I ../tools

LDADD		+= $(SSL_LIBS)
EXTRA_DIST	= $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES	= $(wildcard *.dep)
BOOTCLEANFILES	= pp2c.c
