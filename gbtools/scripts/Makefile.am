# GBTOOLS -- Grammar Base Tools package
# Copyright (C) 2002 Merijn de Jonge <mdejonge@cwi.nl>,
#                    Eelco Visser <visser@acm.org>,
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

# $Id: Makefile.am,v 1.1 2002/03/06 20:40:37 mdejonge Exp $

EXTRA_DIST      = getvalue.sh.src defhead.sh.src readhead.sh.src \
                  gbadd.sh.src mkmain.sh.src gbquery.sh.src

libexec_SCRIPTS = getvalue defhead readhead mkmain
bin_SCRIPTS     = gbadd gbquery

CLEANFILES      = getvalue defhead readhead gbadd mkmain gbquery

% : %.sh.src Makefile
	sed "s#__MAKE__#$(MAKE)#g;\
	     s#__GB__#$(GB)#g;\
	     s#__PREFIX__#$(prefix)#g" < $< >$@ && chmod +x $@
