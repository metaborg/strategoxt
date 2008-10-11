include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS = $(DEFS:.def=.tbl)
DEFS = pp-table.def

sdfdata_DATA   = $(TBLS) $(DEFS) $(call srcwildcard,*.sdf)
pkgdata_DATA   = pp-table-pretty.pp pp-table-pretty.pp.af

XT_BUILD_DIST  = $(DEFS) pp-table-pretty.pp.af
EXTRA_DIST    += $(call srcwildcard,*.sdf) pp-table-pretty.pp
CLEANFILES    += $(TBLS) $(wildcard *.dep)

SDFINCLUDES    = -I $(top_builddist)/syn/box
PGEN_FLAGS     = -m $*

VPATH += $(top_builddist)/syn/box
pp-table.def : pp-table.sdf pp-table-IntCon.sdf pp-table-PlaceHolder.sdf Box.def 
