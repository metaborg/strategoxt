# Makefile.am                                          -*-Makefile-*-
include $(top_srcdir)/Makefile.xt

KEEP=0
VERBOSE=0

PGEN_FLAGS      = -m $*
SDF2RTG_FLAGS	= -m $*
SCFLAGS		= --verbose $(VERBOSE) --keep $(KEEP) -O 2 -m $*
STRINCLUDES	= -I $(srcdir)
SCOMPILE=$(top_builddir)/tools/strc

LDADD +=					\
	$(STRATEGO_LAZY_LIBS)			\
	$(STRATEGO_LIB_LIBS)
LDFLAGS= $(LDADD)

CFLAGS = -g -O0					\
	$(STRATEGO_LAZY_CFLAGS)			\
	$(STRATEGO_LIB_CFLAGS)

STRCFLAGS = --ag				\
	$(STRATEGO_LAZY_STRCFLAGS)		\
	$(STRATEGO_LIB_STRCFLAGS)

Stratego_AG =																		\
	sag-01.str																		\
	lookup-01.str																	\
	extend.str																		\
	extend-args.str																\
	cond-01.str																		\
	cond-02.str																		\
	cond-03.str																		\
	propagation.str																\
	terms-01.str																	\
	terms-02.str


$(TESTS): $(srcdir)/check.sh
	@for i in $(TESTS); do \
	  echo $(LN_S) -f $(srcdir)/check.sh $$i; \
	  $(LN_S) -f $(srcdir)/check.sh $$i; \
	done

verify:
	$(TESTS_ENVIRONMENT) ./$(SRC).ts

TESTS = $(Stratego_AG:.str=.ts)

XFAIL_TESTS =																		\
	cond-03.ts

TESTS_ENVIRONMENT = MAKE="$(MAKE)" AM_MAKEFLAGS="$(AM_MAKEFLAGS)" \
		SRCDIR="$(srcdir)" KEEP=$(KEEP) VERBOSE=$(VERBOSE)

EXTRA_DIST =					\
	$(Stratego_AG)				\
	check.sh				\
	defs

CLEANFILES =					\
	$(TESTS) $(TESTS:.ts=) $(TESTS:.ts=.c)	\
	$(TESTS:.ts=.c.dep) $(TESTS:.ts=.dep)
