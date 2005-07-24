CLEANFILES = *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
             libtest*.c \
             *.dep *test*.c *.out *.sh

STRPROGS = \
  test01.str \
  test02.str \
  test03.str \
  test04.str

TESTS = \
  $(STRPROGS:.str=.str.sh)

$(TESTS): testfail
	for i in $(STRPROGS); do ln -fs $(srcdir)/$< $$i.sh; done

EXTRA_DIST  = $(TESTS) testfail accept-success.list

test03_LDADD = -L$(STRATEGO_LIB)/lib/stratego-lib -lstratego-lib $(STRATEGORUNLIBS)

include $(top_srcdir)/spec/test1/make-rules

