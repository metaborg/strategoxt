# Copyright (C) 2001 Merijn de Jonge <mdejonge@cwi.nl>
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

include package.conf
include $(top_srcdir)/Makefile.xt

SUBDIRS           = . trans analyse src tests
BOOTCLEAN_SUBDIRS = $(SUBDIRS)

EXTRA_DIST        = VERSION package.conf bootstrap $(PACKAGE)-$(VERSION).pkg \
                    Makefile.xt autoxt.m4

ACLOCAL_AMFLAGS = -I .

# Generation of a package defintion file from the package.conf file. This
# file in combination with autobundle enables integration of the package
# source tree with other software packages. See the online package base
# (www.program-transformation.org/package-base) for more information and
# available packages.
$(PACKAGE)-$(VERSION).pkg: package.conf
	@( \
	   echo "package" ;\
	   echo "identification" ;\
	   echo "  name=$(name)" ;\
	   echo "  version=$(version)" ;\
	   echo "  location=$(location)" ;\
	   echo "  info=$(info)" ;\
	   echo "  description='$(description)'" ;\
	   echo "  keywords=$(keywords)" ;\
	   echo "" ;\
     echo "configuration interface" ;\
     echo $(patsubst %",%\n", $(interface)) | sed 's/"//g;s/^ */  /g' ;\
     echo "requires" ;\
	   echo '$(requires)' \
	         | tr -s '[ \t]' ' ' \
	         | sed 's/^"/  /;s/" "/"  /g' \
	         | tr '"' '\n' ;\
       ) > $@
