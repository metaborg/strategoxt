include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS = Box.tbl Stratego-Box.tbl 
DEFS = Box.def Stratego-Box.def

sdfdata_DATA   = $(TBLS) $(DEFS) $(wildcard *.sdf)
pkgdata_DATA   = Box.pp Box.pp.af

EXTRA_DIST     = $(DEFS) $(wildcard *.sdf) $(pkgdata_DATA)
CLEANFILES     = $(TBLS) $(wildcard *.dep)
BOOTCLEANFILES = $(DEFS) Box.pp.af

SDFINCLUDES    = -I $(top_srcdir)/../stratego-front/syn \
                 -I $(top_builddir)/../stratego-front/syn
PGEN_FLAGS     = -m $*

Box.def : Box-Atoms.sdf Box-Base.sdf Box-Disambiguation.sdf \
		      Box-Layout.sdf Box-Lists.sdf Box-Literal.sdf \
		      Box-Operators.sdf Box.sdf

.def.pp:
	$(GPP)/bin/ppgen -i $< -o $@

Stratego-Box.def : Stratego-Box.sdf Box.def

