include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = \
  parse-box \
  pp-box \
  parse-pp-table \
  pp-pp-table \
  ppgen \
  ast2abox \
  ast2text \
  asfix2abox \
  abox2text \
  abox2html \
  abox2latex \
  gen-css-boxstyle \
  pptable-diff

SCFLAGS        = --main io-$*
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(SDF_TOOLS)/share/sdf-tools

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

LDADD += $(SSL_LIBS)
