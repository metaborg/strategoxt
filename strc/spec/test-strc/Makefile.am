STRPROGS = \
  test01.str \
  test02.str \
  test03.str \
  test04.str

TESTS = \
  $(STRPROGS:.str=.str.sh)

TESTS_ENVIRONMENT =\
  STRC="$(bindir)/strc" \
  SRTS="$(SRTS)"

EXTRA_DIST  = $(TESTS) $(STRPROGS)
