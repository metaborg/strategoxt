#     							-*- Autoconf -*-
# serial 3
#
# Author: Eelco Visser <visser@cs.uu.nl>
#
# This Autoconf macro file provides parameters for a package that is built
# with the XT bundle of program transformation tools.
# The macros are organized hierarchically such that packages that are included
# in a larger bundle do not need to be provided explicitly.

# XT_ left in configure is the sign a macro was not defined, or there was a typo
# in a macro invocation.
m4_pattern_forbid([^XT_])

AC_DEFUN([XT_SETUP],
[
  AC_REQUIRE([XT_DARWIN])
])

# XT_DARWIN
# ---------
AC_DEFUN([XT_DARWIN],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([AC_CANONICAL_BUILD])

  # As an exception to XT_* macros name, this is a valid part of configure.
  m4_pattern_allow([^XT_DARWIN(_TRUE|_FALSE)?$])

  AC_MSG_CHECKING([whether host operating system is Darwin])
  xt_darwin="no"
  case $host_os in
    darwin*)
      xt_darwin="yes"
      ;;
  esac
  AC_MSG_RESULT([$xt_darwin])
  AM_CONDITIONAL([XT_DARWIN], [test "$xt_darwin" = "yes"])
])

# XT_ARG_WITH(OPTION, VAR, DEFAULT, ARGNAME, NAME)
# ------------------------------------------------
# Declaring the option --with-OPTION=ARGNAME to specify the location of the package NAME.
# Store the result in VAR, defaulting to $DEFAULT (note the $).
AC_DEFUN([XT_ARG_WITH],
[AC_ARG_WITH([$1],
             [AC_HELP_STRING([--with-$1=$4], [use $5 at $4 @<:@$3@:>@])],
	     [$2=$withval],
	     [$2=$$3])
AC_SUBST([$2])
])



