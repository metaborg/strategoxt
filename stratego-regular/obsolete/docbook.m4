AC_DEFUN(USE_DOCBOOK, [

# DocBook XML

  AC_ARG_WITH(docbook-xml, 
    AC_HELP_STRING([--with-docbook-xml=DIR], [use DocBook XML at DIR @<:@PREFIX@:>@]), 
    DOCBOOK_XML="$withval", 
    DOCBOOK_XML="$prefix"
  )
  AC_SUBST(DOCBOOK_XML)

  DOCBOOK_CAT=$DOCBOOK_XML/docbook.cat

  AC_CHECK_FILE($DOCBOOK_CAT,
    DOCBOOK_CAT_WORKS=yes; AC_SUBST(DOCBOOK_CAT),
    DOCBOOK_CAT_WORKS=
  )
  
# DocBook XSL

  AC_ARG_WITH(docbook-xsl, 
    AC_HELP_STRING([--with-docbook-xsl=DIR], [use DocBook XSL at DIR @<:@PREFIX@:>@]), 
    DOCBOOK_XSL="$withval", 
    DOCBOOK_XSL="$prefix"
  )
  AC_SUBST(DOCBOOK_XSL)

  DOCBOOK2HTML_XSL=$DOCBOOK_XSL/html/docbook.xsl
  AC_CHECK_FILE($DOCBOOK2HTML_XSL,
    DOCBOOK2HTML_WORKS=yes; AC_SUBST(DOCBOOK2HTML_XSL),
    DOCBOOK2HTML_WORKS=
  )

  DOCBOOK2MAN_XSL=$DOCBOOK_XSL/manpages/docbook.xsl
  AC_CHECK_FILE($DOCBOOK2MAN_XSL,
    DOCBOOK2MAN_WORKS=yes; AC_SUBST(DOCBOOK2MAN_XSL),
    DOCBOOK2MAN_WORKS=
  )

# xsltproc

  if test -n "$DOCBOOK2HTML_WORKS"; then 
    AC_CHECK_PROG(XSLTPROC,xsltproc,xsltproc,)

    XSLTPROC_WORKS=no
    if test -n "$XSLTPROC"; then
            AC_MSG_CHECKING([whether xsltproc works])
  
            $XSLTPROC --noout $DOCBOOK2HTML_XSL << END
<?xml version="1.0" encoding='ISO-8859-1'?>
<!DOCTYPE book PUBLIC "-//OASIS//DTD DocBook XML V4.1.2//EN" "http://www.oasis-open.org/docbook/xml/4.1.2/docbookx.dtd">
<book id="test">
</book>
END
            if test "$?" = 0; then
                    XSLTPROC_WORKS=yes
            fi
            AC_MSG_RESULT($XSLTPROC_WORKS)
    fi
  fi

  AC_CHECK_PROG(XMLLINT,xmllint,xmllint,)

# conclusion

  AC_MSG_CHECKING([whether all docbook stuff is available])
  DOCBOOK_WORKS=no
  if test "$DOCBOOK_CAT_WORKS $DOCBOOK2HTML_WORKS $DOCBOOK2MAN_WORKS $XSLTPROC_WORKS" = "yes yes yes yes"; then
    DOCBOOK_WORKS=yes
  fi

  AM_CONDITIONAL(have_docbook, test "$DOCBOOK_WORKS" = "yes")
  AC_MSG_RESULT($DOCBOOK_WORKS)
])


AC_DEFUN(USE_DB2LATEX, [
  AC_ARG_WITH(db2latex, 
    AC_HELP_STRING([--with-db2latex=DIR], [use DB2LaTeX at DIR @<:@PREFIX@:>@]), 
    DB2LATEX="$withval", 
    DB2LATEX="$prefix"
  )
  AC_SUBST(DB2LATEX)

  DOCBOOK2LTX_XSL=$DB2LATEX/xsl/docbook.xsl
  AC_CHECK_FILE($DOCBOOK2LTX_XSL,
    DOCBOOK2LTX_WORKS=yes; AC_SUBST(DOCBOOK2LTX_XSL),
    DOCBOOK2LTX_WORKS=
  )

  AM_CONDITIONAL(have_db2latex, test "$DOCBOOK2LTX_WORKS" = "yes")
])