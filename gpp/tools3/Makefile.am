include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS	= pp2c

STRCFLAGS	= --main $*

STRINCLUDES	=				\
  -I $(C_TOOLS)/share/sdf/c-tools		\
  -I ../tools

data_DATA      = pptools.c
LDADD         += $(SSL_LIBS)
EXTRA_DIST    += $(data_DATA) $(call srcwildcard,*.str) $(call srcwildcard,*.meta)
CLEANFILES    += $(wildcard *.dep)
XT_BUILD_DIST  = pp2c.c
