#                                                       -*- Autoconf -*-
# Author: Martin Bravenboer <martin@cs.uu.nl>

# ARG_WITH_JAR([aterm-java],[ATERM],[aterm.jar],[aterm-1.6.jar])
AC_DEFUN([XT_ARG_WITH_JAR],
[
  AC_ARG_WITH([$1],
    AC_HELP_STRING([--with-$1=DIR],
                   [use $1 at DIR @<:@prefix@:>@]),
    [$2_JAR=$withval],
    [$2_JAR=$$prefix]
  )

  AC_MSG_CHECKING([for $1])
  if test -f "$$2_JAR" ; then
    :;
  elif test -f "$$2_JAR/share/$4" ; then
    $2_JAR="$$2_JAR/share/$4"
  elif test -f "$$2_JAR/share/java/$4" ; then
    $2_JAR="$$2_JAR/share/java/$4"
  elif test -f "$(pwd)/external/$4" ; then
    $2_JAR="$(pwd)/external/$4"
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find $4.jar. Use --with-$1.])
  fi
  AC_MSG_RESULT([$$2_JAR])

  if test "$$2_JAR" = "$(pwd)/external/$4" ; then
    INSTALL_JARS="$INSTALL_JARS $4"
    $2_JAR_RUNTIME=$prefix/share/java/$4
  else
    $2_JAR_RUNTIME=$$2_JAR
    # for distribution purposes the jar must still be there
    if test -f "external/$4"; then
      :;
    else
      mkdir -p external
      cp $$2_JAR external
    fi
  fi
  
  AC_SUBST([$2_JAR])
  AC_SUBST([$2_JAR_RUNTIME])
  
  ALL_JARS="$ALL_JARS $4"  
])

# USE_JDK
# --------------
AC_DEFUN([XT_USE_JDK], [
  AC_REQUIRE([AC_PROG_CC])

  AC_ARG_WITH([jdk],
    AS_HELP_STRING([--jdk=DIR],
                   [use JDK 5.0 at DIR]),
    [JDK=$withval],
    [JDK="none"]
  )

  if test "$JDK" = "none"; then
    AC_PATH_PROG([JAVAC],[javac],[none])
    AC_PATH_PROG([JAVA],[java],[none])
    AC_PATH_PROG([JAR],[jar],[none])

    if test "$JAVAC" = "none"; then
      AC_MSG_ERROR([javac is required. Make sure it is on the path or specify a prefix --with-jdk])
    fi
    if test "$JAVA" = "none"; then
      AC_MSG_ERROR([java is required. Make sure it is on the path or specify a prefix --with-jdk])
    fi
    if test "$JAR" = "none"; then
      AC_MSG_ERROR([jar is required. Make sure it is on the path or specify a prefix --with-jdk])
    fi

    JDK="$(dirname $(dirname $JAVAC))"
  else
    JAVAC=$JDK/bin/javac$EXEEXT
    JAR=$JDK/bin/jar$EXEEXT
    JAVA=$JDK/bin/java$EXEEXT

    AC_MSG_CHECKING([for javac at $JAVAC])
    test -x "$JAVAC"
    if test $? -eq 0; then
      AC_MSG_RESULT([yes])
    else
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([cannot find javac. Please check the path you specified --with-jdk.])
    fi

    AC_MSG_CHECKING([for jar at $JAR])
    test -x "$JAR"
    if test $? -eq 0; then
      AC_MSG_RESULT([yes])
    else
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([cannot find jar. Please check the path you specified --with-jdk.])
    fi

    AC_MSG_CHECKING([for java at $JAVA])
    test -x "$JAVA"
    if test $? -eq 0; then
      AC_MSG_RESULT([yes])
    else
      AC_MSG_RESULT([no])
      AC_MSG_ERROR([cannot find java. Please check the path you specified --with-jdk.])
    fi
  fi

  AC_ARG_WITH([rtjar],
    AS_HELP_STRING([--rtjar=FILE],
                   [use rt.jar (Java runtime library) at FILE @<:@JDK/jre/lib/rt.jar@:>@]),
    [RTJAR=$withval],
    [RTJAR=$JDK/jre/lib/rt.jar]
  )

  AC_MSG_CHECKING([for rt.jar at $RTJAR])
  if test -f "$RTJAR"; then
    AC_MSG_RESULT([yes])
  else
    AC_MSG_RESULT([no])
    AC_MSG_ERROR([cannot find rt.jar. Please check the path you specified --with-jdk.])    
  fi

  AC_SUBST([JDK])
  AC_SUBST([RTJAR])
  AC_SUBST([JAVA])
  AC_SUBST([JAVAC])
  AC_SUBST([JAR])
])
