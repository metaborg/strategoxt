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
# Sets some additional linker flags that are required on Darwin (Mac OS X)
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

############################################## FIND PACKAGES ##############################

# XT_CHECK_ATERM
# --------------
AC_DEFUN([XT_CHECK_ATERM],
[
  XT_CHECK_PACKAGE([ATERM],[aterm >= 2.3],[lib/libATerm.a])
])

# XT_CHECK_SDF
# ------------
AC_DEFUN([XT_CHECK_SDF],
[
  XT_CHECK_PACKAGE([SDF],[sdf2-bundle >= 2.3],[bin/sglr])

  SGLR=$SDF
  PGEN=$SDF
  PT_SUPPORT=$SDF
  ASF_LIBRARY=$SDF
  AC_SUBST([SGLR])
  AC_SUBST([PGEN])
  AC_SUBST([PT_SUPPORT])
  AC_SUBST([ASF_LIBRARY])
])

# XT_CHECK_STRATEGOXT
# -------------------
AC_DEFUN([XT_CHECK_STRATEGOXT],
[
  XT_CHECK_PACKAGE([XTC],[xtc])
  XT_CHECK_PACKAGE([STRATEGO_RUNTIME],[stratego-runtime])
  XT_CHECK_PACKAGE([STRATEGO_LIB],[stratego-lib])
  XT_CHECK_PACKAGE([C_TOOLS],[c-tools])
  XT_CHECK_PACKAGE([STRATEGOXT],[strategoxt])

  # backward compatibitily
  STRS=$STRATEGO_RUNTIME
  AC_SUBST([STRS])

  # These packages need pkg-config files.
  STRC=$STRATEGOXT
  GPP=$STRATEGOXT
  STRATEGO_FRONT=$STRATEGOXT
  ASFIX_TOOLS=$STRATEGOXT
  ATERM_FRONT=$STRATEGOXT
  SDF_FRONT=$STRATEGOXT
  SDF_TOOLS=$STRATEGOXT
  CONCRETE_SYNTAX=$STRATEGOXT
  XML_FRONT=$STRATEGOXT
  STRATEGO_REGULAR=$STRATEGOXT
  AC_SUBST([STRC])
  AC_SUBST([GPP])
  AC_SUBST([STRATEGO_FRONT])
  AC_SUBST([ASFIX_TOOLS])
  AC_SUBST([ATERM_FRONT])
  AC_SUBST([SDF_FRONT])
  AC_SUBST([SDF_TOOLS])
  AC_SUBST([CONCRETE_SYNTAX])
  AC_SUBST([XML_FRONT])
  AC_SUBST([STRATEGO_REGULAR])
])

# XT_CHECK_STRATEGOXT_UTILS
# -------------------------
AC_DEFUN([XT_CHECK_STRATEGOXT_UTILS],
[
  XT_ARG_WITH2([strategoxt-utils],[STRATEGOXT],           [DIR],  [StrategoXT Utilities])
  XT_ARG_WITH2([graph-tools],     [STRATEGOXT_UTILS],     [DIR],  [Graph Tools])
  XT_ARG_WITH2([dot-tools],       [STRATEGOXT_UTILS],     [DIR],  [Dot Tools])
  XT_ARG_WITH2([aterm-tools],     [STRATEGOXT_UTILS],     [DIR],  [ATerm Tools])
  XT_ARG_WITH2([stratego-tools],  [STRATEGOXT_UTILS],     [DIR],  [Stratego Tools])
])

# XT_CHECK_PACKAGES
# -----------------
AC_DEFUN([XT_CHECK_PACKAGES],
[
  AC_REQUIRE([XT_CHECK_ATERM])
  AC_REQUIRE([XT_CHECK_SDF])
  AC_REQUIRE([XT_CHECK_STRATEGOXT])
])

# XT_WITH_XTC_ARGS
# ----------------
# Arguments for XTC repositories.
AC_DEFUN([XT_WITH_XTC_ARGS],
[
  BUILD_XTC="XTC"

  XT_ARG_WITH2([repository],      [datadir/$PACKAGE/XTC], [FILE], [XTC Repository])
  XT_ARG_WITH2([build-repository],[BUILD_XTC],            [FILE], [Build-time XTC Repository])

  # Make sure BUILD_REPOSITORY is an absolute path.
  case $BUILD_REPOSITORY in
    [[\\/]]* ) ;;
    *) BUILD_REPOSITORY=`pwd`/$BUILD_REPOSITORY ;;
  esac

  AC_DEFINE([XTC_REPOSITORY()],
            [ATmakeString("@REPOSITORY@")],
            [Location of the XTC repository.])
])

