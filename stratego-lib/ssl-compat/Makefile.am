include $(top_srcdir)/Makefile.xt

pkgdata_DATA   = $(subst .str,.rtree,$(wildcard *.str))
EXTRA_DIST     = $(wildcard *.str) $(pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA)

.str.rtree :
	$(ASFIX_TOOLS)/bin/sglri -p ../../stratego-front/syn/Stratego.tbl -i $< -o $@


