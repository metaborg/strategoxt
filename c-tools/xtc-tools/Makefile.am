include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = parse-c pp-c
EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
MOSTLYCLEANFILES = $(wildcard *.dep) $(wildcard *.o)
BOOTCLEANFILES   = $(wildcard *.c)   $(wildcard *.h)

SCFLAGS          = --main io-$* $(XTCFLAGS) 
