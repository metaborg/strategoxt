BASE = ..
include $(BASE)/Makefile.incl

MANIFEST := Makefile \
 rho.r rho-bindings.r rho-utils.r rho-laws.r uniques.c \
 rho-interpreter.r rho-compiler.r rho-typecheck.r \
 rho-preprocess rho-run rho-compile

all: ri ris rc rtc docs

docs: rho-laws.ltx rho-interpreter.ltx rho-bindings.ltx \
 rho-typecheck.ltx # rho-compiler.ltx

ri: rho-interpreter.r rho-laws.r rho-bindings.r rho.r uniques.o
	sc -i rho-interpreter.r --main rho-eval-lazy-io -o $@ -CL "uniques.o"

ris: rho-interpreter.r rho-laws.r rho-bindings.r rho.r uniques.o
	sc -i rho-interpreter.r --main rho-eval-strict-io -o $@ -CL "uniques.o"

rc: rho-compiler.r rho-laws.r rho-bindings.r rho.r uniques.o
	sc -i rho-compiler.r --main rho-compile -o $@ -CL "uniques.o"

rtc: rho-typecheck.r rho-laws.r rho-bindings.r rho.r uniques.o
	sc -i rho-typecheck.r --main rho-typecheck -o $@ -CL "uniques.o"

check: check1 check2

check1: peano-test 
	peano-test

check2: rho-bindings-test
	rho-bindings-test

peano-test: $(wildcard *.r)
	sc -i peano-test.r 

rho-bindings-test: $(wildcard *.r)
	sc -i rho-bindings-test.r

%.tbl: %.def
	sdf2table -i $< -o $@

clean: 
	$(RM) ri ris rc rtc rho-bindings-test peano-test ri.c ris.c rc.c rtc.c *.ltx
