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

include $(srcdir)/../templates/make_rules
include $(top_srcdir)/Makefile.xt


# define any subdir here
SUBDIRS      = data

# What scipts to build
bin_SCRIPTS  = gbquery

# Tests to run
# TESTS        = program-check

# List all extra files that should be distributed here
EXTRA_DIST   = gbquery.sh.src

# What extra files should be cleaned
CLEANFILES   = gbquery

% : %.sh.src Makefile
	sed 's@__GB__@$(GB)@g;\
	     s@__MAKE__@$(MAKE)@g'\
	     < $< > $@ && chmod +x $@


