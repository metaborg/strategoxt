#! /bin/sh
#
# Autobundle -- Tool suite for automated source tree composition
#
# Copyright (C) 2002-2003 Merijn de Jonge <M.de.Jonge@tue.nl>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
# 02111-1307, USA.

# $Id$

# Author: Merijn de Jonge (M.de.Jonge@tue.nl)


# This script will collect all required packages for an autobundle
# distribution. 
#
# The ingredients of a bundle are defined in a package list file (default
# ./pkg-list). Each line in the file `pkg-list' should have the following
# structure:
#
#   <pkg-name>,<pkg-version>,<pkg location>
#
# pkg location is an url specifying the location of the package, e.g.:
#   cvs://cvs..:/CVS    Specifies that the package should be build by first
#                       checking it out from the repository and then
#                       executing a "make dist" to build a distribution
#   http://www.cw...    Obtain a complete distribution via http
#   ftp://ftp.cw...     Obtain a complete distribution via ftp
#   file:///home/x/...  Obtain a distribution from _local_ file system
#
# The collect script creates a file SOFTWARE which contains a list of
# package names, package versions, and package locations.

usage () {
cat <<ENDCAT >&2
This script will collect all required packages for an autobundle
distribution.

usage:
  collect [--force] [--configure <configure>] [--pkg-list <pkg-list>] [pkg ...]
  collect [-h] [--help]
where
  --configure <configure>    specifies Autoconf configure script to use
                             (default ./configure.ac)
  --pkg-list <pkg-list>      specifies package list file (default ./pkg-list)
  --force                    specifies that packages should always be
                             retrieved even they are already present
  --help|-h                  displays this help
  pkg                        specifies the names of packages that should
                             be retrieved (by default all packages from
                             <pkg-list> are retrieved

The collect script creates a file SOFTWARE which contains a list of package
names, package versions, and package locations that have been retrieved.
ENDCAT
}


# Unset variables to prevent conflicts with make.
unset MAKEFLAGS
unset MAKELEVEL


# default values
CONFIGURE=configure.ac  # Default configure script
PKG_LIST=pkg-list       # Default  package list file
FORCE=false             # Force package retrieval when package is already available
PKGS=                   # Empty package list

# Don't throw away any cvs checked out packages, but save them
# in the directoy ${_pkg}-cvs
save_cvs () {
   _pkg=$1
   if [ -d ./${_pkg}/CVS ]; then
      echo "A copy of the CVS checked out version of"\
           "${_pkg} is saved in ${_pkg}-cvs." >&2
      mv ${_pkg} ${_pkg}-cvs
   fi

}

do_collect () {
   pkg="$1"
   pkg_version="$2"
   pkg_url="$3"


   case "${pkg_url}" in
      cvs://* )
         echo "Obtaining \"${pkg}\" from CVS.">&2
         cvsroot=`echo ${pkg_url} | sed 's@cvs://@@g'`

         # Obtain sources using cvs checkout
         cvs -Q -d ${cvsroot} checkout ${pkg}

         # create configure script and Makefile.in's 
         (  cd ${pkg}; aclocal; autoheader; libtoolize; automake -a; autoconf ) \
            2>/dev/null 1>/dev/null

         # Determine package version from configure.ac or configure.in in
         # case it was defined in the pkg-list file as '*'.
         if [ "a${pkg_version}" = "a*" ]; then
            if [ -f ${pkg}/configure.ac ]; then
               CONFIG_FILE=${pkg}/configure.ac
            else
               CONFIG_FILE=${pkg}/configure.in
            fi
            pkg_version=`grep AC_INIT ${CONFNIG_FILE} \
                            | cut -d, -f2 | tr -d '[ ]' | sed 's/)$//'`
         fi
         
         # If we have already a saved CVS copy; rename it to
         # ${pkg}-${pkg_version} such that a cvs update command can be
         # performed.
         if [ -d ${pkg}-${pkg_version}-cvs -a -d ${pkg}-${pkg_version}-cvs/CVS ]; then
            rm -fr ./${pkg}-${pkg_version}
            mv ${pkg}-${pkg_version}-cvs ${pkg}-${pkg_version}
         fi
            
         # If we already have the package checked out, perform a cvs upd and
         # remove the version that we just checked out
         if [ -d ${pkg}-${pkg_version} -a -d ${pkg}-${pkg_version}/CVS ]; then
         (
            rm -fr ./${pkg}
            cd ${pkg}-${pkg_version}
            cvs upd -d
         )
         # otherwise, rename the checked out version to pkg-version
         else
            rm -fr ${pkg}-${pkg_version}
            mv ${pkg} ${pkg}-${pkg_version}
         fi
         ;;

      file://* | http://* | ftp://* )
         # Save cvs checked out versions
         save_cvs ${pkg}-${pkg_version}
         
         protocol="`echo ${pkg_url} | cut -d: -f 1 | tr [:lower:] [:upper:]`"


         # Skip if we already have the package and the --force switch was not used
         if [ -d ${pkg}-${pkg_version} -a "a${FORCE}" = "afalse" ]; then
            return
         fi

         # clean up old and unpacked software package
         if [ -d "${pkg}-${pkg_version}" ]; then
            rm -fr "${pkg}-${pkg_version}"
         fi

         (
            echo -n "Obtaining a distribution of \"${pkg}\" via ${protocol}." >&2
            curl -L -f -s ${pkg_url}/${pkg}-${pkg_version}.tar.gz -o ${tmp}.tar.gz || exit 1
            (gunzip  -c ${tmp}.tar.gz  | tar xf - ) 2>/dev/null || exit 1
         ) || eval 'echo " failed."; exit 1'
         echo " done." >&2
         ;;
      * ) "echo unrecognized url: \"$pkg_url\"" >&2; exit 1 ;;
   esac
   
   # check whether obtaining and unpacking source distributions succeeded
   if [ ! -d ${pkg}-${pkg_version} ]; then
      echo "Obtaining and/or unpacking of \"${pkg}-${pkg_version}\" failed." >&2;
      exit 1
   fi
   
}

