#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Comment_1;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cons_1;
Symbol sym_layout_0;
Symbol sym_sort_1;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Comment_1 = ATmakeSymbol("Comment", 1, ATfalse);
  ATprotectSymbol(sym_Comment_1);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_a_3;
ATerm term_z_2;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(ATmakeSymbol("comment-sorts", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Comment", 0, ATtrue));
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--sort name      Specify a comment sort. Multiple --sort options are allowed [Comment]", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm oncetd_1_0 (ATerm x_89 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_93 (ATerm), ATerm t);
ATerm get_comment_sorts_0_0 (ATerm t);
ATerm fetch_comment_0_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm t_0 (ATerm k_0, ATerm i_2, ATerm j_2, ATerm n_0, ATerm t);
ATerm AnnoComment_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_108 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm all_consnil_1_0 (ATerm e_6 (ATerm), ATerm t);
ATerm topdown_consnil_1_0 (ATerm c_6 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_3 (ATerm), ATerm p_3 (ATerm), ATerm q_3 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  static ATerm h_1 (ATerm t);
  static ATerm h_1 (ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL,e_1 = NULL;
    e_1 = t;
    if(match_cons(t, sym_appl_2))
      {
        a_1 = ATgetArgument(t, 0);
        b_1 = ATgetArgument(t, 1);
        {
          ATerm r_0 = t;
          int s_0 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_0 = NULL,h_0 = NULL,q_0 = NULL,d_0 = NULL;
              t = SSLgetAnnotations(e_1);
              h_0 = t;
              t = b_1;
              t = map_1_0(h_1, t);
              q_0 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, a_1, q_0);
              d_0 = t;
              t = SSLsetAnnotations(d_0, h_0);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm u_0 = ATgetArgument(t, 0);
                  f_0 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_0;
              t = concat_0_0(t);
              LocalPopChoice(s_0);
            }
          else
            {
              t = r_0;
              t = (ATerm) ATinsert(ATempty, e_1);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, e_1);
      }
    return(t);
  }
  t = h_1(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm get_comment_sorts_0_0 (ATerm t)
{
  t = term_v_0;
  t = get_config_0_0(t);
  return(t);
}
ATerm fetch_comment_0_0 (ATerm t)
{
  ATerm j_1 = NULL,n_1 = NULL,o_1 = NULL;
  o_1 = t;
  t = get_comment_sorts_0_0(t);
  j_1 = t;
  t = o_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      ATerm p_1 = NULL,q_1 = NULL,t_1 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          ATerm w_0 = ATgetArgument(t, 0);
          if(match_cons(w_0, sym_prod_3))
            {
              ATerm y_0 = ATgetArgument(w_0, 0);
              ATerm z_0 = ATgetArgument(w_0, 1);
              if(match_cons(z_0, sym_lex_1))
                {
                  ATerm d_1 = ATgetArgument(z_0, 0);
                  if(match_cons(d_1, sym_sort_1))
                    {
                      p_1 = ATgetArgument(d_1, 0);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm c_1 = ATgetArgument(w_0, 2);
              }
            }
          else
            _fail(t);
          {
            ATerm x_0 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t_1 = t;
      t = j_1;
      {
        static ATerm b_0 (ATerm t);
        static ATerm b_0 (ATerm t)
        {
          if((p_1 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1_0(b_0, t);
      }
      t = t_1;
      t = yield_0_0(t);
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_1, p_1);
      if(((n_1 != NULL) && (n_1 != t)))
        _fail(t);
      else
        n_1 = t;
      return(t);
    }
    t = oncetd_1_0(a_0, t);
  }
  t = not_null(n_1);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  if(match_cons(t, sym_cons_1))
    {
      ATerm f_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm k_0, ATerm i_2, ATerm j_2, ATerm n_0, ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  t = i_2;
  t = fetch_comment_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_2;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      static ATerm e_0 (ATerm t);
      static ATerm e_0 (ATerm t)
      {
        ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
        z_1 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm g_1 = ATgetArgument(t, 0);
            if(match_cons(g_1, sym_prod_3))
              {
                ATerm k_1 = ATgetArgument(g_1, 0);
                ATerm l_1 = ATgetArgument(g_1, 1);
                a_2 = ATgetArgument(g_1, 2);
              }
            else
              _fail(t);
            {
              ATerm i_1 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = a_2;
        t = oncetd_1_0(g_0, t);
        t = SSLgetAnnotations(z_1);
        if(((w_1 != NULL) && (w_1 != t)))
          _fail(t);
        else
          w_1 = t;
        t = (ATerm) ATinsert(CheckATermList(w_1), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Comment_1, u_1), v_1));
        y_1 = t;
        t = SSLsetAnnotations(z_1, y_1);
        return(t);
      }
      t = oncetd_1_0(e_0, t);
      return(t);
    }
    t = try_1_0(c_0, t);
  }
  x_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_0), x_1), k_0);
  return(t);
}
ATerm AnnoComment_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_1 = ATgetFirst((ATermList) t);
      b_2 = m_1;
      if(match_cons(m_1, sym_appl_2))
        {
          ATerm s_1 = ATgetArgument(m_1, 0);
          if(match_cons(s_1, sym_prod_3))
            {
              ATerm f_2 = ATgetArgument(s_1, 0);
              if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                {
                  ATerm l_2 = ATgetFirst((ATermList) f_2);
                  if(match_cons(l_2, sym_cf_1))
                    {
                      ATerm q_2 = ATgetArgument(l_2, 0);
                      if(!(match_cons(q_2, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_2 = (ATerm) ATgetNext((ATermList) f_2);
                    if(((ATgetType(m_2) != AT_LIST) || !(ATisEmpty(m_2))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm g_2 = ATgetArgument(s_1, 1);
                if(match_cons(g_2, sym_cf_1))
                  {
                    ATerm r_2 = ATgetArgument(g_2, 0);
                    if(match_cons(r_2, sym_opt_1))
                      {
                        ATerm s_2 = ATgetArgument(r_2, 0);
                        if(!(match_cons(s_2, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm k_2 = ATgetArgument(s_1, 2);
              }
            }
          else
            _fail(t);
          c_2 = ATgetArgument(m_1, 1);
        }
      else
        _fail(t);
      {
        ATerm r_1 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(r_1) == AT_LIST) && !(ATisEmpty(r_1))))
          {
            d_2 = ATgetFirst((ATermList) r_1);
            e_2 = (ATerm) ATgetNext((ATermList) r_1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_0(b_2, c_2, d_2, e_2, t);
  return(t);
}
ATerm all_consnil_1_0 (ATerm e_6 (ATerm), ATerm t)
{
  ATerm t_2 = t;
  int u_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL;
      h_2 = t;
      t = is_list_0_0(t);
      t = h_2;
      LocalPopChoice(u_2);
      {
        ATerm v_2 = t;
        int w_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(e_6, _id, t);
            t = Cons_2_0(_id, e_6, t);
            LocalPopChoice(w_2);
          }
        else
          {
            t = v_2;
            t = Nil_0_0(t);
          }
      }
    }
  else
    {
      t = t_2;
      t = SRTS_all(e_6, t);
    }
  return(t);
}
ATerm topdown_consnil_1_0 (ATerm c_6 (ATerm), ATerm t)
{
  static ATerm n_2 (ATerm t);
  static ATerm n_2 (ATerm t)
  {
    t = c_6(t);
    t = all_consnil_1_0(n_2, t);
    return(t);
  }
  t = n_2(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = ArgOption_3_0(l_0, m_0, o_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm x_2 = t;
    int y_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_0;
        t = get_config_0_0(t);
        LocalPopChoice(y_2);
      }
    else
      {
        t = x_2;
        t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, term_z_2));
        t = set_config_0_0(t);
      }
  }
  t = p_2;
  t = topdown_consnil_1_0(p_0, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sort", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, o_2));
  t = extend_config_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_a_3;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = try_1_0(AnnoComment_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_2_0(i_0, j_0, t);
  return(t);
}
