include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Box.def Stratego-Box.def Box.tbl Stratego-Box.tbl

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf) 
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

PGEN_FLAGS     = -m $*

Box.def : Box-Atoms.sdf Box-Base.sdf Box-Disambiguation.sdf \
		      Box-Layout.sdf Box-Lists.sdf Box-Literal.sdf \
		      Box-Operators.sdf Box.sdf

Stratego-Box.def : Stratego-Box.sdf Box.def

