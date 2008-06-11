include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

DEFS = xml.def Stratego-xml.def Stratego-xml-info.def
TBLS = xml.tbl Stratego-xml.tbl  Stratego-xml-info.tbl

sdfdata_DATA   = $(TBLS) $(DEFS) $(call srcwildcard,*.sdf)
EXTRA_DIST     = $(DEFS) $(call srcwildcard,*.sdf)
CLEANFILES     = $(TBLS)
BOOTCLEANFILES = $(DEFS) $(wildcard *.dep)

SDFINCLUDES    = \
  -I $(top_srcdir)/../stratego-front/syn \
  -I $(top_builddir)/../stratego-front$(STRC_STAGE)/syn
PGEN_FLAGS     = -m $*
