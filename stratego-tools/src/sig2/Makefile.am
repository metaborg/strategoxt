include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS      	   = data

bin_PROGRAMS     = sig2fc sig2typematch sig2fold-strategy
libexec_PROGRAMS = astratego2tg tg2fc tg2typematch tg2fold-strategy fc-tree-grammar

SCFLAGS          = --main io-$* 
STRINCLUDES      = -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
                   -I $(STRATEGO_FRONT)/share/stratego-front \
                   -I $(XTC)/share/xtc

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c) tree-grammar-fc.str

fc-tree-grammar.c: tree-grammar-fc.str

tree-grammar-fc.str :
	$(STRATEGO_TOOLS)/bin/sig2fc -i tree-grammar.str -o tree-grammar-fc.str

