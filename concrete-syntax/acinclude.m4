AC_DEFUN(SET_SVN_REVISION,
[
if test -e "svn-revision"
then
   SVN_REVISION="`cat svn-revision`"
else
   SVN_REVISION="0"
fi
])
