\literate[{\tt YACC2SDF}]

Authors: Eelco Visser, Merijn de Jonge

\begin{code}
module yacc2sdf
imports yacc Sdf2-Syntax lib asfix io-idwrap

signature
   constructors
      Token : a * a -> a
      StartSymbol : a -> a
      Action: a -> a
      
strategies

  yacc2sdf = io-idwrap(?"yacc-0", (id,Main))

  Main = 
    YACC2SDF;
    alltd(sort(upper_no_underscore))

rules

  YACC2SDF : 
    Spec(defs, Rules(rs), _) -> 
    Definition([
      Module("Main",
             [Imports(["Lexical", "Generated"])], []),
      Module("Lexical",[],
             [Exports(lexical-syntax(<filter(Token2Prod); concat> defs))]),
      Module("Generated",[],
             [Exports([Sorts(<filter(StartSym)> defs) |
                       <map(Rule2Prod)> rs])])
    ])

  Token2Prod : 
    Token(_, syms) -> <map(LexicalProd)> syms

  LexicalProd : 
    Nmno(sym,None) -> prod([], sort(sym), no-attrs)

  LexicalProd : 
    Nmno(sym,Some(t)) -> 
    prod([char-class(simple-charclass(class))], sym, no-attrs)
    where <concat-strings>["\\", t] => class

  StartSym :
    StartSymbol(sym) -> sym

  Rule2Prod : 
    Rule(sym, arms, _) -> context-free-syntax(<map(Arm2Prod(!sym))> arms)

  Arm2Prod(sym) : 
    syms -> prod(<filter(not(prec); not(action); try(sym2sdf))>syms, <sym>(), no-attrs)
\end{code}

	Uppercase identifiers

\begin{code}
strategies

   // Make first characther and replace underscores ('_') by hyphens ('-')
  upper_no_underscore = 
    explode-string;
    [try(Upper) | rec x([] <+
                        [95, try(Upper) | x]; Tl <+
                        [id | x])];
    implode-string

   prec = ?Prec

   action = ?Action(A)

rules

   sym2sdf: 
     CharLiteral(S) -> lit(S')
     where // Replace 'string' by "string"
           <explode-string>S;
           ?[39 | l];
           !l;
           at-last(?[39]; ![]);
           implode-string; quote => S'

   Upper : 
     c -> <subt> (c, 32)
     where <geq> (c, 97); <leq> (c, 122)

   (* lowercase = 97 - 12 uppercase = 65 - 90 *)

   quote =
     explode-string => l;
     ![34 | l];
     at-end(![34]);
     implode-string
\end{code}
 
