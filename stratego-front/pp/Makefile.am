include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= astratego2text

BOOTCLEANFILES 	= astratego2text.c

astratego2text.o : xtc-conf.h

SCFLAGS 	= --main $* $(XTCFLAGS)

pkgdata_DATA 	= Stratego.pp Stratego-pretty.pp StrategoStratego.pp	      \
		  Stratego.pp.af Stratego-pretty.pp.af StrategoStratego.pp.af \
		  astratego2text.config

CLEANFILES 	= Stratego.pp StrategoStratego.pp	       \
		Stratego.pp.af Stratego-pretty.pp.af	       \
		StrategoStratego.pp.af			       \
		astratego2text.config $(wildcard *.dep)			     

EXTRA_DIST 	=				\
		$(wildcard *.pp)		\
		$(wildcard *.pp.af)		\
		$(wildcard *.r)			\
		$(wildcard *.config.src)	\
		$(wildcard *.c)			\
		$(wildcard *.h.in)

%.def : 
	rm -f $@
	ln -s ../syn/$@ .




