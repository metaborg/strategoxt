" Vim syntax file
" Language:	SDF Syntax
" Maintainer:	Shishir Ramam <sramam@yahoo.com>
" Last Change:  2004 April 15
" Filenames:	*.sdf *.def
" URL:		

" For version 5.x: Clear all syntax items
" For version 6.x: Quit when a syntax file was already loaded
if version < 600
  syntax clear
elseif exists("b:current_syntax")
	if b:current_syntax != "sdf"
	    syntax clear
		unlet b:current_syntax
	else 
		finish
	endif
endif

setlocal iskeyword=a-z,A-Z,48-57,_,-,>,128-167,224-235

syntax keyword sdfVisibility exports definition imports module
syntax keyword sdfBlocks lexical syntax restrictions priorities context-free

syntax keyword sdfKeywords variables sorts

syntax keyword sdfBuildtIn LAYOUT reject cons left right assoc non-assoc bracket 
syntax keyword sdfProduction ->
"syntax keyword sdfModuleNameStart module imports

syntax region sdfCommentLine start="%%" skip="%\\$" end="$" 
syntax region sdfCommentBlock start="%[^%]" skip="%\\$" end="%" 
syntax region sdfLiteral start=+[^\\]"+ skip=+\\"+ end=+"+

"syntax region sdfModuleNames start="module" skip="\\$" end="$"

syn sync fromstart

if !exists("did_r_syn_inits")
   let did_r_syn_inits = 1

   hi link sdfVisibility    Type
 "  hi link sdfModuleNameStart   Type
   hi link sdfBlocks 		UnderLined
   hi link sdfBuildtIn		Identifier
   hi link sdfKeywords		Identifier
   hi link sdfCommentLine	Comment
   hi link sdfCommentBlock  Comment
   hi link sdfProduction    PreProc
   hi link sdfLiteral		Constant
  " hi link sdfModuleNames	Type

endif

let b:current_syntax = "sdf"

" vim: ts=4 sw=2
