(*

TODO

strategies	
* primitives
* congruences + variants

sugar
* rules

* rules in lets?
* overlays
* 

terms
* App in Build

modules
* reading a module



*)

module stratego-eval
imports strategy sugar display

strategies

  eval = rec e(
    (   LChoice(e, id)
	<+ Choice(id, e)
	<+ all(e)
    );
    try(( 

	// sequential programming
	  EvalId
	+ EvalFail
	+ EvalTest
	+ EvalNot
	+ EvalSeq
	+ EvalChoice
	+ EvalLChoice

	// definitions
	+ EvalCall
	+ EvalLet
	+ EvalRec 
	+ EvalUndefine

	// matching and building
	+ EvalScope
	+ (EvalMatch <+ EvalMatchFail)
	+ EvalBuild

	// traversal
	+ (EvalAll(e) <+ EvalAllFail)
	+ (EvalOne(e) <+ EvalOneFail)

        ); e)
   )

  is-term = rec t(
    Var(is-string)
    + Op(is-string, list(t))
    // + Clos(id,t)
   )

rules

// Strategy operators

  EvalId :
    App(Id, t) -> t
  
  EvalFail :
    App(Fail, t) -> Fail

  EvalFail :
    App(s, Fail) -> Fail

  EvalTest :
    App(Test(s), t) -> App(Seq(s, Build(t)), t)

  EvalNot : 
    App(Not(s), t) -> App(Not(App(s, t)), t)
    where <not(is-term)> s

  EvalNot :
    Not(Fail) -> Id

  EvalNot :
    Not(t) -> Fail
    where <is-term> t

  EvalSeq :
    App(Seq(s1, s2), t) -> App(s2, App(s1, t))

  EvalSeq :
    Seq(Fail, s) -> Fail
 
  EvalSeq :
    Seq(s, Fail) -> s

  EvalChoice :
    App(Choice(s1, s2), t) -> Choice(App(s1, t), App(s2, t))

  EvalChoice :
    Choice(Fail, s) -> s

  EvalChoice :
    Choice(s, Fail) -> s

  EvalChoice :
    Choice(t, s) -> t
    where <is-term> t

  EvalChoice :
    Choice(s, t) -> t
    where <is-term> t

  EvalLChoice :
    App(LChoice(s1, s2), t) -> LChoice(App(s1, t), App(s2, t))

  EvalChoice :
    LChoice(Fail, s) -> s

  EvalChoice :
    LChoice(Id, s) -> Id

  EvalChoice :
    LChoice(t, s) -> t
    where <is-term> t

// Strategy definition and call

  EvalCall :
    App(Call(SVar(f), as), t) -> App(Seq(s, UndefineOps(xs)), t)
    where <table-lookup> ("senv", f) => SDef(f, xs, s);
          <zip(\ (x, a) -> 
                 <table-push> ("senv", x, SDef(x,[],a)) \ )> (xs, as)

  EvalLet :
    App(Let(sdefs, s), t) -> App(Seq(s, UndefineDefs(sdefs)), t)
    where <map(\sdef@SDef(f,_,_) -> <table-push>("senv", f, sdef)\ )> sdefs

  EvalRec :
    App(Rec(x, s), t) -> App(Let([SDef(x,[],s)], s), t)

  EvalUndefine :
    App(UndefineOps(xs), t) -> t
    where <map(\ x -> <table-pop>("senv", x)\ )> xs

  EvalUndefine :
    App(UndefineDefs(defs), t) -> t
    where <map(\ SDef(f,_,_) -> <table-pop>("senv", f)\ )> defs

// Scope, Match and Build

  EvalScope :
    App(Scope(xs, s), Clos(env,  t)) -> 
    App(Seq(s, Restore(xs, env'')), Clos(env', t))
    where <split(filter({x: ?(Var(x),_); where(<not(fetch(?x))> xs)}),
                 filter({x: ?(Var(x),_); where(<fetch(?x)> xs)}))
          > env => (env', env'')

  EvalScope :
    App(Restore(xs, env1), Clos(env2, t)) -> Clos(<conc> (env1, env3), t)
    where <filter({x: ?(Var(x),_); where(<not(fetch(?x))> xs)})
          > env2 => env3

  EvalMatch : 
    App(Match(t1), Clos(env, t2)) -> Clos(env', t2)
    where <pattern-match(Var(id))> [(t1, t2) | env] => env'

  EvalMatchFail : 
    App(Match(t1), Clos(env, t2)) -> Fail

  EvalBuild : 
    App(Build(t1), Clos(env, t2)) -> Clos(env, t3)
    where <substitute(Var(id))> (env, t1) => t3

// Term traversal

  EvalAll(eval) :
    App(All(s), Clos(env, Op(f, ts))) -> Clos(env', Op(f, ts'))
    where
      <thread-map(\Pair(t, env) -> <eval> App(s, Clos(env, t)) \;
                  ClosToPair)
      > Pair(ts, env) => Pair(ts', env')

  EvalAllFail :
    App(All(s), Clos(env, t)) -> Fail

  ClosToPair : Clos(env', t') -> Pair(t', env')

  EvalOne(eval) :
    App(One(s), Clos(env, Op(f, ts))) -> Clos(env', Op(f, ts'))
    where
      <fetch({t, t': ?t; <eval> App(s, Clos(env, t)) => Clos(env', t'); !t'})
      > ts => ts'

  EvalOneFail :
    App(One(s), Clos(env, t)) -> Fail

  