module option-demo
imports options

strategies

main =
   iowrap(id, 
          Option("--option1",
                 id, 
                 !"--option1        This is a an example option")
         +ArgOption("--arg1", 
                 id, 
                 !"--arg1           This is an example arg option"))

// Optional short description
short-description(p) = !["Usage: ", <p>(), " [options]"]   

// Optional long description
long-description(p) = !["This is a test program to demonstrate use of ",
                        "parse-options and  generation of usage ",
                        "info from option and switch specificatios. ",
                        "These now contain usage info as additional ",
                        "third argument."]
