include $(top_srcdir)/Makefile.xt

SUBDIRS = data

bin_PROGRAMS 	= atermdiff term-size
term_size_LDADD = $(SSL_LIBS)

CLEANFILES     = atermdiff.c.dep term-size.c.dep
BOOTCLEANFILES = atermdiff.c term-size.c

EXTRA_DIST = aterm-diff.str term-size.str
