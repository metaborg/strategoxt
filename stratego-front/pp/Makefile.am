include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= astratego2text

BOOTCLEANFILES 	= astratego2text.c

astratego2text.o : xtc-conf.h

SCFLAGS 	= --main $* $(XTCFLAGS)

pkgdata_DATA 	= Stratego.pp Stratego-pretty.pp      \
		  Stratego.pp.af Stratego-pretty.pp.af 

CLEANFILES 	= Stratego.pp StrategoStratego.pp	       \
		Stratego.pp.af Stratego-pretty.pp.af	       \
		StrategoStratego.pp.af			       \
		astratego2text.config $(wildcard *.dep)			     

EXTRA_DIST 	=				\
		$(wildcard *.pp)		\
		$(wildcard *.pp.af)		\
		$(wildcard *.str)		\
		$(wildcard *.c)			\
		$(wildcard *.h.in) 

Stratego.def : 
	rm -f $@
	ln -s ../syn/$@ .




