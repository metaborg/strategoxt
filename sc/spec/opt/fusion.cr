module fusion
imports stratego stratego-laws lib strategy-patterns desugar
	fusion-rules

signature
  constructors
    Mark : Strat

strategies

  fusion = 
    iowrap(
      declare-inline-rules
      ; check-that-try-is-try
      ; check-that-innermost-is-innermost
      ; check-that-bottomup-is-bottomup
      ; alltd(innermost-fusion)
    )


  // Inlining strategy definitions

  declare-inline-rules =
    Specification([Signature(id),Strategies(map(declare-inline-rule))])

  declare-inline-rule =
    ?[[ f(as) = s ]];
    rules(
      InlineStrat :
        [[ f(ss) :S]] -> <ssubs> (<map(?VarDec(<id>,_))> as', ss, s')
        where <strename> [[ f(as) = s ]] => [[ f(as') = s' ]]
    )

  inline-rules = 
    topdown(try(InlineStrat))


  // Check library definitions
  // note that other implementations might also be correct

  check-that-try-is-try =
    where(
      new => x
      ; <InlineStrat> [[ try_1(x()) :S]]
      ; (?[[ x() <+ id ]]
         <+ debug(!"try is not try: "); fail)
      ; say(!"try is try ") 
    )

  check-that-innermost-is-innermost =
    where(
      new => x
      ; <InlineStrat> [[ innermost_1(x()) :S]]
      ; (?[[ bottomup_1(rec z(try_1(x(); bottomup_1(z())))) ]]
         <+ debug(!"innermost is not innermost: "); fail)
      ; say(!"innermost is innermost ") 
    )

  check-that-bottomup-is-bottomup =
    where(
      new => x
      ; <InlineStrat> [[ bottomup_1(x()) :S]]
   // ; ?[[ rec y(all(y()); x()) ]]
      ; (?[[ all(bottomup_1(x())); x() ]] 
         <+ debug(!"bottomup is not bottomup: "); fail)
      ; say(!"bottomup is bottomup")
    )


  // The fusion strategy

  innermost-fusion = 
    ?[[ innermost_1(s1) ]] 
    ; say(!"this looks like an innermost")
    ; where(new => x)
    ; where(<inline-rules> s1 => s2)
    ; ![[ bottomup_1(rec x((mark(); s2); bottomup_1(x()) <+ id)) ]]
    ; propagate-mark
    ; where(<seq-over-choice> [[ bottomup_1(x()) :S]])
    ; fuse-with-bottomup
    ; where(<bottomup-to-var> [[ bottomup_1(x()) :S]])
    ; alltd(BottomupToVarIsId-UnCond 
            + BottomupToVarIsId-Cond)
    ; desugar
    // ; alltd(UnMark)
    ; say(!"fused application of innermost")

  // Propagate mark over choice

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

  // The following rule applies in the context of the transformation
  // above, where we know that the bottomup is the application of the
  // normalisation strategy to all subterms. Since the variable
  // originates in the left-hand side of the rewrite rule, we know
  // it is already in normal form.

  bottomup-to-var =
    ?bu
  ; rules(
      BottomupToVarIsId-UnCond :
        [[ mark(); ?t1; !t2 ]] -> [[ ?t1; !t3 ]]
        where !bu => s
            ; <tvars> t1 => vs
            ; {| Replace : 
                 map(!Var(<id>); {?t; rules(Replace : [[ <s> t :T]] -> [[ t :T]])})
                 ; <alltd(Replace)> t2 => t3 |}

      BottomupToVarIsId-Cond :
        [[ mark(); ?t1; where(s); !t2 ]] -> [[ ?t1; where(s'); !t2 ]]
        where !bu => bu'
            ; <tvars> t1 => vs
            ; {| Replace : 
                 map(!Var(<id>); {?t; rules(Replace : [[ <s> t :T]] -> [[ t :T]])})
                 ; <alltd(Replace)> (s, t2) => (s', t3) |}
   )
