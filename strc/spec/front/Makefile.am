include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

SUBDIRS 	 = data

STRINCLUDES = \
  -I $(STRATEGO_FRONT)/share/stratego-front \
  -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
  -I $(srcdir)/../sig \
  -I $(srcdir)/../match\
  -I $(srcdir)/../lib \
  -I $(srcdir)/../opt

SCFLAGS = --main $*-io --dr old

libexec_PROGRAMS = extract extract-all rename-defs stratego-warnings \
		   repair-types desugar pre-desugar normalize-spec use-def \
		   check-constructors spec-to-sdefs 

check_PROGRAMS	 = use-def-test lift-dynamic-rules-old-test
nodist_use_def_test_SOURCES = use-def-test.c
nodist_lift_dynamic_rules_old_test_SOURCES = lift-dynamic-rules-old-test.c

CLEANFILES     = $(wildcard *.dep) $(wildcard *.tmp)
BOOTCLEANFILES = $(wildcard *.c)

TESTS 		 = use-def-test lift-dynamic-rules-old-test
#needed-defs-test 
#frontend-test 
#extract-test

EXTRA_DIST 	 = $(wildcard *.str) $(wildcard *.meta)
