include $(top_srcdir)/Makefile.xt

strategolib = \
	$(wildcard collection/*.str) \
	$(wildcard collection/hash-table/*.str) \
	$(wildcard collection/list/*.str) \
	$(wildcard collection/set/*.str) \
	$(wildcard collection/tuple/*.str) \
	$(wildcard lang/*.str) \
	$(wildcard strategy/*.str) \
	$(wildcard strategy/general/*.str) \
	$(wildcard strategy/pack/*.str) \
	$(wildcard strategy/traversal/*.str) \
	$(wildcard strategy/general*.str) \
	$(wildcard system/io/*.str) \
	$(wildcard system/posix/*.str) \
	$(wildcard term/*.str) \
	$(wildcard strategy/general*.str) \
	$(wildcard util/*.str) \
	$(wildcard util/config/*.str) 

pkgdocdatadir  = $(pkgdatadir)/doc

pkgdata_DATA = $(subst .str,.rtree,$(wildcard *.str))

nobase_pkgdata_DATA = $(strategolib:.str=.rtree)
nobase_pkgdocdata_DATA = $(strategolib)

#pkgdata_DATA   = $(subst .str,.rtree,$(wildcard *.str))
#pkgdocdata_DATA= $(wildcard *.str)

EXTRA_DIST     = $(strategolib) $(pkgdata_DATA) $(nobase_pkgdata_DATA)
BOOTCLEANFILES = $(pkgdata_DATA) $(nobase_pkgdata_DATA)

#include $(wildcard *.dep)


