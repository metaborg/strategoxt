DEFS = small.def
EXPECTED = small.def.sg.correct

check_DATA = $(DEFS:.def=.def.af)
CLEANFILES  = $(check_DATA)
EXTRA_DIST  = $(DEFS) $(EXPECTED)

%.def.af : %.def
	$(SDF_FRONT)/bin/parse-sdf-definition -i $< -o $@
