# Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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

SUBDIRS = src

EXTRA_DIST = reconf mprotect.m4 Makefile.rpm

RPMRELEASE=1

CONFIGURE = ./configure --prefix=/usr \
		--with-aterm=$(ATERM) \
		--with-srts=$(STRATEGORTS) \
		--with-rpmdir=$(RPMDIR) \
		--with-rpmtmp=$(RPMTMP)

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
	s+__ATERM__+$(ATERM)+g;

CLEANFILES = 

#include Makefile.rpm
