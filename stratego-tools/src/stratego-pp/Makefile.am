SUBDIRS      = data

bin_SCRIPTS  = tohtml-stratego

# Tests to run
# TESTS        = program-check

EXTRA_DIST   = tohtml-stratego.sh.src

CLEANFILES  = tohtml-stratego

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__VERSION__@$(VERSION)@g'\
	   < $< > $@ && \
	   chmod 755 $@
