include $(top_srcdir)/Makefile.xt

EXTRA_DIST= $(wildcard *.dtd) $(wildcard *.testsuite)


PARSE_UNIT_TESTSUITES = dtd.testsuite
PARSE_UNIT_PTABLE = $(sdfdatadir)/dtd.tbl

installcheck-local:
	for file in fordummy $(PARSE_UNIT_TESTSUITES) ; do \
	 	 	 	  if [ "$$file" = "fordummy" ]; then continue; fi; \
	  $(SDF_TOOLS)/bin/parse-unit -i $$file -p $(PARSE_UNIT_PTABLE) --verbose 1 -o /dev/null ; \
        done ; \
	echo "Testsuites done"