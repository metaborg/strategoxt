{ nixpkgs ? ../../nixpkgs
, javaFront ? { outPath = ../../java-front ; rev = 1234; }
, strategoxtJava ? { outPath = ../../strategoxt ; rev = 1234; }
, baseline ? ../../strategoxt.jar
} :
let
  pkgs = import nixpkgs {};

  baseline = pkgs.fetchurl {
    url = https://github.com/metaborg/strategoxt/releases/download/baseline-2/strategoxt-distrib.tar;
    sha256 = "e4d3920bb5b5a9d365e12d7f4626d93c42eafe4996c284cab5c7960c1da645f0";
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
        mkdir baseline
        cd baseline
        cp ${baseline} .
        tar -xf ${baseline} .
        cd ../..
      '';

      antTargets = ["all" "install"] ++ (pkgs.lib.optional (nr == 3) "test-compiler");
      antProperties = [
        { name = "revision"; value = "${toString strategoxtJava.rev}"; }
        { name = "sdf2bundle"; value = pkgs.strategoPackages.sdf; }
        { name = "install-prefix-out"; value = "$out"; }
      ] ;
      antBuildInputs = [ pkgs.ecj baseline] ;

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
        { name = "install-prefix-out"; value = "$out"; }
      ] ;
      antBuildInputs = [ pkgs.ecj baseline] ;

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
