# Author: Eelco Visser <visser@cs.uu.nl>
#
# This autoconf macro file provides parameters for a package that is built
# with the XT bundle of program transformation tools.
# The macros are organized hierarchically such that packages that are included
# in a larger bundle do not need to be provided explicitly.

AC_DEFUN(USE_XT_PACKAGES,
[

############ XT ###########################################################

AC_ARG_WITH(xt, 
  [
  --with-xt=DIR                Use XT [[prefix]]]
, 
  XT="$withval", 
  XT="$prefix"
)
AC_SUBST(XT)

############ ATerm Library ################################################

AC_ARG_WITH(aterm, 
  [  --with-aterm=DIR            Use ATerm Library [[XT]]]
, 
  ATERM="$withval", 
  ATERM="$XT"
)
AC_SUBST(ATERM)

############ SDF ##########################################################

AC_ARG_WITH(sdf, 
  [  --with-sdf=DIR              Use SDF [[XT]]], 
  SDF="$withval", 
  SDF="$XT"
)
AC_SUBST(SDF)

AC_ARG_WITH(sglr, 
  [  --with-sglr=DIR             Use SGLR [[SDF]]], 
  SGLR="$withval", 
  SGLR="$SDF"
)
AC_SUBST(SGLR)

AC_ARG_WITH(pgen, 
  [  --with-pgen=DIR             Use PGEN [[SDF]]]
, 
  PGEN="$withval", 
  PGEN="$SDF"
)
AC_SUBST(PGEN)

############ StrategoXT ##################################################

AC_ARG_WITH(stratego-xt, 
  [  --with-stratego-xt=DIR      Use StrategoXT [[XT]]], 
   STRATEGOXT="$withval", 
   STRATEGOXT="$XT"
)
AC_SUBST(STRATEGOXT)

AC_ARG_WITH(srts, 
  [  --with-srts=DIR             Use Stratego Run-Time System [[STRATEGOXT]]]
, 
   SRTS="$withval", 
   SRTS="$STRATEGOXT"
)
AC_SUBST(SRTS)

AC_ARG_WITH(xtc, 
  [  --with-xtc=DIR              Use XTC (XT Composition) [[prefix]]], 
  XTC="$withval", 
  XTC="$STRATEGOXT"
)
AC_SUBST(XTC)

AC_ARG_WITH(repository, 
  [  --with-repository=DIR       XTC repository [[$pkgdatadir/XTC]]]
, 
  REPOSITORY="$withval", 
  REPOSITORY="$prefix/share/$PACKAGE/XTC"
)
AC_SUBST(REPOSITORY)

AC_ARG_WITH(sc, 
  [  --with-sc=DIR               Use Stratego Compiler [[STRATEGOXT]]], 
   SC="$withval", 
   SC="$STRATEGOXT"
)
AC_SUBST(SC)

AC_ARG_WITH(ssl, 
  [  --with-ssl=DIR              Use Stratego Standard Library [[STRATEGOXT]]], 
   SSL="$withval", 
   SSL="$STRATEGOXT"
)
AC_SUBST(SSL)

AC_ARG_WITH(gpp,
  [  --with-gpp=DIR              Use GPP [[STRATEGOXT]]],
  GPP="$withval",
  GPP="$STRATEGOXT"
)
AC_SUBST(GPP)

AC_ARG_WITH(cgen,
  [  --with-cgen=DIR             Use CGEN [[STRATEGOXT]]],
  CGEN="$withval",
  CGEN="$STRATEGOXT"
)
AC_SUBST(CGEN)

AC_ARG_WITH(stratego-front,
  [  --with-stratego-front=DIR   Use Stratego Front [[STRATEGOXT]]]
,
  STRATEGO_FRONT="$withval",
  STRATEGO_FRONT="$STRATEGOXT"
)
AC_SUBST(STRATEGO_FRONT)

AC_ARG_WITH(asfix-tools,
  [  --with-asfix-tools=DIR      Use AsFix Tools [[STRATEGOXT]]],
  ASFIX_TOOLS="$withval",
  ASFIX_TOOLS="$STRATEGOXT"
)
AC_SUBST(ASFIX_TOOLS)

AC_ARG_WITH(aterm-tools,
  [  --with-aterm-tools=DIR      Use Aterm Tools [[STRATEGOXT]]],
  ATERM_TOOLS="$withval",
  ATERM_TOOLS="$STRATEGOXT"
)
AC_SUBST(ATERM_TOOLS)

AC_ARG_WITH(graph-tools,
  [  --with-graph-tools=DIR      Use Graph Tools [[STRATEGOXT]]],
  GRAPH_TOOLS="$withval",
  GRAPH_TOOLS="$STRATEGOXT"
)
AC_SUBST(GRAPH_TOOLS)

AC_ARG_WITH(sdf-tools,
  [  --with-sdf-tools=DIR        Use SDF Tools [[STRATEGOXT]]],
  SDF_TOOLS="$withval",
  SDF_TOOLS="$STRATEGOXT"
)
AC_SUBST(SDF_TOOLS)

AC_ARG_WITH(stratego-tools,
  [  --with-stratego-tools=DIR   Use Stratego Tools [[STRATEGOXT]]],
  STRATEGO_TOOLS="$withval",
  STRATEGO_TOOLS="$STRATEGOXT"
)
AC_SUBST(STRATEGO_TOOLS)

AC_ARG_WITH(dot-tools,
  [  --with-dot-tools=DIR        Use dot tools [[STRATEGOXT]]],
  DOT_TOOLS="$withval",
  DOT_TOOLS="$STRATEGOXT"
)
AC_SUBST(DOT_TOOLS)

])