# USE_XT_PACKAGES
# ---------------
AC_DEFUN([USE_XT_PACKAGES],
[
  AC_REQUIRE([XT_SETUP])

  BUILD_XTC="XTC"

  # M-x align-all-strings is your friend.
  XT_ARG_WITH([xt],              [XT],              [prefix],              [XT],        [XT Packages])
  XT_ARG_WITH([aterm],           [ATERM],           [XT],                  [DIR],       [ATerm Library])
  XT_ARG_WITH([sdf],             [SDF],             [XT],                  [SDF],       [SDF Packages])
  XT_ARG_WITH([sglr],            [SGLR],            [SDF],                 [DIR],       [SGLR Parser])
  XT_ARG_WITH([pgen],            [PGEN],            [SDF],                 [DIR],       [PGEN Parser Generator])
  XT_ARG_WITH([pt-support],      [PT_SUPPORT],      [SDF],                 [DIR],       [PT Support])
  XT_ARG_WITH([asf-library],     [ASF_LIBRARY],     [SDF],                 [DIR],       [ASF Library])
  XT_ARG_WITH([strategoxt],      [STRATEGOXT],      [XT],                  [STRATEGOXT],[StrategoXT])
  XT_ARG_WITH([srts],            [SRTS],            [STRATEGOXT],          [DIR],       [Stratego Run-Time System])
  XT_ARG_WITH([xtc],             [XTC],             [STRATEGOXT],          [DIR],       [XTC (XT Composition)])
  XT_ARG_WITH([repository],      [REPOSITORY],      [datadir/$PACKAGE/XTC],[FILE],      [XTC Repository])
  XT_ARG_WITH([build-repository],[BUILD_REPOSITORY],[BUILD_XTC],           [FILE],      [Build-time XTC Repository])
  XT_ARG_WITH([strc],            [STRC],            [STRATEGOXT],          [DIR],       [Stratego Compiler])
  XT_ARG_WITH([ssl],             [SSL],             [STRATEGOXT],          [DIR],       [Stratego Standard Library])
  XT_ARG_WITH([gpp],             [GPP],             [STRATEGOXT],          [DIR],       [GPP])
  XT_ARG_WITH([c-tools],         [C_TOOLS],         [STRATEGOXT],          [DIR],       [C Tools])
  XT_ARG_WITH([stratego-front],  [STRATEGO_FRONT],  [STRATEGOXT],          [DIR],       [Stratego Front])
  XT_ARG_WITH([asfix-tools],     [ASFIX_TOOLS],     [STRATEGOXT],          [DIR],       [AsFix Tools])
  XT_ARG_WITH([aterm-front],     [ATERM_FRONT],     [STRATEGOXT],          [DIR],       [ATerm Front])
  XT_ARG_WITH([aterm-tools],     [ATERM_TOOLS],     [STRATEGOXT],          [DIR],       [ATerm Tools])
  XT_ARG_WITH([graph-tools],     [GRAPH_TOOLS],     [STRATEGOXT],          [DIR],       [Graph Tools])
  XT_ARG_WITH([sdf-front],       [SDF_FRONT],       [STRATEGOXT],          [DIR],       [SDF Front])
  XT_ARG_WITH([sdf-tools],       [SDF_TOOLS],       [STRATEGOXT],          [DIR],       [SDF Tools])
  XT_ARG_WITH([concrete-syntax], [CONCRETE_SYNTAX], [STRATEGOXT],          [DIR],       [Concrete Syntax])
  XT_ARG_WITH([xml-front],       [XML_FRONT],       [STRATEGOXT],          [DIR],       [XML Front])
  XT_ARG_WITH([stratego-regular],[STRATEGO_REGULAR],[STRATEGOXT],          [DIR],       [Stratego Regular])
  XT_ARG_WITH([stratego-tools],  [STRATEGO_TOOLS],  [STRATEGOXT],          [DIR],       [Stratego Tools])
  XT_ARG_WITH([dot-tools],       [DOT_TOOLS],       [STRATEGOXT],          [DIR],       [Dot Tools])

  # Make sure BUILD_REPOSITORY is an absolute path.
  case $BUILD_REPOSITORY in
    [\\/]* ) ;;
    *) BUILD_REPOSITORY=`pwd`/$BUILD_REPOSITORY ;;
  esac

  # Backward compatibility?
  AC_SUBST([SC], [$STRC])

  AC_DEFINE([XTC_REPOSITORY()],
            [ATmakeString("@REPOSITORY@")],
            [Location of the XTC repository.])
])# USE_XT_PACKAGES


############ SVN REVISION ########################################################

AC_DEFUN([XT_SVN_REVISION],
[
AC_MSG_CHECKING([for the SVN revision of the source tree])

if test -e ".svn"; then
   REVFIELD="1"
   SVN_REVISION=`svn status -v -N -q ./ | awk "{ if(\\\$NF == \".\") print \\\$$REVFIELD }"`
   AC_MSG_RESULT($SVN_REVISION)
else
  if test -e "svn-revision"; then
    SVN_REVISION="`cat svn-revision`"
    AC_MSG_RESULT($SVN_REVISION)
  else
    SVN_REVISION="0"
    AC_MSG_RESULT([not available, defaulting to 0])
  fi
fi
AC_SUBST([SVN_REVISION])

])

AC_DEFUN([DETECT_SVN_REVISION],
[
  XT_SVN_REVISION
])

############ Extended version numbers #############################################
AC_DEFUN([XT_PRE_RELEASE],
[
  AC_REQUIRE([XT_SVN_REVISION])
  VERSION="${VERSION}pre${SVN_REVISION}"
  PACKAGE_VERSION="${PACKAGE_VERSION}pre${SVN_REVISION}"
])

############ CPP defines of some common variables as ATerms #######################

AC_DEFUN([XT_TERM_DEFINE],
[
  AC_REQUIRE([XT_SVN_REVISION])

  AC_DEFINE([PACKAGE_NAME_TERM()],     [ATmakeString("@PACKAGE_NAME@")])
  AC_DEFINE([PACKAGE_TARNAME_TERM()],  [ATmakeString("@PACKAGE_TARNAME@")])
  AC_DEFINE([PACKAGE_VERSION_TERM()],  [ATmakeString("@PACKAGE_VERSION@")])
  AC_DEFINE([VERSION_TERM()],          [ATmakeString("@VERSION@")])
  AC_DEFINE([PACKAGE_BUGREPORT_TERM()],[ATmakeString("@PACKAGE_BUGREPORT@")])
  AC_DEFINE([SVN_REVISION_TERM()],     [ATmakeString("@SVN_REVISION@")])
])

