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

SCFLAGS = -I ../match

libexec_PROGRAMS = \
  Stratego-Normal-Format Stratego-Canonical-Format Stratego-Optimized-Format 

CLEANFILES = *.dep

BOOTCLEANFILES = \
	Stratego-Normal-Format.c \
	Stratego-Canonical-Format.c \
	Stratego-Optimized-Format.c

EXTRA_DIST = $(wildcard *.str)

BOOTSOURCES = \
	Stratego-Normal-Format.c \
	Stratego-Canonical-Format.c \
	Stratego-Optimized-Format.c

include $(srcdir)/../Makefile.stratego
include $(wildcard *.dep)
