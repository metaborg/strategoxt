module rho-compiler
imports lib rho rho-utils rho-laws abox-ext

signature

  sorts Access FType CDecl CInstr ThunkPos

  constructors

    PUBLIC: Access
    PRIVATE: Access

    NOARG: FType
    VARPAT: FType
    DECOMPPAT: FType
    INTPAT: Int -> FType
    STRPAT: String -> FType
    CONSTRPAT: String -> FType
    FAILPAT: FType

    FUNC: String * Access * FType * List(CInstr) -> CDecl
    CONSTR: String -> CDecl
    ALLOCSTATIC: String -> CDecl
    EXTERNSTATIC: String -> CDecl

    MKENV: Int -> CInstr
    MKSUSP: Int * String -> CInstr
    MKINT: Int -> CInstr
    MKSTR: String -> CInstr
    MKFUNC: String -> CInstr
    MKCONSTR: String -> CInstr
    FAIL: CInstr
    ENTER: ThunkPos -> CInstr
    COPY: ThunkPos -> CInstr
    CALL: ThunkPos -> CInstr
    LCHOICE: ThunkPos * ThunkPos -> CInstr
    CUT: ThunkPos -> CInstr
    PRIMOP: String -> CInstr

    STATIC: String -> ThunkPos
    DYNAMIC: Int * Int -> ThunkPos

    Decomp: Id * Id -> Term

strategies

  rho-compile = iowrap(
    remove-hastypes;
    simplify-patterns;
    canonicalize;
    generate-code;
    output
  )

  simplify-patterns = topdown(repeat(simplify-pattern))

