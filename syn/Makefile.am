include $(top_srcdir)/Makefile.xt

TBLS_DEFS  = \
  stratego-shell-lang.def \
  stratego-shell-lang.tbl \
  xtc-shell-lang.def \
  xtc-shell-lang.tbl

pkgdata_DATA = \
  StrategoShell-Extensions.pp.af \
  xtc-shell-lang.rtg \
  stratego-shell-lang.rtg

sdfdata_DATA   = $(TBLS_DEFS) $(wildcard *.sdf)

EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = $(TBLS_DEFS)

SDFINCLUDES    = -I $(STRATEGO_FRONT)/share/sdf/stratego-front
PGEN_FLAGS     = -m $*
SDF2RTG_FLAGS  = --main $*

stratego-shell-lang.def : PathNames.sdf stratego-shell-lang.sdf
