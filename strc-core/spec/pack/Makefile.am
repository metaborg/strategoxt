include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = pack-stratego

LIB_STRC = -L$(top_srcdir)/lib -lstrc

pack_stratego_LDADD = $(LIB_STRC) $(SSL_LIBS)

LDADD += $(SSL_LIBS)

STRINCLUDES =					\
  -I $(srcdir)/../../../stratego-front/syn/	\
  -I $(srcdir)/../../../stratego-front/sig/	\
		   -I $(top_srcdir)/lib		

SCFLAGS = --main $*-io $(XTCFLAGS)

EXTRA_DIST     = pack-stratego.str
CLEANFILES     = pack-stratego.dep $(wildcard *.dep) \
		 pack-stratego.tst1 pack-stratego.tst2
BOOTCLEANFILES = pack-stratego.c 

check : pack-stratego.tst1 pack-stratego.tst2 

packincludes =  \
	-I $(XTC)/share/xtc \
	-I $(STRATEGO_FRONT)/share/stratego-front \
	-I $(STRATEGO_LIB)/share/stratego-lib

pack-stratego.tst1 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ --dep pack-stratego.t.dep $(packincludes)

pack-stratego.tst2 : pack-stratego
	./pack-stratego -i pack-stratego.str -o $@ $(packincludes)

