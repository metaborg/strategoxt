AC_DEFUN(USE_XML_TOOLS, [

AC_ARG_WITH(xml-tools,
  AC_HELP_STRING([--with-xml-tools=DIR], [use xml-tools at DIR @<:@PREFIX@:>@]),
  XML_TOOLS="$withval",
  XML_TOOLS="$prefix"
)

AC_SUBST(XML_TOOLS)

])
