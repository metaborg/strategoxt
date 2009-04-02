#! /bin/bash

function die() {
  echo $1 > /dev/stderr
  exit 1
}

if [ "x$1" == "x" ] ; then
  die "Must provide .ctree file"
fi

echo -e "\E[47;34m===========[ compiling - s2j ]====\E[0m"
../../str/s2j --verbose 100 -i $1 | format-check --rtg $HOME/.nix-profile/share/java-front/Java-15.rtg | pp-java -o Main.java || die "s2j failed"

libs=../../../ext/aterm-1.6.jar:../../../ext/jjtraveler-0.4.3.jar:../../../ext/shared-objects-1.4.jar

echo -e "\E[47;34m=========[ compiling - javac ]====\E[0m"
javac -cp ../../java:${libs} Main.java || die "javac failed"

echo -e "\E[47;34m=================[ executing ]====\E[0m"
java -cp ../../java:${libs}:. Main || die "execution failed"

