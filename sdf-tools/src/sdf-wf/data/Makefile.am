DEFS = \
  test1.sdf \
  test2.sdf

EXPECTED = \
  test1.sdf.wf.ok \
  test2.sdf.wf.ok \
  test1.sdf.wf.short.ok

check_DATA = $(DEFS:.sdf=.sdf.af)
CLEANFILES  = $(check_DATA)
EXTRA_DIST  = $(DEFS) $(EXPECTED)

%.sdf.af : %.sdf
	$(SDF_FRONT)/bin/parse-sdf-definition -i $< -o $@
