module canonicalize
imports strategy sugar lib C C-simplify dynamic-rules

strategies

  canonicalize =
    iowrap(
      downup2(repeat(Canon),repeat(Canon));
      mark-fresh-vars
    )

rules

  CallIdFun :
    Id -> Call(SVar("_id"),[])

  CallFailFun :
    Fail -> Call(SVar("_fail"),[])

  Canon :
    Call(f, args) -> Let(defs', Call(f, args'))
    where <unzip(try(CallIdFun + CallFailFun); 
                 (CreateDef1 <+ 
                  not(Call(SVar(id),[])); CreateDef2 <+ 
                  split(id,![])))> args => (args', defs)
        ; <concat> defs => defs'
        ; not([])

  CreateDef1 :
    Let(defs,Call(SVar(f),[])) -> (Call(SVar(f),[]), defs)

  CreateDef2 :
    s -> (Call(SVar(f),[]), [SDef(f,[],s)])
    where new => f

  Canon :
    Call(f, args) -> Call(f, args')
    where <rec x([(CallIdFun + CallFailFun)|try(x)] <+ [id|x])> args => args'

  Canon :
    All(s) -> Call(SVar("_all"),[s])

  Canon :
    One(s) -> Call(SVar("_one"),[s])

  Canon :
    Some(s) -> Call(SVar("_some"),[s])

  Canon :
    Thread(s) -> Call(SVar("_thread"),[s])


  Canon :
    Scope([],s) -> s

  Canon :
    Scope(xs,Scope(ys,s)) -> Scope(<conc>(xs,ys),s)

  Canon : 
    Seq(Id, s) -> s

  Canon : 
    Seq(s, Id) -> s

  Canon :
    Seq(Where(s), Build(t)) -> Seq(s, Build(t))

  Canon :
    Seq(Where(s1), Seq(Build(t), s2)) -> Seq(s1, Seq(Build(t), s2))

  Canon :
    SDef(f, [], Rec(x, s)) ->
    SDef(f, [], <alltd(?Call(SVar(x),[]); !Call(SVar(f),[]))> s)

  Canon :
    Rec(x, s) -> Let([SDef(x, [], s)], Call(SVar(x),[]))

  Canon :
    SDef([DontInline],f,xs,s) -> SDef(f,xs,s)


strategies

  mark-fresh-vars =
    id
