module input-options
imports lib parse-options

strategies

  main = stdio(parse-options(io-options))

  io-options =
	Option("-silent", !Silent())
	+ ArgOption("-i", \x -> Input(x)\ )
	+ ArgOption("-o", \x -> Output(x)\ )
	+ Option("-h", !Help())
