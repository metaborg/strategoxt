include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS		 = data

bin_SCRIPTS	 = sdf-to-sig
bin_PROGRAMS 	 = sdf2sig
libexec_PROGRAMS = sdf2sig

BOOTCLEANFILES 	 = sdf2sig.c
CLEANFILES       = sdf2sig1_check sdf2sig2_check $(wildcard *.dep) 

EXTRA_DIST 	 = sdf-to-sig.src $(wildcard *.str)

TESTS        	 = sdf2sig1_check sdf2sig2_check

SCFLAGS    	 = -I ${srcdir}/../stratego \
                   -I ${srcdir}/../sdf2stratego \
	           -I $(ASFIX_TOOLS)/share/asfix-tools \
	           --main $*

sdf2sig1_check_prog     = sdf2sig
sdf2sig1_check_input    = data/prop.sdf.af
sdf2sig1_check_output   = data/prop-sig.r.af
sdf2sig1_check_correct  = data/prop-sig.r.af.correct

sdf2sig2_check_prog     = sdf2sig
sdf2sig2_check_input    = data/regular.sdf.af
sdf2sig2_check_output   = data/regular-sig.r.af
sdf2sig2_check_correct  = data/regular-sig.r.af.correct

# Generate scripts
%: %.src Makefile
	sed 's#__prefix__#$(prefix)#g;\
             s#__datadir__#$(datadir)#g;\
             s#__pkgdatadir__#$(pkgdatadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
             s#__PACKAGE__#$(PACKAGE)#g;\
             s#__STRATEGO_FRONT__#$(STRATEGO_FRONT)#g;\
             s#__GPP__#$(GPP)#g;\
             s#__GB__#$(GB)#g;\
             s#__SGLR__#$(SGLR)#g;\
             s#__ASFIX_TOOLS__#$(ASFIX_TOOLS)#g;\
             s#__SDF_TOOLS__#$(SDF_TOOLS)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@
