# Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
#
# $Id: Makefile.am,v 1.2 2002/02/13 12:44:34 mdejonge Exp $

EXTRA_DIST = sdf-bracket.sdf sdf-bracket.sdf.af sdf-bracket.sdf.af.correct

sdf-bracket.sdf.af : sdf-bracket.sdf
	parse -l sdf -v 2.1 -I -i $< -o $@

sdf-bracket.sdf.af.correct : sdf-bracket.sdf.af
	../sdf-bracket -i $< -o $@

