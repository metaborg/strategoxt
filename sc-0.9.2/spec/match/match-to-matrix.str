module match-to-matrix
imports stratego matrix desugar stratego-laws

strategies

  match-to-matrix =
    downup(repeat(MatchToMatrix + MatrixMerge + Simplify))

rules

  MatchToMatrix : 
    Match(t) -> <term-to-matrix> t

  MatrixMerge : 
    Seq(Matrix(ps, [Row(ts, s1)]), s2) ->
    Matrix(ps, [Row(ts, Seq(s1, s2))])

  MatrixMerge : 
    Scope(xs, Matrix(ps, rows)) ->
    Matrix(ps, <map(\ Row(ts, s) -> Row(ts, Scope(xs, s)) \ )> rows)

  MatrixMerge : 
    Choice(Matrix(ps1, rows1), Matrix(ps2, rows2)) ->
    Matrix(<union> (ps1, ps2), <conc> (rows1, rows2))

  MatrixMerge : 
    Choice(Matrix(ps1, rows1), Choice(Matrix(ps2, rows2), s)) ->
    Choice(Matrix(<union> (ps1, ps2), <conc> (rows1, rows2)), s)

  MatrixMerge : 
    Choice(Matrix(ps1, rows1), LChoice(Matrix(ps2, rows2), s)) ->
    LChoice(Matrix(<union> (ps1, ps2), <conc> (rows1, rows2)), s)

  MatrixMerge : 
    LChoice(Matrix(ps1, rows1), Matrix(ps2, rows2)) ->
    Matrix(<union> (ps1, ps2), <conc> (rows1, rows2))

  MatrixMerge : 
    LChoice(Matrix(ps1, rows1), LChoice(Matrix(ps2, rows2), s)) ->
    LChoice(Matrix(<union> (ps1, ps2), <conc> (rows1, rows2)), s)

  MatrixMerge : 
    LChoice(Matrix(ps1, rows1), Choice(Matrix(ps2, rows2), s)) ->
    LChoice(Matrix(<union> (ps1, ps2), <conc> (rows1, rows2)), s)

  // The following rule is invalid because of the inequality
  //
  //  (s1 + s2); s3 =/= (s1; s3) + (s2; s3)
  // 
  // Also it leads to code explosion

  MatrixMergeNotValid : 
    Seq(Matrix(ps, rows), s1) ->
    Matrix(ps, <map(\ Row(ts, s2) -> Row(ts, Seq(s2, s1)) \ )> rows)


  // In some cases it might be interesting to consider though, e.g.,
  // if s1 is small and always succeeds.
