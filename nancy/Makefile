
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
	rm -f rho-bindings-test peano-test 