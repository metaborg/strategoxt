include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SCFLAGS = -I ../match -I $(STRATEGO_FRONT)/share/stratego-front \
	-O 1

libexec_PROGRAMS = \
  Stratego-Normal-Format Stratego-Canonical-Format Stratego-Optimized-Format 

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
