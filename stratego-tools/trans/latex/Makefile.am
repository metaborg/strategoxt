include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS 	= --main io-$* --dr new
STRINCLUDES     = -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
                  -I $(STRATEGO_FRONT)/share/stratego-front \
                  -I $(ASFIX_TOOLS)/share/asfix-tools \
                  -I $(CONCRETE_SYNTAX)/share/concrete-syntax \
                  -I $(XTC)/share/xtc

libexec_PROGRAMS = pp-stratego-latex-alltt

LDADD += $(SSL_LIBS)

CLEANFILES     	= $(wildcard *.dep)
BOOTCLEANFILES  = $(wildcard *.c)
EXTRA_DIST 	= $(wildcard *.str) $(wildcard *.meta) sample-doc.ltx


output.ltx : sample-input.str $(libexecdir)/pp-stratego-latex-alltt
	$(libexecdir)/pp-stratego-latex-alltt -i $< -o $@

sample-doc.pdf : output.ltx
	pdflatex sample-doc.ltx

