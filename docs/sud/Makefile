BASE = ../..
include $(BASE)/Makefile.incl

all: sud.ps sudpres.ps

sud.ps: sud.dvi
	dvips $< -o $@

sud.dvi: sud.tex ../refs.bib
	latex sud && bibtex sud && latex sud && latex sud

sudpres.ps: sudpres.dvi
	dvips $< -o $@

sudpres.dvi: sudpres.tex
	latex sudpres && latex sudpres

clean:
	rm -f *.ps *.dvi *.aux *.toc *.log *.bbl *.blg

view: sud.ps
	gv $< &

