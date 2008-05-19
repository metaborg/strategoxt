pathwildcard = $(patsubst $1/%,%,$(wildcard $(patsubst %,$1/%,$2)))
srcwildcard = $(call pathwildcard,$(srcdir),$1)

man1_MANS = $(call srcwildcard,*.1)
EXTRA_DIST = $(call srcwildcard,*.1)
