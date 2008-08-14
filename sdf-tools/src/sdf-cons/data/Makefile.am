DEFS = \
  test1.sdf \
  test1-correct.sdf \
  sdf-cons-injections.sdf \
  sdf-cons-injections-correct.sdf

check_DATA = $(DEFS:.sdf=.sdf.af)
CLEANFILES  = $(check_DATA)
EXTRA_DIST  = $(DEFS)

PARSE_SDF_DEFINITION=env XTC_REPOSITORY="$(BUILD_REPOSITORY)" $(top_builddir)/../sdf-front/xtc/parse-sdf-definition

%.sdf.af : %.sdf
	$(PARSE_SDF_DEFINITION) -i $< -o $@
