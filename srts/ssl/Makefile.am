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

includedir = $(prefix)/include/ssl

CFLAGS	 	= 
DEBUGFLAGS	= -g
OPTFLAGS	= -O2
PROFFLAGS	= -pg
INCLUDES 	= -I$(srcdir)/../src -I$(ATERM)/include

LDFLAGS		= -L$(top_builddir)/ssl \
		  -L$(top_builddir)/src \
		  -L$(ATERM)/lib 

LDADD		= -lstratego-lib.opt \
		  -lstratego.opt \
		  -lATerm-gcc \
		  -lm

# TARGETS

check_PROGRAMS 	= extract

lib_LIBRARIES = \
	libstratego-lib.a libstratego-lib.dbg.a \
	libstratego-lib.opt.a libstratego-lib.prof.a

include_HEADERS = \
	io.h stratego-lib.h tables.h ssl-time.h exec.h number.h \
	ssl-string.h term.h annotations.h dir.h cgi.h

libstratego_lib_a_SOURCES = \
	io.h stratego-lib.h tables.h ssl-time.h exec.h number.h \
	ssl-string.h term.h dir.h \
	io.c tables.c time.c exec.c number.c string.c term.c \
	annotations.c dir.c cgi.c

libstratego_lib_dbg_a_SOURCES = 
libstratego_lib_opt_a_SOURCES = 
libstratego_lib_prof_a_SOURCES = 

libstratego_lib_dbg_a_LIBADD = $(subst .o,.dbg.o,$(libstratego_lib_a_OBJECTS))
libstratego_lib_opt_a_LIBADD = $(subst .o,.opt.o,$(libstratego_lib_a_OBJECTS))
libstratego_lib_prof_a_LIBADD = $(subst .o,.prof.o,$(libstratego_lib_a_OBJECTS))

%.dbg.o: %.c
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.opt.o: %.c
	$(CC) $(OPTFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

%.prof.o: %.c
	$(CC) $(PROFFLAGS) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@
