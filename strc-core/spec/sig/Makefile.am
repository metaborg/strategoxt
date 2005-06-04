include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS = -I ../match				    \
	  -I $(srcdir)/../../../stratego-front/syn/ \
	  -I $(srcdir)/../../../stratego-front/sig/

libexec_PROGRAMS = 
#  Stratego-Normal-Format Stratego-Canonical-Format Stratego-Optimized-Format 

#nodist_Stratego_Normal_Format_SOURCES = Stratego-Normal-Format.c
#nodist_Stratego_Canonical_Format_SOURCES = Stratego-Canonical-Format.c
#nodist_Stratego_Optimized_Format_SOURCES = Stratego-Optimized-Format.c

LDADD           += $(SSL_LIBS)

CLEANFILES = *.dep

BOOTCLEANFILES = \
	Stratego-Normal-Format.c \
	Stratego-Canonical-Format.c \
	Stratego-Optimized-Format.c

EXTRA_DIST = $(wildcard *.str)

BOOTSOURCES = \
	Stratego-Normal-Format.c \
	Stratego-Canonical-Format.c \
	Stratego-Optimized-Format.c
