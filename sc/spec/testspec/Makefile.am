include $(srcdir)/../test1/make-rules
include $(wildcard *.dep)

.PRECIOUS: %.ac %.c

SCFLAGS = --main $@ 

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
	-I $(srcdir)/../pack \
	-I $(STRATEGO_FRONT)/share/stratego-front \
	-I $(C_TOOLS)/share/c-tools \
	-I $(C_TOOLS)/share/sdf/c-tools \
	-I $(XTC)/share/xtc 


TESTS = $(TESTBINS)

CLEANFILES = $(TESTS) *.o *.c *.ac *.s? *.tree *.c.abox 

EXTRA_DIST = $(wildcard *.r) $(wildcard *.res)

check: $(subst .r,.bin,$(wildcard *-main.r))

bootinstall:

DEFS = -DPACKAGE_NAME=\"$(PACKAGE_NAME)\" -DPACKAGE_TARNAME=\"$(PACKAGE_TARNAME)\" -DPACKAGE_VERSION=\"$(PACKAGE_VERSION)\" -DPACKAGE_STRING=\"$(PACKAGE_STRING)\" -DPACKAGE_BUGREPORT=\"$(PACKAGE_BUGREPORT)\" -DPACKAGE=\"$(PACKAGE)\" -DVERSION=\"$(VERSION)\" -DXTC_REPOSITORY\(\)=ATmakeString\(\"$(XTC_REPOSITORY)\"\)
