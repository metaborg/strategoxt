#     							-*- Autoconf -*-
# serial 2
#
# Author: Eelco Visser <visser@cs.uu.nl>
#
# This Autoconf macro file provides parameters for a package that is built
# with the XT bundle of program transformation tools.
# The macros are organized hierarchically such that packages that are included
# in a larger bundle do not need to be provided explicitly.

# USE_XT_PACKAGES
# ---------------
AC_DEFUN([USE_XT_PACKAGES],
[

############ XT ###########################################################

AC_ARG_WITH([xt],
  AC_HELP_STRING([--with-xt=XT], [use XT at XT @<:@PREFIX@:>@]),
  [XT=$withval],
  [XT=$prefix]
)
AC_SUBST([XT])

############ ATerm Library ################################################

AC_ARG_WITH([aterm],
  AC_HELP_STRING([--with-aterm=DIR], [use ATerm Library at DIR @<:@XT@:>@]),
  [ATERM=$withval],
  [ATERM=$XT]
)
AC_SUBST([ATERM])

############ SDF ##########################################################

AC_ARG_WITH([sdf],
  AC_HELP_STRING([--with-sdf=SDF], [use SDF at SDF @<:@XT@:>@]),
  [SDF=$withval],
  [SDF=$XT]
)
AC_SUBST([SDF])

AC_ARG_WITH([sglr],
  AC_HELP_STRING([--with-sglr=DIR], [use SGLR at DIR @<:@SDF@:>@]),
  [SGLR=$withval],
  [SGLR=$SDF]
)
AC_SUBST([SGLR])

AC_ARG_WITH([pgen],
  AC_HELP_STRING([--with-pgen=DIR], [use PGEN at DIR @<:@SDF@:>@]),
  [PGEN=$withval],
  [PGEN=$SDF]
)
AC_SUBST([PGEN])

AC_ARG_WITH([pt-support],
  AC_HELP_STRING([--with-pt-support=DIR], [use pt-support at DIR @<:@SDF@:>@]),
  [PT_SUPPORT=$withval],
  [PT_SUPPORT=$SDF]
)
AC_SUBST([PT_SUPPORT])

AC_ARG_WITH([asf-library],
  AC_HELP_STRING([--with-asf-library=DIR], [use ASF library at DIR @<:@SDF@:>@]),
  [ASF_LIBRARY=$withval],
  [ASF_LIBRARY=$SDF]
)
AC_SUBST([ASF_LIBRARY])

############ StrategoXT ##################################################

AC_ARG_WITH([strategoxt],
  AC_HELP_STRING([--with-strategoxt=STRATEGOXT],
                 [use StrategoXT at STRATEGOXT @<:@XT@:>@]),
  [STRATEGOXT=$withval],
  [STRATEGOXT=$XT]
)
AC_SUBST([STRATEGOXT])

AC_ARG_WITH([srts],
  AC_HELP_STRING([--with-strs=DIR],
                 [use Stratego Run-Time System at DIR @<:@STRATEGOXT@:>@]),
  [SRTS=$withval],
  [SRTS=$STRATEGOXT]
)
AC_SUBST([SRTS])

AC_ARG_WITH([xtc],
  AC_HELP_STRING([--with-xtc=DIR],
                 [use XTC (XT Composition) at DIR @<:@STRATEGOXT@:>@]),
  [XTC=$withval],
  [XTC=$STRATEGOXT]
)
AC_SUBST([XTC])

AC_ARG_WITH([repository],
  AC_HELP_STRING([--with-repository=FILE],
                 [use XTC repository at FILE @<:@pkgdatadir/XTC@:>@]),
  [REPOSITORY=$withval],
  [REPOSITORY=$datadir/$PACKAGE/XTC]
)
AC_SUBST([REPOSITORY])

AC_ARG_WITH([build-repository],
  AC_HELP_STRING([--with-build-repository=FILE],
                 [use build-time XTC repository at FILE @<:@pkgdatadir/XTC@:>@]),
  [BUILD_REPOSITORY=$withval],
  [BUILD_REPOSITORY=`pwd`/XTC]
)
AC_SUBST([BUILD_REPOSITORY])

AC_ARG_WITH([strc],
  AC_HELP_STRING([--with-strc=DIR],
                 [use Stratego Compiler at DIR @<:@STRATEGOXT@:>@]),
  [STRC=$withval SC=$withval],
  [STRC=$STRATEGOXT SC=$STRATEGOXT]
)
AC_SUBST([STRC])

AC_ARG_WITH([sc],
  AC_HELP_STRING([--with-sc=DIR],
                 [use Stratego Compiler at DIR @<:@STRATEGOXT@:>@]),
  [STRC=$withval SC=$withval],
  [STRC=$STRATEGOXT SC=$STRATEGOXT]
)
AC_SUBST([SC])

AC_ARG_WITH([ssl],
  AC_HELP_STRING([--with-ssl=DIR],
                 [use Stratego Standard Library at DIR @<:@STRATEGOXT@:>@]),
  [SSL=$withval],
  [SSL=$STRATEGOXT]
)
AC_SUBST([SSL])

AC_ARG_WITH([gpp],
  AC_HELP_STRING([--with-gpp=DIR],
                 [use GPP at DIR @<:@STRATEGOXT@:>@]),
  [GPP=$withval],
  [GPP=$STRATEGOXT]
)
AC_SUBST([GPP])

AC_ARG_WITH([c-tools],
  AC_HELP_STRING([--with-c-tools=DIR],
                 [use C_TOOLS at DIR @<:@STRATEGOXT@:>@]),
  [C_TOOLS=$withval],
  [C_TOOLS=$STRATEGOXT]
)
AC_SUBST([C_TOOLS])

AC_ARG_WITH([stratego-front],
  AC_HELP_STRING([--with-stratego-front=DIR],
                 [use Stratego Front at DIR @<:@STRATEGOXT@:>@]),
  [STRATEGO_FRONT=$withval],
  [STRATEGO_FRONT=$STRATEGOXT]
)
AC_SUBST([STRATEGO_FRONT])

AC_ARG_WITH([asfix-tools],
  AC_HELP_STRING([--with-asfix-tools=DIR],
                 [use AsFix Tools at DIR @<:@STRATEGOXT@:>@]),
  [ASFIX_TOOLS=$withval],
  [ASFIX_TOOLS=$STRATEGOXT]
)
AC_SUBST([ASFIX_TOOLS])

AC_ARG_WITH([aterm-front],
  AC_HELP_STRING([--with-aterm-front=DIR],
                 [use ATerm Front at DIR @<:@STRATEGOXT@:>@]),
  [ATERM_FRONT=$withval],
  [ATERM_FRONT=$STRATEGOXT]
)
AC_SUBST([ATERM_FRONT])

AC_ARG_WITH([aterm-tools],
  AC_HELP_STRING([--with-aterm-tools=DIR],
                 [use Aterm Tools at DIR @<:@STRATEGOXT@:>@]),
  [ATERM_TOOLS=$withval],
  [ATERM_TOOLS=$STRATEGOXT]
)
AC_SUBST([ATERM_TOOLS])

AC_ARG_WITH([graph-tools],
  AC_HELP_STRING([--with-graph-tools=DIR],
                 [use Graph Tools at DIR @<:@STRATEGOXT@:>@]),
  [GRAPH_TOOLS=$withval],
  [GRAPH_TOOLS=$STRATEGOXT]
)
AC_SUBST([GRAPH_TOOLS])

AC_ARG_WITH([sdf-front],
  AC_HELP_STRING([--with-sdf-front=DIR],
                 [use SDF Front at DIR @<:@STRATEGOXT@:>@]),
  [SDF_FRONT=$withval],
  [SDF_FRONT=$STRATEGOXT]
)
AC_SUBST([SDF_FRONT])

AC_ARG_WITH([sdf-tools],
  AC_HELP_STRING([--with-sdf-tools=DIR],
                 [use SDF Tools at DIR @<:@STRATEGOXT@:>@]),
  [SDF_TOOLS=$withval],
  [SDF_TOOLS=$STRATEGOXT]
)
AC_SUBST([SDF_TOOLS])

AC_ARG_WITH([concrete-syntax], 
  AC_HELP_STRING([--with-concrete-syntax=DIR], 
		 [use concrete-syntax at DIR @<:@STRATEGOXT@:>@]),
  [CONCRETE_SYNTAX=$withval],
  [CONCRETE_SYNTAX=$STRATEGOXT]
)
AC_SUBST(CONCRETE_SYNTAX)

AC_ARG_WITH([xml-front],
  AC_HELP_STRING([--with-xml-front=DIR],
                 [use XML Front at DIR @<:@STRATEGOXT@:>@]),
  [XML_FRONT="$withval"],
  [XML_FRONT="$STRATEGOXT"]
)
AC_SUBST(XML_FRONT)

AC_ARG_WITH([stratego-regular], 
  AC_HELP_STRING([--with-stratego-regular=DIR],
                 [use StrategoRegular at DIR @<:@STRATEGOXT@:>@]), 
  [STRATEGO_REGULAR=$withval], 
  [STRATEGO_REGULAR=$STRATEGOXT]
)
AC_SUBST([STRATEGO_REGULAR])

AC_ARG_WITH([stratego-tools],
  AC_HELP_STRING([--with-stratego-tools=DIR],
                 [use Stratego Tools at DIR @<:@STRATEGOXT@:>@]),
  [STRATEGO_TOOLS=$withval],
  [STRATEGO_TOOLS=$STRATEGOXT]
)
AC_SUBST([STRATEGO_TOOLS])

AC_ARG_WITH([dot-tools],
  AC_HELP_STRING([--with-dot-tools=DIR],
                 [use Dot Tools at DIR @<:@STRATEGOXT@:>@]),
  [DOT_TOOLS=$withval],
  [DOT_TOOLS=$STRATEGOXT]
)
AC_SUBST([DOT_TOOLS])

AC_DEFINE(XTC_REPOSITORY(),
          [ATmakeString("@REPOSITORY@")],
          [Location of the XTC repository.])
])# USE_XT_PACKAGES

AC_DEFUN([DETECT_SVN_REVISION],
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

AC_DEFUN([XT_TERM_DEFINE],
[
  AC_DEFINE(PACKAGE_NAME_TERM(),[ATmakeString("@PACKAGE_NAME@")])
  AC_DEFINE(PACKAGE_TARNAME_TERM(),[ATmakeString("@PACKAGE_TARNAME@")])
  AC_DEFINE(PACKAGE_VERSION_TERM(),[ATmakeString("@PACKAGE_VERSION@")])
  AC_DEFINE(PACKAGE_BUGREPORT_TERM(),[ATmakeString("@PACKAGE_BUGREPORT@")])
  AC_DEFINE(SVN_REVISION_TERM(),[ATmakeString("@SVN_REVISION@")])
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
