includedir = $(prefix)/include/srts

include_HEADERS = \
	stratego.h aterm-extension.h stratego-choice.h stratego-config.h \
	init-stratego-module.h init-stratego-application.h $(CPL_HDR)

noinst_HEADERS = \
	debug.h mprotect.h

stratego-config.h : $(top_srcdir)/config.h
	echo "#ifndef SRTS_STRATEGO_CONFIG_H"  > $@
	echo "#define SRTS_STRATEGO_CONFIG_H" >> $@
	echo "" 			      >> $@
	grep -v PACKAGE $< \
	   | grep -v VERSION 		      >> $@
	echo "#endif" 			      >> $@
	echo "" 			      >> $@

if USECPL

choice-cpl.h: $(CPL)/include/choice.h
	cp $< $@

CPL_HDR = choice-cpl.h

else

CPL_HDR = 

endif
