#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Comment_0;
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
  sym_Comment_0 = ATmakeSymbol("Comment", 0, ATfalse);
  ATprotectSymbol(sym_Comment_0);
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
ATerm term_z_2;
ATerm term_y_2;
ATerm term_l_1;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(ATmakeSymbol("comment-sorts", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(sym_Comment_0);
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Comment", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--sort name      Specify a comment sort. Multiple --sort options are allowed [Comment]", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_90 (ATerm), ATerm t);
ATerm get_comment_sorts_0_0 (ATerm t);
ATerm fetch_comment_0_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm s_0 (ATerm k_0, ATerm h_2, ATerm i_2, ATerm n_0, ATerm t);
ATerm AnnoComment_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm all_consnil_1_0 (ATerm s_5 (ATerm), ATerm t);
ATerm topdown_consnil_1_0 (ATerm q_5 (ATerm), ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
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
      ATerm p_1 = NULL,s_1 = NULL;
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
      s_1 = t;
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
      t = s_1;
      t = yield_0_0(t);
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
static ATerm s_0 (ATerm k_0, ATerm h_2, ATerm i_2, ATerm n_0, ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
  t = h_2;
  t = fetch_comment_0_0(t);
  t_1 = t;
  t = i_2;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      static ATerm e_0 (ATerm t);
      static ATerm e_0 (ATerm t)
      {
        ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
        x_1 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm g_1 = ATgetArgument(t, 0);
            if(match_cons(g_1, sym_prod_3))
              {
                ATerm j_1 = ATgetArgument(g_1, 0);
                ATerm k_1 = ATgetArgument(g_1, 1);
                y_1 = ATgetArgument(g_1, 2);
              }
            else
              _fail(t);
            {
              ATerm i_1 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = y_1;
        t = oncetd_1_0(g_0, t);
        t = SSLgetAnnotations(x_1);
        if(((u_1 != NULL) && (u_1 != t)))
          _fail(t);
        else
          u_1 = t;
        t = (ATerm) ATinsert(CheckATermList(u_1), (ATerm) ATmakeAppl(sym__2, term_l_1, t_1));
        w_1 = t;
        t = SSLsetAnnotations(x_1, w_1);
        return(t);
      }
      t = oncetd_1_0(e_0, t);
      return(t);
    }
    t = try_1_0(c_0, t);
  }
  v_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_0), v_1), k_0);
  return(t);
}
ATerm AnnoComment_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_1 = ATgetFirst((ATermList) t);
      z_1 = q_1;
      if(match_cons(q_1, sym_appl_2))
        {
          ATerm d_2 = ATgetArgument(q_1, 0);
          if(match_cons(d_2, sym_prod_3))
            {
              ATerm e_2 = ATgetArgument(d_2, 0);
              if(((ATgetType(e_2) == AT_LIST) && !(ATisEmpty(e_2))))
                {
                  ATerm k_2 = ATgetFirst((ATermList) e_2);
                  if(match_cons(k_2, sym_cf_1))
                    {
                      ATerm m_2 = ATgetArgument(k_2, 0);
                      if(!(match_cons(m_2, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_2 = (ATerm) ATgetNext((ATermList) e_2);
                    if(((ATgetType(l_2) != AT_LIST) || !(ATisEmpty(l_2))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm g_2 = ATgetArgument(d_2, 1);
                if(match_cons(g_2, sym_cf_1))
                  {
                    ATerm n_2 = ATgetArgument(g_2, 0);
                    if(match_cons(n_2, sym_opt_1))
                      {
                        ATerm r_2 = ATgetArgument(n_2, 0);
                        if(!(match_cons(r_2, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm j_2 = ATgetArgument(d_2, 2);
              }
            }
          else
            _fail(t);
          a_2 = ATgetArgument(q_1, 1);
        }
      else
        _fail(t);
      {
        ATerm r_1 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(r_1) == AT_LIST) && !(ATisEmpty(r_1))))
          {
            b_2 = ATgetFirst((ATermList) r_1);
            c_2 = (ATerm) ATgetNext((ATermList) r_1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_0(z_1, a_2, b_2, c_2, t);
  return(t);
}
ATerm all_consnil_1_0 (ATerm s_5 (ATerm), ATerm t)
{
  ATerm s_2 = t;
  int t_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL;
      f_2 = t;
      t = is_list_0_0(t);
      t = f_2;
      LocalPopChoice(t_2);
      {
        ATerm u_2 = t;
        int v_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(s_5, _id, t);
            t = Cons_2_0(_id, s_5, t);
            LocalPopChoice(v_2);
          }
        else
          {
            t = u_2;
            t = Nil_0_0(t);
          }
      }
    }
  else
    {
      t = s_2;
      t = SRTS_all(s_5, t);
    }
  return(t);
}
ATerm topdown_consnil_1_0 (ATerm q_5 (ATerm), ATerm t)
{
  static ATerm o_2 (ATerm t);
  static ATerm o_2 (ATerm t)
  {
    t = q_5(t);
    t = all_consnil_1_0(o_2, t);
    return(t);
  }
  t = o_2(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = ArgOption_3_0(l_0, m_0, o_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  {
    ATerm w_2 = t;
    int x_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_0;
        t = get_config_0_0(t);
        LocalPopChoice(x_2);
      }
    else
      {
        t = w_2;
        t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, term_y_2));
        t = set_config_0_0(t);
      }
  }
  t = q_2;
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
  ATerm p_2 = NULL;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, p_2));
  t = extend_config_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_z_2;
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
