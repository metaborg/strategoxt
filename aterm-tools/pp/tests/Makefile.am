include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

ATERM_FILES = $(wildcard *.aterm)
EXTRA_DIST  = $(ATERM_FILES)

installcheck-local:
	for file in fordummy $(ATERM_FILES) ; do \
	 	 	 	  if [ "$$file" = "fordummy" ]; then continue; fi; \
	  $(ATERM_TOOLS)/bin/pp-aterm -i $$file ; \
        done
