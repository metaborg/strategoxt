AM_CPPFLAGS = -I. -I$(ATERM)/include
lib_LTLIBRARIES = libjustsglr.la

libjustsglr_la_SOURCES = $(LIB_SOURCES)
libjustsglr_la_LIBADD  = $(ATERM_LIBS)
libjustsglr_la_CFLAGS  = -Wall
libjustsglr_la_LDFLAGS = -avoid-version -no-undefined

LIB_SOURCES = $(libErrorAPI) $(libmept) $(libsglr)

noinst_HEADERS = \
  Location.h \
  Location_dict.h \
  ParsedLocation.h \
  ParsedLocation_dict.h \
  Error.h \
  Error_dict.h \
  ParsedError.h \
  ParsedError_dict.h \
  Error-utils.h \
  MEPT.h \
  MEPT-utils.h \
  MEPT_dict.h \
  forest.h mem-alloc.h parser.h \
  rsrc-usage.h sglr-strings.h sglr.h stack.h \
  bitmap.h ambi-tables.h marking.h posmap.h \
  sglr.h \
  parse-table.h

libErrorAPI = \
  Error.c \
  Error_dict.c \
  ParsedError.c \
  ParsedError_dict.c \
  init.c \
  display.c \
  lift.c \
  lower.c

libmept = \
  MEPT.c \
  MEPT_dict.c \
  MEPT-utils.c  \
  flattenPT.c \
  implodePT.c \
  yieldPT.c \
  yieldProd.c \
  posInfo.c \
  reportAmbs.c \
  apply.c \
  symbol-renaming.c \
  ordering.c

libsglr = \
  sglr-interface.c forest.c parse-table.c parser.c \
  stack.c rsrc-usage.c stack-collect.c bitmap.c \
  ambi-tables.c marking.c posmap.c
