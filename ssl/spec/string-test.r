\literate[string-test]

	\begin{abstract}

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
module string-test
imports string sunit

strategies 

  main = 
    test-suite(!"string-test",
        explode-implode-test;
	basename-test;
	single-quote-test;
	un-double-quote-test;
	padd-with-test; 
	split-at-dot-test;
	split-after-test;
	split-before-test;
	is-substring-test;
	copy-char-test;
	upper-case-test;
	is-substring-test;
	get-path-test;
	escape-test;
	unescape-test
    )

  explode-implode-test =
    apply-test(!"explode-implode-test1"
	, explode-string; implode-string
	,!"foOBaR"
	,!"foOBaR"
	);
    apply-test(!"explode-implode-test2"
	, explode-string; implode-string
	,!"\n\t"
	,!"\n\t"
	)

  upper-case-test = 
    apply-test(!"upper-case-test",upper-case,!"foOBaR",!"FOOBAR")

  basename-test = 
    apply-test(!"basename-test1", basename, !"./number.r", !"./number");
    apply-test(!"basename-test2", basename, !"./number",   !"./number")

  single-quote-test =
    apply-test(!"single-quote-test",single-quote,!"foobar",!"'foobar'")

  un-double-quote-test =
    apply-test(!"un-double-quote-test",un-double-quote,
	!"\"fnord\"",!"fnord")

  is-substring-test =
    apply-test(!"is-substring-test",is-substring(!"foo"),
	!"barfoofnord",id)

  padd-with-test =
    apply-test(!"padd-with-test",padd-with(!48),!("42",4),!"0042")

  split-before-test =
    apply-test(!"split-before-test",split-before,
	!("barfoofnord","foo"),!("bar","foofnord"))

  split-after-test =
    apply-test(!"split-after-test",split-after,
	!("barfoofnord","foo"),!("barfoo","fnord"))

  split-at-dot-test =
    apply-test(!"split-at-dot-test",split-at-dot,
	!"3.141592",!("3","141592"))

  copy-char-test =
    apply-test(!"copy-char-test", copy-char,
	!(3, 32),!"   ")

  get-path-test =
    apply-test(!"get-path-test1"
	, get-path
	, !"/usr/local/bin/prog"
	, !"/usr/local/bin/"
	);
    apply-test(!"get-path-test2"
	, get-path
	, !"prog"
	, !""
	)

  escape-test =
    apply-test(!"escape-test1"
	, escape
	, !"\"ab\\c"
	, !"\\\"ab\\\\c"
	);
    apply-test(!"escape-test2"
	, cify
	, !"a-b_c'"
	, !"a_b__c_p_"
	)

  unescape-test =
    apply-test(!"unescape-test1"
	, [unescape]
	, !["\\\"ab\\\\c"]
	, !["\"ab\\c"]
	);
    apply-test(!"unescape-test2"
	, [un-double-quote; unescape]
	, !["\" \\\\\\n\\t\""]
	, ![" \\\n\t"]
	);
    apply-test(!"unescape-test3"
	, [unescape]
	, ![" \\\\\\na\\b"]
	, ![" \\\na\\b"]
	);
    apply-test(!"unescape-test4"
	, [unescape]
	, !["\" \\\\\\n\\\\t\""]
	, !["\" \\\n\\t\""]
	)
\end{code}
