#! /bin/sh

name=${0%.*}
clean(){
  if $1 || test "$KEEP" -eq 0; then
    rm -f $name $name.c $name.o
  fi
}

. "$SRCDIR/defs"

clean true

make $name KEEP=$KEEP VERBOSE=$VERBOSE
res=$?

clean false
exit $res
