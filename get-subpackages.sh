#! /bin/sh

function asf_library() {
  pkg="asf-library" version="1.0" $@
}
function asc_support() {
  pkg="asc-support" version="1.9" $@
}
function asf_support() {
  pkg="asf-support" version="1.3" $@
}
function sdf_support() {
  pkg="sdf-support" version="2.1" $@
}
function pt_support() {
  pkg="pt-support" version="1.1" $@
}
function sglr() {
  pkg="sglr" version="3.11" $@
}
function toolbuslib() {
  pkg="toolbuslib" version="0.6" $@
}
function pgen() {
  pkg="pgen" version="2.1" $@
}
function error_support() {
  pkg="error-support" version="0.1.1" $@
}

function all_pkgs() {
  error_support $@
  asf_library   $@
  asc_support   $@
  asf_support   $@
  sdf_support   $@
  pt_support    $@
  sglr          $@
  toolbuslib    $@
  pgen          $@
}

function get_dist() {
  wget http://www.cwi.nl/projects/MetaEnv/${pkg}/${pkg}-${version}.tar.gz || exit 1
  tar zxvf ${pkg}-${version}.tar.gz || exit 1
  mv ${pkg}-${version} $pkg
}

function remove_tarball() {
  rm -f ${pkg}-${version}.tar.gz
}

function remove_subdir() {
  rm -rf ${pkg}
}

all_pkgs remove_tarball
all_pkgs remove_subdir
all_pkgs get_dist
all_pkgs remove_tarball
