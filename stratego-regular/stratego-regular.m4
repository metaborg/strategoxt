AC_DEFUN(USE_STRATEGO_REGULAR, [

AC_ARG_WITH(stratego-regular, 
  AC_HELP_STRING([--with-stratego-regular=DIR], [use stratego-regular at DIR @<:@PREFIX@:>@]), 
  STRATEGO_REGULAR="$withval", 
  STRATEGO_REGULAR="$prefix"
)
AC_SUBST(STRATEGO_REGULAR)

])
