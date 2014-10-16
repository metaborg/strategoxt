#!/bin/sh

java -jar ${STRJ} -i test02.str -la stratego-lib || exit 1

javac -cp ${STRJ} test02.java || exit 1

java -cp .:${STRJ} -Xmx1024m test02 || exit 1
