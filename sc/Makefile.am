# Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
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

include $(top_srcdir)/Makefile.xt

BOOTCLEAN_SUBDIRS = $(SUBDIRS)

SUBDIRS           = spec

EXTRA_DIST = README.in $(wilcard *.pkg) stdconfig reconf sc.spec Makefile.rpm \
	     Makefile.xt

RPMRELEASE = 1


CONFIGURE = ./configure \
		--prefix=/usr \
		--with-aterm=$(ATERM) \
		--with-cgen=$(CGEN) \
		--with-gpp=$(GPP) \
		--with-ssl=$(STRATEGOLIB) \
		--with-srts=$(STRATEGORTS) \
		--with-boot=$(STRATEGOBOOT) \
		--with-sc-boot=$(SCBOOT) \
		--with-rpmdir=$(RPMDIR) 

SUBST = s+__SRTS_VERSION__+$(VERSION)+g;\
        s+__ATERM_VERSION__+1.6.7+g;\
        s+__GPP_VERSION__+2.3+g;\
	s+__ATERM__+$(ATERM)+g;

CLEANFILES = 

#include Makefile.rpm
