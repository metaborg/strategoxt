BASE = .
include $(BASE)/Makefile.incl

SUBDIRS := tools syn utrecht lib pp xmpl docs

MANIFEST := Makefile Makefile.incl COPYING README ChangeLog

all clean clean-stuff install depend test:
	for subdir in $(SUBDIRS); do \
	  (cd $$subdir && $(MAKE) -w $@) || exit 1; \
	done

tarball:
	rm -rf rhostratego-$(VERSION)
	$(MAKE) dist distdir=`pwd`/rhostratego-$(VERSION)
	gtar cvfI rhostratego-$(VERSION).tar.bz2 rhostratego-$(VERSION)
