include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS 	= --main $*
STRINCLUDES     = -I $(top_srcdir)/syn \
                  -I $(top_srcdir)/sig \
                  -I $(XTC)/share/xtc

bin_PROGRAMS 	= meta-explode stratego-desugar parse-stratego \
		  pp-stratego stratego-ensugar

CLEANFILES     	= $(wildcard *.dep)

BOOTCLEANFILES  = meta-explode.c stratego-desugar.c parse-stratego.c \
		  pp-stratego.c stratego-ensugar.c

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) \
		  $(wildcard *.rtree) $(wildcard *.src) \
		  $(wildcard *.c) 
