include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = parse-pp-table parse-box \
       pp-pp-table pp-box ppgen \
       ast2text ast2abox asfix2abox abox2text abox2html abox2latex \
       gen-css-boxstyle gen-latex-boxstyle 

SCFLAGS        = --main io-$* -O 2
STRINCLUDES    = -I $(XTC)/share/xtc

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 
