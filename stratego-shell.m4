AC_DEFUN(USE_STRATEGO_SHELL, [

AC_ARG_WITH(stratego-shell, 
  AC_HELP_STRING([--with-stratego-shell=DIR], [use stratego-shell at DIR  @<:@PREFIX@:>@]), 
  STRATEGO_SHELL="$withval", 
  STRATEGO_SHELL="$prefix"
)
AC_SUBST(STRATEGO_SHELL)

])
