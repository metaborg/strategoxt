include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS = $(DEFS:.def=.tbl)
DEFS = Box.def Stratego-Box.def

sdfdata_DATA   = $(TBLS) $(DEFS) $(call srcwildcard,*.sdf)
pkgdata_DATA   = Box.pp Box.pp.af

XT_BUILD_DIST  = $(DEFS) Box.pp Box.pp.af
EXTRA_DIST    += $(call srcwildcard,*.sdf)
CLEANFILES    += $(TBLS) $(wildcard *.dep)

SDFINCLUDES    = -I $(top_srcdir)/../stratego-front/syn \
                 -I $(top_builddir)/../stratego-front$(CURRENT_STAGE)/syn
PGEN_FLAGS     = -m $*

Box.def : Box-Atoms.sdf Box-Base.sdf Box-Disambiguation.sdf \
          Box-Layout.sdf Box-Literal.sdf Box-Operators.sdf Box.sdf

.def.pp:
	$(GPP)/bin/ppgen -i $< -o $@

Stratego-Box.def : Stratego-Box.sdf Box.def
