dnl autobundle -- Make distributions by bundling separate software packages.
dnl
dnl Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
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

dnl $Id: acinclude.m4,v 1.2 2002/11/15 00:05:59 stratego Exp $

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

AC_DEFUN([AB_CONFIG_PKG],
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


# AB_OUTPUT_SUBDIRS_SUFFIX
# ------------------------
# This macro is comming from autoconf 2.61 (_AC_OUTPUT_SUBDIRS)
# Add a suffix to the build directory.
m4_define([AB_OUTPUT_SUBDIRS_SUFFIX],
[
subdirs=$1
subbuilddirs_suffix=$2
#
# CONFIG_SUBDIRS section.
#
if test "$no_recursion" != yes; then

  # Remove --cache-file and --srcdir arguments so they do not pile up.
  ac_sub_configure_args=
  ac_prev=
  eval "set x $ac_configure_args"
  shift
  for ac_arg
  do
    if test -n "$ac_prev"; then
      ac_prev=
      continue
    fi
    case $ac_arg in
    -cache-file | --cache-file | --cache-fil | --cache-fi \
    | --cache-f | --cache- | --cache | --cach | --cac | --ca | --c)
      ac_prev=cache_file ;;
    -cache-file=* | --cache-file=* | --cache-fil=* | --cache-fi=* \
    | --cache-f=* | --cache-=* | --cache=* | --cach=* | --cac=* | --ca=* \
    | --c=*)
      ;;
    --config-cache | -C)
      ;;
    -srcdir | --srcdir | --srcdi | --srcd | --src | --sr)
      ac_prev=srcdir ;;
    -srcdir=* | --srcdir=* | --srcdi=* | --srcd=* | --src=* | --sr=*)
      ;;
    -prefix | --prefix | --prefi | --pref | --pre | --pr | --p)
      ac_prev=prefix ;;
    -prefix=* | --prefix=* | --prefi=* | --pref=* | --pre=* | --pr=* | --p=*)
      ;;
    *)
      case $ac_arg in
      *\'*) ac_arg=`echo "$ac_arg" | sed "s/'/'\\\\\\\\''/g"` ;;
      esac
      ac_sub_configure_args="$ac_sub_configure_args '$ac_arg'" ;;
    esac
  done

  # Always prepend --prefix to ensure using the same prefix
  # in subdir configurations.
  ac_arg="--prefix=$prefix"
  case $ac_arg in
  *\'*) ac_arg=`echo "$ac_arg" | sed "s/'/'\\\\\\\\''/g"` ;;
  esac
  ac_sub_configure_args="'$ac_arg' $ac_sub_configure_args"

  # Pass --silent
  if test "$silent" = yes; then
    ac_sub_configure_args="--silent $ac_sub_configure_args"
  fi

  ac_popdir=`pwd`
  for ac_dir in : $subdirs; do test "x$ac_dir" = x: && continue

    # Do not complain, so a configure script can configure whichever
    # parts of a large source tree are present.
    test -d "$srcdir/$ac_dir" || continue
    # diff autoconf 2.61: status.m4 >>>>
    _AC_SRCDIRS(["$ac_dir"])
    # $ac_srcdir can be '.' when the build directory is identical to the
    # source directory.  In this case '.' will refer to the build directory
    # instead of the source directory.
    if test "$ac_srcdir" = .; then
      # Relative path
      ac_srcdir=$ac_top_build_prefix$srcdir$ac_dir_suffix
    fi
    ac_dir=$ac_dir$subbuilddirs_suffix
    # <<<<

    ac_msg="=== configuring $ac_srcdir in $ac_dir (`pwd`/$ac_dir)"
    _AS_ECHO_LOG([$ac_msg])
    _AS_ECHO([$ac_msg])
    AS_MKDIR_P(["$ac_dir"])
    # diff autoconf 2.61: status.m4 >>>>
    # moved: _AC_SRCDIRS(["$ac_dir"])
    # <<<<

    cd "$ac_dir"

    # Check for guested configure; otherwise get Cygnus style configure.
    if test -f "$ac_srcdir/configure.gnu"; then
      ac_sub_configure=$ac_srcdir/configure.gnu
    elif test -f "$ac_srcdir/configure"; then
      ac_sub_configure=$ac_srcdir/configure
    elif test -f "$ac_srcdir/configure.in"; then
      # This should be Cygnus configure.
      ac_sub_configure=$ac_aux_dir/configure
    else
      AC_MSG_WARN([no configuration information is in $ac_dir])
      ac_sub_configure=
    fi

    # The recursion is here.
    if test -n "$ac_sub_configure"; then
      # Make the cache file name correct relative to the subdirectory.
      case $cache_file in
      [[\\/]]* | ?:[[\\/]]* ) ac_sub_cache_file=$cache_file ;;
      *) # Relative name.
	ac_sub_cache_file=$ac_top_build_prefix$cache_file ;;
      esac

      AC_MSG_NOTICE([running $SHELL $ac_sub_configure $ac_sub_configure_args --cache-file=$ac_sub_cache_file --srcdir=$ac_srcdir])
      # The eval makes quoting arguments work.
      eval "\$SHELL \"\$ac_sub_configure\" $ac_sub_configure_args \
	   --cache-file=\"\$ac_sub_cache_file\" --srcdir=\"\$ac_srcdir\"" ||
	AC_MSG_ERROR([$ac_sub_configure failed for $ac_dir])
    fi

    cd "$ac_popdir"
  done
fi
])# _AC_OUTPUT_SUBDIRS


AC_DEFUN([AB_CONFIG_PKG_SUFFIX],
[
   AC_REQUIRE([AC_CONFIG_AUX_DIR_DEFAULT])
   dnl Save configuration flags
   ac_saved_args=$ac_configure_args
   dnl Add package specific flags
   ac_configure_args="$3 $ac_configure_args"
   dnl configure sub-package
   AB_OUTPUT_SUBDIRS_SUFFIX($1, $2)
   dnl Restore configuration flags
   ac_configure_args=$ac_saved_args
]
)
