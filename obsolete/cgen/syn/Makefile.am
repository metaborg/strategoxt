EXTRA_DIST = $(wildcard *.sdf) $(wildcard *.def)

pkgdata_DATA = $(wildcard *.sdf) $(wildcard *.def)

c.tbl : c.def
	sdf2table -i c.def -o c.tbl

