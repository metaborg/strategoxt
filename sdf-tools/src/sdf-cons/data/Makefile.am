DEFS = \
  test1.sdf \
  test1-correct.sdf \
  sdf-cons-injections.sdf \
  sdf-cons-injections-correct.sdf

noinst_DATA = $(DEFS:.sdf=.sdf.af)
CLEANFILES  = $(noinst_DATA)
EXTRA_DIST  = $(DEFS)

%.sdf.af : %.sdf
	$(SDF_FRONT)/bin/parse-sdf-definition -i $< -o $@
