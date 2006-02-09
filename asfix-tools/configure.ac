AC_PREREQ([2.58])
AC_INIT([asfix-tools],[0.17M1],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

XT_INTERNAL_USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

# TODO: make a pkg-config file for sglr.
# AC_SUBST([SGLR_CFLAGS],['-I $(SGLR)/include'])
# AC_SUBST([SGLR_LIBS],['-L$(SGLR)/lib -lsglr -lmept -lErrorAPI'])

AC_CONFIG_FILES([
  stratego-sglr.pc
  Makefile 

  sig/Makefile 
  lib/Makefile
  xtc/Makefile
  test/Makefile

  stratego-sglr/Makefile
  stratego-sglr/justsglr/Makefile
  stratego-sglr/lib/Makefile
  stratego-sglr/tests/Makefile

  src/Makefile 

  src/templates/Makefile
  src/templates/data/Makefile

  src/asfix-yield/Makefile
  src/asfix-yield/data/Makefile

  src/visamb/Makefile
  src/visamb/data/Makefile

  src/explode-asfix2me/Makefile
  src/explode-asfix2me/data/Makefile

  src/anno/Makefile
])
AC_OUTPUT

