module matrix
imports stratego automaton
signature
  (* subsorts Matrix < Strat *)
  constructors
    Row    : List(Term) * Strat ->  Row
    Row    : List(Term) * List(Term) * Strat ->  Row
    Matrix : List(List(Int)) * List(Row) -> Matrix
    Matrix : List(Row) -> Matrix
    Off    : List(Int) -> Term

strategies

// Creating a matrix from a term

  term-to-matrix =
    \ t -> As(Off([]), [t]) \;  
    topdown(try(Propagate));
    collect-substitutions;
    \ (ts, s) -> Matrix(<collect-offsets> ts, [Row(ts, Seqs(s))]) \

  collect-offsets =
    collect( \ Off(p) -> p \ )

// Renaming the matrix to obtain the same variables based on position 
// relative to the root in all patterns 

  rename-matrix = 
    Matrix(map(rename-row));
    \ Matrix(rows) -> 
      Matrix(<map( \ Row(ts,s) -> ts \ ); collect-offsets> rows, rows) \

  rename-row = 
    RenameRow; 
    Row(topdown(try(Propagate)), id);
    AddRowSubstitutions

rules

  RenameRow :
    Row(ts, fin) -> Row(As(Off([]), ts), fin)

  Propagate :
    As(Off(path), Op(f, ts)) -> As(Off(path), Op(f, As(Off(path), ts)))

  Propagate :
    As(Off(path), As(Var(x), t)) -> As(Var(x), As(Off(path), t))

  Propagate :
    As(Off(path), BuildDefault(t)) -> As(Off(path), Wld)

  Propagate :
    As(Off(path), ts) -> ts'
    where <nzip0(Annotate(!path))> ts => ts'

  Annotate(mkpath) :
    (i, t) -> As(Off([i | path]), t)
    where mkpath => path

// Replace variables by wildcards and add renamings from new to old
// variables

rules

  AddRowSubstitutions :
    Row(ts, s) -> Row(ts', Seq(Seqs(sbs), s))
    where <collect-substitutions> ts => (ts', sbs)
 
// Collecting substitution

strategies

  collect-substitutions = 
    collect-split(IgnoreVar, CollectSubst)

rules

  IgnoreVar : 
    As(Off(path), Var(x)) -> As(Off(path), Wld) where <is-list> path

  IgnoreVar : 
    As(Var(x), As(Off(path), t)) -> As(Off(path), t)

  CollectSubst : 
    As(Off(path), Var(x)) -> [Assign(Var(x), Var(path))]

  CollectSubst : 
    As(Var(x), As(Off(path), t)) -> [Assign(Var(x), Var(path))]


