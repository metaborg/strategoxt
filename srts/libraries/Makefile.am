#pkglib_LIBRARIES = libliblib.a 
#libliblib_a_SOURCES = liblib.c

pkglib_LTLIBRARIES = libliblib.la 
libliblib_la_SOURCES = liblib.c

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= liblib.rtree
pkgdocdata_DATA = liblib.str

EXTRA_DIST	= liblib.rtree liblib.str

INCLUDES 	= -I$(top_srcdir)/src -I$(top_srcdir)/ssl -I$(ATERM)/include -I$(srcdir)

BOOTCLEANFILES 	= liblib.str liblib.rtree liblib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

liblib.c : 
	$(STRC)/bin/strc -c --library --verbose 2 \
        -I $(XTC)/share/xtc -I $(SSL)/share/ssl \
        -i ./library.str -o liblib.rtree
