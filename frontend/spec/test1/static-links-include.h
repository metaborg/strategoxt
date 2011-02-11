typedef struct str_frame *StrSL;
typedef struct str_closure *StrCL;

struct str_closure 
{
  ATerm (*fun)();
  StrSL sl;
};

struct str_frame 
{
  StrSL parent;
  ATerm **vars;  
  StrCL *funs;
};

#define sl_decl(par) \
  struct str_frame frame; \
  frame.parent = par; 

#define sl_vars(n) \
  ATerm *sl_vars[n]; \
  frame.vars = sl_vars; 

#define sl_funs(n) \
  StrCL sl_funs[n]; \
  frame.funs = sl_funs;

#define sl_init_var(i,x) sl_vars[i] = &x;
#define sl_init_fun(i,cl) sl_funs[i] = cl;

#define sl_up(sl) ((sl)->parent)

#define sl_readvar(i,s)  (*sl_writevar(i,s))
#define sl_writevar(i,s) (*(((s)->vars)+i))

#define sl_fun(i,s)    ((*(((s)->funs)+i))->fun)
#define sl_fun_sl(i,s) ((*(((s)->funs)+i))->sl)

#define sl_fun_cl(i,s) (*(((s)->funs)+i))

#define cl_fun(cl) (cl->fun)
#define cl_sl(cl) (cl->sl)

