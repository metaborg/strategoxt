{ nixpkgs ? ../../nixpkgs
, runtime-libraries ? ../../runtime-libraries 
, strategoxt ? ../../strategoxt.jar
} :
let
  pkgs = import nixpkgs {};

  jobs = {
    build = pkgs.releaseTools.antBuild {
      name = "runtime-libraries";
      src = runtime-libraries;
      buildInputs = with pkgs; [ ecj openjdk ];
    
      preConfigure = ''
        cd org.spoofax.meta.runtime.libraries
        ulimit -s unlimited
      '';

      postUnpack = ''
      '';

      antTargets = ["all"];
      antProperties = [
        { name = "eclipse.spoofaximp.strategojar"; value = strategoxt; }
      ];
      antBuildInputs = [ pkgs.ecj strategoxt ];

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };
  };

in jobs
