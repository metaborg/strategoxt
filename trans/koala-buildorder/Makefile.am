# KoalaTools -- Tool suite for Koala component model
#
# Author: Merijn de Jonge (mdejonge@cs.uu.nl)
#
# $Id: bundlegen.str 5017 2004-01-27 11:53:48Z merijn $

include $(top_srcdir)/Makefile.xt
include $(top_srcdir)/make_rules.tests

include $(wildcard *.dep)

SUBDIRS = data

bin_PROGRAMS = koala-buildorder

SCFLAGS          = --main $*
STRINCLUDES      = -I $(top_srcdir)/syn \
                   -I $(top_srcdir)/trans/shared \
                   -I $(ASFIX_TOOLS)/share/asfix-tools \
                   -I $(SDF_TOOLS)/share/sdf-tools \
                   -I $(XTC)/share/xtc

EXTRA_DIST       = $(wildcard *.str)
CLEANFILES       = $(wildcard *.dep)
BOOTCLEANFILES   = $(wildcard *.c)

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
