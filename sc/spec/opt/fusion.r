module fusion
imports stratego stratego-laws lib strategy-patterns desugar
	fusion-rules

signature
  constructors
    Mark : Strat

strategies

  main = iowrap(alltd(fusion2))

  fusion1 = 
    is-innermost;
    propagate-nf-assertion;
    fuse-with-bottomup;
    alltd(DontTransformTermsInNormalForm1)

  mark-it = \ s -> Seq(Mark, s) \

  fusion2 = 
    try(PrepareInnermost);
    Innermost1(IntroduceMark,id,?red,id);
    say(!"this looks like an innermost");
    propagate-mark;
    fuse-with-bottomup;
    alltd(BottomupToVarIsId(!red));
    desugar;
    // alltd(UnMark);
    say(!"fused application of innermost")

  is-innermost = 
    Innermost1(id,id,id,id)
    + PrepareInnermost

  propagate-mark = 
    innermost(
	SeqOverChoiceL
	+ SeqOverLChoiceL
	+ SeqOverScopeL 
    )

  fuse-with-bottomup = 
    innermost(
	SeqOverChoiceR
	+ SeqOverLChoiceR
	+ SeqOverScopeR
	+ AssociateR
	+ IntroduceApp
	+ BottomupOverConstructor
    )

  propagate-nf-assertion = 
    is-innermost;
    innermost(
	SeqOverChoiceL
	+ SeqOverLChoiceL
	+ SeqOverScopeL 
	+ AssociateL
	+ IntroduceApp
	+ NormalFormToBuildVars
    )

rules

  IntroduceMark : s -> Seq(Mark, s) 

  UnMark : Seq(Mark, s) -> s

  PrepareInnermost :
    Innermost2(s,x) -> Innermost1(s, im, red, y)
    where new => im; new => red; new => y

  // The following rule applies in the context of the transformation
  // above, where we know that the Bottomup is the application of the
  // normalisation strategy to all subterms. Since the variable v
  // originates in the left-hand side of the rewrite rule, we know
  // it is already in normal form.

  BottomupToVarIsId(mkr) :
    Seq(Mark, Seq(Match(lhs), Build(rhs))) -> 
    Seq(Match(lhs), Build(rhs'))
    where <tvars> lhs => vs;
          <alltd(\ App(Bottomup(_,Do(red)), Var(v)) -> Var(v)
                   where <fetch(?v)> vs; mkr => r \ )
          > rhs => rhs'

  BottomupToVarIsId(mkr) :
    Seq(Mark, Seq(Match(lhs), Seq(Where(s), Build(rhs)))) -> 
    Seq(Match(lhs), Seq(Where(s), Build(rhs')))
    where <tvars> lhs => vs;
          <alltd(\ App(Bottomup(_,Do(red)), Var(v)) -> Var(v)
                   where <fetch(?v)> vs; mkr => r \ )
          > rhs => rhs'

rules
 
  // The following rules are designed for application in combination
  // with the normal form assertion.
  // Note: only variables in r that occur in l should be transformed

  NormalFormToBuildVars : 
    Seq(Seq(Test(All(NormalForm(x,s))), Match(l)), Build(r)) ->
    Seq(Match(l), 
        Build(<alltd(\ Var(v) -> App(Test(NormalForm(x,s)), Var(v)) \ )> r))

  // No way this rule applies in general

  DontTransformTermsInNormalForm1 :
    App(Seq(Test(NormalForm(_, s1)), Bottomup(_, s2)), Var(x)) -> Var(x)
