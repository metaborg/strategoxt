include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

TBLS_DEFS = Sdf2.def Sdf2.tbl

# SDF_MODULES = \
#   Main.sdf \
#  language/aterm/syntax/RealCon.sdf \
#  language/sdf2/syntax/Aliases.sdf \
#  language/sdf2/syntax/CC.sdf \
#  language/sdf2/syntax/Labels.sdf \
#  language/sdf2/syntax/Renaming.sdf \
#  language/sdf2/syntax/Restrictions.sdf \
#  language/sdf2/syntax/Sdf2.sdf

sdfdata_DATA   = $(TBLS_DEFS)
EXTRA_DIST     = $(sdfdata_DATA)
BOOTCLEANFILES = Sdf2.tbl

