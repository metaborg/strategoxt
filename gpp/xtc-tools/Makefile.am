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
  gen-latex-boxstyle \
  pptable-diff

SCFLAGS        = --main io-$*
STRINCLUDES    = -I $(XTC)/share/xtc \
                 -I $(SDF_FRONT)/share/sdf-front

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

parse_box_LDADD = $(SSL_LIBS)
pp_box_LDADD = $(SSL_LIBS)

parse_pp_table_LDADD = $(SSL_LIBS)
pp_pp_table_LDADD = $(SSL_LIBS)

ppgen_LDADD = $(SSL_LIBS)

ast2abox_LDADD = $(SSL_LIBS)

ast2text_LDADD = $(SSL_LIBS)
asfix2abox_LDADD = $(SSL_LIBS)
abox2text_LDADD = $(SSL_LIBS)
abox2html_LDADD = $(SSL_LIBS)
abox2latex_LDADD = $(SSL_LIBS)

#  pptable_diff_LDADD = $(SSL_LIBS)

gen_css_boxstyle_LDADD = $(SSL_LIBS)
gen_latex_boxstyle_LDADD =$(SSL_LIBS)
