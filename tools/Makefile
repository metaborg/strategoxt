BASE = ..
include $(BASE)/Makefile.incl

MANIFEST := Makefile \
 clex.def rholex.def strategolex.def \
 latexify.r

all: clex.def.tbl strategolex.def.tbl rholex.def.tbl latexify

clex.def.tbl: clex.def
	sdf2table -i clex.def

strategolex.def.tbl: strategolex.def
	sdf2table -i strategolex.def

rholex.def.tbl: rholex.def
	sdf2table -i rholex.def

latexify: latexify.r
	sc -i latexify -I ../utrecht --main latexify -o $@

clean: 
	rm -f clex.def.tbl strategolex.def.tbl latexify *.c
