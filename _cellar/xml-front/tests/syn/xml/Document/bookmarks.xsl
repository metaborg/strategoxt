<?xml version="1.0"?>

<xsl:stylesheet version="1.0"
              xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                  xmlns="http://www.w3.org/1999/xhtml"
             xmlns:html="http://www.w3.org/1999/xhtml"
     exclude-result-prefixes="xsl html">

  <xsl:output method="xml" indent="yes" encoding="UTF-8"
        doctype-public="-//W3C//DTD XHTML 1.1//EN"
        doctype-system="http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd"/>

  <xsl:template match="root">
    <html>
      <head>
        <title>Bookmarks of Martin Bravenboer</title>
      </head>

      <body>
        <ul>
          <xsl:apply-templates/>
        </ul>
      </body>
    </html>
  </xsl:template>

  <xsl:template match="link">
    <li>
      <a href="{@url}" alt="{@name}">
        <xsl:value-of select="@name"/>
      </a>
    </li>
  </xsl:template>

  <xsl:template match="category">
    <li>
      <p>
        <xsl:value-of select="@name"/>:
        <ul>
           <xsl:apply-templates/>
        </ul>
      </p>
    </li>
  </xsl:template>

</xsl:stylesheet>
