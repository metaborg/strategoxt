module quoted-keywords
signature
  constructors
    'id         : Term -> Term
    'module     : Term -> Term
    'rules      : Term -> Term
    'strategies : Term
rules

 A : 'id(x) -> 'module('rules('strategies))

strategies

 B = 'id('rules(id,id); 'strategies)

 main = id