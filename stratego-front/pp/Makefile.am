include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= astratego2text

CLEANFILES 	=  $(wildcard *.dep)

SCFLAGS 	= --main $* $(XTCFLAGS)

pkgdata_DATA 	= Stratego.pp Stratego-pretty.pp      \
		  Stratego.pp.af Stratego-pretty.pp.af 

BOOTCLEANFILES  = astratego2text.c Stratego.pp StrategoStratego.pp		\
		  Stratego.pp.af Stratego-pretty.pp.af				\
		  StrategoStratego.pp.af	      

EXTRA_DIST 	=				\
		$(wildcard *.pp)		\
		$(wildcard *.pp.af)		\
		$(wildcard *.str)		\
		$(wildcard *.c)			\
		$(wildcard *.h.in) 

Stratego.def : 
	rm -f $@
	ln -s ../syn/$@ .




