include $(top_srcdir)/Makefile.xt

SUBDIRS 	  = . spec tests 
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST 	  = README bootstrap Makefile.xt autoxt.m4

ACLOCAL_AMFLAGS   = -I .

install-data-local :: install-xtc

install-xtc:
	$(XTC)/bin/xtc register -r $(DREPOSITORY) -t liblib.rtree -l $(SRTS)/share/srts -V $(VERSION)
