<?xml version="1.0"?>

<xsl:transform version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:output	method="xml" indent="yes" encoding="UTF-8"
        doctype-public="-//Netscape Communications//DTD RSS 0.91//EN"
				doctype-system="http://my.netscape.com/publish/formats/rss-0.91.dtd"/>

  <xsl:template match="TurboTracker">
    <rss version="0.91">
      <channel>
        <title>Tweakers.net News</title>
        <language>nl</language>
        <link>http://www.tweakers.net/</link>
        <description>Tweakers.net headlines</description>

        <xsl:apply-templates select="nieuwsposting"/>
      </channel>
    </rss>
  </xsl:template>

  <xsl:template match="nieuwsposting">
    <item>
      <xsl:apply-templates select="titel"/>
      <xsl:apply-templates select="link"/>
    </item>
  </xsl:template>

  <xsl:template match="titel">
    <title>
      <xsl:value-of select="text()"/>
    </title>
  </xsl:template>

  <xsl:template match="link">
    <link>
      <xsl:value-of select="text()"/>
    </link>
  </xsl:template>

  <xsl:template match="text()"/>

</xsl:transform>
