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

  makeStrategoXTTarball = { name, baseline, useTempPrefix ? false }:  
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
      inherit useTempPrefix;
    };

  svn_tarball_run1 = 
    makeStrategoXTTarball {
      name = "strategoxt-tarball1" ;
      baseline = strategoxtBaseline ;
    } ;

  svn_tarball_run2 = 
    makeStrategoXTTarball {
      name = "strategoxt-tarball2" ;
      baseline = svn_tarball_run1 ;
    } ;

  systemPkgs = import nixpkgs {inherit system;};

  jobs = rec {

    tarball = 
      makeStrategoXTTarball {
      name = "strategoxt-tarball";
      baseline = svn_tarball_run2;
      useTempPrefix = true;
    };

    build =
      { tarball ? jobs.tarball
      }:
 
      with systemPkgs ;

      releaseTools.nixBuild {
        name = "strategoxt";
        src = tarball;
        buildInputs = defaultBuildInputs systemPkgs ;
      };

    rpm_fedora5i386 = makeRPM_i686 (diskImages: diskImages.fedora5i386) 20;
    rpm_fedora9i386 = makeRPM_i686 (diskImages: diskImages.fedora9i386) 50;
    rpm_fedora10i386 = makeRPM_i686 (diskImages: diskImages.fedora10i386) 40;
    rpm_opensuse103i386 = makeRPM_i686 (diskImages: diskImages.opensuse103i386) 40;
    rpm_opensuse110i386 = makeRPM_i686 (diskImages: diskImages.opensuse110i386) 40;

    
    deb_debian40i386 = makeDeb_i686 (diskImages: diskImages.debian40i386) 40;
#    deb_debian50i386 = makeDeb_i686 (diskImages: diskImages.debian50i386) 30;
    deb_ubuntu804i386 = makeDeb_i686 (diskImages: diskImages.ubuntu804i386) 50;
#    deb_ubuntu810i386 = makeDeb_i686 (diskImages: diskImages.ubuntu810i386) 40;



  } ;

  makeRPM_i686 = makeRPM "i686-linux";

  makeRPM =
    system: diskImageFun: prio:
    { tarball ? jobs.tarball {}
    }:

    with import nixpkgs {inherit system;};

    releaseTools.rpmBuild rec {
      name = "aterm-rpm";
      src = tarball;
      diskImage = diskImageFun vmTools.diskImages;
      meta = { schedulingPriority = toString prio; };
    };


  makeDeb_i686 = makeDeb "i686-linux";
  
  makeDeb =
    system: diskImageFun: prio:
    { tarball ? jobs.tarball {}
    }:

    with import nixpkgs {inherit system;};

    releaseTools.debBuild {
      name = "aterm-deb";
      src = tarball;
      diskImage = diskImageFun vmTools.diskImages;
      meta = { schedulingPriority = toString prio; };

      # Work around a bug in (apparently) checkinstall, which causes
      # `make install' to fail on Ubuntu 8.10.
      preInstall = ''
        mkdir -p /usr/share/doc/aterm
      '';
    };

 
in jobs

