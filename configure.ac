AC_INIT([sdf2-bundle],[2.1],[sdf@cs.uu.nl])
AM_INIT_AUTOMAKE

# set the prefix immediately to the default prefix
test "x$prefix" = xNONE && prefix=$ac_default_prefix

AC_ARG_WITH(aterm, 
  AC_HELP_STRING([--with-aterm=DIR], [use ATerm Library at DIR @<:@PREFIX@:>@]),
  ATERM=$withval, 
  ATERM="$prefix"
)
AC_SUBST(ATERM)

PKGS="asf-library toolbuslib error-support pt-support asf-support asc-support sdf-support sglr pgen"
AC_SUBST(PKGS)

top_builddir=`pwd`
LOCAL_INSTALL=${top_builddir}/local-install
AC_MSG_NOTICE([local install dir: ${LOCAL_INSTALL}])

BUILD_ERR_SUPPORT=${LOCAL_INSTALL}/error-support${prefix}
BUILD_TB_LIB=${LOCAL_INSTALL}/toolbuslib${prefix}
BUILD_PT_SUPPORT=${LOCAL_INSTALL}/pt-support${prefix}
BUILD_ASC_SUPPORT=${LOCAL_INSTALL}/asc-support${prefix}
BUILD_ASF_SUPPORT=${LOCAL_INSTALL}/asf-support${prefix}
BUILD_SDF_SUPPORT=${LOCAL_INSTALL}/sdf-support${prefix}
BUILD_SGLR=${LOCAL_INSTALL}/sglr${prefix}

AC_SUBST(LOCAL_INSTALL)
AC_SUBST(BUILD_ERR_SUPPORT)
AC_SUBST(BUILD_TB_LIB)
AC_SUBST(BUILD_PT_SUPPORT)
AC_SUBST(BUILD_ASC_SUPPORT)
AC_SUBST(BUILD_ASF_SUPPORT)
AC_SUBST(BUILD_SDF_SUPPORT)
AC_SUBST(BUILD_SGLR)

DETECT_SVN_REVISION

AC_CONFIG_FILES([
  Makefile
  sdf2-bundle.spec
])
AC_OUTPUT

AB_CONFIG_PKG(asf-library,
)
AB_CONFIG_PKG(toolbuslib,
   --with-aterm=${ATERM}
)
AB_CONFIG_PKG(error-support,
   --with-aterm=${ATERM}
   --with-toolbuslib=${BUILD_TB_LIB}
   --with-error-support=${BUILD_ERR_SUPPORT}
)
AB_CONFIG_PKG(pt-support,
   --with-aterm=${ATERM}
   --with-toolbuslib=${BUILD_TB_LIB}
   --with-error-support=${BUILD_ERR_SUPPORT}
)
AB_CONFIG_PKG(asf-support,
   --with-aterm=${ATERM}
   --with-pt-support=${BUILD_PT_SUPPORT}
   --with-error-support=${BUILD_ERR_SUPPORT}
)
AB_CONFIG_PKG(asc-support,
   CFLAGS=${CFLAGS}
   --with-aterm=${ATERM}
   --with-toolbuslib=${BUILD_TB_LIB}
   --with-pt-support=${BUILD_PT_SUPPORT}
   --with-asf-support=${BUILD_ASF_SUPPORT}
   --with-error-support=${BUILD_ERR_SUPPORT}
   --with-sglr=${BUILD_SGLR}
)
AB_CONFIG_PKG(sdf-support,
   --with-aterm=${ATERM}
   --with-toolbuslib=${BUILD_TB_LIB}
   --with-pt-support=${BUILD_PT_SUPPORT}
   --with-error-support=${BUILD_ERR_SUPPORT}
   --with-bundled-packages='${PKGS}'
)
AB_CONFIG_PKG(sglr,
   --with-pt-support=${BUILD_PT_SUPPORT}
   --with-aterm=${ATERM}
   --with-toolbuslib=${BUILD_TB_LIB}
   --with-error-support=${BUILD_ERR_SUPPORT}
   --with-bundled-packages='${PKGS}'
)
AB_CONFIG_PKG(pgen,
   --with-asc-support=${BUILD_ASC_SUPPORT}
   --with-asf-support=${BUILD_ASF_SUPPORT}
   --with-sdf-support=${BUILD_SDF_SUPPORT}
   --with-pt-support=${BUILD_PT_SUPPORT}
   --with-sglr=${BUILD_SGLR}
   --with-aterm=${ATERM}
   --with-toolbuslib=${BUILD_TB_LIB}
   --with-error-support=${BUILD_ERR_SUPPORT}
   --with-bundled-packages='${PKGS}'
)
