{ nixpkgs ? ../nixpkgs
, officialRelease ? false
, strategoxtSrc ? {outPath = ./. ; rev = 1234;}
, system ? "i686-linux"
}:

let
  i686pkgs = import nixpkgs { system = "i686-linux"; };

  pkgs = import nixpkgs {};

  strategoxtBaseline =
    pkgs.stdenv.mkDerivation {
      name = "strategoxt-baseline";
      src = pkgs.fetchurl {
              url = "http://releases.strategoxt.org/strategoxt/strategoxt-0.17pre18583-i573smdl/strategoxt-0.17pre18583.tar.gz";
              sha256 = "4769d82a62d1c53fc3f4631ddef489e638ff2361a2eceb1226f2b56ab45b7784";
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
    i686pkgs.releaseTools.makeSourceTarball {
      name = name;
      version = builtins.readFile ./version;

      src = src;

      configureFlags = " --with-strategoxt=${baseline} --enable-werror";

      buildInputs = defaultSvnBuildInputs i686pkgs ;

      doCheck = false;
      dontInstall = false;
      useTempPrefix = false;
      tarballs = "*.tar.gz";

      officialRelease = official;
    };

  svn_tarball_run1 = 
    makeStrategoXTTarball "strategoxt-tarball1" strategoxtSrc strategoxtBaseline officialRelease ;

  svn_tarball_run2 = 
    makeStrategoXTTarball "strategoxt-tarball2" strategoxtSrc svn_tarball_run1 officialRelease ;

  jobs = rec {

    tarball = 
      makeStrategoXTTarball "strategoxt-tarball" strategoxtSrc svn_tarball_run2 officialRelease ; 

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

