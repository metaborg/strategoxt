#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Op_2;
Symbol sym_stderr_0;
Symbol sym_Var_1;
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
static void init_module_constructors (void)
{
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
}
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_g_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_w_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym_Var_1, term_k_4);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_Op_2, term_n_4, (ATerm) ATempty);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(sym__2, term_s_4, term_s_4);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm fetch_1_0 (ATerm g_107 (ATerm), ATerm t);
static ATerm x_0 (ATerm t_94 (ATerm), ATerm i_31, ATerm j_31, ATerm g_31, ATerm h_31, ATerm t);
ATerm at_end_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm s_2 (ATerm a_2, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm w_0 (ATerm z_156, ATerm e_157, ATerm w_31, ATerm t);
ATerm while_not_2_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm u_7 (ATerm k_6, ATerm l_6, ATerm m_6, ATerm t);
static ATerm v_7 (ATerm w_6, ATerm x_6, ATerm a_7, ATerm t);
ATerm pattern_match_1_0 (ATerm u_94 (ATerm), ATerm t);
static ATerm z_0 (ATerm y_44, ATerm z_44, ATerm t);
ATerm do_test_2_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm apply_test_4_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm test1_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_105 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm test_suite_2_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  static ATerm k_5 (ATerm t)
  {
    ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
    h_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_5 = ATgetFirst((ATermList) t);
        j_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_0 = t;
      int m_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 = NULL,k_1 = NULL,k_0 = NULL;
          t = SSLgetAnnotations(h_5);
          e_1 = t;
          t = i_5;
          t = g_107(t);
          k_1 = t;
          t = (ATerm) ATinsert(CheckATermList(j_5), k_1);
          k_0 = t;
          t = SSLsetAnnotations(k_0, e_1);
          LocalPopChoice(m_1);
        }
      else
        {
          t = i_0;
          {
            ATerm v_1 = NULL,b_2 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(h_5);
            v_1 = t;
            t = j_5;
            t = k_5(t);
            b_2 = t;
            t = (ATerm) ATinsert(CheckATermList(b_2), i_5);
            n_0 = t;
            t = SSLsetAnnotations(n_0, v_1);
          }
        }
    }
    return(t);
  }
  t = k_5(t);
  return(t);
}
static ATerm x_0 (ATerm t_94 (ATerm), ATerm i_31, ATerm j_31, ATerm g_31, ATerm h_31, ATerm t)
{
  t = i_31;
  t = t_94(t);
  t = h_31;
  {
    ATerm o_1 = t;
    if((PushChoice() == 0))
      {
        static ATerm a_0 (ATerm t)
        {
          ATerm q_5 = NULL;
          if(match_cons(t, sym__2))
            {
              if((i_31 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              q_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_31, q_5);
          {
            ATerm q_1 = t;
            if((PushChoice() == 0))
              {
                ATerm x_5 = NULL;
                if(match_cons(t, sym__2))
                  {
                    x_5 = ATgetArgument(t, 0);
                    if((x_5 != ATgetArgument(t, 1)))
                      {
                        _fail(ATgetArgument(t, 1));
                      }
                  }
                else
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_1;
              }
          }
          return(t);
        }
        t = fetch_1_0(a_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_1;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, g_31, (ATerm) ATinsert(CheckATermList(h_31), (ATerm) ATmakeAppl(sym__2, i_31, j_31)));
  return(t);
}
ATerm at_end_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm n_1 = NULL,p_1 = NULL,t_1 = NULL;
    t_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_1 = ATgetFirst((ATermList) t);
        p_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_0 = NULL,o_0 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(t_1);
          j_0 = t;
          t = p_1;
          t = w_1(t);
          o_0 = t;
          t = (ATerm) ATinsert(CheckATermList(o_0), n_1);
          u_0 = t;
          t = SSLsetAnnotations(u_0, j_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_1;
        t = n_107(t);
      }
    return(t);
  }
  t = w_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,d_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm e_0 (ATerm t)
      {
        t = not_null(d_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          if(((d_0 != NULL) && (d_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_0;
      t = at_end_1_0(e_0, t);
    }
  return(t);
}
static ATerm s_2 (ATerm a_2, ATerm t)
{
  ATerm e_2 = NULL;
  t = SSL_explode_term(a_2);
  if(match_cons(t, sym__2))
    {
      ATerm r_1 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_1) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_2 = NULL,o_2 = NULL,p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
      {
        ATerm s_1 = t;
        int u_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_0 (ATerm t)
            {
              t = o_2;
              return(t);
            }
            t = h_2;
            t = at_end_1_0(f_0, t);
            LocalPopChoice(u_1);
          }
        else
          {
            t = s_1;
            t = s_2(p_2, t);
          }
      }
    }
  else
    {
      t = s_2(p_2, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  static ATerm b_3 (ATerm t)
  {
    ATerm x_1 = t;
    int y_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_109(t);
        LocalPopChoice(y_1);
      }
    else
      {
        t = x_1;
        {
          ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,y_0 = NULL;
          t = b_109(t);
          a_3 = t;
          if(match_cons(t, sym__2))
            {
              u_2 = ATgetArgument(t, 0);
              v_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_3);
          t_2 = t;
          t = u_2;
          t = d_109(t);
          y_2 = t;
          t = v_2;
          t = b_3(t);
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_2, z_2);
          y_0 = t;
          t = SSLsetAnnotations(y_0, t_2);
          t = c_109(t);
        }
      }
    return(t);
  }
  t = b_3(t);
  return(t);
}
static ATerm g_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_1 = ATgetArgument(t, 0);
      if(((ATgetType(z_1) != AT_LIST) || !(ATisEmpty(z_1))))
        _fail(t);
      {
        ATerm c_2 = ATgetArgument(t, 1);
        if(((ATgetType(c_2) != AT_LIST) || !(ATisEmpty(c_2))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_2 = ATgetArgument(t, 0);
      if(((ATgetType(d_2) == AT_LIST) && !(ATisEmpty(d_2))))
        {
          p_3 = ATgetFirst((ATermList) d_2);
          q_3 = (ATerm) ATgetNext((ATermList) d_2);
        }
      else
        _fail(t);
      {
        ATerm f_2 = ATgetArgument(t, 1);
        if(((ATgetType(f_2) == AT_LIST) && !(ATisEmpty(f_2))))
          {
            r_3 = ATgetFirst((ATermList) f_2);
            s_3 = (ATerm) ATgetNext((ATermList) f_2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_3, r_3), (ATerm) ATmakeAppl(sym__2, q_3, s_3));
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm z_3 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_4), z_3);
  return(t);
}
static ATerm w_0 (ATerm z_156, ATerm e_157, ATerm w_31, ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  t = SSL_explode_term(e_157);
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_156);
  if(match_cons(t, sym__2))
    {
      if((h_3 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_3, j_3);
  t = genzip_4_0(g_0, h_0, l_0, _id, t);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_3, w_31);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm t)
{
  static ATerm z_5 (ATerm t)
  {
    ATerm g_2 = t;
    int i_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_104(t);
        LocalPopChoice(i_2);
      }
    else
      {
        t = g_2;
        t = h_104(t);
        t = z_5(t);
      }
    return(t);
  }
  t = z_5(t);
  return(t);
}
ATerm for_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  t = j_104(t);
  t = while_not_2_0(k_104, l_104, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, (ATerm) ATempty);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_2 = ATgetArgument(t, 0);
      if(((ATgetType(j_2) != AT_LIST) || !(ATisEmpty(j_2))))
        _fail(t);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6;
  return(t);
}
static ATerm u_7 (ATerm k_6, ATerm l_6, ATerm m_6, ATerm t)
{
  ATerm n_6 = NULL,t_6 = NULL,u_6 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(m_6);
  n_6 = t;
  t = k_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_2 = ATgetFirst((ATermList) t);
      if(match_cons(k_2, sym__2))
        {
          t_6 = ATgetArgument(k_2, 0);
          if((t_6 != ATgetArgument(k_2, 1)))
            {
              _fail(ATgetArgument(k_2, 1));
            }
        }
      else
        _fail(t);
      u_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_6, l_6);
  h_1 = t;
  t = SSLsetAnnotations(h_1, n_6);
  return(t);
}
static ATerm v_7 (ATerm w_6, ATerm x_6, ATerm a_7, ATerm t)
{
  ATerm b_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(a_7);
  b_7 = t;
  t = w_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_2 = ATgetFirst((ATermList) t);
      if(match_cons(m_2, sym__2))
        {
          f_7 = ATgetArgument(m_2, 0);
          g_7 = ATgetArgument(m_2, 1);
        }
      else
        _fail(t);
      h_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_0(f_7, g_7, h_7, t);
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_7, x_6);
  i_1 = t;
  t = SSLsetAnnotations(i_1, b_7);
  return(t);
}
ATerm pattern_match_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
    n_7 = t;
    if(match_cons(t, sym__2))
      {
        o_7 = ATgetArgument(t, 0);
        p_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_7;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_7 = ATgetFirst((ATermList) t);
        m_7 = (ATerm) ATgetNext((ATermList) t);
        t = j_7;
        if(match_cons(t, sym__2))
          {
            k_7 = ATgetArgument(t, 0);
            l_7 = ATgetArgument(t, 1);
            {
              ATerm n_2 = t;
              int q_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_7(o_7, p_7, n_7, t);
                  LocalPopChoice(q_2);
                }
              else
                {
                  t = n_2;
                  {
                    ATerm r_2 = t;
                    int c_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_7;
                        t = x_0(u_94, k_7, l_7, m_7, p_7, t);
                        LocalPopChoice(c_3);
                      }
                    else
                      {
                        t = r_2;
                        t = v_7(o_7, p_7, n_7, t);
                      }
                  }
                }
            }
          }
        else
          {
            ATerm d_3 = t;
            int e_3 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_7(o_7, p_7, n_7, t);
                LocalPopChoice(e_3);
              }
            else
              {
                t = d_3;
                t = v_7(o_7, p_7, n_7, t);
              }
          }
      }
    else
      {
        ATerm l_3 = t;
        int m_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_7(o_7, p_7, n_7, t);
            LocalPopChoice(m_3);
          }
        else
          {
            t = l_3;
            t = v_7(o_7, p_7, n_7, t);
          }
      }
    return(t);
  }
  t = for_3_0(m_0, p_0, q_0, t);
  return(t);
}
static ATerm z_0 (ATerm y_44, ATerm z_44, ATerm t)
{
  ATerm n_3 = t;
  int t_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_44, z_44);
      LocalPopChoice(t_3);
    }
  else
    {
      t = n_3;
      t = SSL_addr(y_44, z_44);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
  y_7 = t;
  t = g_118(t);
  z_7 = t;
  t = term_w_3;
  a_8 = t;
  t = (ATerm) ATinsert(ATempty, z_7);
  b_8 = t;
  t = SSL_printnl(a_8, b_8);
  t = y_7;
  {
    ATerm x_3 = t;
    int y_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,f_3 = NULL;
        t = h_118(t);
        t = y_7;
        if(match_cons(t, sym__2))
          {
            d_8 = ATgetArgument(t, 0);
            e_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_7);
        c_8 = t;
        t = term_a_4;
        g_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_a_4);
        t = z_0(d_8, g_8, t);
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_8, e_8);
        f_3 = t;
        t = SSLsetAnnotations(f_3, c_8);
        LocalPopChoice(y_3);
      }
    else
      {
        t = x_3;
        {
          ATerm p_8 = NULL,q_8 = NULL,l_2 = NULL,w_2 = NULL,x_2 = NULL,g_3 = NULL;
          if(match_cons(t, sym__2))
            {
              p_8 = ATgetArgument(t, 0);
              q_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_7);
          l_2 = t;
          t = term_a_4;
          x_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_8, term_a_4);
          t = z_0(q_8, x_2, t);
          w_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_8, w_2);
          g_3 = t;
          t = SSLsetAnnotations(g_3, l_2);
        }
      }
  }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_b_4;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_c_4;
  return(t);
}
ATerm apply_test_4_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  static ATerm r_0 (ATerm t)
  {
    ATerm e_4 = t;
    int f_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        t = l_118(t);
        LocalPopChoice(f_4);
      }
    else
      {
        t = e_4;
        {
          ATerm u_8 = NULL,v_8 = NULL;
          t = term_w_3;
          u_8 = t;
          t = (ATerm) ATinsert(ATempty, term_g_4);
          v_8 = t;
          t = SSL_printnl(u_8, v_8);
          t = term_g_4;
          _fail(t);
        }
      }
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    t = n_118(t);
    if(((t_8 != NULL) && (t_8 != t)))
      _fail(t);
    else
      t_8 = t;
    {
      ATerm h_4 = t;
      int i_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_8;
          if((s_8 != t))
            {
              _fail(t);
            }
          LocalPopChoice(i_4);
        }
      else
        {
          t = h_4;
          t = s_8;
          t = debug_1_0(s_0, t);
          t = t_8;
          t = debug_1_0(t_0, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(k_118, r_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_j_4;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = pattern_match_1_0(d_1, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATmakeAppl(sym_Op_2, term_m_4, (ATerm) ATinsert(ATempty, term_o_4))));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATmakeAppl(sym_Op_2, term_m_4, (ATerm) ATinsert(ATempty, term_o_4))));
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,o_3 = NULL;
  y_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_8);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_8);
  o_3 = t;
  t = SSLsetAnnotations(o_3, w_8);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(v_0, a_1, b_1, c_1, t);
  return(t);
}
ATerm debug_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  t = c_105(t);
  a_9 = t;
  t = term_w_3;
  b_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_8), a_9);
  c_9 = t;
  t = SSL_printnl(b_9, c_9);
  t = z_8;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_p_4;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_q_4;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_r_4;
  return(t);
}
ATerm test_suite_2_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,v_3 = NULL,u_3 = NULL;
  t = e_118(t);
  t = debug_1_0(f_1, t);
  t = term_t_4;
  t = f_118(t);
  m_9 = t;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_9);
  g_9 = t;
  t = h_9;
  t = debug_1_0(g_1, t);
  j_9 = t;
  t = i_9;
  t = debug_1_0(j_1, t);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_9, k_9);
  u_3 = t;
  t = SSLsetAnnotations(u_3, g_9);
  l_9 = t;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  d_9 = t;
  t = f_9;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
  v_3 = t;
  t = SSLsetAnnotations(v_3, d_9);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_u_4;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(l_1, test1_0_0, t);
  return(t);
}
