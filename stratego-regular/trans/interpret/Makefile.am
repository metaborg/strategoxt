include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = \
  core-aterm2irtg \
  core-format-check \
  core-format-check-to-xhtml 

SCFLAGS          = --main main-$* --dr new
STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/lib \
                   -I $(top_srcdir)/xtc \
                   -I $(XML_FRONT)/share/xml-front \
                   -I $(XML_FRONT)/share/sdf/xml-front

LDADD += $(SSL_LIBS)

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)


