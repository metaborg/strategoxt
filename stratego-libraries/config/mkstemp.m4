#serial 12

# Copyright (C) 2001, 2003, 2004, 2005 Free Software Foundation, Inc.
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# On some hosts (e.g., HP-UX 10.20, SunOS 4.1.4, Solaris 2.5.1), mkstemp has a
# silly limit that it can create no more than 26 files from a given template.
# Other systems lack mkstemp altogether.
# On OSF1/Tru64 V4.0F, the system-provided mkstemp function can create
# only 32 files per process.
# On systems like the above, arrange to use the replacement function.

AC_DEFUN([XT_CHECK_MKSTEMP],
[dnl
  AC_CACHE_CHECK([for mkstemp limitations],
    gl_cv_func_mkstemp_limitations,
    [
      mkdir conftest.mkstemp
      AC_TRY_RUN([
#         include <stdlib.h>
#         include <unistd.h>
	  int main ()
	  {
	    int i;
	    for (i = 0; i < 70; i++)
            {
              char template[] = "conftest.mkstemp/coXXXXXX";
              int fd = mkstemp (template);
              if (fd == -1)
                exit (1);
              close (fd);
            }

            exit (0);
          }
	  ],
        gl_cv_func_mkstemp_limitations=no,
	gl_cv_func_mkstemp_limitations=yes,
	gl_cv_func_mkstemp_limitations=yes
        )
      rm -rf conftest.mkstemp
    ]
  )

  if test $gl_cv_func_mkstemp_limitations = yes; then
    AC_DEFINE([HAVE_MKSTEMP_LIMIT], [1], [Is mkstemp limited on this system])
  fi
])
