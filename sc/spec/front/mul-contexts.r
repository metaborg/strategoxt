(*

Copyright (C) 1998, 1999 Eelco Visser <visser@acm.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.

*)


\paragraph{Multiple Contexts}


signature
  operations
    Pair : a * b -> Pair(a, b)
strategies

  lcontexts = rec x(LCon <+ thread(x))

  rcontexts = rec x(RCon <+ thread(x)); Pair(id, map(try(ConToContext)))

  cseqs = rec x(Seq1; x <+ Seq2; Cons(id, x) <+ Seq3 <+ Seq4 <+ Seq5)

rules
 
  ConToContext : Con(x, t, f) -> Context2(f, <split(id, use-def)> 
                                            Match(t), x)
  Ncon : 
      Scope(xs, SRule(Rule(l, r, s))) -> 
      Scope(xs, SRule(Rule(l', r', Seqs(s')))) 
      where <lcontexts> Pair(l, [])  => Pair(l', lcs);
            <rcontexts> Pair(r, lcs) => Pair(r', rcs);
            <cseqs; map(split(id, use-def))> s => conds;
            <tvars> l' => lvs;
            <defcons> ([], lvs, <conc> (conds, rcs)) => s'

  LCon : Pair(Con(x, t, s), cs) -> Pair(x, Cons(Con(x, t, s), cs))

  RCon : Pair(Con(Var(x), r, f'), cs[Con(Var(x), l, f)]) ->
         Pair(Var(y), cs[Context(f', <split(id, use-def)> 
                                      Seq(Match(l), Build(r)), 
                                 Var(x), Var(y))])
         where new => y

  Seq1 : Seq(Seq(x, y), z) -> Seq(x, Seq(y, z))
  Seq2 : Seq(x, Seq(y, z)) -> Cons(Cond(x), Seq(y, z))
  Seq3 : Seq(x, y)         -> [Cond(x), Cond(y)]
  Seq4 : Id                -> []
  Seq5 : x                 -> [Cond(x)]

  OrderCon : (s, vs, cs) -> (Seq(s, s'), vs', cs')
  where
    <fetch(Context(
strategies

  defcons = repeat(OrderCon)

  main = iowrap(Ncon)


Notes: Don't forget to add the newly generated variables to the scope
of the rule.
