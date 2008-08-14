###########################################################
# File: Internal.mk
#
# Description
#
# This Makefile provides support for compiling the Stratego/XT framework.
# It introduces some variables to handle the differences between the
# different kind of builds.
#
# Builds could either be with or without a baseline framework.  The baseline
# is used to provide tools in order to compile the source coming from the
# repository.  In this case files like *.rtree and *.c could be removed
# because they can be regenerated.  On the other hand, without the baseline
# these files are considered as sources because no tool can be used to
# generate them.  The variable XT_BUILD_DIST is used to specified these
# files.
#
# As the variable XT_BUILD_DIST change the value of CLEANFILES,
# BOOTCLEANFILES and EXTRA_DIST.  These variables can be extended either by
# using the prefix "XT_" for each variable or by using the operator "+=".
#
# As BUILD_DIST files may not be in the same directory dependeing on the
# configuration, a variable named "top_builddist" is introduced to refer to
# the right path.  In the same spirit of the GNU-make macro already existing
# to search for files, the macro "bdwildcard" does the same as "wildcard"
# and "srcwildcard" for the build-dist directory which is either the source
# directory or the build directory.
#
# expects: XT_CLEANFILES XT_BOOTCLEANFILES XT_BUILD_DIST XT_EXTRA_DIST
# defines: top_builddist bdwildcard CLEANFILES BOOTCLEANFILES EXTRA_DIST

CLEANFILES = $(XT_CLEANFILES)
BOOTCLEANFILES = $(XT_BOOTCLEANFILES)

if XT_USE_BASELINE
CLEANFILES += $(XT_BUILD_DIST)
top_builddist = $(top_builddir)
bdwildcard = $(wildcard $1)
else
BOOTCLEANFILES += $(XT_BUILD_DIST)
top_builddist = $(top_srcdir)
bdwildcard = $(call srcwildcard,$1)
endif
EXTRA_DIST = $(XT_EXTRA_DIST) $(XT_BUILD_DIST)
