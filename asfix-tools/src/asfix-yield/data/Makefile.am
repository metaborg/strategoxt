# GT -- Grammar Tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
# $Id: Makefile.am,v 1.2 2001/06/07 14:45:58 mdejonge Exp $

EXTRA_DIST = tiny.sil tiny.tree
check_DATA = aterms.tree aterms.def
CLEANFILES = aterms.tree aterms.def

aterms.tree : aterms.def
	$(SGLR)/bin/sglr -2 -t -p $(SDF_FRONT)/share/sdf/sdf-front/Sdf2.tbl -i $< -o $@

aterms.def : $(ATERM_FRONT)/share/sdf/aterm-front/ATerms.def
	cp $< $@
