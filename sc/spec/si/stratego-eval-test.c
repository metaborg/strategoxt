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
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_a_5;
ATerm term_p_4;
ATerm term_l_4;
ATerm term_h_4;
ATerm term_g_4;
void init_constant_terms (void)
{
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Var_1, term_n_5);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_Op_2, term_u_5, (ATerm) ATempty);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__2, term_z_5, term_z_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_2 (ATerm s_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm p_0 (ATerm);
ATerm v_0 (ATerm x_186, ATerm c_187, ATerm r_43, ATerm);
ATerm Cons_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm w_0 (ATerm y_99 (ATerm), ATerm d_43, ATerm e_43, ATerm b_43, ATerm c_43, ATerm);
ATerm while_not_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm pattern_match_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm y_0 (ATerm c_53, ATerm d_53, ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm do_test_2_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm apply_test_4_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm);
ATerm debug_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm test_suite_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Var_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,d_0 = NULL,e_0 = NULL,f_0 = NULL;
  d_0 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_0);
  a_0 = t;
  t = b_0;
  t = b_88(t);
  c_0 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_0);
  e_0 = t;
  t = SSLsetAnnotations(e_0, a_0);
  return(t);
}
ATerm at_end_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm g_1 = t;
    int y_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_1, t);
        ;
        LocalPopChoice(y_1);
      }
    else
      {
        t = g_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_105(t);
      }
    return(t);
  }
  t = p_1(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_1 = t;
  int c_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_2);
    }
  else
    {
      t = z_1;
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
          ATerm k_0 (ATerm t)
          {
            t = r_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_0, t);
        }
      }
    }
  return(t);
}
ATerm a_2 (ATerm s_1, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm f_2 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_2) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_1;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
      {
        ATerm g_2 = t;
        int h_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              t = w_1;
              return(t);
            }
            t = v_1;
            t = at_end_1_0(l_0, t);
            ;
            LocalPopChoice(h_2);
          }
        else
          {
            t = g_2;
            t = a_2(x_1, t);
          }
      }
    }
  else
    {
      t = a_2(x_1, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm i_2 = t;
    int r_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_106(t);
        ;
        LocalPopChoice(r_2);
      }
    else
      {
        t = i_2;
        t = o_106(t);
        t = _2_0(q_106, b_2, t);
        t = p_106(t);
      }
    return(t);
  }
  t = b_2(t);
  return(t);
}
ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_2 = ATgetArgument(t, 0);
      if(((ATgetType(s_2) != AT_LIST) || !(ATisEmpty(s_2))))
        _fail(t);
      {
        ATerm x_2 = ATgetArgument(t, 1);
        if(((ATgetType(x_2) != AT_LIST) || !(ATisEmpty(x_2))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_3 = ATgetArgument(t, 0);
      if(((ATgetType(a_3) == AT_LIST) && !(ATisEmpty(a_3))))
        {
          l_2 = ATgetFirst((ATermList) a_3);
          m_2 = (ATerm) ATgetNext((ATermList) a_3);
        }
      else
        _fail(t);
      {
        ATerm b_3 = ATgetArgument(t, 1);
        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
          {
            n_2 = ATgetFirst((ATermList) b_3);
            o_2 = (ATerm) ATgetNext((ATermList) b_3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_2, n_2), (ATerm) ATmakeAppl(sym__2, m_2, o_2));
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_2), p_2);
  return(t);
}
ATerm v_0 (ATerm x_186, ATerm c_187, ATerm r_43, ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,j_2 = NULL,k_2 = NULL;
  t = SSL_explode_term(c_187);
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_186);
  if(match_cons(t, sym__2))
    {
      if((d_2 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_2, e_2);
  t = genzip_4_0(m_0, n_0, p_0, _id, t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, r_43);
  t = conc_0_0(t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,g_0 = NULL,h_0 = NULL;
  z_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_2 = ATgetFirst((ATermList) t);
      v_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_2);
  t_2 = t;
  t = u_2;
  t = s_86(t);
  w_2 = t;
  t = v_2;
  t = t_86(t);
  y_2 = t;
  h_0 = t;
  t = (ATerm) ATinsert(CheckATermList(y_2), w_2);
  g_0 = t;
  t = SSLsetAnnotations(g_0, t_2);
  return(t);
}
ATerm fetch_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm c_3 = t;
    int d_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_104, _id, t);
        ;
        LocalPopChoice(d_3);
      }
    else
      {
        t = c_3;
        t = Cons_2_0(_id, e_3, t);
      }
    return(t);
  }
  t = e_3(t);
  return(t);
}
ATerm w_0 (ATerm y_99 (ATerm), ATerm d_43, ATerm e_43, ATerm b_43, ATerm c_43, ATerm t)
{
  t = d_43;
  t = y_99(t);
  t = c_43;
  {
    ATerm i_3 = t;
    if((PushChoice() == 0))
      {
        ATerm q_0 (ATerm t)
        {
          ATerm f_3 = NULL;
          if(match_cons(t, sym__2))
            {
              if((d_43 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              f_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, e_43, f_3);
          {
            ATerm j_3 = t;
            if((PushChoice() == 0))
              {
                ATerm g_3 = NULL;
                if(match_cons(t, sym__2))
                  {
                    g_3 = ATgetArgument(t, 0);
                    if((g_3 != ATgetArgument(t, 1)))
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
                t = j_3;
              }
          }
          return(t);
        }
        t = fetch_1_0(q_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_3;
      }
    t = (ATerm) ATmakeAppl(sym__2, b_43, (ATerm) ATinsert(CheckATermList(c_43), (ATerm) ATmakeAppl(sym__2, d_43, e_43)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm k_3 = t;
    int l_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(l_3);
      }
    else
      {
        t = k_3;
        t = n_118(t);
        t = h_3(t);
      }
    return(t);
  }
  t = h_3(t);
  return(t);
}
ATerm for_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  t = p_118(t);
  t = while_not_2_0(q_118, r_118, t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATempty);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_3 = ATgetArgument(t, 0);
      if(((ATgetType(m_3) != AT_LIST) || !(ATisEmpty(m_3))))
        _fail(t);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_3 = ATgetFirst((ATermList) t);
      if(match_cons(n_3, sym__2))
        {
          u_3 = ATgetArgument(n_3, 0);
          if((u_3 != ATgetArgument(n_3, 1)))
            {
              _fail(ATgetArgument(n_3, 1));
            }
        }
      else
        _fail(t);
      v_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_3;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_3 = ATgetFirst((ATermList) t);
      if(match_cons(o_3, sym__2))
        {
          k_4 = ATgetArgument(o_3, 0);
          m_4 = ATgetArgument(o_3, 1);
        }
      else
        _fail(t);
      n_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_0(k_4, m_4, n_4, t);
  return(t);
}
ATerm pattern_match_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm p_3 = t;
    int q_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(x_0, _id, t);
        ;
        LocalPopChoice(q_3);
      }
    else
      {
        t = p_3;
        {
          ATerm r_3 = t;
          int b_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL;
              w_3 = t;
              if(match_cons(t, sym__2))
                {
                  x_3 = ATgetArgument(t, 0);
                  d_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_3 = ATgetFirst((ATermList) t);
                  c_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_3;
              if(match_cons(t, sym__2))
                {
                  z_3 = ATgetArgument(t, 0);
                  a_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_3;
              t = w_0(z_99, z_3, a_4, c_4, d_4, t);
              ;
              LocalPopChoice(b_4);
            }
          else
            {
              t = r_3;
              t = _2_0(z_0, _id, t);
            }
        }
      }
    return(t);
  }
  t = for_3_0(s_0, t_0, u_0, t);
  return(t);
}
ATerm y_0 (ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_53, d_53);
      ;
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      t = SSL_addr(c_53, d_53);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  v_4 = t;
  t = term_g_4;
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, term_g_4);
  t = y_0(v_4, w_4, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL;
  x_4 = t;
  t = term_g_4;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, term_g_4);
  t = y_0(x_4, y_4, t);
  return(t);
}
ATerm do_test_2_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  o_4 = t;
  t = k_115(t);
  r_4 = t;
  t = term_h_4;
  s_4 = t;
  t = (ATerm) ATinsert(ATempty, r_4);
  t_4 = t;
  t = SSL_printnl(s_4, t_4);
  t = o_4;
  {
    ATerm i_4 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_115(t);
        t = o_4;
        t = _2_0(a_1, _id, t);
        ;
        LocalPopChoice(j_4);
      }
    else
      {
        t = i_4;
        t = _2_0(_id, b_1, t);
      }
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_l_4;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_p_4;
  return(t);
}
ATerm apply_test_4_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,c_5 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm q_4 = t;
    int u_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_115(t);
        t = p_115(t);
        ;
        LocalPopChoice(u_4);
      }
    else
      {
        t = q_4;
        {
          ATerm d_5 = NULL,e_5 = NULL;
          t = term_h_4;
          d_5 = t;
          t = (ATerm) ATinsert(ATempty, term_a_5);
          e_5 = t;
          t = SSL_printnl(d_5, e_5);
          t = term_a_5;
          _fail(t);
        }
      }
    if(((z_4 != NULL) && (z_4 != t)))
      _fail(t);
    else
      z_4 = t;
    t = r_115(t);
    if(((c_5 != NULL) && (c_5 != t)))
      _fail(t);
    else
      c_5 = t;
    {
      ATerm b_5 = t;
      int l_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(c_5);
          if(((z_4 != NULL) && (z_4 != t)))
            _fail(t);
          else
            z_4 = t;
          ;
          LocalPopChoice(l_5);
        }
      else
        {
          t = b_5;
          t = not_null(z_4);
          t = debug_1_0(d_1, t);
          t = not_null(c_5);
          t = debug_1_0(e_1, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(o_115, c_1, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_m_5;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = pattern_match_1_0(k_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATmakeAppl(sym_Op_2, term_t_5, (ATerm) ATinsert(ATempty, term_v_5))));
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_o_5, (ATerm) ATmakeAppl(sym_Op_2, term_t_5, (ATerm) ATinsert(ATempty, term_v_5))));
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(f_1, h_1, i_1, j_1, t);
  return(t);
}
ATerm _2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,i_0 = NULL,j_0 = NULL;
  k_5 = t;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_5);
  f_5 = t;
  t = g_5;
  t = d_82(t);
  i_5 = t;
  t = h_5;
  t = e_82(t);
  j_5 = t;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_5, j_5);
  i_0 = t;
  t = SSLsetAnnotations(i_0, f_5);
  return(t);
}
ATerm debug_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
  p_5 = t;
  t = w_121(t);
  q_5 = t;
  t = term_h_4;
  r_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_5), q_5);
  s_5 = t;
  t = SSL_printnl(r_5, s_5);
  t = p_5;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_w_5;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_x_5;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_y_5;
  return(t);
}
ATerm r_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t)
{
  t = i_115(t);
  t = debug_1_0(l_1, t);
  t = term_a_6;
  t = j_115(t);
  t = _2_0(m_1, n_1, t);
  t = _2_0(_id, r_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(t_1, test1_0_0, t);
  return(t);
}
