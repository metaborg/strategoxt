module rho-pp
imports lib rho abox-ext

strategies

  rho-pp = iowrap(bottomup(try(pp-rho)))

  escape = rec x(escape-backslash; [id,id|x]
                 <+ ([] + [id| x]))

  escape-backslash = ?[92|xs]; ![92,92|xs]
  escape-backslash = ?[34|xs]; ![92,34|xs]

rules

  pp-rho: Program(decs) -> V0(decs)

  pp-rho: Def(nm, e) -> H1([nm, S("="), e, S(";")])

  pp-rho: Sig(nms, t) -> H1([H1(nms), S("::"), t, S(";")])

  pp-rho: Syn(nm, vars, t) -> H1([S("syn"), nm, 
          H1(<map(\s -> S(s)\)> vars), S("="), t, S(";")])

  pp-rho: Con(x) -> S(x)

  pp-rho: Var(x) -> x

  pp-rho: Const(x) -> x

  pp-rho: Int(x) -> S(<int-to-string> x)

  pp-rho: Str(x) -> S(<escape> x)

  pp-rho: Rule(l, r) -> Parens(H1([l, S("->"), r]))

  pp-rho: App(l, r) -> Parens(H1([l, r]))

  pp-rho: Fail -> S("fail")

  pp-rho: LChoice(l, r) -> Parens(H1([l, S("<+"), r]))

  pp-rho: Let(decs, e) -> Parens(
	  V0([H1([S("let"), V0(decs)]),
	      H1([S(" in"), e])]))

  pp-rho: Cut(e) -> H1([S("^"), e])

  pp-rho: PrimOp(p) -> Parens(H1([S("primOp"), S(<escape> p)]))

  pp-rho: XPat(e) -> H1([S("{"), e, S("}")])

  pp-rho: HasType(e, t) -> Parens(H1([e, S("::"), t]))

  pp-rho: RTTC(t, p) -> Parens(H1([t, S("?"), p]))

  pp-rho: Id(nm, 0) -> S(nm)
  pp-rho: Id(nm, nr) -> H0([S(nm), S("_"), S(<int-to-string> nr)])
