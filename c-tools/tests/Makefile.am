include $(top_srcdir)/Makefile.xt

SUBDIRS           = translation-units
BOOTCLEAN_SUBDIRS = $(SUBDIRS)
EXTRA_DIST        = $(wildcard *.testsuite)

PARSE_UNIT_TESTSUITES = \
  translation-units.testsuite \
  expressions.testsuite \
  statements.testsuite
 
PARSE_UNIT_PTABLE = $(sdfdatadir)/C.tbl
  
installcheck-local:
	for file in fordummy $(PARSE_UNIT_TESTSUITES) ; do \
	 	 	 	  if [ "$$file" = "fordummy" ]; then continue; fi; \
	  $(SDF_TOOLS)/bin/parse-unit -i $$file -p $(PARSE_UNIT_PTABLE) --verbose 1 -o /dev/null ; \
        done ; \
	echo "Testsuites done"