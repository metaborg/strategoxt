include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

LDADD           += $(SSL_LIBS)

bin_PROGRAMS     = pack-stratego
libexec_PROGRAMS = pack-stratego

STRINCLUDES  = -I $(STRATEGO_FRONT)/share/stratego-front -I $(srcdir)/../sig
SCFLAGS      = --main $* $(XTCFLAGS) --dr old

EXTRA_DIST     = pack-stratego.str pack-stratego-options.str 
CLEANFILES     = pack-stratego.dep $(wildcard *.dep) pack-stratego.tst
BOOTCLEANFILES = pack-stratego.c 

check : pack-stratego.tst1 pack-stratego.tst2 

packincludes =  \
	-I $(XTC)/share/xtc \
	-I $(srcdir)/../sig \
	-I $(STRATEGO_FRONT)/share/stratego-front \
	-I $(STRATEGO_LIB)/share/stratego-lib

pack-stratego.tst1 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ --dep pack-stratego.t.dep $(packincludes)

pack-stratego.tst2 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ $(packincludes)

