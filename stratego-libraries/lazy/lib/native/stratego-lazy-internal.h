#ifndef STRATEGO_LAZY_INTERNAL_H_
# define STRATEGO_LAZY_INTERNAL_H_

# include "stratego-lazy.h"

typedef struct lazy_scope * LzScope;
typedef struct lazy_value * LzValue;

/*
Scopes are used to invalidate cached values and strategies used to compute a
lazy_value.

Scopes are stacked with the system stack used for function calls.

The redirect link is used to specify the status of the scope:
 - NULL => Cached variables should be dropped. (something have failed inside
 the scope)
 - it-self => can use the cache. (The scope is opened)
 - other => follow and repeat. (the scope is closed and its status depends
 on the last opened parent scope)

The depth counter defines the depth of the scope. (ex: if a scope B is
opened inside a scope A, then "depth of the scope B" = "depth of the scope A
+ 1")  This field is used to know the deepest scope used to compute a cache info.

The count_ref is used to free the memory when it reaches zero after the
closure of the scope. It is incremented when a lazy_cache or a lazy_value
start pointing on the scope and decremented when a lazy_cache or lazy_value
stop pointing at the scope.

*/
struct lazy_scope {
  LzScope redirect;
  unsigned int depth;
  unsigned int count_ref;
};

/*

fun: Strategy pointer to call it dynamically.

decl_t: The current term of the declaration, This is also the current term
when the strategy is called.

cache_dict: Dictionary that contains all pairs (key, value) already
computed.

decl_scp: A pointer to the last active scope at the declaration of the
strategy used to compute this value.

cache_scp: A pointer to the deepest active scope used to compute this
value.

num_cl, num_t: Number of closures and terms given to the called strategy.

*/

struct lazy_value {
  unsigned int magic;
  ATerm (*fun)();
  ATerm decl_t;
  ATerm cache_dict;
  LzScope decl_scp;
  LzScope cache_scp;
  LzScope saved_cache_scp;
  unsigned int num_cl, num_t;
};


/*
How to pass attribute:
- modify the compiler to handle this dynamic call
  => implied to handle the caching else-where

- find a portable way to duplicate the stack on the new call

- use variadicity to duplicate the stack call on a limited set of function
  prototype.

Need to:
- cache (with failures)
- remove caches if the cache depends on a failed scope.

*/


extern ATerm invalid_term;

// Scope of the whole program.
extern struct lazy_scope global_lazy_scope;

// Scope of bindings declarations.
extern LzScope gl_lazy_scope;

// Deepest scope used to compute the value.
extern LzScope gl_cache_scope;


void define_scope_link(LzScope *s, LzScope target);
void delete_scope_link(LzScope s);
void update_scope_link(LzScope *s);

LzValue get_lzvalue(ATerm t);
void free_lzvalue(LzValue v);

#endif /* !STRATEGO_LAZY_INTERNAL_H_ */
