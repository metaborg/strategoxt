include $(top_srcdir)/Internal.mk
# GT -- Grammar Tools
# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#                    Eelco Visser <visser@acm.org>
#                    Joost Visser <jvisser@cwi.nl>
# $Id: Makefile.am,v 1.2 2001/06/07 14:45:58 mdejonge Exp $

check_DATA    = aterms.tree aterms.def tiny.sil tiny.tree
XT_BUILD_DIST = aterms.tree aterms.def
EXTRA_DIST   += tiny.sil tiny.tree

aterms.tree : aterms.def
	$(SGLR)/bin/sglr -2 -t -p $(SDF_FRONT)/share/sdf/sdf-front/Sdf2.tbl -i $< -o $@

aterms.def : $(top_builddist)/../aterm-front/syn/ATerms.def
	$(LN_S) $< $@
