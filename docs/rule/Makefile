BASE = ../..
include $(BASE)/Makefile.incl

all: doc.ps

doc.ps: doc.dvi
	dvips $< -o $@

doc.dvi: *.ltx ../refs.bib
	latex doc.ltx && bibtex doc && latex doc.ltx && latex doc.ltx

clean:
	rm -f *.ps *.dvi *.aux *.toc *.log *.bbl *.blg

view: doc.ps
	gv $< &
