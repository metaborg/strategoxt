module happy2yacc
imports yacc lib
signature
  constructors
    HRule : Symbol * Action * List(Prod([List(Symbol),Action])) -> Rule
    Token : a -> a
    Token : a * a -> a
strategies

  main = iowrap(Main)

  Main = alltd(HRule2Rule + HToken2Token)

rules

  HRule2Rule : HRule(sym, act, arms) -> Rule(sym, <map(Fst)> arms, None)

  HToken2Token : Token(symacts) -> Token(None, <map(Fst)> symacts)
