\literate[{\tt YACC2SDF}]

\begin{code}
module yacc2sdf
imports yacc Sdf2-Syntax lib
strategies

   main = iowrap(Main)

   Main = YACC2SDF;
          alltd(sort(upper_no_underscore))

rules

   YACC2SDF : Spec(defs, Rules(rs), _) -> 
              Definition([
                Module("Main",
                       [Imports(["Lexical", "Generated"])], []),
                Module("Lexical",[],
                       [Exports(<filter(Token2Prod)> defs)]),
                Module("Generated",[],
                       [Exports(Cons(Sorts(<filter(StartSym)> defs),
                                     <map(Rule2Prod)> rs))])
              ])

   Token2Prod : Token(_, syms) -> lexical-syntax(<map(LexicalProd)> syms)

   LexicalProd : Nmno(sym,None) -> prod([], sort(sym), no-attrs)

   LexicalProd : Nmno(sym,Some(t)) -> 
       prod([char-class(simple-charclass(class))], sym, no-attrs)
   where
      <concat-strings>["\\", t] => class

   StartSym : StartSymbol(sym) -> sym

   Rule2Prod : Rule(sym, arms, _) -> context-free-syntax(<map(Arm2Prod(!sym))> arms)

   Arm2Prod(sym) : syms -> prod(<filter(not(prec);not(action));map(try(sym2sdf))>syms, <sym>(), no-attrs)
\end{code}

	Uppercase identifiers

\begin{code}
strategies

   // Make first characther and replace underscores ('_') by hyphens ('-')
   upper_no_underscore = 
           explode-string;
           Cons(try(Upper), rec x(Nil <+
                             Cons(95, Cons(try(Upper), x)); Tl <+
                             Cons(id, x)));
           implode-string
   prec = ?Prec

   action = ?Action(A)

rules
   sym2sdf: CharLiteral( S ) -> lit( S' )
      where // Replace 'string' by "string"
         <explode-string>S;
          ?[39 | l];
          !l;
          at-last(?[39]; ![] );
          implode-string; quote => S'

   Upper : c -> <subt> (c, 32)
           where <geq> (c, 97); <leq> (c, 122)

	(* lowercase = 97 - 12 uppercase = 65 - 90 *)


   quote:
      s -> s'
      where
         <explode-string>s =>l;
         !Cons( 34, l );
         at-end( !Cons( 34, Nil ) );
         implode-string => s'
\end{code}
 