include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	 = pack-stratego
libexec_PROGRAMS = pack-stratego

pack-stratego.o	 : xtc-conf.h

CLEANFILES 	 = pack-stratego.dep $(wildcard *.dep) pack-stratego.tst

EXTRA_DIST 	 = pack-stratego.str 
BOOTCLEANFILES 	 = pack-stratego.c 

STRINCLUDES 	 = -I $(srcdir)/../sig -CI "-I.." 
SCFLAGS 	 = --main $* $(XTCFLAGS)

check : pack-stratego.tst1 pack-stratego.tst2 pack-stratego.imp

pack-stratego.tst1 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ --dep pack-stratego.t.dep \
		-I $(SSL)/share/ssl -I $(XTC)/share/xtc -I $(srcdir)/../sig

pack-stratego.tst2 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ \
		-I $(SSL)/share/ssl -I $(XTC)/share/xtc -I $(srcdir)/../sig

pack-stratego.imp : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ --imports\
		-I $(SSL)/share/ssl -I $(XTC)/share/xtc -I $(srcdir)/../sig
