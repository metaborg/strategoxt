include ${srcdir}/../templates/make_rules

# define any subdir here
SUBDIRS      = data

EXTRA_DIST = unpack.src unpack-sdf.src

bin_SCRIPTS = unpack unpack-sdf

CLEANFILES = $(bin_SCRIPTS)

% : %.src
	sed 's@__PERL__@$(PERL)@g' < $< > $@ && \
	chmod +x $@


