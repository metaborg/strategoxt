PARSE=XTC_REPOSITORY="$(BUILD_REPOSITORY)" $(XTC)/bin/xtc call parse-stratego
PP=XTC_REPOSITORY="$(BUILD_REPOSITORY)" $(XTC)/bin/xtc call pp-stratego
FILES=$(wildcard *.str)

EXTRA_DIST = $(FILES)

check : $(FILES:.str=.ppdiff)

%.ppdiff : %.rtree %.pprtree
	diff $*.rtree $*.pprtree

%.pprtree : %.rtree
	$(PP) --abstract -i $< | $(PARSE) | pp-aterm -o $@ || echo "failed" > $@

%.rtree : %.str
	$(PARSE) -i $< | pp-aterm -o $@
