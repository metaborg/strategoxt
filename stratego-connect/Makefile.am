include $(top_srcdir)/Makefile.xt
SUBDIRS 	  =  src spec
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

EXTRA_DIST = README.in bootstrap $(wildcard *.pkg) stdconfig Makefile.xt

RPMRELEASE = 1

CONFIGURE = ./configure \
                --prefix=$(RPMPREFIX) \
                --with-aterm=$(ATERM) \
                --with-cgen=$(CGEN) \
                --with-gpp=$(GPP) \
                --with-ssl=$(STRATEGOLIB) \
                --with-srts=$(STRATEGORTS) \
                --with-rpmdir=$(RPMDIR)

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__GPP_VERSION__+2.3+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
        s+__ATERM__+$(ATERM)+g;\
        s+__PACKAGE__+$(PACKAGE)+g;\
        s+__MAKE__+$(MAKE)+g;

#include Makefile.rpm
