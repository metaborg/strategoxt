include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt

bin_SCRIPTS  = tohtml-sdf

EXTRA_DIST   = tohtml-sdf.sh.src 
CLEANFILES   = tohtml-sdf

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__VERSION__@$(VERSION)@g'\
	   < $< > $@ && \
	   chmod 755 $@
