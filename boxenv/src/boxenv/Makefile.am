#
#    boxenv -- A LaTeX Style File For Formatting Box Expressions
#    Copyright (C) 1998-2000  Merijn de Jonge (Merijn.de.Jonge@cwi.nl). 
#

include $(top_srcdir)/Makefile.xt

pkgdata_DATA   = boxenv.sty

SRCS           = boxenv.ins boxenv.doc
EXTRA_DIST     = $(SRCS) boxenv.sty
CLEANFILES     = boxenv.log
BOOTCLEANFILES = boxenv.sty

boxenv.sty: $(SRCS)
	TEXINPUTS=$$TEXINPUTS:$(srcdir) $(latex) boxenv.ins > /dev/null

