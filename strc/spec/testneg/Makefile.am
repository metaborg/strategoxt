SINCLUDES       = -I $(SSL)/share/ssl -I $(SRTS)/share/srts
AM_LDFLAGS      = -L$(SRTS)/lib/srts -L$(ATERM)/lib
STRATEGORUNLIBS = -lstratego.opt -lstratego-lib.opt -lATerm-gcc -lm
LDADD           = $(STRATEGORUNLIBS)

CLEANFILES      = *.o *.ac *.s[0-9]* *.f* *.ac *.c.abox \
                  *.tree *.mtree *.rtree *.txt *.s5fused libtest*.c \
                  *.dep *test*.c *.out *.sh

STRPROGS = \
  test01.str \
  test02.str

TESTS = \
  $(STRPROGS:.str=.str.sh)

$(TESTS): testfail
	for i in $(STRPROGS); do ln -fs $(srcdir)/$< $$i.sh; done

EXTRA_DIST  = $(TESTS) testfail accept-success.list

include $(top_srcdir)/spec/test1/make-rules
