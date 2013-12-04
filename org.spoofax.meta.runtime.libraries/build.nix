{ nixpkgs ? ../../nixpkgs
, runtime-libraries ? ../../runtime-libraries 
, strategoxt ../../strategoxt
, stratego-jar ? ../../strategoxt.jar
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
	cp strategoxt/strategoxt/ant-contrib/strategoxt-antlib.xml .
      '';

      antTargets = ["all" "install"];
      antProperties = [
        { name = "eclipse.spoofaximp.strategojar"; value = stratego-jar; }
        { name = "output"; value = "$out"; }
      ];
      antBuildInputs = [ pkgs.ecj stratego-jar ];

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };
  };

in jobs
