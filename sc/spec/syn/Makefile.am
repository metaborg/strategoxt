include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	 = pack-stratego
libexec_PROGRAMS = pack-stratego

pack-stratego.o	 : xtc-conf.h

CLEANFILES 	 = pack-stratego.dep $(wildcard *.dep)

EXTRA_DIST 	 = pack-stratego.str 
BOOTCLEANFILES 	 = pack-stratego.c 

STRINCLUDES 	 = -I $(srcdir)/../sig -CI "-I.." 
SCFLAGS 	 = --main $* $(XTCFLAGS)
