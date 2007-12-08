include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

bin_PROGRAMS = strc-java

LDADD += $(SSL_LIBS)

STRINCLUDES    = -I $(XTC)/share/xtc 

SCFLAGS        = --main io-$*

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.syn) 
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.c) $(wildcard *.o)
BOOTCLEANFILES = $(wildcard *.c) 

