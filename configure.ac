dnl Autobundle -- Tool suite for automated source tree composition
dnl
dnl Author: Merijn de Jonge (mdejonge@cs.uu.nl)
dnl
dnl $Id$

AC_INIT(autobundle,0.10, mdejonge@cs.uu.nl,)
AM_INIT_AUTOMAKE

AC_REVISION($Id$)

USE_XT_PACKAGES

dnl Additional packages needed
# Handle --with-graphviz switch
AC_PACKAGE_REQUIRE(dotneato, dot,
   AC_HELP_STRING([--with-dotneato],[Specify location of AT\&T dotneato subpackage of graphviz]))
AC_SUBST(DOTNEATO)

# Handle --with-autoconf switch
AC_PACKAGE_REQUIRE(gnuautoconf, autoconf,
   AC_HELP_STRING([--with-gnuautoconf],[Specify location of autoconf]))
AC_SUBST(GNUAUTOCONF)

# Handle --with-automake switch
AC_PACKAGE_REQUIRE(gnuautomake, automake,
   AC_HELP_STRING([--with-gnuautomake],[Specify location of automake]))
AC_SUBST(GNUAUTOMAKE)

# Handle --with-make switch
AC_PACKAGE_REQUIRE(gnumake, make,
   AC_HELP_STRING([--with-gnumake],[Specify location of make]))
AC_SUBST(GNUMAKE)

AC_PROG_CC
AC_PROG_INSTALL

AC_PATH_PROGS(SH, sh)

AC_CONFIG_FILES([
   Makefile 
   syntax/Makefile
   syntax/data/Makefile
   src/Makefile 
   src/templates/Makefile
   src/shared/Makefile 
   src/pkg-search/Makefile
   src/pkgs2form/Makefile
   src/bundle2pkglist/Makefile
   src/bundle2configure/Makefile
   src/bundlegen/Makefile
   src/bundlegen/data/Makefile
   src/autobundle/Makefile
   src/opb/Makefile
   src/pbsd/Makefile
   src/pbsd/data/Makefile
   src/pkg-find/Makefile
]
)

AC_OUTPUT

dnl Copyright (C) 2002-2004 Merijn de Jonge <mdejonge@cs.uu.nl>
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
