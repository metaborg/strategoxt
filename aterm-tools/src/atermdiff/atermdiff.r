module atermdiff
imports lib LayoutPreserve
signature
  constructors
    Input2: String -> Option
    Path: Option
    SquashedPath: Option
    NoPath: Option
    TopMost: Option
    UseAmbMark: Option

strategies

  main = iowrapNoOutput((id,ldiff),ops,my-usage)

  version = !"0.2"

  ops =   ArgOption("-i2",\s -> Input2(s)\)
  	+ Option("--path",!Path)
  	+ Option("--squashedpath",!SquashedPath)
  	+ Option("--nopath",!NoPath)
  	+ Option("--topmost",!TopMost)
  	+ Option("--useambmark",!UseAmbMark)

  my-usage = 
         where(option-value(\Program(prog) -> prog\,fail);
               ?prog;
               <printnl>
               (stderr,
                [prog, " version ",<version>(),"\n",
                 "usage : ", prog,
                 " [-S] -i file -i2 file [-o file] [-b]",
		 "\n\t\t{--path|--nopath|--squashedpath|--topmost}",
		 " [--useambmark]",
		 "\n\t\t[--help|-h|-?] [--version]\n"]);
               <exit> 1)

  ldiff = ?file1
	; option-value(\Input2(f) -> f\,fail)
	; file-exists
	; ReadFromFile => file2

	; 
	( (  has-option(!NoPath)
	  ; <table-create>"diff"
	  ; <layeq(printdiff,id)>(file1,file2)
	  ; (<not(table-get)>("diff","diff")
	    + <exit>1)
	  )
	+ (  has-option(!TopMost)
	  ; <table-create>"diff"
	  ; <layeq(printtopdiff,id)>(file1,file2)
	  ; (<not(table-get)>("diff","diff")
	    + <exit>1)
	  )
	+ ( has-option(!SquashedPath)
	  ; <laydiff-squash(has-option(!UseAmbMark))>(file1,file2)
	  ; try	( not(is-diff)	// if is-diff succeeds here the two files
				// are equal
		; try-echo(!"diff: ")
		; <exit>1
		)
	  )
	+ ( has-option(!Path)
	  ; <laydiff(has-option(!UseAmbMark))>(file1,file2)
	  ; try	( not(is-diff)	// if is-diff succeeds here the two files
				// are equal
		; try-echo(!"diff: ")
	  	; <exit>1
		)
	  )
	)

  try-echo(s) = try(not(has-option(!Silent));echo(s))

rules

  printdiff:
    (f,g)
  ->
    ()
    where ![f,g]; try-echo(!"diff: ")
	; <table-put>("diff","diff",1)

  printtopdiff:
    (f#(_),g#(_))
  ->
    ()
    where ![f,g]; try-echo(!"diff: ")
	; <table-put>("diff","diff",1)

