include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		= -I $(srcdir)/../sig		      \
	  	  -I $(srcdir)/../match		      \
	  	  -I $(srcdir)/../lib		      \
		  -I $(SSL)/share/ssl		\
	  	  --main $*	

bin_PROGRAMS 	= sc
pkgdata_DATA 	= sc-manual.txt

CLEANFILES 	= $(wildcard *.dep)
BOOTCLEANFILES 	= sc.c

EXTRA_DIST 	= $(wildcard *.str) sc-version.str.in \
		  sc.config.src sc-manual.txt $(man_MANS)

man_MANS 	= sc.1

sc.1 : 
	help2man -n "compile Stratego programs" \
		-m StrategoXT -S "sc $(VERSION)" --no-info ./sc > $@

# Generate scripts
%: %.src Makefile
	sed 's#__GPP__#$(GPP)#g;\
             s#__CGEN__#$(CGEN)#g;\
	     s#__prefix__#$(prefix)#g;\
	     s#__libexecdir__#$(libexecdir)#g;\
	     s#__datadir__#$(datadir)#g;\
	     s#__pkgdatadir__#$(pkgdatadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
	     s#__PACKAGE__#$(PACKAGE)#g;\
             s#__ATERM__#$(ATERM)#g;\
             s#__STRATEGORTS__#$(SRTS)#g;\
             s#__STRATEGOFRONT__#$(STRATEGO_FRONT)#g;\
             s#__STRATEGOLIB__#$(SSL)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@