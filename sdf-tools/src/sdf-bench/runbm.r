\literate[{\btt RUNBM}]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

% $Id: runbm.r,v 1.3 2001/09/01 21:06:55 mdejonge Exp $

 	usage

 	runbm -st sglr-stats.tbl -i L.tree -o L.data

\begin{code}
module runbm
imports lib
signature
  constructors
  benchmark  : Language * Files * Stats -> Benchmark
  language   : String -> Language
  files      : List(String) -> Files
  statistics : List(Stat) -> Stats

  CharsPerSec : Int -> Field

  StatTbl : a -> a
  plot: a * a -> a
  TokenInput: a * a * a -> a
  Lines: a -> a
  ParseTime: a -> a
  Branches : a -> a
  Rejects : a -> a
  Reductions: a -> a
  ReductionsPerSec: a -> a
  ReductionsPerToken: a -> a
  Ambiguities: a -> a
  AmbCalls: a -> a
  Minor : a -> a
  Major : a -> a
  ParseTime : a -> a
  Branches : a * a * a * a * a -> a
\end{code}

	\paragraph{Main}

\begin{code}
strategies

  main = iowrap(run, ArgOption("-st", \x -> StatTbl(x)\ ))

rules

  run : (options, benchmark(language(l), files(fs), _)) -> 
        (options, (data, stats))
        where <option-defined(?StatTbl(stattbl))> options;

	      <map(collect-data(!l,!stattbl))> fs => data;

	       where(split(!"parse-data", id); WriteToTextFile);

               <mk-stats> data => stats
\end{code}

	\paragraph{Data Collection}

\begin{code}
strategies

  collect-data(tbl, stattbl) = 
  	split3(collect-data(parse-noisy(tbl), stattbl, !["-l"]),
	       collect-data(parse(tbl),       stattbl, !["-l"]),
	       collect-data(parse(tbl),       stattbl, !["-lf"]))

  collect-data(parser, stattbl, opts) =
    ((split3(id, !"/dev/null", opts); 
      parser; get-statistics(stattbl); PrintCharsPerSecond
     ) <+ \x -> ["#warning: parse error in: ", x]\
    )

  parse(tbl) = \('in, out, args) ->
    <call>("sglr", <conc>(args, ["-p", <tbl>(), "-i", 'in, "-o", out]))
  \

  parse-noisy(tbl) = \('in, out, args) ->
    <call-noisy>("sglr", <conc>(args, ["-p", <tbl>(), "-i", 'in, "-o", out]))
  \

  get-statistics(stattbl) =
    <parse(stattbl)>("sglr-stats.txt", "sglr-stats.tree", []);
    <call>("implode-asfix", 
           ["-S", "-i", "sglr-stats.tree", "-o", "sglr-stats.trm"]);
    <ReadFromFile> "sglr-stats.trm";
    alltd(string-to-num)
\end{code}

	\paragraph{Data Presentation}

\begin{code}
rules

  mk-stats : 
        [] -> []

  mk-stats : 
    	Cons(a,lst)  -> plot(grph, avg)
    	where map(GetRecord <+ debug);
              sort-graph => grph;
              print-graph(!"time.plot");
              print-latex-table(!"time.plot.tex");
              !grph; averages; round-averages => avg;  
      	      ![avg]; print-latex-table(!"average.ltx")

  GetRecord ::
    (list(try(?TokenInput(tokens,file,_) + 
              ?Lines(lines) + 
              ?ParseTime(seconds) +
              ?CharsPerSec(cps) +
              (* ?TreeMemory(memory) + *)
              ?Branches(br,_,_,_,_)  +
              ?Rejects(rej) +
              ?Reductions(red) +
	      ?ReductionsPerSec(redps) +
	      ?ReductionsPerToken(redpt) +
	      ?Ambiguities(ambs) +
	      ?AmbCalls(ac) +
	      ?Minor(mi) +
	      ?Major(ma)
              (* + ?CharsPerMinFlt(cpf) *)
         ))
    ,list(try(?ParseTime(n-seconds) +
              ?CharsPerSec(n-cps)))
    ,list(try(?ParseTime(f-seconds) +
              ?CharsPerSec(f-cps)))
    ) -->
    ![tokens, lines, seconds, f-seconds, n-seconds, cps, f-cps, n-cps,
      red, redps, redpt, rej, ambs, ac, br, (* memory, *) mi, ma, (* cpf, *) file]

\end{code}

	\paragraph{Data Presentation}

\begin{code}
rules

    GetCharsPerSecond ::
      	(list(try(?CharsPerSec(cps))), id) --> !cps

strategies

  PrintCharsPerSecond = list(try(CharsPerSec(debug)))

  round-averages = 
	Cons(int, Cons(int, 
	Cons(id,  Cons(id, Cons(id, Cons(int, Cons(int,
        Cons(int, Cons(int, Cons(int, Cons(id,
        map(try(int)))))))))))))

  sort-graph = sort-list(LSort((Hd, Hd); gt))

  print-graph(file) =
     where(file; open-file); 
     where(map(inject(!" "); split(file, id); printnl))

  print-latex-table(file) = 
    where(file; open-file);
    where(map(at-last(![]); inject(!" & "); at-end(!["\\\\"]); 
          split(file, id); printnl))

  inject(s) = rec x(Nil + Cons(id, x); Inject(s))

  print-average =
    where(<open-file> "average.ltx");
    where(split(!"average.ltx", MkSingleton); printnl)

rules

  Inject(s) : Cons(x, y) -> Cons(x, Cons(<s>(),  y))
\end{code}
