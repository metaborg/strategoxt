#! /bin/sh
#
# autobundle -- Make distributions by bundling separate software packages.
#
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
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

# $Id: collect.sh,v 1.20 2000/12/12 21:13:07 mdejonge Exp $


# This script will collect all required packages for an autobundle distribution.
#
# usage:
#   collect configure.in pkg-list
# where
#   pkg-list is a file containing a list of packages. 
#
# Each line in the file `pkg-list' should have the following structure:
#
#   <pkg-name>,<pkg-version>,<pkg location>
#
# pkg location is an url specifying the location of the package, e.g.:
#   cvs:/ufs/gipe/CVS   Specifies that the package should be build by first
#                       checking it out from the repository and then
#                       executing a "make dist" to build a distribution
#   http:/www.cw...     Obtain a complete distribution via http
# 
#
# The directory ./pkgs is created to store all software packages
#
# The script creates a file SOFTWARE which contains a list of package names,
# package versions, and package locations.



do_collect () {
   pkg="$1"
   pkg_version="$2"
   pkg_url="$3"


   case "${pkg_url}" in
      cvsdev* )
         echo "Building a developer installation for \"${pkg}\" from CVS.">&2
         cvsroot=`echo "${pkg_url}" | sed 's/cvsdev://g'`
         (
            mkdir -p ${tmp}
            cd ${tmp}
            cvs -d ${cvsroot} checkout ${pkg}
	    mv ${pkg} "${pkg}-${pkg_version}"
            tar cf "${pkg}-${pkg_version}.tar" "${pkg}-${pkg_version}"
	    gzip "${pkg}-${pkg_version}.tar"
         )

         cp "${tmp}/${pkg}-${pkg_version}.tar.gz" .

         rm -fr ${tmp}
         ;;
                  
      cvs* )
         echo "Building a distribution for \"${pkg}\" from CVS.">&2
         cvsroot=`echo ${pkg_url} | sed 's/cvs://g'`
         (
            mkdir -p ${tmp}
            cd ${tmp}
            cvs -d ${cvsroot} checkout ${pkg}
            cd ${pkg}
            ./reconf
            ./configure
            gmake dist
         )

         # Determine package version from configure.in in case it was
         # defined in the pkg-list file as '*'.
         if [ "a${pkg_version}" = "a*" ]; then
            pkg_version=`grep AM_INIT ${tmp}/${pkg}/configure.in \
                            | cut -d, -f2 | tr -d '[ ]' | sed 's/)$//'`
         fi

         cp ${tmp}/${pkg}/${pkg}-${pkg_version}.tar.gz .

         rm -fr ${tmp}
         ;;
                  
      http*)
         echo "Obtaining a distribution of \"${pkg}\" via HTTP." >&2
         wget -q ${pkg_url}/${pkg}-${pkg_version}.tar.gz 
         ;;
      * ) "echo unrecognized url: \"$pkg_url\"" >&2; exit 1 ;;
   esac
}

if [ $# -ne 2 ]; then
   echo "usage: $0 configure.in pkg-list" >&2
   exit 1
fi

configure=$1
pkg_file=$2

tmp=/tmp/autobundle-$$
trap "rm -f ${tmp}*" 0 1 2 3 4 5 6 7 8 9 10

pkgs="`grep -v '^#' ${pkg_file} | cut -d, -f1`"

tmp_pkg_file=${tmp}.pkgs
rm -f  ${tmp_pkg_file}

# collect and unpack software packages
if [ ! -d ./pkgs ]; then
   mkdir -p ./pkgs
fi

for pkg in ${pkgs}
do
   pkg_version=`tr -d '[\ \t]' < ${pkg_file} | grep \^${pkg}, | cut -d, -f2`
   pkg_url=`tr -d '[\ \t]' < ${pkg_file} | grep \^${pkg}, | cut -d, -f3-`

   case $pkg_url in 
      cvs* ) use_cvs=true;;
         * ) use_cvs=false;;
   esac

   if [ ${use_cvs} = "true" \
        -o ! -f "./pkgs/${pkg}-${pkg_version}.tar.gz" \
        -o ! -d "./${pkg}-${pkg_version}" ]; 
   then
      cd ./pkgs
      do_collect "${pkg}" "${pkg_version}" "${pkg_url}" || exit 1
      cd ..

      rm -fr "${pkg}-${pkg_version}"
      rm -fr "./${pkg}"
      gunzip -c "./pkgs/${pkg}-${pkg_version}.tar.gz" |  tar xf -
   fi

   rm -f "./${pkg}" 2>/dev/null
   ln -s "${pkg}-${pkg_version}" "${pkg}"

   echo "${pkg},${pkg_version},${pkg_url}" >> ${tmp_pkg_file}
done

# Get the name of the autobundle package
pkg_name="`grep AM_INIT ${configure} \
            | sed 's/AM_INIT_AUTOMAKE(//' \
            | cut -d, -f 1 \
            | tr [a-z] [A-Z]`"

# Generate text file describing all packages in an autobundle package 
pkg_version=`grep AM_INIT ${configure} | tr -d -c '.[0-9]'`

(
cat <<EOF

${pkg_name} version ${pkg_version} is a collection of the following packages:

EOF
 
for pkg in ${pkgs}
do
   pkg_version=`grep \^${pkg}, ${tmp_pkg_file} | cut -d, -f2`
   pkg_url=`grep \^${pkg}, ${tmp_pkg_file} | cut -d, -f3-`

   echo "   ${pkg}-${pkg_version} from ${pkg_url}"
done

echo
echo "${pkg_name} is bundled on `date '+%C`' with"
echo "autobundle (http://www.cwi.nl/~mdejonge/autobundle/)."

) > SOFTWARE


