module visamb

imports Visamb xt-paths ppp-wrap

strategies
  main = 
    parse-options(io-options); 
    store-options;
    (
       need-help(default-usage)
    <+ 
       input-file;
       apply-strategy((id,visamb));
       ppp-output-file( 
        !["-p", <concat-strings>[XT, "/share/xt/visamb.pp"], 
          "-p", <concat-strings>[SDFTOOLS,"/share/sdf-tools/sdf.cons.pp"]]);
       report-success
    <+ 
       report-failure
    )

