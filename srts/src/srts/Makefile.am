includedir = $(prefix)/include/srts

include_HEADERS = \
	stratego.h aterm-extension.h stratego-choice.h stratego-config.h $(CPL_HDR)

noinst_HEADERS = \
	debug.h mprotect.h

stratego-config.h : $(top_srcdir)/config.h
	cp $< $@

if USECPL

choice-cpl.h: $(CPL)/include/choice.h
	cp $< $@

CPL_HDR = choice-cpl.h

else

CPL_HDR = 

endif
