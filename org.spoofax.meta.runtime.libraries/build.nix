{ nixpkgs ? ../../nixpkgs
, runtime-libraries ? ../../runtime-libraries 
, strategoxt ? ../../strategoxt
, strj ? ../../strategoxt.jar
} :
let
  pkgs = import nixpkgs {};

  jobs = {
    build = pkgs.releaseTools.antBuild {
      name = "runtime-libraries";
      src = runtime-libraries;
      buildInputs = with pkgs; [ ecj openjdk ];

      postUnpack = ''
        cp ${strategoxt}/strategoxt/ant-contrib/strategoxt-antlib.xml runtime-libraries/org.spoofax.meta.runtime.libraries/
      '';

      preConfigure = ''
        cd org.spoofax.meta.runtime.libraries
      '';
    
      antTargets = ["all" "install"];
      antProperties = [
        { name = "eclipse.spoofaximp.strategojar"; value = strj; }
        { name = "output"; value = "$out"; }
      ];
      antBuildInputs = [ pkgs.ecj strategoxt strj ];

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };
  };

in jobs
