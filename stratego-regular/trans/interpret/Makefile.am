include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = \
  core-aterm2irtg \
  core-format-check \
  core-format-check-pp-aterm \
  core-format-check-to-xhtml 



# AM_CFLAGS=-pg
SCFLAGS          = --main main-$* --dr new
STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/lib \
                   -I $(top_srcdir)/xtc \
                   -I $(GPP)/share/sdf/gpp \
                   -I $(ATERM_FRONT)/share/aterm-front \
                   -I $(XML_FRONT)/share/xml-front \
                   -I $(XML_FRONT)/share/sdf/xml-front

# LDADD = -L$(SRTS)/lib/srts -L$(ATERM)/lib -lliblib_prof -lstratego_prof -lstratego-choice_prof -lstratego-lib_prof -lATerm-gcc -lm

LDADD += $(SSL_LIBS)

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)
