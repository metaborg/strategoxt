include $(top_srcdir)/Makefile.xt

#ASFIX_LIB    	= $(subst .str,.rtree,$(wildcard *.str))
ASFIX_LIB    	= $(call srcwildcard,*.str)
EXTRA_DIST   	= $(ASFIX_LIB)
pkgdata_DATA 	= $(ASFIX_LIB)
#BOOTCLEANFILES 	= $(ASFIX_LIB)

