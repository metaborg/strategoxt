include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)

.PRECIOUS: %.ac %.c

noinst_DATA = xtc-conf.h

SCFLAGS = --main $@ 

CINCLUDES += --C-include "\"xtc-conf.h\""

SINCLUDES = \
	-I $(SSL)/share/ssl \
	-I $(srcdir)/../sig \
	-I $(srcdir)/../match \
	-I $(srcdir)/../opt \
	-I $(srcdir)/../lib \
	-I $(srcdir)/../front \
	-I $(srcdir)/../syn \
	-I $(srcdir)/../sc \
	-I $(srcdir)/../c \
	-I $(C_TOOLS)/share/c-tools \
	-I $(C_TOOLS)/share/sdf/c-tools \
	-I $(XTC)/share/xtc

xtc-conf.h :
	echo "#define XTC_REPOSITORY() ATmakeString(\"$(REPOSITORY)\")" > $@


CLEANFILES = $(TESTS) *.o *.c *.ac *.s? *.tree *.c.abox

EXTRA_DIST = $(wildcard *.r) $(wildcard *.res)

check: $(subst .r,.bin,$(wildcard *-main.r))

bootinstall:
