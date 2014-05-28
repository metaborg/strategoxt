#!/bin/sh

java -jar ${STRJ} -i test07.str -la stratego-lib || exit 1

javac -cp ${STRJ} test07.java || exit 1

java -cp .:${STRJ} -Xmx1024m test07 || exit 1
