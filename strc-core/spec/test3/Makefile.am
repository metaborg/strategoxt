.PRECIOUS: %.ac %.c

TESTFILES = $(wildcard *.r)
TESTBINS = $(subst .r,.bin,$(TESTFILES))
TESTSRCS = $(subst .r,.c,$(TESTFILES))
TESTRUNS = $(subst .r,.run,$(TESTFILES))

IOTESTFILES = $(wildcard io-test*.r)
IOTESTSRCS = $(subst .r,.c,$(IOTESTFILES))
IOTESTBINS = $(subst .r,.bin,$(IOTESTFILES))
IOTESTRUNS = $(subst .r,.io-run,$(IOTESTFILES))

check: $(TESTRUNS) $(IOTESTRUNS)

CLEANFILES = $(TESTBINS) $(IOTESTBINS) $(TESTRUNS) $(IOTESTRUNS)  $(TESTSRCS) $(IOTESTSRCS) *.o *.c *.ac *.s? *.tree *.c.abox

EXTRA_DIST = $(wildcard *.r)

#include $(top_srcdir)/share/Stratego.Make

include $(srcdir)/../test1/make-rules

SINCLUDES = \
	-I $(SSL)/share/ssl \
	-I $(C_TOOLS)/share/c-tools \
	-I $(C_TOOLS)/share/sdf/c-tools 
