#!/bin/sh -x

# Compile a library
${STRC} -i "${SRCDIR}/test09-lib.str" -o-la libtest09-lib --library -la stratego-lib || exit 1

# Link with the library
${STRC} -i "${SRCDIR}/test09.str" -o test09 -la-la libtest09-lib -I ./ || exit 1

# Run the program
./test09 || exit 1
