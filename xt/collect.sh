#! /bin/sh

# XT -- Program Transformation tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
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

# $Id: collect.sh,v 1.10 2000/04/12 16:04:54 eelco Exp $


# This script will collect all required packages for the XT distribution.
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
   pkg=$1
   pkg_version=$2
   pkg_url=$3
   
   case ${pkg_url} in
      cvsdev* )
         echo "Building a developer installation for \"${pkg}\" from CVS.">&2
         cvsroot=`echo ${pkg_url} | sed 's/cvsdev://g'`
         (
            mkdir -p /tmp/xt-$$
            cd /tmp/xt-$$
            cvs -d ${cvsroot} checkout ${pkg}
            tar cf ${pkg}-${pkg_version}.tar ${pkg}
	    gzip ${pkg}-${pkg_version}.tar
         )
         cp /tmp/xt-$$/${pkg}-${pkg_version}.tar.gz .
         rm -fr /tmp/xt-$$/
         ;;
                  
      cvs* )
         echo "Building a distribution for \"${pkg}\" from CVS.">&2
         cvsroot=`echo ${pkg_url} | sed 's/cvs://g'`
         (
            mkdir -p /tmp/xt-$$
            cd /tmp/xt-$$
            cvs -d ${cvsroot} checkout ${pkg}
            cd ${pkg}
            ./reconf
            ./configure
            gmake dist
         )
         cp /tmp/xt-$$/${pkg}/${pkg}-${pkg_version}.tar.gz .
         rm -fr /tmp/xt-$$/
         ;;
                  
      http*)
         echo "Obtaining a distribution of \"${pkg}\" via HTTP." >&2
         lynx -dump ${pkg_url} > ${pkg}-${pkg_version}.tar.gz ;;
      * ) "echo unrecognized url: \"$pkg_url\"" >&2; exit 1 ;;
   esac
}

if [ $# -ne 2 ]; then
   echo "usage: $0 configure.in pkg-list" >&2
   exit 1
fi

configure=$1
pkg_file=$2
pkgs="`grep -v '^#' ${pkg_file} | cut -d, -f1`"

# collect and unpack software packages
if [ ! -d ./pkgs ]; then
   mkdir -p ./pkgs
fi

for pkg in ${pkgs}
do
   pkg_version=`grep \^${pkg}, ${pkg_file} | cut -d, -f2`
   pkg_url=`grep \^${pkg}, ${pkg_file} | cut -d, -f3-`

   if [ ! -f ./pkgs/${pkg}-${pkg_version}.tar.gz ]; then
      cd ./pkgs
      do_collect ${pkg} ${pkg_version} ${pkg_url} || exit 1
      cd ..
      rm -fr ${pkg}-${pkg_version}
      rm -fr ./${pkg}
      tar -zxf ./pkgs/${pkg}-${pkg_version}.tar.gz
      if [ ! -f ./${pkg} ]
      then
        ln -s ${pkg}-${pkg_version} ${pkg}
      fi
   fi

done

# Generate text file describing all packages in XT 
xt_version=`grep AM_INIT ${configure} | tr -d -c '.[0-9]'`

(
cat <<EOF
# XT -- Program Transformation tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
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

XT version ${xt_version} is a collection of the following packages:

EOF
 
for pkg in ${pkgs}
do
   pkg_version=`grep \^${pkg}, ${pkg_file} | cut -d, -f2`
   pkg_url=`grep \^${pkg}, ${pkg_file} | cut -d, -f3-`

   echo "   ${pkg}-${pkg_version} from ${pkg_url}"
done
) > SOFTWARE