rules

  simplify-pattern:
    Rule(RTTC(tp, pat), e) -> Rule(pat, e)

  simplify-pattern:
    Rule(App(p1, p2), e) -> 
    Rule(Decomp(Id(xlhs, 0), Id(xrhs, 0)),
         App(App(Rule(p1, Rule(p2, e)), 
                 Var(Id(xlhs, 0))), Var(Id(xrhs, 0))))
    where <not(rec x(XPat(id) + App(x, id)))> p1;
          new => xlhs; new => xrhs

  simplify-pattern:
    Rule(pat, body) ->
    Rule(Var(Id(x, 0)), App(Rule(pat', body), App(f, Var(Id(x, 0)))))
    where 
      <rec x(XPat(?f); ![] + 
        App(x, id); \App(e1, e2) -> [e2 | e1 ]\)> pat => pats;
      <reverse; foldr(!Con("Void"), \(l, r) -> 
        App(App(Con("Tup"), l), r)\)> pats => pat';
      new => x

strategies

  canonicalize = Program(map(try(Def(id,
    rec x(
      Rule(id, x) <+
      ( LetLift; repeat(LetLet);
        Let(id, atomize-arguments);
        LetLet;
        Let(map(if(?Def(_, _), Def(id, x), id)), id)
      )
    )
  ))))

  atomize-arguments =
    (Const(id) + Fail + PrimOp(id)); LetLift
    + ( ?LChoice(e1, e2);
        where (new => x1);
        where (new => x2);
        !Let([Def(Id(x1, 0), e1), Def(Id(x2, 0), e2)], LChoice(Var(Id(x1, 0)), Var(Id(x2, 0))))
      )
    + ( ?Cut(e);
        where (new => x);
        !Let([Def(Id(x, 0), e)], Cut(Var(Id(x, 0))))
      )
    + rec x({f, f', y, a, new, nvar, ds:
        (Var(id) + Con(id)); LetLift
        <+ (
          ?App(f, a);
          where (<x> f => Let(ds, f'));
          where (new => nvar);
          !a;
          (?Var(y); !Let(ds, App(f', a))
          <+ !Let([Def(Id(nvar, 0), a) | ds], App(f', Var(Id(nvar, 0)))))
        )
        <+ (
          ?a;
          where (new => nvar);
          !Let([Def(Id(nvar, 0), a)], Var(Id(nvar, 0)))
        )
      })

  generate-code = 
    ?Program(decls);
    where (<get-sigs> decls => sigs);
    where (<get-defs> decls => defs);
    where (<get-tsigs; map(\(nm, _) -> CONSTR(nm)\)> decls => constrs);
    // Don't assume that all definitions have signatures.
    where (<union> (<map(Fst)> sigs, <map(Fst)> defs) => env');
    where (<map(\Id(nm, 0) -> (Id(nm, 0), STATIC(<esc-op> nm))\)> env' => env);
    where (<map(\(Id(nm, 0), _) -> EXTERNSTATIC(<esc-op> nm)\)> sigs => externs);
    where (<map(\(Id(nm, 0), e) -> 
      <gen> (1, env, e, <esc-op> nm, PUBLIC, NOARG)\)> defs => codes);
    where (<map(\(Id(nm, 0), _) -> 
      ALLOCSTATIC(<esc-op> nm)\)> defs => allocs);
    !<concat> [constrs, externs, allocs, <concat> codes]

  gen = rec g(gen-rule(g) + gen-let(g))

  gen-let(g) = 
    ?(lev, env, Let(decls, body), name, access, ftype);
    where (<get-defs> decls => defs);
    where (<add> (lev, 1) => sublev);
    where (<nzip0(\(n, (var, _)) -> 
      (var, DYNAMIC(sublev, n))\)> defs => env');
    where (<conc> (env, env') => subenv);
    where (<map(\(var, e) -> <g> (sublev, subenv, e, 
      <var2name> var, PRIVATE, NOARG)\)> defs => subcodes);
    where (<gen-basic> (sublev, subenv, body) => bodycode);
    where (<map(\(var, DYNAMIC(_, n)) -> MKSUSP(n, <var2name> var)\)> env' => initcode);
    where (<conc> ([MKENV(<length> defs)], initcode) => initcode');
    ![FUNC(name, access, ftype, <conc> (initcode', bodycode)) | <concat> subcodes]

  gen-rule(g) = 
    ?(lev, env, Rule(pat, body), name, access, ftype);
    where (<conc-strings> (name, "_") => subname);
    where (<gen-pat-code> (lev, env, pat) => (sublev, subenv, subftype));
    where (<g> (sublev, subenv, body, subname, PRIVATE, subftype) => subcode);
    ![FUNC(name, access, ftype, [MKFUNC(subname)]) | subcode]

  gen-pat-code = 
    ?(lev, env, Var(var));
    where (<add> (lev, 1) => sublev);
    where (![(var, DYNAMIC(sublev, 0)) | env] => subenv);
    !(sublev, subenv, VARPAT)

  gen-pat-code = 
    ?(lev, env, Decomp(lhs, rhs));
    where (<add> (lev, 1) => sublev);
    where (![(lhs, DYNAMIC(sublev, 0)), 
             (rhs, DYNAMIC(sublev, 1)) | env] => subenv);
    !(sublev, subenv, DECOMPPAT)

  gen-pat-code = 
    ?(lev, env, Const(Int(n)));
    !(lev, env, INTPAT(n))

  gen-pat-code = 
    ?(lev, env, Const(Str(s)));
    !(lev, env, STRPAT(s))

  gen-pat-code = 
    ?(lev, env, Con(name));
    !(lev, env, CONSTRPAT(name))

  gen-pat-code = 
    ?(lev, env, Fail);
    !(lev, env, FAILPAT)

  gen-basic = gen-simple + rec g(gen-app(g))

  gen-simple = ?(lev, env, Const(Int(n))); ![MKINT(n)]

  gen-simple = ?(lev, env, Const(Str(s))); ![MKSTR(s)]

  gen-simple = ?(lev, env, Fail); ![FAIL()]

  gen-simple = ?(lev, env, PrimOp(op)); ![PRIMOP(op)]

  gen-simple = 
    ?(lev, env, LChoice(Var(x1), Var(x2)));
    where (<lookup-var> (lev, env, x1) => tpos1);
    where (<lookup-var> (lev, env, x2) => tpos2);
    ![LCHOICE(tpos1, tpos2)]

  gen-simple = 
    ?(lev, env, Cut(Var(x)));
    where (<lookup-var> (lev, env, x) => tpos);
    ![CUT(tpos)]

  gen-app(g) = 
    ?(lev, env, Var(x));
    where (<lookup-var> (lev, env, x) => tpos);
    ![ENTER(tpos), COPY(tpos)]

  gen-app(g) = ?(lev, env, Con(c)); ![MKCONSTR(c)]

  gen-app(g) =
    ?(lev, env, App(lhs, Var(y))); 
    where (<g> (lev, env, lhs) => lhscode);
    where (<lookup-var> (lev, env, y) => tpos);
    <conc> (lhscode, [CALL(tpos)])

  lookup-var = 
    ?(lev, env, var);
    where (<lookup <+ !["undefined variable: ", var]; fatal-error> 
      (var, env) => tpos);
    !tpos;
    (DYNAMIC(?lev'; !<subt> (lev, lev'), id) + STATIC(id))

rules

  output: 
    funcs ->
    V1(<concat>
       [ [ S("#include \"rho.h\"") ]
       , [ V0(<map(forward-decl <+ !S(""))> funcs) ]
       , <map(output-func)> funcs
       ])

  func-type: 
    FUNC(name, access, NOARG, _) -> 
    H0([<acc2code> access, S("MKCLOSURECODE("), S(name), S(")")])
  func-type: 
    FUNC(name, access, type, _) -> 
    H0([<acc2code> access, S("MKFUNCCODE("), S(name), S(")")])
    where <not(?NOARG)> type

  acc2code: PUBLIC -> S("")
  acc2code: PRIVATE -> S("static ")

  forward-decl: f@FUNC(name, _, _, _) -> H0([<func-type> f, S(";")])

  type2code: NOARG -> S("NOARG();")
  type2code: VARPAT -> S("VARPAT();")
  type2code: DECOMPPAT -> S("DECOMPPAT();")
  type2code: INTPAT(n) -> H0([S("INTPAT("), <i2s> n, S(");")])
  type2code: STRPAT(s) -> H0([S("STRPAT("), <quote> s, S(");")])
  type2code: CONSTRPAT(name) -> H0([S("CONSTRPAT("), S(<esc-op> name), S(");")])
  type2code: FAILPAT -> S("FAILPAT();")

  output-func: 
    f@FUNC(name, _, type, code) ->
    V0(<concat>
       [ [ <func-type> f
         , S("{")
         , H0([S("ENTERED("), S(name), S(");")])
         , <type2code> type
         ]
       , <map(output-code)> code
       , [ S("}") ]
       ])
  output-func: 
    CONSTR(name) -> H0([S("CONSTR("), S(name), 
                        S(", "), S(<esc-op> name), S(")")])
  output-func: 
    ALLOCSTATIC(name) -> H0([S("ALLOCSTATIC("), S(name), S(")")])
  output-func: 
    EXTERNSTATIC(name) -> H0([S("EXTERNSTATIC("), S(name), S(")")])

  output-code: MKENV(size) -> H0([S("MKENV("), <i2s> size, S(");")])
  output-code: 
    MKSUSP(disp, name) -> 
    H0([S("MKSUSP(env, "), <i2s> disp, S(", "), S(name), S(");")])
  output-code: MKINT(n) -> H0([S("MKINT(thk, "), <i2s> n, S(");")])
  output-code: MKSTR(s) -> H0([S("MKSTR(thk, "), <quote> s, S(");")])
  output-code: MKFUNC(name) -> H0([S("MKFUNC(thk, env, "), S(name), S(");")])
  output-code: MKCONSTR(name) -> H0([S("MKCONSTR(thk, &"), S(<esc-op> name), S(");")])
  output-code: FAIL() -> S("FAIL();")
  output-code: 
    ENTER(tpos) -> 
    H0([S("ENTER("), <ref-thunkpos> tpos, S(");")])
  output-code: 
    COPY(tpos) ->
    H0([S("COPY(thk, "), <ref-thunkpos> tpos, S(");")])
  output-code: 
    CALL(tpos) ->
    H0([S("CALL(thk, "), <ref-thunkpos> tpos, S(");")])
  output-code: 
    LCHOICE(tpos1, tpos2) ->
    H0([S("LCHOICE(thk, "), <ref-thunkpos> tpos1, 
        S(", "), <ref-thunkpos> tpos2, S(");")])
  output-code: 
    CUT(tpos) ->
    H0([S("CUT(thk, "), <ref-thunkpos> tpos, S(");")])
  output-code: PRIMOP(op) -> H0([S("CALLPRIMOP(thk, "), S(op), S(");")])

  ref-thunkpos: STATIC(name) -> H0([S("&"), S(name), S("_thk")])
  ref-thunkpos: 
    DYNAMIC(delta, disp) -> <follow-eps> (delta, disp)

  follow-eps: 
    (delta, disp) -> 
    H0([S("env"), H0(<follow-eps'> delta), 
      S("->thks["), <i2s> disp, S("]")])
  follow-eps': 0 -> []
  follow-eps': n -> [S("->up") | <subt; follow-eps'> (n, 1)]
  where <not(eq)> (n, 0)

  quote: s -> S(<concat-strings> ["\"", <escape> s, "\""])

  i2s: n -> S(<int-to-string> n)

  var2name: 
    Id(nm, nr) -> 
    <concat-strings> [<esc-op> nm, "_", <int-to-string> nr]

strategies

  esc-op =
    explode-string;
    map(esc-op-char <+ (\x -> <implode-string> [x]\));
    ?xs;
    !["_" | xs];
    concat-strings

rules

  esc-op-char:  43 -> "_add"
  esc-op-char:  45 -> "_sub"
  esc-op-char:  42 -> "_mul"
  esc-op-char:  47 -> "_div"
  esc-op-char:  58 -> "_con"
  esc-op-char:  60 -> "_lt"
  esc-op-char:  62 -> "_gt"
  esc-op-char:  61 -> "_eq"
  esc-op-char: 124 -> "_seq"
  esc-op-char:  38 -> "_and"
  esc-op-char:  33 -> "_not"
  esc-op-char:  39 -> "_prime"
  esc-op-char:  91 -> "_bo"
  esc-op-char:  93 -> "_bc"
  esc-op-char:  46 -> "_dot"
