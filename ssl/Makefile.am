include $(top_srcdir)/Makefile.xt

SUBDIRS 	  = . spec libraries tests 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST 	  = README README.in bootstrap stdconfig Makefile.xt Makefile.subxt

RPMRELEASE=1

CONFIGURE = ./configure				\
		--prefix=/usr			\
		--with-aterm=$(ATERM)		\
		--with-rpmdir=$(RPMDIR)		\
		--with-rpmtmp=$(RPMTMP)

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
	s+__ATERM__+$(ATERM)+g;

