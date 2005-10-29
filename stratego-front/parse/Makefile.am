include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS 	= --main io-$*
STRINCLUDES     = -I $(top_srcdir)/syn \
                  -I $(top_srcdir)/sig \
		  -I $(GPP)/share/sdf/gpp \
		  -I $(GPP)/share/gpp \
                  -I $(XTC)/share/xtc --verbose 1

bin_PROGRAMS 	 = parse-stratego pp-stratego pretty-stratego 
libexec_PROGRAMS = meta-explode stratego2abox stratego-parenthesize 

LDADD += $(SSL_LIBS)

CLEANFILES     	= $(wildcard *.dep)

BOOTCLEANFILES  = meta-explode.c parse-stratego.c \
		  pp-stratego.c stratego-parenthesize.str

EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) \
		  $(wildcard *.rtree) $(wildcard *.src) \
		  $(wildcard *.c) 

# generate a parenthesize Stratego module
pp-stratego.c : stratego-parenthesize.str

stratego-parenthesize.str : $(top_builddir)/syn/Stratego.def
	$(SDF_TOOLS)/bin/sdf2parenthesize -i $< -o $@ -m Stratego --omod stratego-parenthesize --lang Stratego
