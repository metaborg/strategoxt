include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

check_PROGRAMS = sdf2rtg-test
SCFLAGS        = --main main-$*
STRINCLUDES    = -I $(top_srcdir)/trans/sdf2rtg \
                 -I $(top_srcdir)/syn \
                 -I $(top_srcdir)/sig \
                 -I $(top_srcdir)/lib \
                 -I $(SDF_FRONT)/share/sdf-front \
                 -I $(XTC)/share/xtc
LDADD         += $(SSL_LIBS)

SDFINCLUDES    = -I $(top_srcdir)/syn \
                 -I $(STRATEGO_FRONT)/share/sdf/stratego-front \
                 -I $(SDF_FRONT)/share/sdf/sdf-front
PGEN_FLAGS     = -m $*

TESTS          = $(check_PROGRAMS)

TESTS_ENVIRONMENT = SRCDIR="$(srcdir)"

EXTRA_DIST     = $(call srcwildcard,*.str) $(call srcwildcard,*.meta) \
  $(call srcwildcard,*.sdf)  $(wildcard *.def)

CLEANFILES     = $(wildcard *.dep)
BOOTCLEANFILES = $(wildcard *.c) Stratego-Sdf2-rtg.tbl

nodist_sdf2rtg_test_SOURCES = sdf2rtg-test.c
