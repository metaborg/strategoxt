include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_SCRIPTS 	 = 
libexec_PROGRAMS = pack-stratego 

pack-stratego.o	 : ../conf.h

pkgdata_DATA 	 = pack-stratego.config

CLEANFILES 	 = pack-stratego.dep $(wildcard *.dep)

EXTRA_DIST 	 = pack-stratego.str pack-stratego.config.src 
BOOTCLEANFILES 	 = pack-stratego.c 

STRINCLUDES 	 = -I $(srcdir)/../sig -CI "-I.."
SCFLAGS 	 = --C-include "\"conf.h\""  
INCLUDES	 += -I ..

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
             s#__STRATEGORTS__#$(STRATEGORTS)#g;\
             s#__STRATEGOFRONT__#$(STRATEGOFRONT)#g;\
             s#__STRATEGOLIB__#$(STRATEGOLIB)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@
