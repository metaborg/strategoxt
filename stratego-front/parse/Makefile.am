include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS 	= --main $*
STRINCLUDES     = -I $(top_srcdir)/syn \
                  -I $(top_srcdir)/sig \
                  -I $(XTC)/share/xtc

bin_PROGRAMS 	= meta-explode stratego-desugar parse-stratego \
		  pp-stratego stratego-ensugar

LDADD += $(SSL_LIBS)

CLEANFILES     	= $(wildcard *.dep)

BOOTCLEANFILES  = meta-explode.c stratego-desugar.c parse-stratego.c \
		  pp-stratego.c stratego-ensugar.c stratego-parenthesize.str

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) \
		  $(wildcard *.rtree) $(wildcard *.src) \
		  $(wildcard *.c) 

# generate a parenthesize Stratego module
pp-stratego.c : stratego-parenthesize.str

stratego-parenthesize.str : $(top_builddir)/syn/Stratego.def
	$(SDF_TOOLS)/bin/sdf2parenthesize -i $< -o $@ -m Stratego --omod stratego-parenthesize --lang Stratego
