\literate[list-zip]

	\begin{abstract}

	Zipping two lists into a list of pairs is a useful operation
	in many situations. There are many variants of zipping, for
	instance in the way lists of unequal length are treated. This
	module defines a collection of zip-like strategies for lists
	based on one underlying control scheme.

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
module list-zip
imports list-cons
imports tuple
rules

  Zip1   : ([],[]) -> []
  Zip1a' : ([],_) -> []
  Zip1b' : (_,[]) -> []
  Zip1c  : ([],x) -> x
  Zip1c' : (x,[]) -> x
  Zip1d  : ([],[_|_]) -> []
  Zip2   : ([x|xs],[y|ys]) -> ((x, y), (xs, ys))

  LZip2  : ([x|xs], y) -> ((x, y), (xs, y))
  RZip2  : (x, [y|ys]) -> ((x, y), (x, ys))

  Zip3   : (x, xs) -> [x|xs]

  UnZip1 : [] -> ([], [])
  UnZip2 : ((x, y), (xs, ys)) -> ([x|xs], [y|ys])
  UnZip3 : [x |  xs] -> (x, xs)

  NZip00 : xs -> (0, xs)
  NZip01 : xs -> (1, xs)
  NZip1  : (n, []) -> []
  NZip2  : (n, [y|ys]) -> ((n, y), (<add> (n, 1), ys))
  NZip3  : (x, xs) -> [x| xs]

  TZip1   : (TNil, TNil) -> TNil
  TZip2   : (TCons(x, xs), TCons(y, ys)) -> ((x, y), (xs, ys))
  TZip3   : (x, xs) -> TCons(x, xs)

  cart(s) : (xs, ys) -> 
            <map(\x -> <map(\y -> <s>(x, y)\ )> ys\ ); foldr(![], union)> xs

  Skip(s) : ([x|xs], ys) -> (x, (xs, ys))

strategies

  genzip(a, b, c, s) = rec x(a + b; (s, x); c)

  zip(s)  = genzip(Zip1,   Zip2,   Zip3,   s)
  zip'(s) = genzip(Zip1a' <+ Zip1b',   Zip2,   Zip3,   s)
  zipl(s) = genzip(Zip1a',   Zip2,   Zip3,   s)
  zipr(s) = genzip(Zip1b',   Zip2,   Zip3,   s)

  rest-zip(s) = 
    genzip((?([],_) + ?(_,[])); ?(tla, tlb); ![], Zip2, Zip3, s);
    \ pairs -> (tla, tlb, pairs) \

  unzip    = genzip(UnZip1, UnZip3, UnZip2, id)
  unzip(s) = genzip(UnZip1, UnZip3, UnZip2, s)

  nzip0(s) = NZip00 ; genzip(NZip1,  NZip2,  NZip3,  s)
  nzip(s)  = NZip01 ; genzip(NZip1,  NZip2,  NZip3,  s)
  tzip(s)  = genzip(TZip1,   TZip2,   TZip3,   s)

  lzip(s)  = genzip(Zip1a', LZip2, Zip3, s)
  rzip(s)  = genzip(Zip1b', RZip2, Zip3, s)


  zipFetch(s) = rec x(Zip2; ((s, id) <+ (id, x)))
  lzipFetch(s) = rec x(LZip2; ((s, id) <+ (id, x)))
  rzipFetch(s) = rec x(RZip2; ((s, id) <+ (id, x)))

  zipPad(s, padding) = 
    rec x(Zip1 + Zip2; (s, x); Zip3 + 
          ([], [id|id]); (![<padding>()|[]], id); x +
          ([id|id], []); (id, ![<padding>()|[]]); x)

  zip-tail = rec x(Zip1c + (Tl, Tl); x)
  zipl-tail-match(s) = rec x(Zip1c + Zip2; (s, id); Snd; x)
  zipr-tail-match(s) = rec x(Zip1c' + Zip2; (s, id); Snd; x)
 
  zip-skip(pred, s) = 
	rec x(Zip1 + (Skip(pred); (id, x) <+ Zip2; (s, x)); Zip3)

strategies

  tuple-zip(s) = 
    rec x(split(tmap(Hd), tmap(Tl)); (s, x); Zip3
          <+ tmap([]); ![])

  tuple-unzip(s) =
    rec x(split(map(Thd), map(Ttl)); (s, x); \ (a,b) -> TCons(a,b) \
          <+ map(()); !())
\end{code}
