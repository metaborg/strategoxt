include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS     = parse-c pp-c
EXTRA_DIST       = $(wildcard *.str) $(wildcard *.meta)
MOSTLYCLEANFILES = $(wildcard *.dep) $(wildcard *.o) 
CLEANFILES       = $(wildcard *.c)   $(wildcard *.h)

SCFLAGS          = --main io-$* $(XTCFLAGS) 

parse-c.o 	 : xtc-conf.h
pp-c.o    	 : xtc-conf.h


