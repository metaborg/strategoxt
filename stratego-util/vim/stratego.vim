" Vim syntax file
" Language:	Stratego Syntax
" Maintainer:	Shishir Ramam <sramam +at+ yahoo.com>
" Last Change:  2004 April 15
" Filenames:	*.str *.r
" URL:		

" For version 5.x: Clear all syntax items
" For version 6.x: Quit when a syntax file was already loaded
if version < 600
  syntax clear
elseif exists("b:current_syntax")
	if b:current_syntax != "str"
	    syntax clear
		unlet b:current_syntax
	else 
		finish
	endif
endif

setlocal iskeyword=a-z,A-Z,48-57,_,-,=,>,128-167,224-235

" Need to clean up and accurately identify strategies from agruments that
" might not be strategies. 
"
" syntax region  strTag start="^[\ \t]*[a-zA-Z\'\.\-\_][a-zA-Z0-9\'\.\-\_]*" end="\=" skipwhite
"syntax region  strStrategyName start="^[\ \t]*[a-zA-Z\'\.\-\_][a-zA-Z0-9\'\.\-\_]*" skip="[^=$]" end="="
syntax keyword strVisibility exports definition imports module 
syntax keyword strBlocks constructors strategies rules signature 
syntax keyword strConditional where 
syntax keyword strKeywords all end fail id in let not one overlays override prim script some sorts stratego test thread where 

syntax keyword strProduction -> => =

syntax region strCmt1 start="\\literate" end="\\begin{code}" 
syntax region strCmt2 start="\\end{code}" end="\\begin{code}" 
syntax region strCmtLine start="//" skip="\\$" end="$" 
syntax region strCmtBlock start="/\*" skip="\\$" end="\*/" keepend

syntax match strStrategyName /[a-zA-Z\'\.\-\_][a-zA-Z0-9\'\.\-\_]*/ contains=ALLBUT,strVisibility,strBlocks,strConditional,strKeywords

syn sync fromstart

if !exists("did_r_syn_inits")
   let did_r_syn_inits = 1

   hi link strVisibility    Type
   hi link strBlocks 		UnderLined
   hi link strKeywords		Identifier
   hi link strConditional	Conditional
   "hi link strTag			Type
   hi link strCmt1			Comment
   hi link strCmt2			Comment
   hi link strCmtLine		Comment
   hi link strCmtBlock		Comment
   hi link strStrategyName	Special
endif

let b:current_syntax = "str"

" vim: ts=4 sw=2
