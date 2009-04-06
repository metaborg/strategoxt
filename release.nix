{ nixpkgs ? ../nixpkgs
}:

let

  pkgs = import nixpkgs { };

  strategoxtBaseline =
    pkgs.stdenv.mkDerivation {
      name = "strategoxt-baseline";
      src = pkgs.fetchurl {
              url = "http://releases.strategoxt.org/strategoxt/strategoxt-0.17pre18222-xi157j0s/strategoxt-0.17pre18222.tar.gz";
              sha256 = "1d8cd6bc0d24281edef302434277f74dbe5ccac8493e410af5cce9cef5ec43d4";
            };

      buildInputs = defaultBuildInputs pkgs ;
    };

    defaultBuildInputs = pkgs :
      [ pkgs.pkgconfig
        pkgs.aterm
        pkgs.strategoPackages017.sdf
        pkgs.getopt
      ];

    defaultSvnBuildInputs = pkgs :
      [ pkgs.autoconf
        pkgs.automake19x
        pkgs.libtool
      ] ++ defaultBuildInputs pkgs;

  makeStrategoXTTarball = name : src : baseline : official :  
    pkgs.releaseTools.makeSourceTarball {
      name = name;
      version = builtins.readFile ./version;

      src = src;

      configureFlags = " --with-strategoxt=${baseline} --enable-werror";

      buildInputs = defaultSvnBuildInputs pkgs ;

      doCheck = false;
      dontInstall = false;
      useTempPrefix = false;
      tarballs = "*.tar.gz";

      officialRelease = official;
    };

  jobs = rec {

    tarball =
      { strategoxtSrc ? {outPath = ./. ; rev = 1234;}
      , officialRelease ? false
      }: 
      makeStrategoXTTarball "strategoxt-tarball" strategoxtSrc strategoxtBaseline officialRelease ;

    build =
      { tarball ? jobs.tarball {}
      , system ? "i686-linux"
      }:
 
      with import nixpkgs {inherit system;};

      releaseTools.nixBuild {
        name = "strategoxt";
        src = tarball;
 
        buildInputs = defaultBuildInputs pkgs ;

      };

  } ;

  
in jobs

