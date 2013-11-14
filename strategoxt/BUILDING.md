# Building instructions

## Assumptions

- Apple OS X or some mainstream Linux distro
- Git installed and ready
- JDK 1.7 installed, JAVA_HOME set
- Apache Ant installed
- Wget and unzip
- Bash shell

## Initialization

Run `source osx-init.sh` or `source linux-init.sh` depending on your platform. This will delete the *baseline* directory (if it exists) and pull in the latest baseline. It will also link *syntax/java-front* to a checkout that it will clone.

## Building

Run `build.sh clean|build|install|test`. If you run the *install* target it will install it in a *dist* directory in the current source directory.

## Bootstrapping

To bootstrap StrategoXT using the previously just installed StrategoXT (from the *dist* directory) you should run:

`STRJ_BASELINE_BASE=dist/share/strategoxt ./build.sh clean|build|install`
