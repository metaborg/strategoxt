#!/bin/sh -e

CLASSPATH="../java/spoofax-libs.jar:../java/bin:../java/strategoxt.jar"
java -cp $CLASSPATH start org.strategoxt.tools.main-sdf2rtg -i strc1/Expressions.def -m Expressions | \
java -cp $CLASSPATH start org.strategoxt.tools.main-rtg2sig --module Expressions > /dev/null

java -cp $CLASSPATH start org.strategoxt.tools.main-pack-sdf -i strc1/Expressions.sdf > /dev/null
