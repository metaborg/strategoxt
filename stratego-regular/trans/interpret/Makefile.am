include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = \
  core-aterm2irtg \
  core-format-check

SCFLAGS          = --main main-$* --dr new
STRINCLUDES      = -I $(top_srcdir)/sig \
                   -I $(top_srcdir)/lib
LDADD += $(SSL_LIBS)

EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)


