module M
imports asfix lib

  signature
    constructors
      label : Literal * Symbol -> Symbol
overlays

    label-overlay(u_20,v_20,w_20,x_20)
      = appl(prod([cf(sort("Literal")),cf(opt(layout)),lit(":"),cf(opt(layout)),cf(sort("Symbol"))],cf(sort("Symbol")),attrs([cons("label"),'id("Label-Sdf-Syntax")])), [u_20,v_20,appl(prod([char-class([58])],lit(":"),no-attrs),[58]),w_20,x_20])


strategies
    label-match(c_21,f_21)
      = label-overlay(c_21,id,id,f_21)

    label-build(k_21,n_21)
      = !label-overlay(<k_21>(),empty-layout(),empty-layout(),<n_21>())

    sdf-rmlabel = iowrap( topdown( try(\label-overlay(a,b,c,d) -> d\ ) ))
