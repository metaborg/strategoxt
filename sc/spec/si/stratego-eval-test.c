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
ATerm term_v_4;
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
ATerm term_h_4;
ATerm term_e_4;
ATerm term_d_4;
ATerm term_b_4;
ATerm term_y_3;
void init_constant_terms (void)
{
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(sym_Var_1, term_l_4);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(sym_Op_2, term_o_4, (ATerm) ATempty);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym__2, term_t_4, term_t_4);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm fetch_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm w_0 (ATerm y_99 (ATerm), ATerm d_43, ATerm e_43, ATerm b_43, ATerm c_43, ATerm);
ATerm at_end_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_2 (ATerm z_1, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm);
ATerm g_0 (ATerm);
ATerm i_0 (ATerm);
ATerm l_0 (ATerm);
ATerm v_0 (ATerm x_186, ATerm c_187, ATerm r_43, ATerm);
ATerm while_not_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm);
ATerm m_0 (ATerm);
ATerm o_0 (ATerm);
ATerm t_7 (ATerm i_6, ATerm j_6, ATerm k_6, ATerm);
ATerm u_7 (ATerm v_6, ATerm w_6, ATerm z_6, ATerm);
ATerm pattern_match_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm y_0 (ATerm c_53, ATerm d_53, ATerm);
ATerm do_test_2_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm apply_test_4_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm test_suite_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm f_5 = NULL,g_5 = NULL,i_5 = NULL;
    f_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_5 = ATgetFirst((ATermList) t);
        i_5 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_1 = t;
      int q_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 = NULL,l_1 = NULL,k_0 = NULL;
          t = SSLgetAnnotations(f_5);
          f_1 = t;
          t = g_5;
          t = u_104(t);
          l_1 = t;
          t = (ATerm) ATinsert(CheckATermList(i_5), l_1);
          k_0 = t;
          t = SSLsetAnnotations(k_0, f_1);
          ;
          LocalPopChoice(q_1);
        }
      else
        {
          t = o_1;
          {
            ATerm x_1 = NULL,c_2 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(f_5);
            x_1 = t;
            t = i_5;
            t = j_5(t);
            c_2 = t;
            t = (ATerm) ATinsert(CheckATermList(c_2), g_5);
            n_0 = t;
            t = SSLsetAnnotations(n_0, x_1);
          }
        }
    }
    return(t);
  }
  t = j_5(t);
  return(t);
}
ATerm w_0 (ATerm y_99 (ATerm), ATerm d_43, ATerm e_43, ATerm b_43, ATerm c_43, ATerm t)
{
  t = not_null(d_43);
  t = y_99(t);
  t = not_null(c_43);
  {
    ATerm r_1 = t;
    if((PushChoice() == 0))
      {
        ATerm a_0 (ATerm t)
        {
          ATerm o_5 = NULL;
          if(match_cons(t, sym__2))
            {
              if(((d_43 != NULL) && (d_43 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_43 = ATgetArgument(t, 0);
              o_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_43), o_5);
          {
            ATerm s_1 = t;
            if((PushChoice() == 0))
              {
                ATerm p_5 = NULL;
                if(match_cons(t, sym__2))
                  {
                    p_5 = ATgetArgument(t, 0);
                    if((p_5 != ATgetArgument(t, 1)))
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
                t = s_1;
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
        t = r_1;
      }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_43), (ATerm) ATinsert(CheckATermList(not_null(c_43)), (ATerm) ATmakeAppl(sym__2, not_null(d_43), not_null(e_43))));
  }
  return(t);
}
ATerm at_end_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm i_1 = NULL,n_1 = NULL,p_1 = NULL;
    p_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_1 = ATgetFirst((ATermList) t);
        n_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_0 = NULL,p_0 = NULL,r_0 = NULL;
          t = SSLgetAnnotations(p_1);
          j_0 = t;
          t = n_1;
          t = t_1(t);
          p_0 = t;
          t = (ATerm) ATinsert(CheckATermList(p_0), i_1);
          r_0 = t;
          t = SSLsetAnnotations(r_0, j_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_1;
        t = a_105(t);
      }
    return(t);
  }
  t = t_1(t);
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
      ATerm e_0 (ATerm t)
      {
        t = not_null(d_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_0 != NULL) && (c_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_0 = ATgetFirst((ATermList) t);
          if(((d_0 != NULL) && (d_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(c_0);
      t = at_end_1_0(e_0, t);
    }
  return(t);
}
ATerm q_2 (ATerm z_1, ATerm t)
{
  ATerm a_2 = NULL;
  t = SSL_explode_term(z_1);
  if(match_cons(t, sym__2))
    {
      ATerm u_1 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_1) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_2;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_2 = NULL,h_2 = NULL,n_2 = NULL;
  if(((n_2 != NULL) && (n_2 != t)))
    _fail(t);
  else
    n_2 = t;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
      {
        ATerm v_1 = t;
        int w_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = not_null(h_2);
              return(t);
            }
            t = not_null(f_2);
            t = at_end_1_0(f_0, t);
            ;
            LocalPopChoice(w_1);
          }
        else
          {
            t = v_1;
            t = q_2(not_null(n_2), t);
          }
      }
    }
  else
    {
      t = q_2(not_null(n_2), t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm y_1 = t;
    int b_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_106(t);
        ;
        LocalPopChoice(b_2);
      }
    else
      {
        t = y_1;
        {
          ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL,y_2 = NULL,x_0 = NULL;
          t = o_106(t);
          y_2 = t;
          if(match_cons(t, sym__2))
            {
              s_2 = ATgetArgument(t, 0);
              t_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_2);
          r_2 = t;
          t = s_2;
          t = q_106(t);
          u_2 = t;
          t = t_2;
          t = z_2(t);
          x_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_2, x_2);
          x_0 = t;
          t = SSLsetAnnotations(x_0, r_2);
          t = p_106(t);
        }
      }
    return(t);
  }
  t = z_2(t);
  return(t);
}
ATerm g_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_2 = ATgetArgument(t, 0);
      if(((ATgetType(d_2) != AT_LIST) || !(ATisEmpty(d_2))))
        _fail(t);
      {
        ATerm e_2 = ATgetArgument(t, 1);
        if(((ATgetType(e_2) != AT_LIST) || !(ATisEmpty(e_2))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_0 (ATerm t)
{
  ATerm l_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_2 = ATgetArgument(t, 0);
      if(((ATgetType(g_2) == AT_LIST) && !(ATisEmpty(g_2))))
        {
          l_3 = ATgetFirst((ATermList) g_2);
          o_3 = (ATerm) ATgetNext((ATermList) g_2);
        }
      else
        _fail(t);
      {
        ATerm i_2 = ATgetArgument(t, 1);
        if(((ATgetType(i_2) == AT_LIST) && !(ATisEmpty(i_2))))
          {
            p_3 = ATgetFirst((ATermList) i_2);
            q_3 = (ATerm) ATgetNext((ATermList) i_2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_3, p_3), (ATerm) ATmakeAppl(sym__2, o_3, q_3));
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm r_3 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_4), r_3);
  return(t);
}
ATerm v_0 (ATerm x_186, ATerm c_187, ATerm r_43, ATerm t)
{
  ATerm e_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  t = SSL_explode_term(c_187);
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_186);
  if(match_cons(t, sym__2))
    {
      if((e_3 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_3, i_3);
  t = genzip_4_0(g_0, i_0, l_0, _id, t);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, r_43);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm j_2 = t;
    int k_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(k_2);
      }
    else
      {
        t = j_2;
        t = n_118(t);
        t = w_5(t);
      }
    return(t);
  }
  t = w_5(t);
  return(t);
}
ATerm for_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  t = p_118(t);
  t = while_not_2_0(q_118, r_118, t);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm e_6 = NULL;
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_6, (ATerm) ATempty);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_2 = ATgetArgument(t, 0);
      if(((ATgetType(l_2) != AT_LIST) || !(ATisEmpty(l_2))))
        _fail(t);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6;
  return(t);
}
ATerm t_7 (ATerm i_6, ATerm j_6, ATerm k_6, ATerm t)
{
  ATerm m_6 = NULL,s_6 = NULL,t_6 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(k_6);
  m_6 = t;
  t = i_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_2 = ATgetFirst((ATermList) t);
      if(match_cons(o_2, sym__2))
        {
          s_6 = ATgetArgument(o_2, 0);
          if((s_6 != ATgetArgument(o_2, 1)))
            {
              _fail(ATgetArgument(o_2, 1));
            }
        }
      else
        _fail(t);
      t_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_6, j_6);
  g_1 = t;
  t = SSLsetAnnotations(g_1, m_6);
  return(t);
}
ATerm u_7 (ATerm v_6, ATerm w_6, ATerm z_6, ATerm t)
{
  ATerm a_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(z_6);
  a_7 = t;
  t = v_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_2 = ATgetFirst((ATermList) t);
      if(match_cons(p_2, sym__2))
        {
          e_7 = ATgetArgument(p_2, 0);
          f_7 = ATgetArgument(p_2, 1);
        }
      else
        _fail(t);
      g_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_0(e_7, f_7, g_7, t);
  d_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_7, w_6);
  h_1 = t;
  t = SSLsetAnnotations(h_1, a_7);
  return(t);
}
ATerm pattern_match_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
    m_7 = t;
    if(match_cons(t, sym__2))
      {
        n_7 = ATgetArgument(t, 0);
        o_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_7;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_7 = ATgetFirst((ATermList) t);
        l_7 = (ATerm) ATgetNext((ATermList) t);
        t = i_7;
        if(match_cons(t, sym__2))
          {
            j_7 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
            {
              ATerm v_2 = t;
              int w_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_7(n_7, o_7, m_7, t);
                  ;
                  LocalPopChoice(w_2);
                }
              else
                {
                  t = v_2;
                  {
                    ATerm c_3 = t;
                    int d_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_7;
                        t = w_0(z_99, j_7, k_7, l_7, o_7, t);
                        ;
                        LocalPopChoice(d_3);
                      }
                    else
                      {
                        t = c_3;
                        t = u_7(n_7, o_7, m_7, t);
                      }
                  }
                }
            }
          }
        else
          {
            ATerm f_3 = t;
            int k_3 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_7(n_7, o_7, m_7, t);
                ;
                LocalPopChoice(k_3);
              }
            else
              {
                t = f_3;
                t = u_7(n_7, o_7, m_7, t);
              }
          }
      }
    else
      {
        ATerm n_3 = t;
        int s_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_7(n_7, o_7, m_7, t);
            ;
            LocalPopChoice(s_3);
          }
        else
          {
            t = n_3;
            t = u_7(n_7, o_7, m_7, t);
          }
      }
    return(t);
  }
  t = for_3_0(m_0, o_0, q_0, t);
  return(t);
}
ATerm y_0 (ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm u_3 = t;
  int x_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_53, d_53);
      ;
      LocalPopChoice(x_3);
    }
  else
    {
      t = u_3;
      t = SSL_addr(c_53, d_53);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
  x_7 = t;
  t = k_115(t);
  y_7 = t;
  t = term_y_3;
  z_7 = t;
  t = (ATerm) ATinsert(ATempty, y_7);
  a_8 = t;
  t = SSL_printnl(z_7, a_8);
  t = x_7;
  {
    ATerm z_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_3 = NULL;
        t = l_115(t);
        t = x_7;
        if(match_cons(t, sym__2))
          {
            c_8 = ATgetArgument(t, 0);
            d_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_7);
        b_8 = t;
        t = term_b_4;
        f_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, term_b_4);
        t = y_0(c_8, f_8, t);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_8, d_8);
        g_3 = t;
        t = SSLsetAnnotations(g_3, b_8);
        ;
        LocalPopChoice(a_4);
      }
    else
      {
        t = z_3;
        {
          ATerm o_8 = NULL,p_8 = NULL,m_2 = NULL,a_3 = NULL,b_3 = NULL,m_3 = NULL;
          if(match_cons(t, sym__2))
            {
              o_8 = ATgetArgument(t, 0);
              p_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_7);
          m_2 = t;
          t = term_b_4;
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_8, term_b_4);
          t = y_0(p_8, b_3, t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_8, a_3);
          m_3 = t;
          t = SSLsetAnnotations(m_3, m_2);
        }
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_d_4;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_e_4;
  return(t);
}
ATerm apply_test_4_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm r_115 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm f_4 = t;
    int g_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_115(t);
        t = p_115(t);
        ;
        LocalPopChoice(g_4);
      }
    else
      {
        t = f_4;
        {
          ATerm t_8 = NULL,u_8 = NULL;
          t = term_y_3;
          t_8 = t;
          t = (ATerm) ATinsert(ATempty, term_h_4);
          u_8 = t;
          t = SSL_printnl(t_8, u_8);
          t = term_h_4;
          _fail(t);
        }
      }
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    t = r_115(t);
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    {
      ATerm i_4 = t;
      int j_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(s_8);
          if(((r_8 != NULL) && (r_8 != t)))
            _fail(t);
          else
            r_8 = t;
          ;
          LocalPopChoice(j_4);
        }
      else
        {
          t = i_4;
          t = not_null(r_8);
          t = debug_1_0(t_0, t);
          t = not_null(s_8);
          t = debug_1_0(u_0, t);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(o_115, s_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_k_4;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = pattern_match_1_0(d_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATmakeAppl(sym_Op_2, term_n_4, (ATerm) ATinsert(ATempty, term_p_4))));
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_m_4, (ATerm) ATmakeAppl(sym_Op_2, term_n_4, (ATerm) ATinsert(ATempty, term_p_4))));
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,t_3 = NULL;
  x_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_8);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_8);
  t_3 = t;
  t = SSLsetAnnotations(t_3, v_8);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(z_0, a_1, b_1, c_1, t);
  return(t);
}
ATerm debug_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  y_8 = t;
  t = w_121(t);
  z_8 = t;
  t = term_y_3;
  a_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_8), z_8);
  b_9 = t;
  t = SSL_printnl(a_9, b_9);
  t = y_8;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_q_4;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_r_4;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_s_4;
  return(t);
}
ATerm test_suite_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,w_3 = NULL,v_3 = NULL;
  t = i_115(t);
  t = debug_1_0(e_1, t);
  t = term_u_4;
  t = j_115(t);
  l_9 = t;
  if(match_cons(t, sym__2))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_9);
  f_9 = t;
  t = g_9;
  t = debug_1_0(j_1, t);
  i_9 = t;
  t = h_9;
  t = debug_1_0(k_1, t);
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
  v_3 = t;
  t = SSLsetAnnotations(v_3, f_9);
  k_9 = t;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_9);
  c_9 = t;
  t = e_9;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
  w_3 = t;
  t = SSLsetAnnotations(w_3, c_9);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_v_4;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(m_1, test1_0_0, t);
  return(t);
}
