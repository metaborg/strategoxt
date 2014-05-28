{ nixpkgs ? ../../nixpkgs
, javaFront ? { outPath = ../../java-front ; rev = 1234; }
, strategoxtJava ? { outPath = ../../strategoxt ; rev = 1234; }
, baselineTarball ? ../../strategoxt-distrib.tar
} :
let
  pkgs = import nixpkgs {};

  baselineTarball = pkgs.fetchurl {
    url = https://github.com/metaborg/strategoxt/releases/download/baseline-2/strategoxt-distrib.tar;
    sha256 = "545e14a2ae302f96a35b95683ffb1915d4bbaa48e112f552d8469a97f40877e3";
  };
  
  baseline = pkgs.stdenv.mkDerivation {
      name = "strategoxt-baseline";


      buildInputs = with pkgs; [ ];

      buildCommand = ''
        ensureDir $out
        cd $out
        tar -xf ${baselineTarball}
      '';
  };

  bootstrap = baseline: nr:
    pkgs.releaseTools.antBuild {
      name = "strategoxt-java-${toString nr}";
      src = strategoxtJava;
      buildInputs = with pkgs; [ strategoPackages.sdf ecj openjdk ];

      preConfigure = ''
        cd strategoxt
        ulimit -s unlimited
      '';

      postUnpack = ''
        cd $sourceRoot
        rm -f strategoxt/syntax/java-front
        mkdir -p strategoxt/syntax/java-front
        cp -Rv ${javaFront}/* strategoxt/syntax/java-front/
        chmod -R a+w strategoxt/syntax/java-front
        cd ..
      '';
      
      antTargets = ["all" "install"] ++ (pkgs.lib.optional (nr == 3) "test-compiler");
      antProperties = [
        { name = "revision"; value = "${toString strategoxtJava.rev}"; }
        { name = "sdf2bundle"; value = pkgs.strategoPackages.sdf; }
        { name = "baseline"; value = baseline; }
        { name = "install-prefix-out"; value = "$out"; }
      ] ;
      antBuildInputs = [
        (pkgs.lib.concatStrings [baseline "/share/strategoxt/strategoxt" ])
        pkgs.ecj
      ] ; 

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };

  test = baseline: test-target:
    pkgs.releaseTools.antBuild {
      name = "strategoxt-java-test";
      src = strategoxtJava;
      buildInputs = with pkgs; [ strategoPackages.sdf ecj openjdk ];

      preConfigure = ''
        cd strategoxt
        ulimit -s unlimited
      '';

      postUnpack = ''
        cd $sourceRoot
        rm -f strategoxt/syntax/java-front
        mkdir -p strategoxt/syntax/java-front
        cp -Rv ${javaFront}/* strategoxt/syntax/java-front/
        chmod -R a+w strategoxt/syntax/java-front
        cd ..
      '';

      antTargets = ["install" test-target];
      antProperties = [
        { name = "revision"; value = "${toString strategoxtJava.rev}"; }
        { name = "sdf2bundle"; value = pkgs.strategoPackages.sdf; }
        { name = "baseline"; value = baseline; }
        { name = "install-prefix-out"; value = "$out"; }
      ] ;
      antBuildInputs = [
        (pkgs.lib.concatStrings [baseline "/share/strategoxt/strategoxt" ])
        pkgs.ecj
      ] ; 

      ANT_OPTS="-Xss8m -Xmx1024m";

      dontInstall = true;
    };

  jobs = {

    bootstrap1 = bootstrap baseline 1;
    bootstrap2 = bootstrap jobs.bootstrap1 2;
    bootstrap3 = bootstrap jobs.bootstrap2 3;
    test-compiler = test jobs.bootstrap3 "test-compiler";
    test-interpreter = test jobs.bootstrap3 "test-interpreter";
  };
in
  jobs
