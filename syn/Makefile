BASE = ..
include $(BASE)/Makefile.incl

MANIFEST := Makefile rho.def rho-cleanup.r

all: rho.def.tbl rho-cleanup

rho.def.tbl: rho.def
	sdf2table -i rho.def

rho-cleanup: rho-cleanup.r
	sc -I ../utrecht -i rho-cleanup.r --main rho-cleanup -o rho-cleanup

clean: 
	rm -f rho.def.tbl
	rm -f rho-cleanup rho-cleanup.c
