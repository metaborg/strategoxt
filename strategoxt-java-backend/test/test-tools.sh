#!/bin/sh -e

java -cp ../java/strategoxt.jar start org.strategoxt.tools.main-sdf2rtg -i strc1/Expressions.def -m Expressions | \
java -cp ../java/strategoxt.jar start org.strategoxt.tools.main-rtg2sig --module Expressions > /dev/null
