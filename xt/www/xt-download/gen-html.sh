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

# $Id: gen-html.sh,v 1.4 2000/11/13 15:26:13 mdejonge Exp $

#
# This script generates on standard output an XT download page. It consists
# of a table of XT versions for different platforms. Both, the available
# versions and platforms are determined from the available XT* files.
# Their names should have the following format:
#
#   xt-<version>.<platform>.<pkg>,gz
#
#   <platform> is either 'src' or <os>_<arch>
#   <pkg> can be anything like 'tar', 'rpm', 'pkg'.
#

pkgname=xt

archs=`ls ${pkgname}*|sed 's/\./ /g;s/-/ /g;s/src/aaasrc/' | awk '{print $4}'| sort -u|sed 's/aaasrc/src/'`

# obtain versions and make sure that they are sorted correctly. This means
# that pkg-<version> should occur before pkg-<version>beta.
versions=`ls ${pkgname}* \
           | sed 's/\./ /g;s/-/ /g' \
           | awk '{print $2"."$3}' \
           | sed 's/[0-9]$/&xxx/'\
           | sort -ur \
           | sed 's/xxx$//'`


cat header.html

echo '<table border=0 cellspacing=1 cellpadding=5 bgcolor="#ffffff" width="100%">'
echo '<tr>'

for arch in Version ${archs} 
do
   echo "<td align=\"center\" bgcolor="#666699"><font color="#ffffff"><b>${arch}</b></font></td>"
done
echo '</tr>'

for version in ${versions}
do
   echo '<tr valign="top">'

   echo "<td><b>${version}</b></td>"
   for arch in ${archs}
   do
      pkgs="`echo ${pkgname}-${version}.*${arch}*`"
      echo '<td align="center">'

      if [ "a${pkgs}" != "a${pkgname}-${version}.*${arch}*" ]
      then
         for pkg in ${pkgs}
         do
            date=`ls -l ${pkg} | awk '{printf "%s %s, %s", $6, $7, $8}'`
            bytes=`ls -l ${pkg} | awk '{printf "%s", $5}'`
            typeof=`echo ${pkg} | sed "s/${pkgname}-${version}.${arch}.//"| sed 's/\..*//'` 
            printf "<a href=\"${pkg}\">${typeof} package</a>&nbsp;"
            printf "<img src=\"info.gif\" "
            printf "alt=\"Platform: ${arch}, Version: ${version}, Creation time: ${date}, Size: ${bytes} bytes\"><br>"
         done
      else
         echo "&nbsp;"
      fi
      echo '</td>'
   done
   echo '</tr>'
   echo '</tr>'
done

cat footer.html
