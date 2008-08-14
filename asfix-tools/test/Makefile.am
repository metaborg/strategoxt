include $(top_srcdir)/Internal.mk
include $(top_srcdir)/Makefile.xt

STRINCLUDES = \
  -I $(top_srcdir)/sig \
  -I $(top_srcdir)/lib

EXTRA_DIST   	 += $(call srcwildcard,*.str)
check_PROGRAMS 	= asfix-abstractions-test
TESTS 		      = asfix-abstractions-test
XT_BUILD_DIST  	= asfix-abstractions-test.c

nodist_asfix_abstractions_test_LDADD = $(SSL_LIBS)

nodist_asfix_abstractions_test_SOURCES=asfix-abstractions-test.c
