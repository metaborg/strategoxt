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
ATerm term_i_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(sym_Comment_0);
}
#include <srts/init-stratego-application.h>
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm yield_0_0 (ATerm t);
ATerm fetch_comment_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm m_0 (ATerm k_0, ATerm h_2, ATerm i_2, ATerm n_0, ATerm t);
ATerm AnnoComment_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm all_consnil_1_0 (ATerm q_5 (ATerm), ATerm t);
ATerm topdown_consnil_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm io_wrap_1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm g_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
    c_1 = t;
    if(match_cons(t, sym_appl_2))
      {
        a_1 = ATgetArgument(t, 0);
        b_1 = ATgetArgument(t, 1);
        {
          ATerm j_0 = t;
          int p_0 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_0 = NULL,i_0 = NULL,z_0 = NULL,d_0 = NULL;
              t = SSLgetAnnotations(c_1);
              i_0 = t;
              t = b_1;
              t = map_1_0(f_1, t);
              z_0 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, a_1, z_0);
              d_0 = t;
              t = SSLsetAnnotations(d_0, i_0);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm q_0 = ATgetArgument(t, 0);
                  h_0 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_0;
              t = concat_0_0(t);
              LocalPopChoice(p_0);
            }
          else
            {
              t = j_0;
              t = (ATerm) ATinsert(ATempty, c_1);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, c_1);
      }
    return(t);
  }
  t = f_1(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm fetch_comment_0_0 (ATerm t)
{
  ATerm k_1 = NULL;
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if(match_cons(t, sym_appl_2))
      {
        ATerm r_0 = ATgetArgument(t, 0);
        if(match_cons(r_0, sym_prod_3))
          {
            ATerm t_0 = ATgetArgument(r_0, 0);
            ATerm u_0 = ATgetArgument(r_0, 1);
            if(match_cons(u_0, sym_lex_1))
              {
                ATerm w_0 = ATgetArgument(u_0, 0);
                if(match_cons(w_0, sym_sort_1))
                  {
                    ATerm x_0 = ATgetArgument(w_0, 0);
                    if((ATgetSymbol((ATermAppl) x_0) != ATmakeSymbol("Comment", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            {
              ATerm v_0 = ATgetArgument(r_0, 2);
            }
          }
        else
          _fail(t);
        {
          ATerm s_0 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = yield_0_0(t);
    if(((k_1 != NULL) && (k_1 != t)))
      _fail(t);
    else
      k_1 = t;
    return(t);
  }
  t = oncetd_1_0(a_0, t);
  t = not_null(k_1);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  if(match_cons(t, sym_cons_1))
    {
      ATerm y_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_0 (ATerm k_0, ATerm h_2, ATerm i_2, ATerm n_0, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
  t = h_2;
  t = fetch_comment_0_0(t);
  l_1 = t;
  t = i_2;
  {
    static ATerm b_0 (ATerm t);
    static ATerm b_0 (ATerm t)
    {
      static ATerm c_0 (ATerm t);
      static ATerm c_0 (ATerm t)
      {
        ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
        p_1 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm d_1 = ATgetArgument(t, 0);
            if(match_cons(d_1, sym_prod_3))
              {
                ATerm g_1 = ATgetArgument(d_1, 0);
                ATerm h_1 = ATgetArgument(d_1, 1);
                q_1 = ATgetArgument(d_1, 2);
              }
            else
              _fail(t);
            {
              ATerm e_1 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = q_1;
        t = oncetd_1_0(e_0, t);
        t = SSLgetAnnotations(p_1);
        if(((m_1 != NULL) && (m_1 != t)))
          _fail(t);
        else
          m_1 = t;
        t = (ATerm) ATinsert(CheckATermList(m_1), (ATerm) ATmakeAppl(sym__2, term_i_1, l_1));
        o_1 = t;
        t = SSLsetAnnotations(p_1, o_1);
        return(t);
      }
      t = oncetd_1_0(c_0, t);
      return(t);
    }
    t = try_1_0(b_0, t);
  }
  n_1 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(n_0), n_1), k_0);
  return(t);
}
ATerm AnnoComment_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_1 = ATgetFirst((ATermList) t);
      r_1 = j_1;
      if(match_cons(j_1, sym_appl_2))
        {
          ATerm w_1 = ATgetArgument(j_1, 0);
          if(match_cons(w_1, sym_prod_3))
            {
              ATerm y_1 = ATgetArgument(w_1, 0);
              if(((ATgetType(y_1) == AT_LIST) && !(ATisEmpty(y_1))))
                {
                  ATerm c_2 = ATgetFirst((ATermList) y_1);
                  if(match_cons(c_2, sym_cf_1))
                    {
                      ATerm e_2 = ATgetArgument(c_2, 0);
                      if(!(match_cons(e_2, sym_layout_0)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_2 = (ATerm) ATgetNext((ATermList) y_1);
                    if(((ATgetType(d_2) != AT_LIST) || !(ATisEmpty(d_2))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm z_1 = ATgetArgument(w_1, 1);
                if(match_cons(z_1, sym_cf_1))
                  {
                    ATerm f_2 = ATgetArgument(z_1, 0);
                    if(match_cons(f_2, sym_opt_1))
                      {
                        ATerm g_2 = ATgetArgument(f_2, 0);
                        if(!(match_cons(g_2, sym_layout_0)))
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
              {
                ATerm b_2 = ATgetArgument(w_1, 2);
              }
            }
          else
            _fail(t);
          s_1 = ATgetArgument(j_1, 1);
        }
      else
        _fail(t);
      {
        ATerm v_1 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(v_1) == AT_LIST) && !(ATisEmpty(v_1))))
          {
            t_1 = ATgetFirst((ATermList) v_1);
            u_1 = (ATerm) ATgetNext((ATermList) v_1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_0(r_1, s_1, t_1, u_1, t);
  return(t);
}
ATerm all_consnil_1_0 (ATerm q_5 (ATerm), ATerm t)
{
  ATerm j_2 = t;
  int k_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 = NULL;
      x_1 = t;
      t = is_list_0_0(t);
      t = x_1;
      LocalPopChoice(k_2);
      {
        ATerm l_2 = t;
        int m_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(q_5, _id, t);
            t = Cons_2_0(_id, q_5, t);
            LocalPopChoice(m_2);
          }
        else
          {
            t = l_2;
            t = Nil_0_0(t);
          }
      }
    }
  else
    {
      t = j_2;
      t = SRTS_all(q_5, t);
    }
  return(t);
}
ATerm topdown_consnil_1_0 (ATerm o_5 (ATerm), ATerm t)
{
  static ATerm a_2 (ATerm t);
  static ATerm a_2 (ATerm t)
  {
    t = o_5(t);
    t = all_consnil_1_0(a_2, t);
    return(t);
  }
  t = a_2(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = topdown_consnil_1_0(g_0, t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = try_1_0(AnnoComment_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(f_0, t);
  return(t);
}
