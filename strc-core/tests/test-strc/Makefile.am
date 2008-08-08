STRPROGS = \
  test01.str \
  test02.str \
  test03.str \
  test04.str \
  test05.str \
  test06.str \
  test07.str \
  test08.str \
  test09.str \
  test10.str \
  test11.str \
  test12.str

STRLIBS = \
  test09-lib.str 

TESTS = $(STRPROGS:.str=.str.sh)

# Something is missing to make this tests work with
# $(CURRENT_SCOMPILE) instead of the installed version on MacOsX.
TESTS_ENVIRONMENT =\
  SRCDIR="$(srcdir)" \
  CC="$(CC)" \
  STRC="$(bindir)/strc --verbose 3 --format-check 1 --keep 0" \
  STRATEGO_LIB="$(prefix)"

EXTRA_DIST  = $(TESTS) $(STRPROGS) $(STRLIBS)

check: ; true
check-am: ; true
installcheck-local: check-TESTS
