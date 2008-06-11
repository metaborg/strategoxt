#!/bin/sh

# Compile a library
${STRC} -i "${SRCDIR}/test09-lib.str" -o libtest09-lib.la --library -la stratego-lib || exit 1

# Link with the library
${STRC} -i "${SRCDIR}/test09.str" -o test09 -la libtest09-lib.la -I ./ || exit 1

# Run the program
./test09 || exit 1
