\literate[make]
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

% $Id: make.r,v 1.1 2001/12/18 11:25:34 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)

\begin{code}
module make

imports pp-tables Bracket-Symbol

\end{code}
   Obtain the constructor name of the production, number all non-terminal
   symbols of the production and generate pretty-print entries for the
   symbols
\begin{code}
strategies

  generate-pp-entries =
      ?prod(syms, sym, attrs);
      where( <oncetd(?cons(cons-name))>attrs );
      <symbols2pp-entries(!cons-name)>syms
   <+
   // From a prod-fun we make a ordinary prod and call generate-pp-entries
   // recursively.
   (
     ?prod-fun(fun, syms, sym, attrs);
      !prod( <concat>[[lit(fun), lit("(")], syms, [lit(")")]], sym, attrs );
      generate-pp-entries
   )
   <+
     try(
        not(has-option(!Silent));
        debug( !"No constructor defined for production: " )
     );
     ![]

number-nonterminals = no-labels; number( NonTerminal )

NonTerminal = not(lit(id))

no-labels = map( try( \ label(a,b) -> b \ ) )

symbols2pp-entries( constr-name ) =
   number-nonterminals;
   // Make template for a sequence of symbols
   where( make => aboxes );
   // recursively construct tempates for nested symbols
   where( map( symbol2abox( !(<constr-name>(),[]) ) ); concat => pp-entries );

   // Yield a list of pretty-print entries as result.
   ![PP-Entry( Path1(<constr-name>()), aboxes ) | pp-entries]

symbol2abox(path) = 
   // tuple ( (constr, selectors), symbol) is used here
   // constr denotes the constructor name of the production,
   // selectors a list of selectors pointing to the symbol
   split( <path>() ,id);
   rec x ( 
      // No special box templates are required for literals, so we return an
      // empty list.
      ?(_, lit(_)); ![]
   <+ 
      // For sort non-terminals we don't generate a specific formatting
      // rule, so we just retrurn an empty list.
      ?(_,(_,sort(_))); ![]
   <+
      // Idem for character classes
      ?(_,(_,char-class(_))); ![]

   <+
      // Nested alternatives are first flattened: alt(a,(alt(b,c) )
      // becomes alt(a,b,c)
      {a, b, c,arguments, f: 
      ?((constr, selectors), (n, alt(a,alt(b, c))));
      <flat-alt>alt(a, alt(b, c)) => arguments;
      <mkterm>("alt", arguments) => f;
      <x>((constr, selectors),(n,f));

      // The pp entry for an SDF alternative consists of a list of literals
      // or equally numberd place holder symbols. For instance:
      //    S.1.alt -- "aap" _1 _1 _1
      // Therefore, we replace the place holder symbols (which are numberd
      // increasingly by default) by Arg(1)
      [topdown(try( Arg(id);!Arg(1)))|id]
      }
   <+
      {constr, selectors, n, s:
      
      ?((constr, selectors), (n, bracket-symbol(s)));
      <x>((constr, selectors), (n, s ))
      }
   <+
      // For all other SDF symbols (opt, seq, etc), we recursively generate
      // BOX templates for their argument symbols, and a template for the
      // symbol itself.
      { constr, selectors, selectors', abox-list, 
        aboxes, n, symbol, arguments:
   
      ?((constr, selectors), (n, symbol#(arguments)));
      <conc>(selectors, [selector(n, symbol)]) => selectors';

      // First construct a list of argument symbols of which all
      // non-terminal symbols are numbered.
      <argument-list; number-nonterminals>arguments;

      // Then create a BOX template for the argument symbols.
      where( make  => abox-list );
      
      // Recursively generate BOX templates for each argument symbol.
      map( {s, abox: \ s -> abox
         where
            !((constr, selectors'), s);x => abox
             \ } );concat => aboxes;
      
      // Return a list consisting of the recursively generated BOX
      // templates, and the BOX template for the symbol itself.
      ![PP-Entry( Path( constr, selectors'), abox-list ) | aboxes ]
      }
   )   


flat-alt =
   rec x ({a,b,s:
      ?alt( a, alt(b, s ) );
       ![a|<x>alt(b,s)]
      <+
      ?alt( a, b );
       ![a,b]
   })

\end{code}
   Build a list of arguments. The strategy is used to 'flatten' the
   arguments of Sdf's sequence symbol, which is defined as a binary function:
      seq( Symbol, [Symbol+] )
   The strategy argument-list is a generic strategy which flattens these
   arguments and returns the list [Symbol | Symbol+].
\begin{code}
argument-list = 
      map( try( \ e -> [e]
         where
            not(is-list) \ ) ); 
      concat

\end{code} 
   Replace each element e in a list by the tuple (n, e) when e satisfies s. 
   The number n denotes that e is the nth matching element in the list. The
   strategy is used in the generation of BOX templates to enable the
   replacement of non-terminal symbols in productions by numbered place
   holders.
\begin{code}

number(s) =
   split( !1, id );
   rec x ( {n, e, e',es, es':
         (id, []); ![]
      <+
         ?(n, [e|es] );
         <s>e;
         ![(n,e)|<x>(<add>(n,1),es)]
      <+
         ?(n, [e|es] );
         ![e|<x>(n,es)]
         
   } )
         
         
\end{code}

   Construct a box template for a list of symbols. All symbols but literals
   are considered to be numbered tuples: (n,s) where n denotes the number
   and s the symbol.  A numbered symbol (n,s) is replaced by the numbered
   place holder Arg(n). A literal lit(s) is replaced by the box string S(s).

   The following patterns in the productions are recognized and translated
   specially. L stands for literal, I for iter or iter-sep.

   1)
      L+ I+ ==> V[H[L+] I+]
      L+ I* ==> V[H[L+] I*]
   
   2)
      (L I+)+ L ==> V[ V is=2[L I+] ... L]
      (L I*)+ L ==> V[ V is=2[L I*] ... L]
   
\begin{code}


make =
   (
      // Recognize pattern 1
      reverse;[(id,iter(id)+
                   iter-star(id) + 
                   iter-sep(id,id)+
                   iter-star-sep(id,id));Make|map( lit(id);Make )];
      ?[iter|lits];
      not([id]);
      !V( [], [H([], <reverse>lits), iter])
   <+
      // Recognize pattern 2
      reverse;[Make=>lit|not([]);reverse=>xs];
      !xs;pair;
      map(  {a,b: (lit(id);Make=>a,
                   (id,iter(id)+iter-star(id));Make=>b);
                   !V([SOpt(VS,"2")],[a,b])
            }) => v;
      !V([],[v, lit])

   <+
      // Rule for all unrecognized patters
      map( Make )
   )

// Builds a list of pairs from a list
pair = 
   rec x (
      []
   <+
      \ [a,b|xs] -> [(a,b)|<x>xs] \
   )

rules

Make : (i, _ )  -> Arg( i )

// Literals are pretty-printed as keywords
Make : lit( s ) -> FBOX( KW, S( s ) )


\end{code}
