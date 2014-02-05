{ nixpkgs ? ../../nixpkgs
, runtime-libraries ? ../../runtime-libraries 
, strategoxt ? ../../strategoxt
, strj ? ../../strj-build
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
        cp ${strategoxt}/strategoxt/ant-contrib/strategoxt-antlib.xml .
      '';
    
      antTargets = ["hydra"];
      antProperties = [
        { name = "eclipse.spoofaximp.strategojar"; value = "${strj}/share/strategoxt/strategoxt/strategoxt.jar"; }
        { name = "output"; value = "$out"; }
      ];
      antBuildInputs = [ pkgs.ecj strategoxt strj ];

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };
  };

in jobs
