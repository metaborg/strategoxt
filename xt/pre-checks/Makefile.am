# XT -- Program Transformation Tools
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

# $Id: Makefile.am,v 1.1 2000/07/24 15:38:41 mdejonge Exp $

# Author: Merijn de Jonge (mdejonge@cwi.nl)

# This Makefile defines several checks for make targets. It is intended to
# check that all required tools and libraries are available and to abort the
# build process if not.

# These checks are not performed during execution of configure because 
# not all make targets depend on the same tools/libraries. 

PRE_CHECKS=gnumake-check

all install install-strip check: $(PRE_CHECKS)

# Check whether $(MAKE) is GNU make
gnumake-check:
	@gnumake=`$(MAKE) -f /dev/null -v 2>&1 | grep GNU || true` ;\
	if [ "a$$gnumake" = "a" ] ;\
	then \
	   echo "Use GNU make to build Completa" >&2 ;\
	   exit 1;\
	fi
