#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Comment_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_appl_2;
static Symbol sym_prod_3;
static Symbol sym_cons_1;
static Symbol sym_layout_0;
static Symbol sym_sort_1;
static Symbol sym_opt_1;
static Symbol sym_lex_1;
static Symbol sym_cf_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Comment_1 = ATmakeSymbol("Comment", 1, ATfalse);
  ATprotectSymbol(sym_Comment_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
static ATerm term_y_2;
static ATerm term_x_2;
static ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(ATmakeSymbol("comment-sorts", 0, ATtrue));
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Comment", 0, ATtrue));
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--sort name      Specify a comment sort. Multiple --sort options are allowed [Comment]", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm oncetd_1_0 (ATerm p_95 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm get_comment_sorts_0_0 (ATerm t);
ATerm fetch_comment_0_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm s_0 (ATerm k_0, ATerm w_4, ATerm x_4, ATerm n_0, ATerm t);
ATerm AnnoComment_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm all_consnil_1_0 (ATerm q_8 (ATerm), ATerm t);
ATerm topdown_consnil_1_0 (ATerm o_8 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm q_0 (ATerm t);
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
    ATerm a_1 = NULL,d_1 = NULL,e_1 = NULL;
    e_1 = t;
    if(match_cons(t, sym_appl_2))
      {
        a_1 = ATgetArgument(t, 0);
        d_1 = ATgetArgument(t, 1);
        {
          ATerm r_0 = t;
          int t_0 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_0 = NULL,h_0 = NULL,p_0 = NULL,d_0 = NULL;
              t = SSLgetAnnotations(e_1);
              h_0 = t;
              t = d_1;
              t = map_1_0(h_1, t);
              p_0 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, a_1, p_0);
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
              LocalPopChoice(t_0);
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
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL;
  o_1 = t;
  t = get_comment_sorts_0_0(t);
  m_1 = t;
  t = o_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      ATerm p_1 = NULL,s_1 = NULL,t_1 = NULL;
      if(match_cons(t, sym_appl_2))
        {
          ATerm w_0 = ATgetArgument(t, 0);
          if(match_cons(w_0, sym_prod_3))
            {
              ATerm y_0 = ATgetArgument(w_0, 0);
              ATerm z_0 = ATgetArgument(w_0, 1);
              if(match_cons(z_0, sym_lex_1))
                {
                  ATerm c_1 = ATgetArgument(z_0, 0);
                  if(match_cons(c_1, sym_sort_1))
                    {
                      p_1 = ATgetArgument(c_1, 0);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm b_1 = ATgetArgument(w_0, 2);
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
      t = m_1;
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
      s_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_1, p_1);
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
static ATerm s_0 (ATerm k_0, ATerm w_4, ATerm x_4, ATerm n_0, ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  t = w_4;
  t = fetch_comment_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4;
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
                ATerm j_1 = ATgetArgument(g_1, 0);
                ATerm k_1 = ATgetArgument(g_1, 1);
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
      ATerm l_1 = ATgetFirst((ATermList) t);
      b_2 = l_1;
      if(match_cons(l_1, sym_appl_2))
        {
          ATerm r_1 = ATgetArgument(l_1, 0);
          if(match_cons(r_1, sym_prod_3))
            {
              ATerm f_2 = ATgetArgument(r_1, 0);
              if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
                {
                  ATerm j_2 = ATgetFirst((ATermList) f_2);
                  if(match_cons(j_2, sym_cf_1))
                    {
                      ATerm o_2 = ATgetArgument(j_2, 0);
                      if(!(match_cons(o_2, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_2 = (ATerm) ATgetNext((ATermList) f_2);
                    if(((ATgetType(n_2) != AT_LIST) || !(ATisEmpty(n_2))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm g_2 = ATgetArgument(r_1, 1);
                if(match_cons(g_2, sym_cf_1))
                  {
                    ATerm p_2 = ATgetArgument(g_2, 0);
                    if(match_cons(p_2, sym_opt_1))
                      {
                        ATerm q_2 = ATgetArgument(p_2, 0);
                        if(!(match_cons(q_2, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm i_2 = ATgetArgument(r_1, 2);
              }
            }
          else
            _fail(t);
          c_2 = ATgetArgument(l_1, 1);
        }
      else
        _fail(t);
      {
        ATerm q_1 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(q_1) == AT_LIST) && !(ATisEmpty(q_1))))
          {
            d_2 = ATgetFirst((ATermList) q_1);
            e_2 = (ATerm) ATgetNext((ATermList) q_1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_0(b_2, c_2, d_2, e_2, t);
  return(t);
}
ATerm all_consnil_1_0 (ATerm q_8 (ATerm), ATerm t)
{
  ATerm r_2 = t;
  int s_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 = NULL;
      h_2 = t;
      t = is_list_0_0(t);
      t = h_2;
      LocalPopChoice(s_2);
      {
        ATerm t_2 = t;
        int u_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(q_8, _id, t);
            t = Cons_2_0(_id, q_8, t);
            LocalPopChoice(u_2);
          }
        else
          {
            t = t_2;
            t = Nil_0_0(t);
          }
      }
    }
  else
    {
      t = r_2;
      t = SRTS_all(q_8, t);
    }
  return(t);
}
ATerm topdown_consnil_1_0 (ATerm o_8 (ATerm), ATerm t)
{
  static ATerm k_2 (ATerm t);
  static ATerm k_2 (ATerm t)
  {
    t = o_8(t);
    t = all_consnil_1_0(k_2, t);
    return(t);
  }
  t = k_2(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = ArgOption_3_0(l_0, m_0, o_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  {
    ATerm v_2 = t;
    int w_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_0;
        t = get_config_0_0(t);
        LocalPopChoice(w_2);
      }
    else
      {
        t = v_2;
        t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, term_x_2));
        t = set_config_0_0(t);
      }
  }
  t = m_2;
  t = topdown_consnil_1_0(q_0, t);
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
  ATerm l_2 = NULL;
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, l_2));
  t = extend_config_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_y_2;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = try_1_0(AnnoComment_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_2_0(i_0, j_0, t);
  return(t);
}
