include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = strip-comments strat-count
CLEANFILES 	 = $(wildcard *.dep)
BOOTCLEANFILES 	 = $(wildcard *.c)

SCFLAGS     	 = --main io-$*
STRINCLUDES      = -I $(STRATEGO_FRONT)/share/stratego-front

EXTRA_DIST 	 = $(wildcard *.str) 
