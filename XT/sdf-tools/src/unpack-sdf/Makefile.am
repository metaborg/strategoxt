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

# $Id: Makefile.am,v 1.1.1.1 2001/05/31 14:20:52 mdejonge Exp $

include ${srcdir}/../templates/make_rules

# define any subdir here
SUBDIRS      = data

EXTRA_DIST = unpack.src unpack-sdf.src

bin_SCRIPTS = unpack unpack-sdf

CLEANFILES = $(bin_SCRIPTS)

% : %.src
	sed 's@__PERL__@$(PERL)@g' < $< > $@ && \
	chmod +x $@


