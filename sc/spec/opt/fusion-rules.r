module fusion-rules
imports stratego

rules

  // This set of rules is generally applicable

  IntroduceApp :
    Seq(Build(t), s) -> Build(App(s, t))

  ApptoApp :
    App(s1, App(s2, t)) -> App(Seq(s2, s1), t)

  ExpandRec : 
    Rec(x, s) -> <ssubs> ([x], [Rec(x, s)], s)

  UnrollRec : 
    Rec(x, s) -> Rec(x, <ssubs> ([x], [s], s))

  // Note: duplication of code and computation!

  SeqOverChoiceL :
    Seq(x, Choice(y, z)) -> Choice(Seq(x, y), Seq(x, z))

  SeqOverLChoiceL :
    Seq(x, LChoice(y, z)) -> LChoice(Seq(x, y), Seq(x, z))

rules

  // The following rules are applicable under certain
  // circumstances.

  // Note: the following rule is only valid if z is guaranteed
  // to succeed

  SeqOverChoiceR :
    Seq(Choice(x, y), z) -> Choice(Seq(x, z), Seq(y, z))

  SeqOverLChoiceR :
    Seq(LChoice(x, y), z) -> LChoice(Seq(x, z), Seq(y, z))


  // Note: watch out for free variable capture

  SeqOverScopeR :
    Seq(Scope(xs, s1), s2) -> Scope(xs, Seq(s1, s2))

  SeqOverScopeL :
    Seq(s1, Scope(xs, s2)) -> Scope(xs, Seq(s1, s2))


  // Note: Code duplication
  // Always valid?

  BottomupOverConstructor :     
    App(Bottomup(x, s), Op(c, ts)) ->
    App(s, Op(c, <map(\ t -> App(Bottomup(x, s), t)\ )> ts))

