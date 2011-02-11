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
  test12.str \
  test13.str \
  test14.str \
  test15.str \
  test16.str

EXPECTEDRESULTS = \
  test13.str.expected \
  test14.str.expected \ 
  test15.str.expected

STRLIBS = \
  test09-lib.str 

TESTS = $(STRPROGS:.str=.str.sh)

TESTS_ENVIRONMENT =\
  CC="$(CC)" \
  STRC="../../tools/strc --verbose 3 --format-check 1 --keep 0" \
  STRATEGO_LIB="$(prefix)"

EXTRA_DIST  = $(TESTS) $(STRPROGS) $(STRLIBS) $(EXPECTEDRESULTS)
