include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS = data

bin_PROGRAMS 	 = pack-sdf
libexec_PROGRAMS = pack-sdf
TESTS        	 = pack_sdf_check
CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = pack-sdf.c 
EXTRA_DIST  	 = $(wildcard *.str) $(wildcard *.meta) pack_sdf_check

SCFLAGS      = --main io-$*
STRINCLUDES  = -I $(top_srcdir)/src/lib \
               -I $(XTC)/share/xtc \
               -I $(ASFIX_TOOLS)/share/asfix-tools
