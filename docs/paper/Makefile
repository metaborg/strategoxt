BASE = ../..
include $(BASE)/Makefile.incl

LATEX = latex --interaction nonstopmode
PDFLATEX = pdflatex --interaction nonstopmode
STUFF = *.aux *.toc *.log *.bbl *.blg *.out

MANIFEST := Makefile *.ltx acmconf.cls

.PRECIOUS: %.dvi

all: doc.ps doc.pdf

doc.ps: doc.dvi
	dvips $< -o $@

doc.dvi: *.ltx ../refs.bib 
	- rm -f $(STUFF); $(LATEX) doc.ltx ; bibtex doc ; $(LATEX) doc.ltx ; $(LATEX) doc.ltx

doc.pdf: *.ltx ../refs.bib 
	rm -f $(STUFF); $(PDFLATEX) doc.ltx && bibtex doc && $(PDFLATEX) doc.ltx && $(PDFLATEX) doc.ltx

clean:
	rm -f *.ps *.dvi $(STUFF)

view: doc.ps
	gv $< &
