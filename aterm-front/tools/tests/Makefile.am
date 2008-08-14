include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

ATERM_FILES = $(call srcwildcard,*.aterm)
EXTRA_DIST  = $(ATERM_FILES)

installcheck-local: $(ATERM_FILES)
	for file in fordummy $^ ; do \
	  if [ "$$file" = "fordummy" ]; then continue; fi; \
	  $(bindir)/pp-aterm -i $$file ; \
	done
