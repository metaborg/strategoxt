pkglib_LIBRARIES = libliblib.a 
libliblib_a_SOURCES = liblib.c

#pkglib_LTLIBRARIES = libliblib.la 

pkgdocdatadir 	= $(pkgdatadir)/doc

pkgdata_DATA   	= liblib.rtree
pkgdocdata_DATA = liblib.str

INCLUDES 	= -I$(top_srcdir)/src -I$(top_srcdir)/ssl -I$(ATERM)/include -I$(srcdir)

BOOTCLEANFILES 	= liblib.str liblib.rtree liblib.c

bootclean :
	rm -f $(BOOTCLEANFILES)

liblib.c : 
	$(STRC)/bin/strc -I $(SSL)/share/ssl -i lib.str -o liblib.rtree -c --library --verbose 2


#liblibpic.o : liblib.c
#	gcc $(INCLUDES) -fPIC -c liblib.c -o liblibpic.o
#
#libliblib.so.$(VERSION) : liblibpic.o
#	gcc -shared -Wl,-soname,libliblib.so.$(VERSION) -o libliblib.so.$(VERSION) liblibpic.o
#
#version:
#	echo $(VERSION)

