module XML

signature
constructors
external-dtd: a -> a
Document: a * a -> a
Prolog : a * a -> a
DocType: a * a * a -> a
Name: a -> a
ElementDecl: a * a -> a
AttlistDecl: a * a -> a
Comment: a -> a 
EMPTY: a
Mixed2: a
Children: a * a -> a
appl: a * a -> a
Seq:  a * a -> a
CP: a * a -> a
AttDef: a * a * a -> a
REQUIRED: a
IMPLIED : a
FIXED : a * a -> a
Name : a -> a
Choice: a *a -> a
