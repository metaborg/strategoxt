BASE = ..
include $(BASE)/Makefile.incl

MANIFEST := Makefile rho-pp.r rho-show

all: rho-pp

rho-pp: rho-pp.r
	sc -I ../utrecht -i rho-pp.r --main rho-pp -o rho-pp

clean: 
	rm -f rho-pp rho-pp.c

#include /home/visser/res/xt/share/stratego/Stratego.Make
