SUBDIRS 	= src ssl libraries
EXTRA_DIST 	= bootstrap mprotect.m4
CLEANFILES      = XTC
pkgdata_DATA 	= README
ACLOCAL_AMFLAGS = -I .

bootclean :
	cd libraries; $(MAKE) bootclean
