# KoalaTools -- Tool suite for Koala component model
#
# Author: Merijn de Jonge (mdejonge@cs.uu.nl)
#
# $Id: bundlegen.str 5017 2004-01-27 11:53:48Z merijn $

include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/make_rules.tests

include $(wildcard *.dep)

SUBDIRS = data

bin_PROGRAMS = koala-trans

SCFLAGS          = --main $*
STRINCLUDES      = -I $(top_srcdir)/syn \
                   -I $(top_srcdir)/trans/shared

EXTRA_DIST       = $(wildcard *.str)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)

install-data-local::
	$(XTC)/bin/xtc register -r $(DESTDIR)$(REPOSITORY) -t implode-asfix -l $(ASFIX_TOOLS)/bin -V 3.8

# Copyright (C) 2002-2004 Merijn de Jonge <mdejonge@cs.uu.nl>
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
