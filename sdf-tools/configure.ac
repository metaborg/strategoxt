AC_PREREQ([2.58])
AC_INIT([sdf-tools],[0.14],[stratego-bugs@cs.uu.nl])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

XT_USE_XT_PACKAGES

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL
AC_PATH_PROGS(SH, sh)

TOOLS="templates sdf-cons sdf-label sdf-bracket sdf2sdf"
UNRELEASED=""
RELEASED="templates sdf-cons sdf-label sdf-bracket sdf2sdf"

AC_SUBST(TOOLS)
AC_SUBST(RELEASED)
AC_SUBST(UNRELEASED)

AC_CONFIG_FILES([
  Makefile

  analyse/Makefile
  analyse/parse-unit/Makefile
  analyse/parse-unit/syn/Makefile
  analyse/parse-unit/sig/Makefile
  analyse/parse-unit/tests/Makefile

  trans/Makefile

  tests/Makefile
  tests/parenthesize/Makefile

  src/Makefile 
  src/templates/Makefile
  src/templates/data/Makefile
  src/sdf-cons/Makefile
  src/sdf-cons/data/Makefile
  src/sdf-label/Makefile
  src/sdf-label/data/Makefile
  src/sdf-bracket/Makefile
  src/sdf-bracket/data/Makefile
  src/sdf2sdf/Makefile
  src/sdf2sdf/data/Makefile
])
AC_OUTPUT
