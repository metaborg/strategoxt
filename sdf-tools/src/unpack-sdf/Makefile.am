include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_SCRIPTS = unpack
EXTRA_DIST  = unpack.src

% : %.src
	sed 's@__PERL__@$(PERL)@g' < $< > $@ && \
	chmod +x $@
