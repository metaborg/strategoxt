#! /bin/sh stratego

stratego script
:load "lib.sim"

strategies

  usage = ? prog; 
    <fatal-error> ["usage: ", prog, " -i file -o files"]

> parse-options(io-options)
> option-defined(Program(?prog))
> option-defined(Input(?'in))  <+ <usage> prog
> option-defined(Output(?out)) <+ <usage> prog

> open(!'in)
> save(!out)

> ?res; where(<WriteToTextFile> (out, res))
> ?res; <WriteToFile> (out, res)

> echo
