#! /bin/sh
#
# $Id: genconf.sh,v 1.1 2001/05/30 15:18:57 mdejonge Exp $
#
# Author: Merijn de Jonge (mdejonge@cwi.nl)
#
# This script generates a configure.in script from a package
# configuration file. The configuration file specifies the version of
# the GT distribution and which components are to be released and which
# are still under development.
#
# A package configuration file has the following structure:
#
#    version=<GT version number>
#    released=<list of released tools>
#    unreleased=<list of unreleased tools>
#
# genconf generates a configure.in file by substituting values for the
# variables __VERSION__, __RELEASED__, __UNRELEASED__, __TOOLS__, and
# __MAKEFILES__  from the file configure.in.src:
#
#    __VERSION__    is replaced by the value of the "version" parameter
#    __RELEASED__   is replaced by the value of the "released" parameter
#    __UNRELEASED__ is replaced by the value of the "unreleased" parameter
#    __TOOLS__      concatenation of the values of the "released" and
#                   "unreleased" parameters.
#    __MAKEFILES__  For each tool t in __TOOLS__ the __MAKEFILES__
#                   variables contains the entries src/t/Makefile and
#                   src/t/data/Makefile
#
# usage:
#   genconf [-d] [-h] <config_file>
#
# where
#   -d           Not only build released tools but tools under
#                development as well.
#   -h           Display this usage
#   config_file  name of configuration file
#
# The output of genconf is written to the file ./configure.in


DEVEL=false

usage() {
   cat <<ENDCAT
genconf -- generate configure.in from package configuration file.

usage:
   genconf [-d] [h] config_file

where:
   -d           Not only build released tools but tools under
                development as well.
   -h           Display this usage
   config_file  name of configuration file
ENDCAT
}

# Parse command line arguments
while getopts dh c
do
   case $c in
      d) DEVEL=true ;;
      h) usage; exit 0 ;;
      *) usage; exit 1 ;;
   esac
done
shift `expr ${OPTIND} - 1`

config_file=$1
if [ "a${config_file}" = "a" ]
then
   usage
   exit 1
fi

tmpMakeFile=/tmp/genconf.$$
trap "rm -fr $tmpMakefile" 0 1 2 3 4 5 6 7 8 9 10

(
   cat ${config_file};
   echo "getValue:";
   echo "	@echo $($(NAME))"
 
) > ${tmpMakeFile}


released="`make -f ${tmpMakeFile} NAME=released`"
unreleased="`make -f ${tmpMakeFile} NAME=unreleased`"
version="`make -f ${tmpMakeFile} NAME=version`"
name="`make -f ${tmpMakeFile} NAME=name`"

if [ "a${DEVEL}" = "afalse" ]
then
   unreleased=
fi
   
if [ "a${released}${unreleased}" != "a" ]
then
   for tool in ${released} ${unreleased}
   do
      MAKEFILES="${MAKEFILES} \
                 src/${tool}/Makefile \
                 src/${tool}/data/Makefile"
   done
fi


sed "s#__PACKAGE__#${name}#g;\
     s#__VERSION__#${version}#g;\
     s#__TOOLS__#\"${released} ${unreleased}\"#g;\
     s#__MAKEFILES__#${MAKEFILES}#g;\
     s#__RELEASED__#\"${released}\"#g;\
     s#__UNRELEASED__#\"${unreleased}\"#g;"  configure.in.src > configure.in
