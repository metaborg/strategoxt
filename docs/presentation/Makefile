BASE = ../..
include $(BASE)/Makefile.incl

all: presentation.pdf

presentation.ps: presentation.dvi
	dvips $< -o $@

presentation.dvi: presentation.ltx
	latex presentation.ltx && latex presentation.ltx

presentation.pdf: presentation.ltx
	pdflatex presentation.ltx && pdflatex presentation.ltx

clean:
	rm -f *.ps *.dvi *.aux *.toc *.log *.bbl *.blg

view: sud.ps
	gv $< &

