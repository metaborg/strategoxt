include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_SCRIPTS 	 = 
libexec_PROGRAMS = pack-stratego 

pack-stratego.o	 : ../conf.h

pkgdata_DATA 	 = pack-stratego.config

CLEANFILES 	 = pack-stratego.dep $(wildcard *.dep)

EXTRA_DIST 	 = pack-stratego.str pack-stratego.config.src 
BOOTCLEANFILES 	 = pack-stratego.c 

STRINCLUDES 	 = -I $(srcdir)/../sig -CI "-I.."
SCFLAGS 	 = --C-include "\"conf.h\""  
INCLUDES	 += -I ..
