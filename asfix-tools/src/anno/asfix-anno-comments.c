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
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_90 (ATerm), ATerm t);
ATerm get_comment_sorts_0_0 (ATerm t);
ATerm fetch_comment_0_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm t_0 (ATerm k_0, ATerm i_2, ATerm j_2, ATerm n_0, ATerm t);
ATerm AnnoComment_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm all_consnil_1_0 (ATerm w_5 (ATerm), ATerm t);
ATerm topdown_consnil_1_0 (ATerm u_5 (ATerm), ATerm t);
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
  static ATerm i_1 (ATerm t);
  static ATerm i_1 (ATerm t)
  {
    ATerm b_1 = NULL,e_1 = NULL,f_1 = NULL;
    f_1 = t;
    if(match_cons(t, sym_appl_2))
      {
        b_1 = ATgetArgument(t, 0);
        e_1 = ATgetArgument(t, 1);
        {
          ATerm r_0 = t;
          int s_0 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_0 = NULL,h_0 = NULL,p_0 = NULL,d_0 = NULL;
              t = SSLgetAnnotations(f_1);
              h_0 = t;
              t = e_1;
              t = map_1_0(i_1, t);
              p_0 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, b_1, p_0);
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
              t = (ATerm) ATinsert(ATempty, f_1);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, f_1);
      }
    return(t);
  }
  t = i_1(t);
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
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL;
  p_1 = t;
  t = get_comment_sorts_0_0(t);
  n_1 = t;
  t = p_1;
  {
    static ATerm a_0 (ATerm t);
    static ATerm a_0 (ATerm t)
    {
      ATerm q_1 = NULL,t_1 = NULL,u_1 = NULL;
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
                      q_1 = ATgetArgument(c_1, 0);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm a_1 = ATgetArgument(w_0, 2);
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
      u_1 = t;
      t = n_1;
      {
        static ATerm b_0 (ATerm t);
        static ATerm b_0 (ATerm t)
        {
          if((q_1 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1_0(b_0, t);
      }
      t = u_1;
      t = yield_0_0(t);
      t_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_1, q_1);
      if(((o_1 != NULL) && (o_1 != t)))
        _fail(t);
      else
        o_1 = t;
      return(t);
    }
    t = oncetd_1_0(a_0, t);
  }
  t = not_null(o_1);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  if(match_cons(t, sym_cons_1))
    {
      ATerm d_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm k_0, ATerm i_2, ATerm j_2, ATerm n_0, ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  t = i_2;
  t = fetch_comment_0_0(t);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
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
        ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
        a_2 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm g_1 = ATgetArgument(t, 0);
            if(match_cons(g_1, sym_prod_3))
              {
                ATerm j_1 = ATgetArgument(g_1, 0);
                ATerm k_1 = ATgetArgument(g_1, 1);
                b_2 = ATgetArgument(g_1, 2);
              }
            else
              _fail(t);
            {
              ATerm h_1 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = b_2;
        t = oncetd_1_0(g_0, t);
        t = SSLgetAnnotations(a_2);
        if(((x_1 != NULL) && (x_1 != t)))
          _fail(t);
        else
          x_1 = t;
        t = (ATerm) ATinsert(CheckATermList(x_1), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Comment_1, v_1), w_1));
        z_1 = t;
        t = SSLsetAnnotations(a_2, z_1);
        return(t);
      }
      t = oncetd_1_0(e_0, t);
      return(t);
    }
    t = try_1_0(c_0, t);
  }
  y_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_0), y_1), k_0);
  return(t);
}
ATerm AnnoComment_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_1 = ATgetFirst((ATermList) t);
      c_2 = l_1;
      if(match_cons(l_1, sym_appl_2))
        {
          ATerm r_1 = ATgetArgument(l_1, 0);
          if(match_cons(r_1, sym_prod_3))
            {
              ATerm s_1 = ATgetArgument(r_1, 0);
              if(((ATgetType(s_1) == AT_LIST) && !(ATisEmpty(s_1))))
                {
                  ATerm k_2 = ATgetFirst((ATermList) s_1);
                  if(match_cons(k_2, sym_cf_1))
                    {
                      ATerm m_2 = ATgetArgument(k_2, 0);
                      if(!(match_cons(m_2, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_2 = (ATerm) ATgetNext((ATermList) s_1);
                    if(((ATgetType(l_2) != AT_LIST) || !(ATisEmpty(l_2))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm g_2 = ATgetArgument(r_1, 1);
                if(match_cons(g_2, sym_cf_1))
                  {
                    ATerm n_2 = ATgetArgument(g_2, 0);
                    if(match_cons(n_2, sym_opt_1))
                      {
                        ATerm p_2 = ATgetArgument(n_2, 0);
                        if(!(match_cons(p_2, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm h_2 = ATgetArgument(r_1, 2);
              }
            }
          else
            _fail(t);
          d_2 = ATgetArgument(l_1, 1);
        }
      else
        _fail(t);
      {
        ATerm m_1 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(m_1) == AT_LIST) && !(ATisEmpty(m_1))))
          {
            e_2 = ATgetFirst((ATermList) m_1);
            f_2 = (ATerm) ATgetNext((ATermList) m_1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_0(c_2, d_2, e_2, f_2, t);
  return(t);
}
ATerm all_consnil_1_0 (ATerm w_5 (ATerm), ATerm t)
{
  ATerm q_2 = t;
  int u_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 = NULL;
      o_2 = t;
      t = is_list_0_0(t);
      t = o_2;
      LocalPopChoice(u_2);
      {
        ATerm v_2 = t;
        int w_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(w_5, _id, t);
            t = Cons_2_0(_id, w_5, t);
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
      t = q_2;
      t = SRTS_all(w_5, t);
    }
  return(t);
}
ATerm topdown_consnil_1_0 (ATerm u_5 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t);
  static ATerm r_2 (ATerm t)
  {
    t = u_5(t);
    t = all_consnil_1_0(r_2, t);
    return(t);
  }
  t = r_2(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = ArgOption_3_0(l_0, m_0, o_0, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm t_2 = NULL;
  t_2 = t;
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
  t = t_2;
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
  ATerm s_2 = NULL;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_0, (ATerm) ATinsert(ATempty, s_2));
  t = extend_config_0_0(t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_a_3;
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
