function demoterm() {
  echo "<tr>" >> $out

  echo "<td>" >> $out
  echo "$term" >> $out
  echo "</td>" >> $out

  echo "<td>" >> $out
  xml=`echo "$term" | aterm2xml`
  xmlwf=`echo "$xml" | xmllint --format -`
  if test $? -ne 0; then
    echo "not possible" >> $out
  else
    echo "<verbatim>" >> $out
    echo "$xmlwf" >> $out
    echo "</verbatim>" >> $out
  fi
  echo "</td>" >> $out

  echo "<td>" >> $out
  roundterm=`echo "$xmlwf" | xml2aterm`
  if test $? -ne 0; then
    echo "not possible" >> $out
  else
    echo "<verbatim>" >> $out
    echo "$roundterm" >> $out
    echo "</verbatim>" >> $out
  fi
  echo "</td>" >> $out
  echo "</tr>" >> $out
}

function demoterms() {
  term="foo"     demoterm
  term="foo(1)"  demoterm
  term="1"       demoterm
  term="\"abc\"" demoterm
  term="()"      demoterm
  term="(1, 2)"  demoterm
  term="[]"      demoterm
  term="[1, 2]"  demoterm
  term="fred([foo(), bar()])" demoterm
  term="fred(\"foo\", \"bar\")" demoterm
}

out=implicit.html
rm $out
touch implicit.html

demoterms