include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_DATA     = Exp-pretty.pp.af Exp.tbl ExpAmb.def ExpAmb.str Exp.str
check_PROGRAMS = parenthesize-tests
dist_check_SCRIPTS = sdf2parenthesize-checks.sh
TESTS          = $(check_PROGRAMS) sdf2parenthesize-checks.sh

TESTS_ENVIRONMENT =\
  SDF2PARENTHESIZE="$(bindir)/sdf2parenthesize$(EXEEXT)"\
  STRC="$(STRC)/bin/strc"\
  VERBOSE="1"

EXTRA_DIST     = ExpAmb.sdf Exp.def Exp-pretty.pp parenthesize-tests.str
BOOTCLEANFILES = $(check_DATA) $(wildcard *.c) $(wildcard *.dep)

parenthesize-tests.c : parenthesize-Exp.str Exp.str

parenthesize-Exp.str : Exp.def
	$(bindir)/sdf2parenthesize -i $< -o $@ -m Exp

PGEN_FLAGS    = -m $*
SDF2RTG_FLAGS = -m $*
SCFLAGS       = --main io-$*
STRINCLUDES   = -I $(XTC)/share/xtc
LDADD        += $(SSL_LIBS)

nodist_parenthesize_tests_SOURCES = parenthesize-tests.c
