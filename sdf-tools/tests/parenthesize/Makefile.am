include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/Internal.mk
include $(wildcard *.dep)

check_DATA     = Exp-pretty.pp.af Exp.tbl ExpAmb.def ExpAmb.str Exp.str
check_PROGRAMS = parenthesize-tests
dist_check_SCRIPTS = sdf2parenthesize-checks.sh
TESTS          = $(check_PROGRAMS) sdf2parenthesize-checks.sh

SDF2PARENTHESIZE=$(bindir)/sdf2parenthesize$(EXEEXT)

TESTS_ENVIRONMENT = \
  SDF2PARENTHESIZE="$(SDF2PARENTHESIZE)" \
  STRC="$(SCOMPILE)" \
  BUILDDIST="$(top_builddist)/tests/parenthesize" \
  VERBOSE="1"

XT_BUILD_DIST  = ExpAmb.def ExpAmb.str Exp.str Exp.def Exp-pretty.pp.af
EXTRA_DIST    += ExpAmb.sdf Exp.src.def Exp-pretty.pp parenthesize-tests.str
CLEANFILES    += Exp.tbl $(wildcard *.c) $(wildcard *.dep) parenthesize-Exp.str

parenthesize-tests.c : parenthesize-Exp.str Exp.str

parenthesize-Exp.str : Exp.tbl
	$(SDF2PARENTHESIZE) -i $< -o $@

Exp.def: Exp.src.def
	$(LN_S) $< $@

PGEN_FLAGS    = -m $*
SDF2RTG_FLAGS = -m $*
SCFLAGS       = --main io-$*
STRINCLUDES   = -I $(prefix)/share/xtc -I $(top_builddir)/tests/parenthesize -I $(top_srcdir)/tests/parenthesize
LDADD        += $(SSL_LIBS)

nodist_parenthesize_tests_SOURCES = parenthesize-tests.c

check-am: ; true
installcheck-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) $(check_PROGRAMS) \
	  $(dist_check_SCRIPTS) $(check_DATA)
	$(MAKE) $(AM_MAKEFLAGS) check-TESTS
