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

# $Id: Makefile.am,v 1.5 2002/11/15 00:06:01 stratego Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules

# define any subdir here
SUBDIRS      = data

# What scipts to build
bin_SCRIPTS  = tohtml-sdf sdf2text

# Tests to run
# TESTS        = program-check

# List all extra files that should be distributed here
EXTRA_DIST   = tohtml-sdf.sh.src sdf2text.sh.src

# What extra files should be cleaned
CLEANFILES   = tohtml-sdf

% : %.sh.src Makefile
	sed 's@__PREFIX__@$(prefix)@g;\
	     s@__GPP__@$(GPP)@g;\
	     s@__SGLR__@$(SGLR)@g;\
	     s@__VERSION__@$(VERSION)@g'\
	   < $< > $@ && \
	   chmod 755 $@
