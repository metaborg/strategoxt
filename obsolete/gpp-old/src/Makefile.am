# Copyright (C) 2000 Author's name <em@il>
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

# $Id: Makefile.am,v 1.2 2002/05/14 15:14:26 mdejonge Exp $

SUBDIRS = @TOOLS@

DIST_SUBDIRS = templates @RELEASED@

bootinstall :
	list='$(SUBDIRS)'; for subdir in $$list;\
	do \
	( cd $$subdir && $(MAKE) bootinstall ) ;\
	done
