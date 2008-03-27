#include "stratego-lazy-internal.h"

void define_scope_link(LzScope *s, LzScope target)
{
  *s = target;
  if (target != NULL)
    target->count_ref++;
}

void delete_scope_link(LzScope s)
{
  if (s == NULL)
    return;

  s->count_ref--;
  if (s->count_ref == 0 && s->redirect != s)
  {
    delete_scope_link(s->redirect);
    free(s);
  }
}

// reduce the number of link to follow.
void update_scope_link(LzScope *s)
{
  LzScope f;

  if (s == NULL || *s == NULL)
    return;

  f = *s;
  if (f->redirect == f)
    return;

  update_scope_link(&f->redirect);
  define_scope_link(s, f->redirect);
  delete_scope_link(f);
}
