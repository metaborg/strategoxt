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

include make_rules.in

OPTFLAGS	= -O2
INCLUDES 	= -I$(ATERM)/include -I$(srcdir)
LDFLAGS		= -L$(ATERM)/lib

lib_LIBRARIES 	= libstratego.a libstratego.dbg.a \
		  libstratego.opt.a libstratego.prof.a

include_HEADERS = \
	stratego.h aterm-extension.h debug.h

libstratego_a_SOURCES = \
	stratego.c aterm-extension.c debug.c mprotect.c\
	stratego.h aterm-extension.h debug.h mprotect.h

libstratego_dbg_a_SOURCES = 
libstratego_opt_a_SOURCES = 
libstratego_prof_a_SOURCES = 

libstratego_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_a_OBJECTS))
libstratego_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_a_OBJECTS))
libstratego_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_a_OBJECTS))

