SUBDIRS = pp sig syn data

EXTRA_DIST = reconf README.in $(wildcard *.pkg) Makefile.rpm cgen.spec \
	Makefile.xt

CONFIGURE = ./configure \
		--prefix=/usr \
		--with-gpp=$(GPP) \
		--with-rmpdir=$(RPMDIR)

RPMRELEASE = 1

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__GPP_VERSION__+2.3+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
	s+__ATERM__+$(ATERM)+g;

CLEANFILES = 

#include Makefile.rpm
