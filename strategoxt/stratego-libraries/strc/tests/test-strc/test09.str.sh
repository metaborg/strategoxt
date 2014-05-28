#!/bin/sh

# Compile a library
mkdir -p org/test09_lib
java -jar ${STRJ} -i test09-lib.str --library -la stratego-lib -p "org.test09_lib" -o org/test09_lib || exit 1 

# Compile the library's java
javac -cp .:${STRJ} org/test09_lib/*.java || exit 1

# Compile the module
java -jar ${STRJ} -i test09.str -la org.test09_lib -p test09 -o test09 || exit 1

# Compile the module's java
javac -cp .:${STRJ} test09/*.java || exit 1

# Run the program
java -cp .:${STRJ} -Xmx1024m test09/test09 || exit 1

rm -rf org test09