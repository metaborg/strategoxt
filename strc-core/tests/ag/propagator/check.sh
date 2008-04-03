#!/bin/sh

name=$0
clean(){
  if $1 || test "$KEEP" -eq 0; then
    rm -f $name.graph
    rm -f $name-test.str $name-test.graph
    rm -f $name*.sci.* $name*.atree $name*.dep
  fi
}


MAKEKEEP=$KEEP
if test $MAKEKEEP -lt 2; then
  MAKEKEEP=2
fi

. "$SRCDIR/defs"

clean true
$MAKE $name.graph VERBOSE=$VERBOSE KEEP=$MAKEKEEP
$MAKE $name-test.str $name-test.graph VERBOSE=$VERBOSE KEEP=$MAKEKEEP

diff -u $name.graph $name-test.graph
res=$?

clean false
exit $res
