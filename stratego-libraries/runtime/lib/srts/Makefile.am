includedir = $(prefix)/include/srts

include_HEADERS = \
  stratego.h \
  aterm-extension.h \
  stratego-config.h \
  init-stratego-module.h \
  init-stratego-application.h \
  stratego-dynamic-call.h

stratego-config.h : $(top_srcdir)/config.h
	echo "#ifndef SRTS_STRATEGO_CONFIG_H"  > $@
	echo "#define SRTS_STRATEGO_CONFIG_H" >> $@
	echo "" 			      >> $@
	grep -v PACKAGE $< | grep -v VERSION | grep -v XTC >> $@
	echo "#endif" 			      >> $@
	echo "" 			      >> $@
