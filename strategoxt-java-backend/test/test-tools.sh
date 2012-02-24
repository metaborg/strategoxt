#!/bin/sh -e

CLASSPATH="../java/spoofax-libs.jar:../java/bin:../java/strategoxt.jar"
java -cp $CLASSPATH start org.strategoxt.tools.main-sdf2rtg -i strc1/Expressions.def -m Expressions | \
java -cp $CLASSPATH start org.strategoxt.tools.main-rtg2sig --module Expressions > /dev/null

java -cp $CLASSPATH start org.strategoxt.tools.main-pack-sdf -i strc1/Expressions.sdf > /dev/null

java -cp $CLASSPATH start org.strategoxt.tools.main-pack-sdf -i sdf-ext/Test.sdf > sdf-ext/Test-filtered.sdf

if grep -E "@|NAM" sdf-ext/Test-filtered.sdf; then
  echo Illegal output from pack-sdf
  exit 1
fi

echo 'Success!'
