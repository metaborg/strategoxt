#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Op_2;
Symbol sym_stderr_0;
Symbol sym_Var_1;
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_a_6;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Var_1, term_l_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_Op_2, term_o_6, (ATerm) ATempty);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__2, term_t_6, term_t_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm MatchVar_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm pattern_match_1_0 (ATerm o_99 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm do_test_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm);
ATerm apply_test_4_0 (ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm test_suite_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Var_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,d_0 = NULL,f_0 = NULL;
  e_0 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_0);
  a_0 = t;
  t = b_0;
  t = q_87(t);
  c_0 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_0);
  d_0 = t;
  t = SSLsetAnnotations(d_0, a_0);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_1 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_4);
    }
  else
    {
      t = c_1;
      {
        ATerm o_0 = NULL,r_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_0 = ATgetFirst((ATermList) t);
            r_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_0;
        {
          ATerm r_3 (ATerm t)
          {
            t = r_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm t_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_1, t);
        ;
        LocalPopChoice(u_4);
      }
    else
      {
        t = t_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_104(t);
      }
    return(t);
  }
  t = n_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm v_4 = t;
    int w_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_106(t);
        ;
        LocalPopChoice(w_4);
      }
    else
      {
        t = v_4;
        t = e_106(t);
        t = _2_0(g_106, o_1, t);
        t = f_106(t);
      }
    return(t);
  }
  t = o_1(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(((ATgetType(x_4) != AT_LIST) || !(ATisEmpty(x_4))))
        _fail(t);
      {
        ATerm y_4 = ATgetArgument(t, 1);
        if(((ATgetType(y_4) != AT_LIST) || !(ATisEmpty(y_4))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
        {
          d_2 = ATgetFirst((ATermList) z_4);
          f_2 = (ATerm) ATgetNext((ATermList) z_4);
        }
      else
        _fail(t);
      {
        ATerm a_5 = ATgetArgument(t, 1);
        if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
          {
            e_2 = ATgetFirst((ATermList) a_5);
            g_2 = (ATerm) ATgetNext((ATermList) a_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_2, e_2), (ATerm) ATmakeAppl(sym__2, f_2, g_2));
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_2), h_2);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,w_1 = NULL,x_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_5 = ATgetFirst((ATermList) t);
      if(match_cons(b_5, sym__2))
        {
          q_1 = ATgetArgument(b_5, 0);
          r_1 = ATgetArgument(b_5, 1);
        }
      else
        _fail(t);
      w_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_1);
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_1);
  if(match_cons(t, sym__2))
    {
      if((x_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_2, a_2);
  t = genzip_4_0(x_3, y_3, z_3, _id, t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, w_1);
  {
    ATerm c_5 = t;
    int d_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_5 = ATgetArgument(t, 0);
            ATerm f_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_2;
        {
          ATerm a_4 (ATerm t)
          {
            t = w_1;
            return(t);
          }
          t = at_end_1_0(a_4, t);
        }
        ;
        LocalPopChoice(d_5);
      }
    else
      {
        t = c_5;
        {
          ATerm m_0 = NULL,g_0 = NULL,h_0 = NULL;
          h_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_2, w_1);
          g_0 = t;
          t = SSL_explode_term(g_0);
          if(match_cons(t, sym__2))
            {
              ATerm g_5 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_5) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_0;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm Cons_2_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,i_0 = NULL,j_0 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_2 = ATgetFirst((ATermList) t);
      r_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_2);
  p_2 = t;
  t = q_2;
  t = m_86(t);
  s_2 = t;
  t = r_2;
  t = n_86(t);
  t_2 = t;
  j_0 = t;
  t = (ATerm) ATinsert(CheckATermList(t_2), s_2);
  i_0 = t;
  t = SSLsetAnnotations(i_0, p_2);
  return(t);
}
ATerm fetch_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm h_5 = t;
    int i_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_104, _id, t);
        ;
        LocalPopChoice(i_5);
      }
    else
      {
        t = h_5;
        t = Cons_2_0(_id, x_2, t);
      }
    return(t);
  }
  t = x_2(t);
  return(t);
}
ATerm MatchVar_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_5 = ATgetArgument(t, 0);
      if(((ATgetType(j_5) == AT_LIST) && !(ATisEmpty(j_5))))
        {
          ATerm k_5 = ATgetFirst((ATermList) j_5);
          if(match_cons(k_5, sym__2))
            {
              y_2 = ATgetArgument(k_5, 0);
              z_2 = ATgetArgument(k_5, 1);
            }
          else
            _fail(t);
          a_3 = (ATerm) ATgetNext((ATermList) j_5);
        }
      else
        _fail(t);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_2;
  t = n_99(t);
  t = b_3;
  {
    ATerm l_5 = t;
    if((PushChoice() == 0))
      {
        ATerm b_4 (ATerm t)
        {
          ATerm c_3 = NULL;
          if(match_cons(t, sym__2))
            {
              if((y_2 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              c_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_2, c_3);
          {
            ATerm m_5 = t;
            if((PushChoice() == 0))
              {
                ATerm d_3 = NULL;
                if(match_cons(t, sym__2))
                  {
                    d_3 = ATgetArgument(t, 0);
                    if((d_3 != ATgetArgument(t, 1)))
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
                t = m_5;
              }
          }
          return(t);
        }
        t = fetch_1_0(b_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_5;
      }
    t = (ATerm) ATmakeAppl(sym__2, a_3, (ATerm) ATinsert(CheckATermList(b_3), (ATerm) ATmakeAppl(sym__2, y_2, z_2)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm n_5 = t;
    int o_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_118(t);
        ;
        LocalPopChoice(o_5);
      }
    else
      {
        t = n_5;
        t = b_118(t);
        t = e_3(t);
      }
    return(t);
  }
  t = e_3(t);
  return(t);
}
ATerm for_3_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t)
{
  t = d_118(t);
  t = while_not_2_0(e_118, f_118, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATempty);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_5 = ATgetArgument(t, 0);
      if(((ATgetType(p_5) != AT_LIST) || !(ATisEmpty(p_5))))
        _fail(t);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_3;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_5 = ATgetFirst((ATermList) t);
      if(match_cons(q_5, sym__2))
        {
          i_3 = ATgetArgument(q_5, 0);
          if((i_3 != ATgetArgument(q_5, 1)))
            {
              _fail(ATgetArgument(q_5, 1));
            }
        }
      else
        _fail(t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_3;
  return(t);
}
ATerm pattern_match_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm r_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(f_4, _id, t);
        ;
        LocalPopChoice(s_5);
      }
    else
      {
        t = r_5;
        {
          ATerm t_5 = t;
          int u_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1_0(o_99, t);
              ;
              LocalPopChoice(u_5);
            }
          else
            {
              t = t_5;
              t = _2_0(UfDecompose_0_0, _id, t);
            }
        }
      }
    return(t);
  }
  t = for_3_0(c_4, d_4, e_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_v_5);
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL,s_0 = NULL;
        s_0 = t;
        t = term_v_5;
        q_0 = t;
        t = SSL_addi(m_3, q_0);
        ;
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        {
          ATerm t_0 = NULL,u_0 = NULL;
          u_0 = t;
          t = term_v_5;
          t_0 = t;
          t = SSL_addr(m_3, t_0);
        }
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, term_v_5);
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL,w_0 = NULL;
        w_0 = t;
        t = term_v_5;
        v_0 = t;
        t = SSL_addi(n_3, v_0);
        ;
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        {
          ATerm x_0 = NULL,z_0 = NULL;
          z_0 = t;
          t = term_v_5;
          x_0 = t;
          t = SSL_addr(n_3, x_0);
        }
      }
  }
  return(t);
}
ATerm do_test_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,k_0 = NULL,l_0 = NULL,n_0 = NULL,p_0 = NULL;
  k_3 = t;
  t = y_114(t);
  l_3 = t;
  n_0 = t;
  t = term_a_6;
  k_0 = t;
  t = n_0;
  p_0 = t;
  t = (ATerm) ATinsert(ATempty, l_3);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = k_3;
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_114(t);
        t = k_3;
        t = _2_0(g_4, _id, t);
        ;
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        t = _2_0(_id, h_4, t);
      }
  }
  return(t);
}
ATerm apply_test_4_0 (ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_115(t);
        t = d_115(t);
        ;
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        {
          ATerm a_1 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL;
          e_1 = t;
          t = term_a_6;
          a_1 = t;
          t = e_1;
          g_1 = t;
          t = (ATerm) ATinsert(ATempty, term_f_6);
          d_1 = t;
          t = SSL_printnl(a_1, d_1);
          t = term_f_6;
          _fail(t);
        }
      }
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = f_115(t);
    if(((p_3 != NULL) && (p_3 != t)))
      _fail(t);
    else
      p_3 = t;
    {
      ATerm g_6 = t;
      int h_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(p_3);
          if(((o_3 != NULL) && (o_3 != t)))
            _fail(t);
          else
            o_3 = t;
          ;
          LocalPopChoice(h_6);
        }
      else
        {
          t = g_6;
          {
            ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,s_1 = NULL;
            t = term_i_6;
            j_1 = t;
            t = term_a_6;
            h_1 = t;
            t = j_1;
            k_1 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_3)), term_i_6);
            i_1 = t;
            t = SSL_printnl(h_1, i_1);
            t = term_j_6;
            p_1 = t;
            t = term_a_6;
            l_1 = t;
            t = p_1;
            s_1 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_3)), term_j_6);
            m_1 = t;
            t = SSL_printnl(l_1, m_1);
            t = not_null(p_3);
            _fail(t);
          }
        }
    }
    return(t);
  }
  t = do_test_2_0(c_115, i_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = pattern_match_1_0(n_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATmakeAppl(sym_Op_2, term_n_6, (ATerm) ATinsert(ATempty, term_p_6))));
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_6, (ATerm) ATmakeAppl(sym_Op_2, term_n_6, (ATerm) ATinsert(ATempty, term_p_6))));
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(j_4, k_4, l_4, m_4, t);
  return(t);
}
ATerm _2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,t_1 = NULL,u_1 = NULL;
  w_3 = t;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_3);
  q_3 = t;
  t = s_3;
  t = x_81(t);
  u_3 = t;
  t = t_3;
  t = y_81(t);
  v_3 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, v_3);
  t_1 = t;
  t = SSLsetAnnotations(t_1, q_3);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm b_1 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  b_1 = t;
  t = term_q_6;
  m_2 = t;
  t = term_a_6;
  k_2 = t;
  t = m_2;
  n_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_1), term_q_6);
  l_2 = t;
  t = SSL_printnl(k_2, l_2);
  t = b_1;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm f_1 = NULL,o_2 = NULL,v_2 = NULL,w_2 = NULL,f_3 = NULL;
  f_1 = t;
  t = term_r_6;
  w_2 = t;
  t = term_a_6;
  o_2 = t;
  t = w_2;
  f_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_1), term_r_6);
  v_2 = t;
  t = SSL_printnl(o_2, v_2);
  t = f_1;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,v_1 = NULL,y_1 = NULL,z_1 = NULL,j_2 = NULL;
  t = w_114(t);
  y_0 = t;
  t = term_s_6;
  z_1 = t;
  t = term_a_6;
  v_1 = t;
  t = z_1;
  j_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_0), term_s_6);
  y_1 = t;
  t = SSL_printnl(v_1, y_1);
  t = term_u_6;
  t = x_114(t);
  t = _2_0(o_4, p_4, t);
  t = _2_0(_id, q_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(r_4, test1_0_0, t);
  return(t);
}