# XT_USE_XT_PACKAGES
# -------------------
AC_DEFUN([XT_USE_XT_PACKAGES2],
[
  AC_REQUIRE([XT_WITH_XTC_ARGS])
  AC_REQUIRE([XT_CHECK_PACKAGES])
])

################################### GENERIC MACROS ####################################


# XT_ARG_WITH(OPTION, VAR, DEFAULT, ARGNAME, NAME)
# ------------------------------------------------
# Declaring the option --with-OPTION=ARGNAME to specify the location of the package NAME.
# Store the result in VAR, defaulting to $DEFAULT (note the $).
AC_DEFUN([XT_ARG_WITH],
[AC_ARG_WITH([$1],
             [AS_HELP_STRING([--with-$1=$4], [use $5 at $4 @<:@$3@:>@])],
	     [$2=$withval],
	     [$2=$$3])
AC_SUBST([$2])
])

# XT_ARG_WITH2(OPTION, DEFAULT, ARGNAME, NAME, [WITNESS])
# ------------------------------------------------------
# The name XT_ARG_WITH2 is temporary.
#
# Declaring the option --with-OPTION=ARGNAME to specify the location of
# the package NAME.
#
# Store the result in the variable which name is OPTION upper cased,
# using underscore for non letters.  $DEFAULT (note the $) is its
# default value.
#
# If the WITNESS is specified, make sure the file $VAR/WITNESS exists.
AC_DEFUN([XT_ARG_WITH2],
[m4_pushdef([AC_Var], AS_TR_CPP([$1]))dnl
AC_ARG_WITH([$1],
            [AS_HELP_STRING([--with-$1=$3], [use $4 at $3 @<:@$2@:>@])],
	    [AC_Var=$withval],
	    [AC_Var=$$2])
AC_SUBST(AC_Var)dnl
m4_ifval([$5],
[test -f "$AC_Var/$5" ||
  AC_MSG_ERROR([no such file: $AC_Var/$5
        Check the value of AC_Var (--with-$1)])
])dnl
m4_popdef([AC_Var])dnl
])

# XT_CHECK_PACKAGE(VARIABLE,MODULE,[WITNESS])
#
# Checks the existance of package 'MODULE' and sets the 
# variables VARIABLE, VARIABLE_CFLAFS, and VARIABLE_LIBS.
#
# The optional WITNESS checks if the package is indeed 
# installed at the location where the pkg-config file says it 
# is installed.
#
# ------------------
AC_DEFUN([XT_CHECK_PACKAGE],
[
  PKG_CHECK_MODULES([$1],[$2])

  AC_MSG_CHECKING([prefix of package $2])
  $1=`$PKG_CONFIG --variable=prefix "$2"`

  if test -z "$$1"; then
    AC_MSG_ERROR([package $2 does not specify its prefix in the pkg-config file.
          Report this error to the maintainer of this package.])
  else
    AC_MSG_RESULT([$$1])
  fi

m4_ifval([$3],
[test -f "$$1/$3" ||
  AC_MSG_ERROR([no such file: $$1/$3
        The configuration of package $2 claims that the package is
        installed at this location. Please check if the package is installed correctly.])
])dnl

  AC_SUBST([$1_CFLAGS])
  AC_SUBST([$1_LIBS])
  AC_SUBST([$1])
])

############ OLD XT_USE_XT_PACKAGES MACRO ########################################

