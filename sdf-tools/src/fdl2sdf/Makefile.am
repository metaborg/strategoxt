include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include 

SUBDIRS      = data

bin_PROGRAMS  = fdl2sdf

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) 
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = fdl2sdf.c

SCFLAGS = \
  -I $(srcdir) \
  -I $(SDF_FRONT)/share/sdf-front \
  -I $(ASFIX_TOOLS)/share/asfix-tools \
  --main $*

