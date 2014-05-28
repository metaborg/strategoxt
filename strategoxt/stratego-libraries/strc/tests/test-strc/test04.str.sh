#!/bin/sh

java -jar ${STRJ} -i test04.str -la stratego-lib || exit 1 

javac -cp ${STRJ} test04.java || exit 1

java -cp .:${STRJ} -Xmx1024m test04 || exit 1 
