#! /bin/sh

FAIL=0
PASS=0
REPORT=""
IFS=''

incfail() {
  FAIL=$(($FAIL+1))
}

incpass() {
  PASS=$(($PASS+1))
}

appendreport() {
  REPORT="$REPORT\n$line"
}

testgenfail() {
  mod=check-parenthesize-$def
  ${SDF2PARENTHESIZE} -i $def.def -o $mod.str -m $main --lang $def --omod $mod
  if test $? -eq 0; then
    incfail
    line="* FAIL: parenthesize generatin for $def succeeded (should fail)" appendreport
  else
    incpass
    line="* PASS: parenthesize generatin for $def failed (and should fail)" appendreport
  fi
}

testcompilesuccess() {
  mod=check-parenthesize-$def
  ${SDF2PARENTHESIZE} -i $def.def -o $mod.str -m $main --lang $def --omod $mod
  if test $? -eq 1; then
    incfail
    line="* FAIL: parenthesize generation for $def failed (should succeed)" appendreport
  else
    $STRC --main io-$mod -i $mod.str -c
    if test $? -eq 1; then
      incfail
      line="* FAIL: compilation of parenthesizer for $def failed (should succeed)" appendreport
    else
      incpass
      line="* PASS: testsuite $suite succeeded (and should succeed)" appendreport
    fi
  fi

  rm -f $mod.c $mod.str $mod.dep
}

def=Exp    main=Exp    testcompilesuccess
def=ExpAmb main=ExpAmb testcompilesuccess
def=Exp    main=Foo    testgenfail
def=ExpAmb main=Foo    testgensuccess

echo "===================================================================="
echo "                       sdf2parenthesize checks                      "
echo "===================================================================="
echo -e "$REPORT"
echo ""
echo "===================================================================="
echo "FAIL: $FAIL"
echo "PASS: $PASS"
echo "===================================================================="
if test $FAIL != "0"; then
  exit 1
else
  exit 0
fi
