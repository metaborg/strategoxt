dnl Autobundle -- Tool suite for automated source tree composition
dnl
dnl Copyright (C) 2002 Merijn de Jonge <mdejonge@cwi.nl>
dnl
dnl This program is free software; you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 2, or (at your option)
dnl any later version.
dnl
dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl
dnl You should have received a copy of the GNU General Public License
dnl along with this program; if not, write to the Free Software
dnl Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
dnl 02111-1307, USA.

dnl $Id: acinclude.m4,v 1.3 2002/05/02 19:02:58 mdejonge Exp $

dnl Author: Merijn de Jonge (mdejonge@cwi.nl)

dnl Configure sub components with additional configure flags
dnl usage:
dnl    AB_CONFIG_PKG(pkgname, configure flags)
dnl 
dnl where
dnl     pkgname = the name of the package (i.e., the name of the directory
dnl               where the package is located
dnl     flags   = additional configure flags to be passed to the package
dnl               configure script
dnl 
dnl note.
dnl    -AB_CONFIG_PKG should be called __after__ any calls to AC_OUTPUT.
dnl    -Multiple package names may be listed which will all be configured with
dnl     the same configure flags
dnl    -Use multiple calls to AB_CONFIG_PKG to configure multiple packages
dnl     differently.

ifdef([AC_OUTPUT_SUBDIRS],[],
   [AC_DEFUN([AC_OUTPUT_SUBDIRS],[subdirs=$1; _AC_OUTPUT_SUBDIRS])])

AC_DEFUN(AB_CONFIG_PKG,
[
   AC_REQUIRE([AC_CONFIG_AUX_DIR_DEFAULT])
   dnl Save configuration flags
   ac_saved_args=$ac_configure_args
   dnl Add package specific flags
   ac_configure_args="$2 $ac_configure_args"
   dnl configure sub-package
   AC_OUTPUT_SUBDIRS($1)
   dnl Restore configuration flags
   ac_configure_args=$ac_saved_args
]
)

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
AC_SUBST(SVN_REVISION)

])