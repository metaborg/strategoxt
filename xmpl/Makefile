BASE = ..
include $(BASE)/Makefile.incl

XMPL = let.rho letlet.rho lazy.rho repeat.rho peano0.rho peano.rho \
 map.rho generic.rho math.rho update.rho views.rho fix.rho \
 tuples.rho hello.rho aterm.rho cut.rho list.rho eq.rho \
 collect.rho congruences.rho inliner.rho # force.rho 

MANIFEST := Makefile \
 $(XMPL) expr.rh rhosyntax.rh $(XMPL:.rho=.exp) \
 dummy bigterm test.trm inlinertest.rho

%.c: %.rho
	../utrecht/rho-compile $<

%.o: %.c
	$(CC) -c -o $@ $< -I ../lib

%.exe: %.o ../lib/librho.a
	$(CC) -o $@ $< -L ../lib -lrho -lATerm

%.out: %.exe
	((./$<; echo; echo) > $@) || rm $@

%.diff: %.out
	@diff -c $(subst .out,.exp,$<) $< > $@ || \
         (echo $(basename $@): FAILED; rm -f $@)

%.asfix: %.rho ../syn/rho.def.tbl
	sglr -p ../syn/rho.def.tbl -s Term -i $< -o $@ -t

%.trm: %.asfix
	implode-asfix -i $< -o $@

%.nf: %.trm ../utrecht/ri
	../utrecht/ri -i $< -o $@

# Pretty-printing

%.txt: %.trm
	../pp/rho-show < $< > $@

%.nf.txt: %.nf
	../pp/rho-show < $< > $@

default: all

all: inliner.ltx

clean:
	$(RM) *.nf *.txt *.out *.diff *.exe *.c
	$(RM) inlinertest.trm inliner.ltx

test: inlinertest.trm checkoutput

checkoutput: $(XMPL:.rho=.diff)

inlinertest.trm: inlinertest.rho
	../utrecht/rho-preprocess < $< \
	| sglr -p ../syn/rho.def.tbl -s Program | implode-asfix \
	| ../syn/rho-cleanup > $@
