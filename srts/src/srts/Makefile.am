includedir = $(prefix)/include/srts

include_HEADERS = \
  stratego.h \
  aterm-extension.h \
  stratego-choice.h \
  stratego-config.h \
  init-stratego-module.h \
  init-stratego-application.h

noinst_HEADERS = \
  debug.h \
  mprotect.h \
  stratego-lib.h

stratego-config.h : $(top_srcdir)/config.h
	echo "#ifndef SRTS_STRATEGO_CONFIG_H"  > $@
	echo "#define SRTS_STRATEGO_CONFIG_H" >> $@
	echo "" 			      >> $@
	grep -v PACKAGE $< \
	   | grep -v VERSION 		      >> $@
	echo "#endif" 			      >> $@
	echo "" 			      >> $@

stratego-lib.h :
	ln -s $(top_srcdir)/ssl/stratego-lib.h .
