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
  abox2text \
  pptable-diff
  
libexec_PROGRAMS = \
  abox-format

STRCFLAGS = --main io-$*
STRINCLUDES = -I $(XTC)/share/xtc \
              -I $(top_srcdir)/trans/2abox \
              -I $(SDF_TOOLS)/share/sdf-tools \
              $(STRATEGO_GPP_STRCFLAGS)

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) 

LDADD += $(SSL_LIBS)

abox2text_LDADD = $(STRATEGO_GPP_LIBS) $(SSL_LIBS)
ast2abox_LDADD = $(STRATEGO_GPP_LIBS) $(SSL_LIBS)
ast2text_LDADD = $(STRATEGO_GPP_LIBS) $(SSL_LIBS)
pptable_diff_LDADD = $(STRATEGO_GPP_LIBS) $(SSL_LIBS)