for arg in $*
do
case $arg in
   --configure ) CONFIGURE=$2; shift; shift ;;
   --pkg-list )  PKG_LIST=$2; shift; shift ;;
   --force )     FORCE=true ; shift ;;
   -h | --help ) usage; exit 0 ;;
   -* | --* )    usage; exit 1;;
   * )           PKGS="${PKGS} $1"; shift ;;
esac
done

tmp=/tmp/autobundle-$$
trap "rm -f ${tmp}*" 0 1 2 3 4 5 6 7 8 9 10

ALL_PKGS="`grep -v '^#' ${PKG_LIST} | cut -d, -f1`"

if [ "a${PKGS}" = "a" ]; then
   PKGS="${ALL_PKGS}"
fi
   
tmp_PKG_LIST=${tmp}.pkgs
rm -f  ${tmp_PKG_LIST}

for pkg in ${PKGS}
do
   pkg_version=`tr -d '\ \t' < ${PKG_LIST} | grep \^${pkg}, | cut -d, -f2`
   pkg_url=`tr -d '\ \t' < ${PKG_LIST} | grep \^${pkg}, | cut -d, -f3-`
   # trip trailing backslash from pkg_url
   pkg_url="`echo ${pkg_url} | sed 's|/$||'`"

   # remove old link to pkg-version
   rm -f "./${pkg}" 2>/dev/null

   # Obtain sources of software package
   do_collect "${pkg}" "${pkg_version}" "${pkg_url}" || exit 1
 
   # Create link <pkg> to <pkg>-<version>
   ln -s "${pkg}-${pkg_version}" "${pkg}"

   echo "${pkg},${pkg_version},${pkg_url}" >> ${tmp_PKG_LIST}
done

# Get the name of the autobundle package
pkg_name="`grep AC_INIT ${CONFIGURE} \
            | sed 's/AC_INIT(//' \
            | cut -d, -f 1 \
            | tr '[a-z]' '[A-Z]'`"

# Generate text file describing all packages in an autobundle package 
pkg_version=`grep AC_INIT ${CONFIGURE} \
             | cut -d, -f2 | tr -d '[ ]' | sed 's/)$//'`

(
cat <<EOF

${pkg_name} version ${pkg_version} is a collection of the following packages:

EOF
 
for pkg in ${ALL_PKGS}
do
   pkg_version=`grep \^${pkg}, ${tmp_PKG_LIST} | cut -d, -f2`
   pkg_url=`grep \^${pkg}, ${tmp_PKG_LIST} | cut -d, -f3-`

   echo "   ${pkg}-${pkg_version} from ${pkg_url}"
done

echo
echo "${pkg_name} is bundled on `date '+%c'` with"
echo "autobundle (http://www.cwi.nl/~mdejonge/autobundle/)."

) > SOFTWARE
