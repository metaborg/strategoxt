
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

# $Id: Makefile.am,v 1.7 2002/11/15 00:06:02 stratego Exp $

# Always include general make rules
include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

# define any subdir here
SUBDIRS		= data

# Which Stratego programs to build
STRATEGO_PRG = sdf2sig

# What scipts to build
bin_SCRIPTS	= $(STRATEGO_PRG) sdf-to-sig
# Can't build sdf-to-sig glue script because it introduces a bootstrap
# problem with the stratego-front pacakge
# sdf-to-sig

EXTRA_DIST += sdf-to-sig.src

libexec_SCRIPTS	= $(STRATEGO_PRG)

# Optional tests to run
TESTS        = sdf2sig1_check sdf2sig2_check

# What should be cleaned
CLEANFILES  += sdf2sig1_check sdf2sig2_check


# Additional flags for the Stratego compiler
SCFLAGS     += -I ${srcdir}/../stratego \
               -I ${srcdir}/../sdf2stratego \
	       -I $(ASFIX_TOOLS)/share/asfix-tools \
	       --main $@

sdf2sig1_check_prog     = sdf2sig
sdf2sig1_check_input    = data/prop.sdf.af
sdf2sig1_check_output   = data/prop-sig.r.af
sdf2sig1_check_correct  = data/prop-sig.r.af.correct

sdf2sig2_check_prog     = sdf2sig
sdf2sig2_check_input    = data/regular.sdf.af
sdf2sig2_check_output   = data/regular-sig.r.af
sdf2sig2_check_correct  = data/regular-sig.r.af.correct

# Generate scripts
%: %.src Makefile
	sed 's#__prefix__#$(prefix)#g;\
             s#__datadir__#$(datadir)#g;\
             s#__pkgdatadir__#$(pkgdatadir)#g;\
             s#__VERSION__#$(VERSION)#g;\
             s#__PACKAGE__#$(PACKAGE)#g;\
             s#__STRATEGO_FRONT__#$(STRATEGO_FRONT)#g;\
             s#__GPP__#$(GPP)#g;\
             s#__GB__#$(GB)#g;\
             s#__SGLR__#$(SGLR)#g;\
             s#__ASFIX_TOOLS__#$(ASFIX_TOOLS)#g;\
             s#__SDF_TOOLS__#$(SDF_TOOLS)#g;\
             s#__MAKE__#$(MAKE)#g' < $< > $@
	chmod +x $@
