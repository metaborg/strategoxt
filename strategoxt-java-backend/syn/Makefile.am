include $(top_srcdir)/Makefile.xt
include $(wildcard *.dep)

sdfdata_DATA 	= Stratego-Stratego-Java-15.tbl $(wildcard *.sdf) 

SDFINCLUDES     = -I ${STRATEGO_FRONT}/share/sdf/stratego-front -Idef ${JAVA_FRONT}/share/sdf/java-front/Stratego-Java-15.def  

CLEANFILES 	= $(wildcard *.tbl) $(TESTS)
BOOTCLEANFILES	= $(wildcard *.def) 

EXTRA_DIST 	= Stratego-Stratego-Java-15.tbl $(wildcard *.sdf)

SDF2RTG_FLAGS  = --main $*
PGEN_FLAGS	= -m $*


