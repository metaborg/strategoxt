EXTRA_DIST = $(wildcard *.r) $(wildcard *.trm) $(wildcard *.expected)

check : check3
#check2 
#check1 check2 check3

check1 : ../frontend ../extract-all
	pack-stratego -i module1 -o module1.tree
	../frontend -i module1.tree -o module1.fr
	../extract-all -i module1.fr -o module1.ea

check2: 
	$(SC) -i module1 -F

check3 : ../frontend ../extract
	$(top_builddir)/spec/syn/pack-stratego \
		-I $(SSL)/share/ssl -i dynrules -o dynrules.tree
	../frontend -i dynrules.tree -o dynrules.fr
	../extract -i dynrules.fr -o dynrules.e
#	diff dynrules.e dynrules.e.expected

../frontend:
	cd ..; $(MAKE) frontend

../extract-all:
	cd ..; $(MAKE) extract-all

../extract:
	cd ..; $(MAKE) extract
