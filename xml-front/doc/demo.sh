function demoterm() {
  echo "<tr>" >> $out

  echo "<td>" >> $out
  echo "<verbatim>" >> $out
  echo "`echo $term | pp-aterm`" >> $out
  echo "</verbatim>" >> $out
  echo "</td>" >> $out

  echo "<td>" >> $out
  xml=`echo "$term" | aterm2xml $mode`
  xmlwf=`echo "$xml" | xmllint --format -`
  if test $? -ne 0; then
    echo "not possible" >> $out
  else
    echo "<verbatim>" >> $out
    echo "`echo "$xmlwf" | tail +2`" >> $out
    echo "</verbatim>" >> $out
  fi
  echo "</td>" >> $out

  echo "<td>" >> $out
  roundterm=`echo "$xmlwf" | xml2aterm $mode`
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
  rm $out
  touch $out

  term="foo"     demoterm
  term="foo(1)"  demoterm
  term="1"       demoterm
  term="\"abc\"" demoterm
  term="()"      demoterm
  term="(1, 2)"  demoterm
  term="[]"      demoterm
  term="[1, 2]"  demoterm
  term="fred([foo(), bar()])" demoterm
  term="fred(None(), [foo(), bar()])" demoterm
  term="fred(Some(barney()), [foo(), bar()])" demoterm
  term="fred(\"foo\", \"bar\")" demoterm
  term="foo(){fred}" demoterm
}

out=implicit.html      mode="--implicit"       demoterms
out=very-explicit.html mode="--very-explicit"  demoterms
out=explicit.html      mode="--explicit"       demoterms
