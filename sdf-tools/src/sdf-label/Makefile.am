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

# $Id: Makefile.am,v 1.4 2001/11/22 08:16:01 mdejonge Exp $

include $(srcdir)/../templates/make_rules
include $(srcdir)/../templates/make_rules.stratego

include $(STRATEGO_PRG:%=%.dep)

SUBDIRS      = data

STRATEGO_PRG = sdf-label sdf-rmlabel

bin_SCRIPTS	= $(STRATEGO_PRG)
libexec_SCRIPTS	= $(STRATEGO_PRG)

TESTS        = sdf_rmlabel_check sdf_label_check

CLEANFILES  += sdf_rmlabel_check sdf_label_check

SCFLAGS     += -I $(ASFIX_TOOLS)/share/asfix-tools \
               -I $(srcdir)/../lib --main $@

sdf_label_check_prog    = sdf-label
sdf_label_check_input   = data/add-label.sdf.af
sdf_label_check_output  = data/add-label.sdf.af.out
sdf_label_check_correct = data/add-label.sdf.af.correct

sdf_rmlabel_check_prog    = sdf-rmlabel
sdf_rmlabel_check_input   = data/rm-label.asfix
sdf_rmlabel_check_output  = data/rm-label.asfix.out
sdf_rmlabel_check_correct = data/rm-label.asfix.correct

% : %.sh.src Makefile
	@sed 's@__BINDIR__@$(bindir)@g;\
             s@__DATADIR__@$(pkgdatadir)@g'\
           < $< > $@
	chmod 755 $@
