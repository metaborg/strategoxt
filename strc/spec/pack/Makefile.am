include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = pack-stratego
libexec_PROGRAMS = pack-stratego

STRINCLUDES  = -I $(STRATEGO_FRONT)/share/stratego-front -I $(srcdir)/../sig
SCFLAGS      = --main $* $(XTCFLAGS) --dr old

EXTRA_DIST     = pack-stratego.str 
CLEANFILES     = pack-stratego.dep $(wildcard *.dep) pack-stratego.tst
BOOTCLEANFILES = pack-stratego.c 

check : pack-stratego.tst1 pack-stratego.tst2 pack-stratego.imp

pack-stratego.tst1 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ --dep pack-stratego.t.dep \
		-I $(XTC)/share/xtc -I $(srcdir)/../sig \
		-I $(STRATEGO_FRONT)/share/stratego-front

pack-stratego.tst2 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ \
		-I $(XTC)/share/xtc -I $(srcdir)/../sig \
		-I $(STRATEGO_FRONT)/share/stratego-front

pack-stratego.imp : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ --imports\
		-I $(XTC)/share/xtc -I $(srcdir)/../sig \
		-I $(STRATEGO_FRONT)/share/stratego-front
