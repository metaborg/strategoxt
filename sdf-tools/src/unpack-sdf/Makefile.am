include $(top_srcdir)/Makefile.xt
include ${srcdir}/../templates/make_rules

SUBDIRS      = data

EXTRA_DIST = unpack.src unpack-sdf.src

bin_SCRIPTS = unpack unpack-sdf

CLEANFILES = $(bin_SCRIPTS)

% : %.src
	sed 's@__PERL__@$(PERL)@g' < $< > $@ && \
	chmod +x $@


