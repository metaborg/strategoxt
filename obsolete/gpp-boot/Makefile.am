SUBDIRS = src

EXTRA_DIST = $(wildcard *.pkg) reconf README.in program-check.m4 Makefile.rpm gpp-boot.spec

CONFIGURE = ./configure \
		--prefix=/usr \
		--with-aterm=$(ATERM) \
	        --with-cgen=$(CGEN) \
		--with-gpp=$(GPP) \
		--with-ssl=$(SSL) \
		--with-srts=$(STRATEGORTS) \
		--with-rmpdir=$(RPMDIR)

RPMRELEASE=1

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__SSL_VERSION__+0.8.1+g;\
        s+__GPP_VERSION__+2.3+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
	s+__ATERM__+$(ATERM)+g;

include Makefile.rpm
