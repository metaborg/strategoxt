include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

pkgdata_DATA = \
  xtc-shell-lang.rtree \
  stratego-shell-lang.rtree

EXTRA_DIST = \
  xtc-shell-lang.rtree \
  stratego-shell-lang.rtree

BOOTCLEANFILES = \
  xtc-shell-lang.rtree \
  xtc-shell-lang.rtg \
  stratego-shell-lang.rtree \
  stratego-shell-lang.rtg

xtc-shell-lang.rtg : 
	$(LN_S) $(top_srcdir)/syn/xtc-shell-lang.rtg $@

stratego-shell-lang.rtg : 
	$(LN_S) $(top_srcdir)/syn/stratego-shell-lang.rtg $@