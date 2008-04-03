# Makefile.am                                          -*-Makefile-*-
include $(top_srcdir)/Makefile.xt 


VERBOSE=0
KEEP=0

STRCFLAGS=--ag --verbose $(VERBOSE) --keep $(KEEP)
PGEN_FLAGS      = -m $*
SCOMPILE=$(top_builddir)/tools/strc

%-test.str: %.str
	sed 's,$*,$*-test,;s,.*// add,,g' $< > $@

%.graph: %.str
	-$(SCOMPILE) $(STRINCLUDES) $(STRCFLAGS) $(SCFLAGS) -i $< -F
	name=$@; mv -f $${name%%.graph}.sci.ag-front.attributes $@

$(TESTS): check.sh
	for i in $(TESTS); do $(LN_S) -f $< $$i; done;

verify:
	$(TESTS_ENVIRONMENT) ./$(SRC)

TESTS_ENVIRONMENT = XTC_REPOSITORY="$(BUILD_REPOSITORY)" SRCDIR="$(srcdir)" \
		MAKE=$(MAKE) VERBOSE=$(VERBOSE) KEEP=$(KEEP)

TESTS =						\
	bu_ok_0					\
	bu_ok_1					\
	bu_ok_2					\
	bu_ok_3					\
	bu_ok_4					\
	bu_ok_5					\
	bu_ok_6					\
	bu_ko_7					\
	bu_ok_8					\
	bu_ok_9					\
	td_ok_0					\
	td_ok_1					\
	td_ok_2					\
	td_ok_3					\
	td_ok_4					\
	td_ko_5					\
	td_ko_6					\
	lr_ok_0					\
	lr_ok_1					\
	lr_ok_2					\
	lr_ok_3					\
	lr_ok_4					\
	lr_ok_5					\
	lr_ok_6					\
	lr_ok_7					\
	lr_ok_8					\
	lr_ok_9					\
	lr_ok_10				\
	lr_ok_11				\
	lr_ok_12				\
	lr_ok_13				\
	lr_ok_14				\
	lr_ko_15				\
	noname_ok_0				\
	noname_ok_1				\
	noname_ko_2				\
	noname_ko_3				\
	noname_ko_4				\
	noname_ok_5				\
	noname_ko_6				\
	messy_ok_01

XFAIL_TESTS =					\
	bu_ko_7					\
	td_ko_5					\
	td_ko_6					\
	lr_ko_15				\
	noname_ko_2				\
	noname_ko_3				\
	noname_ko_4				\
	noname_ko_6

ALL_STR = $(TESTS:=.str) $(TESTS:=-test.str)

CLEANFILES = $(TESTS) $(TESTS:.str=-test.str) $(ALL_STR:=.graph)
EXTRA_DIST = check.sh defs $(TESTS:=.str)
