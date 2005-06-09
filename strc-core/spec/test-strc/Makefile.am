STRPROGS = \
  test01.str 

fooo = \
  test02.str \
  test03.str \
  test04.str \
  test05.str \
  test06.str \
  test07.str

TESTS = \
  $(STRPROGS:.str=.str.sh)

TESTS_ENVIRONMENT =\
  STRC="$(bindir)/strc --verbose 5" \
  STRATEGO_LIB="$(prefix)"

EXTRA_DIST  = $(TESTS) $(STRPROGS)
