# XT -- Program Transformation tools
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
#
# $Id: Makefile.am,v 1.4 2000/03/29 10:20:33 mdejonge Exp $

DIST_SUBDIRS = dummy aterm asc-support sglr pgen stratego gb gt #gpp
EXTRA_DIST   = SOFTWARE

# We need at least one subdir to be defined such that automake will generate
# the code for traversing subdirectories
SUBDIRS=dummy


all install:
	PATH=$(prefix)/bin:$${PATH}; export PATH ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) install ) \
	done

check clean:
	PATH=$(prefix)/bin:$${PATH}; export PATH ;\
	for subdir in $(DIST_SUBDIRS); do \
	   ( cd $$subdir && $(MAKE) $@ ) \
	done
