lib_LTLIBRARIES = libjustsglr.la

libjustsglr_la_SOURCES = $(LIB_SOURCES)
libjustsglr_la_LIBADD  = $(ATERM_LIBS)
libjustsglr_la_CFLAGS  = 
libjustsglr_la_LDFLAGS = -avoid-version -no-undefined
libjustsglr_la_CPPFLAGS = -I. -I$(ATERM)/include -DDISABLE_DYNAMIC_CHECKING

LIB_SOURCES = $(libErrorAPI) $(libmept) $(libsglr)
noinst_HEADERS = $(libErrorAPIheaders) $(libmeptheaders) $(libsglrheaders)

libErrorAPI =\
  Error.c \
  Error_dict.c \
  Location.c \
  Location_dict.c \
  ParsedError.c \
  ParsedError_dict.c \
  init.c \
  display.c \
  lift.c \
  lower.c

libErrorAPIheaders = \
  Error.h  \
  Error_dict.h \
  Error-utils.h \
  Location.h \
  Location_dict.h \
  ParsedError.h \
  ParsedError_dict.h \
  ParsedLocation.h \
  ParsedLocation_dict.h

libmept = \
  MEPT.c \
  MEPT-ambtracker.c \
  MEPT-annotations.c \
  MEPT-apply.c \
  MEPT_dict.c \
  MEPT-flatten.c \
  MEPT-implode.c \
  MEPT-layout.c \
  MEPT-ordering.c \
  MEPT-posinfo.c \
  MEPT-productions.c \
  MEPT-renaming.c \
  MEPT-start.c \
  MEPT-symbols.c \
  MEPT-tree.c \
  MEPT-visitors.c \
  MEPT-yield.c \
  MEPT-yieldprod.c

libmeptheaders = \
  MEPT.h \
  MEPT-ambtracker.h \
  MEPT-annotations.h \
  MEPT-apply.h \
  MEPT_dict.h \
  MEPT-flatten.h \
  MEPT-implode.h \
  MEPT-layout.h \
  MEPT-ordering.h \
  MEPT-productions.h \
  MEPT-posinfo.h \
  MEPT-renaming.h \
  MEPT-start.h \
  MEPT-symbols.h \
  MEPT-tree.h \
  MEPT-utils.h \
  MEPT-visitors.h \
  MEPT-yield.h \
  MEPT-yieldprod.h

libsglr = \
  ambi-tables.c \
  bitmap.c \
  forest.c \
  levels.c \
  marking.c \
  parse-table.c parser.c \
  posmap.c \
  rsrc-usage.c \
  sglr-interface.c \
  stack.c \
  stack-collect.c

libsglrheaders = \
  ambi-tables.h \
  bitmap.h \
  forest.h \
  levels.h \
  marking.h \
  mem-alloc.h \
  parser.h \
  parse-table.h \
  posmap.h \
  rsrc-usage.h \
  sglr.h \
  sglr-strings.h \
  stack.h

bootclean:
