\literate[string]

	\begin{abstract}
	This module defines some operations on strings, including
	conversions to and from numbers.
	\end{abstract}

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

\begin{code}
module string
imports list conditional iteration char

rules

  sect(op, arg) : x -> <op> (x, <arg>())

strategies
  
  // primitives

  new		 = prim("SSL_new")
  is-string	 = ?x; prim("SSL_is_string", x)
  implode-string = ?x; prim("SSL_implode_string", x)
  explode-string = ?x; prim("SSL_explode_string", x)   



strategies
  
  conc-strings = (explode-string, explode-string); conc; implode-string

  concat-strings = map(explode-string); concat; implode-string

(*
  int-to-string = 
    rec x(split(sect(mod, !10); sect(add, !48), sect(div, !10); int);
          (id, ?0; ![] <+ x); MkCons );
    reverse;
    implode-string

  string-to-int =
    explode-string;
    split(!0, id);
    repeat(S2I2); 
    S2I1
*)

  escape(esc : List(String) * (List(String) -> List(String)) -> List(String) ) = 
    explode-string;
    rec x(esc(x) <+ [id | x] <+ []);
    implode-string

  cify = escape(Cify)

  escape = 
    explode-string;
    rec x(Escape; [id, id | x] <+ [id | x] <+ []);
    implode-string

  bla(s) = 
    where(\ x -> [x]\ ; debug(s))

  unescape = 
    //bla(!"unescape a: ");
    explode-string;
    //bla(!"unescape b: ");
    rec x(try(UnEscape); ([id | x] <+ []));
    //bla(!"unescape c: ");
    implode-string
    ///; bla(!"unescape d: ")

  string-length =
    explode-string;
    length

rules

  Cify(x) : [39 | cs] -> [95, 112, 95 | <x>cs]
  Cify(x) : [45 | cs] -> [95          | <x>cs]
  Cify(x) : [95 | cs] -> [95, 95      | <x>cs]

  Escape : [34 | cs] -> [92, 34 | cs]	// " (double quote ")
  // Escape : [39 | cs] -> [92, 39 | cs]	// ' (single quote)
  Escape : [92 | cs] -> [92, 92 | cs]	// \ (backslash)
  Escape : [10 | cs] -> [92, 110 | cs]  //   (newline)

  UnEscape : [92, 34 | cs]  -> [34 | cs]
  // UnEscape : [92, 39 | cs]  -> [39 | cs]
  UnEscape : [92, 92 | cs]  -> [92 | cs]
  UnEscape : [92, 110 | cs] -> [10 | cs]
  UnEscape : [92, 116 | cs] -> [9 | cs]

  S2I1 : (n, [])         -> n

  S2I2 : (n, [m|ms]) -> (<add>(<mul>(10, n), <subt>(m, 48)), ms)
         where <geq>(m, 48); <leq>(m, 57)

  S2D0 : (n, [46|ys])  -> (n, 10, ys)

  S2D1 : (n, f, []) -> n

  S2D2 : (n, f, [m|ms]) -> 
	 (<add>(n, <div>(<subt>(m, 48), f)), <mul>(f, 10), ms)
         where <geq>(m, 48); <leq>(m, 57)

strategies

  string-to-num =
    explode-string;
    split(!0, id);
    repeat(S2I2);
    ( S2I1
    + S2D0;
      repeat(S2D2);
      S2D1
    )

strategies

  lower-case = 
    explode-string;
    map(lc);
    implode-string

  lc = try(where(sect(geq, !65)); where(sect(leq, !90)); sect(add, !32))

  upper-case = 
    explode-string;
    map(uc);
    implode-string

  uc = try(where(sect(geq, !97)); where(sect(leq, !122)); sect(subt, !32))

rules

  SplitInit : x -> ([], [], x)

  SplitExit : 
	(xs, cs, []) -> 
	<reverse> [<reverse; implode-string> cs|xs]

  SplitNext : 
	(xs, cs, [32|ys]) -> 
	(Cons(<reverse; implode-string> cs, xs), [], ys)

  SplitNext : 
	(xs, cs, [y|ys]) -> (xs, [y|cs], ys)
	where <not(eq)> (y, 32)

strategies

  split-at-space =
    explode-string;
    SplitInit;
    rec x(SplitExit <+ SplitNext; x)  

  basename =
    basename(id)

  basename(ext) =
    explode-string;
    try(rec x([id|x] <+ [47|id] <+ [46 | ext]; ![]));
    implode-string

  guarantee-extension(ext) =
    basename;
    split(id, <ext>());
    add-extension

  // path from program name "/usr/local/bin/prog" -> "/usr/local/bin/"
  get-path = 
    explode-string;
    (rec x([id|x] <+ [47|![]]) <+ ![]);
    implode-string

rules

  add-extension : (name, ext) -> <concat-strings> [name, ".", ext]

  quote(c):
    s
  ->
    <concat;implode-string>[[char],<explode-string>s,[char]]
    where c => char

strategies

  single-quote = quote(!39)
  double-quote = quote(!34)

  unquote(c) =
	  explode-string => s
        ; <Hd>s; c
        ; <last>s; c
	; <Tl;init>s
	; implode-string

  un-single-quote = unquote(?39)
  un-double-quote = unquote(?34)

  split-at-dot =
	  split(![],explode-string)
	; rec r(   \(int,[46|frac]) -> (int,frac)\ 
		<+ \(int,[i|rest])  -> <r>(<at-end(![i])>int,rest)\
		<+ (id,Nil))
	; (implode-string,implode-string)

  padd-with(s) = ?(str,n);
    !str;
    explode-string => str';
    length => l;
    (<geq>(l,n);!str <+
     <subt>(n,l);
     rec r(\0 -> []\ <+ \n -> [<s>()|<subt;r>(n,1)]\);
     \padd -> (padd,str')\;
     conc;
     implode-string
    )

// fails if sub isn't in l
  split-before = ?(l,sub);
        <explode-string>sub => sub';
        <explode-string>l;
        \ x -> ([],x) \;
        rec r( \ x@(_,x') -> x where <left-match>(x',sub') \ <+
               \ (x',[x|xs]) -> <r>(<at-end(![x])>x',xs) \ );
	(implode-string,implode-string)

  // results in (l,"") if sub isn't in l
  split-after = ?(l,sub);
        <explode-string>sub => sub';
        <explode-string>l;
        \ x -> ([],x) \;
        rec r( (id,[]) <+
               \ (x,x') -> (<conc>(x,sub'),<left-match>(x',sub')) \ <+
               \ (x',[x|xs]) -> <r>(<at-end(![x])>x',xs) \ );
	(implode-string,implode-string)

  left-match =
    rec r(
        {l,ls,rs:?([l|ls],[l|rs]); <r>(ls,rs)} <+
        (id,[]) );
    Fst

  is-substring(s) = 
    explode-string;?long;
    s;explode-string => sub;

    (<eq>(sub,long) 
  <+
    <rec r({a,xs:
      ?a@[_|xs]; (<left-match>(a,sub) <+ <r>xs)
    })>long)

  // <copy-char> (3, 32) -> "   "
  copy-char = 
    copy; implode-string

  string-sort = 
      map(explode-string)
    ; sort-list(SortL(string-gt))
    ; map(implode-string)

  // in: a binary tuple of exploded strings (==list of ASCII numbers)
  // but two strings can also be given.
  string-gt = 
    try((explode-string, explode-string));
    strcasecmp; ?1

  strcmp = rec r
	(  \([x|xs],[x|ys]) -> <r>(xs,ys)\
	<+ \([],[]) -> 0\
	<+ \([x|_],[y|_]) -> -1 where <lt>(x,y)\
	<+ \([],[_|_]) -> -1\
// these last two cases are handled faster by just !1
//	<+ \([_|_],[]) -> 1\
//	<+ \([x|_],[y|_]) -> 1\
	<+ !1
	)

  strncmp = rec r
	(  \(_,_,0) -> 0\
	<+ \([x|xs],[x|ys],i) -> <r>(xs,ys,<subt>(i,1))\
	<+ \([],[],_) -> 0\
	<+ \([x|_],[y|_],_) -> -1 where <lt>(x,y)\
	<+ \([],[_|_],_) -> -1\
	<+ !1
	)

  strcasecmp = rec r
	(  \([x|xs],[y|ys]) -> <r>(xs,ys) where <case-char(eq)>(x,y)\
	<+ \([],[]) -> 0\
	<+ \([x|_],[y|_]) -> -1 where <case-char(lt)>(x,y)\
	<+ \([],[_|_]) -> -1\
	<+ !1
	)
\end{code}
