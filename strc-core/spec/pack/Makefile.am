include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = pack-stratego
nodist_pack_stratego_SOURCES = pack-stratego.c

STRINCLUDES  = -I $(srcdir)/../sig		    \
	  -I $(srcdir)/../../../stratego-front/syn/ \
	  -I $(srcdir)/../../../stratego-front/sig/

SCFLAGS      = --main $* $(XTCFLAGS)

LDADD           += $(SSL_LIBS)

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
