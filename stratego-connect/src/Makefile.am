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

include $(srcdir)/make_rules.in

includedir = $(prefix)/include/ssl

CFLAGS	 	= -Wall 
DEBUGFLAGS	= -g
OPTFLAGS	= -O2
INCLUDES 	= -I$(STRATEGORTS)/include -I$(ATERM)/include -I$(SSL)/include

EXTRA_DIST = make_rules.in

# TARGETS

lib_LIBRARIES = \
	libstratego-connect.a libstratego-connect.dbg.a \
	libstratego-connect.opt.a libstratego-connect.prof.a

include_HEADERS = connect.h

libstratego_connect_a_SOURCES = connect.h connect.c

libstratego_connect_dbg_a_SOURCES = 
libstratego_connect_opt_a_SOURCES = 
libstratego_connect_prof_a_SOURCES = 

libstratego_connect_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_connect_a_OBJECTS))
libstratego_connect_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_connect_a_OBJECTS))
libstratego_connect_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_connect_a_OBJECTS))

