include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_DATA     = Exp-pretty.pp.af Exp.tbl 
check_PROGRAMS = parenthesize-tests

TESTS          = $(check_PROGRAMS)
EXTRA_DIST     = Exp.def Exp-pretty.pp
BOOTCLEANFILES = $(check_DATA)

parenthesize-tests.c : parenthesize-Exp.str Exp.str

parenthesize-Exp.str : Exp.def
	$(bindir)/sdf2parenthesize -i $< --lang Exp -m Main --omod $* -o $@

SCFLAGS       = --main io-$*
STRINCLUDES   = -I $(XTC)/share/xtc
LDADD        += $(SSL_LIBS)