############ TEST PACKAGES ########################################################

AC_DEFUN([XT_PKG_ATERM],
[
  XT_PROG_BAFFLE
  XT_LIB_ATERM
])

AC_DEFUN([XT_PKG_PGEN],
[
  XT_PROG_SDF2TABLE
])

AC_DEFUN([XT_PKG_SGLR],
[
  XT_PROG_SGLR
])

AC_DEFUN([XT_PKG_PT_SUPPORT],
[
  XT_PROG_IMPLODEPT
])

AC_DEFUN([XT_PKG_ASF_LIBRARY],
[
  AC_MSG_CHECKING([for asf-library at $ASF_LIBRARY/share/asf-library])
  test -d "$ASF_LIBRARY/share/asf-library"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find asf-library. Use --with-sdf or --with-asf-library.])
  fi
])

AC_DEFUN([XT_PKG_SDF],
[
  XT_PKG_PGEN
  XT_PKG_SGLR
  XT_PKG_PT_SUPPORT
  XT_PKG_ASF_LIBRARY
])

AC_DEFUN([XT_PKG_STRATEGOXT],
[
  XT_PROG_STRC
  XT_PROG_PACK_SDF
  XT_PROG_SDF2RTG
])

############ TEST PROGRAMS ##########################################################

AC_DEFUN([XT_PROG_SDF2TABLE],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for sdf2table at $PGEN/bin/sdf2table])
  test -x "$PGEN/bin/sdf2table"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find sdf2table. Use --with-sdf or --with-pgen.])
  fi
])

AC_DEFUN([XT_PROG_IMPLODEPT],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for implodePT at $PT_SUPPORT/bin/implodePT$EXEEXT])
  test -x "$PT_SUPPORT/bin/implodePT$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find implodePT. Use --with-sdf or --with-pt-support.])
  fi
])

AC_DEFUN([XT_PROG_SGLR],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for sglr at $SGLR/bin/sglr$EXEEXT])
  test -x "$SGLR/bin/sglr$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find sglr. Use --with-sdf or --with-sglr.])
  fi
])

AC_DEFUN([XT_PROG_BAFFLE],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for baffle at $ATERM/bin/baffle$EXEEXT])
  test -f "$ATERM/bin/baffle$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find baffle. Use --with-aterm.])
  fi
])

AC_DEFUN([XT_PROG_STRC],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for strc at $STRC/bin/strc$EXEEXT])
  test -x "$STRC/bin/strc$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find strc. Use --with-strategoxt to specify the location of StrategoXT])
  fi
])

AC_DEFUN([XT_PROG_PACK_SDF],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for pack-sdf at $STRC/bin/pack-sdf$EXEEXT])
  test -x "$SDF_FRONT/bin/pack-sdf$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find pack-sdf. Use --with-strategoxt to specify the location of StrategoXT])
  fi
])

AC_DEFUN([XT_PROG_SDF2RTG],
[
  AC_REQUIRE([AC_PROG_CC])

  AC_MSG_CHECKING([for sdf2rtg at $STRC/bin/sdf2rtg$EXEEXT])
  test -x "$STRATEGO_REGULAR/bin/sdf2rtg$EXEEXT"
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find sdf2rtg. Use --with-strategoxt to specify the location of StrategoXT])
  fi
])

############ TEST LIBRARIES ##########################################################
AC_DEFUN([XT_LIB_ATERM],
[
  AC_MSG_CHECKING([for libATerm-gcc at $ATERM/lib/libATerm-gcc.a])

  test -f $ATERM/lib/libATerm-gcc.a
  if test $? -eq 0; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find libATerm-gcc.a. You must install the ATerm library with the option --with-gcc])
  fi
])
