module strat-count

imports lib
signature
constructors
SVar: a -> b


strategies
main = iowrapNoOutput(strat-count,io-options)

strat-count: (options, trm) -> (options, trm)
   where
   where(!options;option-defined(?Output(outfile));<open-file>(outfile,"w") <+ !stdout => outfile);
   !trm;
   topdown( try( StratCount ) );
   <table-getlist>"strategies";
   map( { strat,count:?(strat, count); 
          <printnl>(outfile, [strat, "\t", <int-to-string>count]) } )
   

StratCount : 
   SVar( strat-name ) -> SVar( strat-name )
   where
      (
         <table-get>("strategies", strat-name );
         split(!1, id);
         add
      <+
         !1
     ) => new-count;
     <table-put>("strategies", strat-name, new-count )
