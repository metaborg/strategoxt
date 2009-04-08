{ nixpkgs ? ../nixpkgs
, officialRelease ? false
, strategoxtSrc ? {outPath = ./. ; rev = 1234;}
, system ? "i686-linux"
}:

let

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

  makeStrategoXTTarball = name : baseline :
    pkgs.releaseTools.makeSourceTarball {
      name = name;
      version = builtins.readFile ./version;

      src = strategoxtSrc;

      configureFlags = " --with-strategoxt=${baseline} --enable-werror";

      buildInputs = defaultSvnBuildInputs pkgs ;

      doCheck = false;
      dontInstall = false;
      tarballs = "*.tar.gz";

      inherit officialRelease;
    };

  svn_tarball_run1 = 
    makeStrategoXTTarball "strategoxt-tarball1" strategoxtBaseline;

  svn_tarball_run2 = 
    makeStrategoXTTarball "strategoxt-tarball2" svn_tarball_run1;

  systemPkgs = import nixpkgs {inherit system;};

  jobs = rec {

    tarball = 
      makeStrategoXTTarball "strategoxt-tarball" svn_tarball_run2; 

    build =
      { tarball ? jobs.tarball
      }:
 
      with systemPkgs ;

      releaseTools.nixBuild {
        name = "strategoxt";
        src = tarball;
 
        buildInputs = defaultBuildInputs systemPkgs ;

      };

  } ;

  
in jobs

