
# determine what deployment and development repositories are
DEVEL_REPO="${PWD}/.development-repository"
DEPLOY_REPO="-I `echo ${AUTOBUNDLE_SEARCH_PATH} | sed 's/:/ -I /g'`"

if [ ! -d ${DEVEL_REPO} ]; then
   mkdir ${DEVEL_REPO}
fi 


# Get a package's name from configure.ac
get_name() {
   grep AC_INIT $1 \
   | sed 's/AC_INIT(//' \
   | cut -d, -f 1
}

# Get a package's version from configure.ac
get_version() {
   grep AC_INIT $1 \
   | cut -d, -f2 | tr -d '[ ]' | sed 's/)$//'
}

# determine bundle name
bundle_name="`get_name ./configure.ac`"

# determine bundle version
bundle_version=`get_version ./configure.ac`

# determine set of bundled packages
bundled_pkgs=`awk -F, '{print ""$1"-"$2}' < pkg-list`


# create new bundle
create_a_bundle(){
   pkgs="-p `echo $* | sed 's/ / -p /g'`"
   ( cd .. 
     autobundle ${pkgs} \
                -n ${bundle_name} \
                -v ${bundle_version} \
                -I ${DEVEL_REPO} ${DEPLOY_REPO} \
     | gunzip -c | tar xf - ${bundle_name}-${bundle_version}/pkg-list \
                             ${bundle_name}-${bundle_version}/configure.ac \
                             ${bundle_name}-${bundle_version}/configure
   )
   ./collect.sh
}
