include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS 	= astratego2text
LDADD += $(SSL_LIBS)

CLEANFILES 	=  $(wildcard *.dep)

SCFLAGS 	= --main $* $(XTCFLAGS)

pkgdata_DATA 	= Stratego.pp Stratego-pretty.pp			\
		  Stratego.pp.af Stratego-pretty.pp.af			\
		  Stratego-Core.pp Stratego-Core-pretty.pp		\
		  Stratego-Core.pp.af Stratego-Core-pretty.pp.af	\
		  Stratego-Sugar.pp Stratego-Sugar.pp.af		\
		  Stratego-Sugar-pretty.pp Stratego-Sugar-pretty.pp.af 	

BOOTCLEANFILES = $(wildcard *.af) $(wildcard *.c)		    \
		 Stratego.pp StrategoStratego.pp		    \
		 Stratego.pp.af Stratego-Sugar.pp Stratego-Core.pp  

EXTRA_DIST 	=						    \
		$(wildcard *.pp)				    \
		$(wildcard *.pp.af)				    \
		$(wildcard *.str)				    \
		$(wildcard *.c)					    \
		$(wildcard *.h.in) 

Stratego.def : 
	rm -f $@
	ln -s ../syn/$@ .

Stratego-Core.def : 
	rm -f $@
	ln -s ../syn/$@ .

Stratego-Sugar.def : 
	rm -f $@
	ln -s ../syn/$@ .