# XT_EXPLICTLY_USE_XT_PACKAGES
# ------------------
# This macro requires explicit configuration by the user and does not use 
# pkg-config to find out the right cpp and linker flags.
AC_DEFUN([XT_USE_XT_PACKAGES],
[
  AC_REQUIRE([XT_SETUP])
  AC_REQUIRE([XT_WITH_XTC_ARGS])

  # M-x align-all-strings is your friend.
  #           OPTION,            DEFAULT,                ARGNAME, NAME,                      [WITNESS])
  XT_ARG_WITH2([xt],              [prefix],               [DIR],  [XT Packages])
  XT_ARG_WITH2([aterm],           [XT],                   [DIR],  [ATerm Library],            [lib/libATerm.a])
  XT_ARG_WITH2([sdf],             [XT],                   [DIR],  [SDF Packages])
  XT_ARG_WITH2([sglr],            [SDF],                  [DIR],  [SGLR Parser],              [bin/sglr])
  XT_ARG_WITH2([pgen],            [SDF],                  [DIR],  [PGEN Parser Generator],    [bin/sdf2table])
  XT_ARG_WITH2([pt-support],      [SDF],                  [DIR],  [PT Support])
  XT_ARG_WITH2([asf-library],     [SDF],                  [DIR],  [ASF Library])

  XT_ARG_WITH2([strategoxt],      [XT],                   [DIR],  [Stratego/XT])
  XT_ARG_WITH2([srts],            [STRATEGOXT],           [DIR],  [Stratego Run-Time System])
  XT_ARG_WITH2([xtc],             [STRATEGOXT],           [DIR],  [XTC (XT Composition)])
  XT_ARG_WITH2([strc],            [STRATEGOXT],           [DIR],  [Stratego Compiler])
  XT_ARG_WITH2([stratego-lib],    [STRATEGOXT],           [DIR],  [Stratego Library])
  XT_ARG_WITH2([gpp],             [STRATEGOXT],           [DIR],  [GPP])
  XT_ARG_WITH2([c-tools],         [STRATEGOXT],           [DIR],  [C Tools])
  XT_ARG_WITH2([stratego-front],  [STRATEGOXT],           [DIR],  [Stratego Front])
  XT_ARG_WITH2([asfix-tools],     [STRATEGOXT],           [DIR],  [AsFix Tools])
  XT_ARG_WITH2([aterm-front],     [STRATEGOXT],           [DIR],  [ATerm Front])
  XT_ARG_WITH2([sdf-front],       [STRATEGOXT],           [DIR],  [SDF Front])
  XT_ARG_WITH2([sdf-tools],       [STRATEGOXT],           [DIR],  [SDF Tools])
  XT_ARG_WITH2([concrete-syntax], [STRATEGOXT],           [DIR],  [Concrete Syntax])
  XT_ARG_WITH2([xml-front],       [STRATEGOXT],           [DIR],  [XML Front])
  XT_ARG_WITH2([stratego-regular],[STRATEGOXT],           [DIR],  [Stratego Regular])

  # Maybe this should be a separate macro.
  XT_ARG_WITH2([strategoxt-utils],[STRATEGOXT],           [DIR],  [StrategoXT Utilities])
  XT_ARG_WITH2([graph-tools],     [STRATEGOXT_UTILS],     [DIR],  [Graph Tools])
  XT_ARG_WITH2([dot-tools],       [STRATEGOXT_UTILS],     [DIR],  [Dot Tools])
  XT_ARG_WITH2([aterm-tools],     [STRATEGOXT_UTILS],     [DIR],  [ATerm Tools])
  XT_ARG_WITH2([stratego-tools],  [STRATEGOXT_UTILS],     [DIR],  [Stratego Tools])

  # Backward compatibility?
  AC_SUBST([SC], [$STRC])

  # Forward compatibility?
  AC_SUBST([STRATEGO_RUNTIME], [$SRTS])

  # CFLAGS
  AC_SUBST([ATERM_CFLAGS], ['-I$(ATERM)/include'])
  AC_SUBST([STRATEGO_RUNTIME_CFLAGS], ['-I$(SRTS)/include'])
  AC_SUBST([STRATEGO_LIB_CFLAGS], ['-I$(STRATEGO_LIB)/include -I$(SRTS)/include -I$(ATERM)/include'])

  # LIBS
  AC_SUBST([ATERM_LIBS], ['-L$(ATERM)/lib -lATerm-gcc -lm'])
  AC_SUBST([STRATEGO_RUNTIME_LIBS], ['-L$(SRTS)/lib/srts -lstratego-runtime-opt -lstratego-runtime-choice-opt -lm'])
  AC_SUBST([STRATEGO_LIB_LIBS], ['-L$(STRATEGO_LIB)/lib/stratego-lib -lstratego-lib -lstratego-lib-native-opt -lm'])
  AC_SUBST([XTC_LIBS], ['-L$(XTC)/lib/xtc -lstratego-xtc'])
])

AU_DEFUN([USE_XT_PACKAGES], [XT_USE_XT_PACKAGES])

# XT_SVN_REVISION
# ---------------
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

AU_DEFUN([DETECT_SVN_REVISION], [XT_SVN_REVISION])

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
