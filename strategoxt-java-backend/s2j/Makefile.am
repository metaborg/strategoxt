include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

libexec_PROGRAMS = s2j

LDADD += $(SSL_LIBS)

STRINCLUDES    = -I $(XTC)/share/xtc -I $(JAVA_FRONT)/share/java-front -I $(STRATEGO_FRONT)/share/stratego-front -I ../syn

SCFLAGS        = --main io-$* -O 2 --dr new

EXTRA_DIST     = $(wildcard *.str) $(wildcard *.meta) $(wildcard *.syn) 
CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp) $(wildcard *.c) $(wildcard *.o)
BOOTCLEANFILES = $(wildcard *.c) 

