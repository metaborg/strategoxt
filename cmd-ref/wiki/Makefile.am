noinst_DATA = \
  strc.html \
  pack-sdf.html \
  ppgen.html

EXTRA_DIST = $(noinst_DATA) $(wildcard *.strs)

%.html : %.navxhtml
	$(XML_TOOLS)/bin/parse-xml-doc -i $< | \
	$(STRATEGO_SHELL)/bin/stratego-shell --script ref-remove-nav.strs | \
	$(XML_TOOLS)/bin/pp-xml-doc -o $@

strc.navxhtml : $(top_srcdir)/xhtml/re01.html
	cp $< $@

pack-sdf.navxhtml : $(top_srcdir)/xhtml/re02.html
	cp $< $@

ppgen.navxhtml : $(top_srcdir)/xhtml/re03.html
	cp $< $@


CLEANFILES = $(wildcard *.navxhtml) $(wildcard *.html)

upload :
	chmod a+r *.html
	scp -p *.html losser:public_html/tool-ref/
