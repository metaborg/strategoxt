include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS		= -I $(srcdir)/../sig		      \
	  	  -I $(srcdir)/../match		      \
	  	  -I $(srcdir)/../lib		      \
	  	  --main $*			      \
	  	  --C-include "\"conf.h\"" -CI "-I.."

bin_PROGRAMS 	= sc
pkgdata_DATA 	= sc.config sc-manual.txt

CLEANFILES 	= $(wildcard *.dep) sc.config
BOOTCLEANFILES 	= sc.c

EXTRA_DIST 	= $(wildcard *.str) sc.config.src sc-manual.txt
INCLUDES  	+= -I ..

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
