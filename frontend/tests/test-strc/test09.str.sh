#!/bin/sh

# Compile a library
${STRC} -i test09-lib.str --library -la stratego-lib || exit 1

# Link with the library
${STRC} -i test09.str -la libtest09-lib.la || exit 1

# Run the program
./test09 || exit 1
