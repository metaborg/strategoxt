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
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_m_4;
ATerm term_d_4;
void init_constant_terms (void)
{
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(sym_Var_1, term_q_4);
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(sym_Op_2, term_t_4, (ATerm) ATempty);
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym__2, term_v_4, term_v_4);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm g_0 (ATerm);
ATerm h_0 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm MatchVar_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm l_0 (ATerm);
ATerm p_0 (ATerm);
ATerm pattern_match_1_0 (ATerm o_99 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm do_test_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm);
ATerm apply_test_4_0 (ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm test_suite_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Var_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, c_0), a_0);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_1 = t;
  int h_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_1);
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
          ATerm d_0 (ATerm t)
          {
            t = r_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_0, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm i_1 = t;
    int j_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_1, t);
        ;
        LocalPopChoice(j_1);
      }
    else
      {
        t = i_1;
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
    ATerm k_1 = t;
    int l_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_106(t);
        ;
        LocalPopChoice(l_1);
      }
    else
      {
        t = k_1;
        t = e_106(t);
        t = _2_0(g_106, o_1, t);
        t = f_106(t);
      }
    return(t);
  }
  t = o_1(t);
  return(t);
}
ATerm f_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_1 = ATgetArgument(t, 0);
      if(((ATgetType(m_1) != AT_LIST) || !(ATisEmpty(m_1))))
        _fail(t);
      {
        ATerm p_1 = ATgetArgument(t, 1);
        if(((ATgetType(p_1) != AT_LIST) || !(ATisEmpty(p_1))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_1 = ATgetArgument(t, 0);
      if(((ATgetType(s_1) == AT_LIST) && !(ATisEmpty(s_1))))
        {
          d_2 = ATgetFirst((ATermList) s_1);
          f_2 = (ATerm) ATgetNext((ATermList) s_1);
        }
      else
        _fail(t);
      {
        ATerm t_1 = ATgetArgument(t, 1);
        if(((ATgetType(t_1) == AT_LIST) && !(ATisEmpty(t_1))))
          {
            e_2 = ATgetFirst((ATermList) t_1);
            g_2 = (ATerm) ATgetNext((ATermList) t_1);
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
ATerm h_0 (ATerm t)
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
      ATerm u_1 = ATgetFirst((ATermList) t);
      if(match_cons(u_1, sym__2))
        {
          q_1 = ATgetArgument(u_1, 0);
          r_1 = ATgetArgument(u_1, 1);
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
  t = genzip_4_0(f_0, g_0, h_0, _id, t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, w_1);
  {
    ATerm v_1 = t;
    int y_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_1 = ATgetArgument(t, 0);
            ATerm j_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_2;
        {
          ATerm i_0 (ATerm t)
          {
            t = w_1;
            return(t);
          }
          t = at_end_1_0(i_0, t);
        }
        ;
        LocalPopChoice(y_1);
      }
    else
      {
        t = v_1;
        {
          ATerm m_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_2, w_1));
          if(match_cons(t, sym__2))
            {
              ATerm k_2 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_2) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_2), s_2), p_2);
  return(t);
}
ATerm fetch_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm l_2 = t;
    int m_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_104, _id, t);
        ;
        LocalPopChoice(m_2);
      }
    else
      {
        t = l_2;
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
      ATerm n_2 = ATgetArgument(t, 0);
      if(((ATgetType(n_2) == AT_LIST) && !(ATisEmpty(n_2))))
        {
          ATerm o_2 = ATgetFirst((ATermList) n_2);
          if(match_cons(o_2, sym__2))
            {
              y_2 = ATgetArgument(o_2, 0);
              z_2 = ATgetArgument(o_2, 1);
            }
          else
            _fail(t);
          a_3 = (ATerm) ATgetNext((ATermList) n_2);
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
    ATerm v_2 = t;
    if((PushChoice() == 0))
      {
        ATerm j_0 (ATerm t)
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
            ATerm w_2 = t;
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
                t = w_2;
              }
          }
          return(t);
        }
        t = fetch_1_0(j_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_2;
      }
    t = (ATerm) ATmakeAppl(sym__2, a_3, (ATerm) ATinsert(CheckATermList(b_3), (ATerm) ATmakeAppl(sym__2, y_2, z_2)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 = t;
    int r_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_118(t);
        ;
        LocalPopChoice(r_3);
      }
    else
      {
        t = f_3;
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
ATerm k_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATempty);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_3 = ATgetArgument(t, 0);
      if(((ATgetType(x_3) != AT_LIST) || !(ATisEmpty(x_3))))
        _fail(t);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_3;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_3 = ATgetFirst((ATermList) t);
      if(match_cons(y_3, sym__2))
        {
          i_3 = ATgetArgument(y_3, 0);
          if((i_3 != ATgetArgument(y_3, 1)))
            {
              _fail(ATgetArgument(y_3, 1));
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
  ATerm n_0 (ATerm t)
  {
    ATerm z_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(p_0, _id, t);
        ;
        LocalPopChoice(a_4);
      }
    else
      {
        t = z_3;
        {
          ATerm b_4 = t;
          int c_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1_0(o_99, t);
              ;
              LocalPopChoice(c_4);
            }
          else
            {
              t = b_4;
              t = _2_0(UfDecompose_0_0, _id, t);
            }
        }
      }
    return(t);
  }
  t = for_3_0(k_0, l_0, n_0, t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, term_d_4);
  {
    ATerm e_4 = t;
    int f_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(m_3, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(f_4);
      }
    else
      {
        t = e_4;
        t = SSL_addr(m_3, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, term_d_4);
  {
    ATerm g_4 = t;
    int h_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_3, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(h_4);
      }
    else
      {
        t = g_4;
        t = SSL_addr(n_3, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm do_test_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  k_3 = t;
  t = y_114(t);
  l_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_3));
  t = k_3;
  {
    ATerm i_4 = t;
    int j_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_114(t);
        t = k_3;
        t = _2_0(q_0, _id, t);
        ;
        LocalPopChoice(j_4);
      }
    else
      {
        t = i_4;
        t = _2_0(_id, s_0, t);
      }
  }
  return(t);
}
ATerm apply_test_4_0 (ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm k_4 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_115(t);
        t = d_115(t);
        ;
        LocalPopChoice(l_4);
      }
    else
      {
        t = k_4;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue))));
        t = term_m_4;
        _fail(t);
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
      ATerm n_4 = t;
      int o_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(p_3);
          if(((o_3 != NULL) && (o_3 != t)))
            _fail(t);
          else
            o_3 = t;
          ;
          LocalPopChoice(o_4);
        }
      else
        {
          t = n_4;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_3)), (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue))));
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_3)), (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue))));
          t = not_null(p_3);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(c_115, t_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_p_4;
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = pattern_match_1_0(z_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATmakeAppl(sym_Op_2, term_s_4, (ATerm) ATinsert(ATempty, term_u_4))));
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_r_4, (ATerm) ATmakeAppl(sym_Op_2, term_s_4, (ATerm) ATinsert(ATempty, term_u_4))));
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  t = apply_test_4_0(u_0, v_0, w_0, x_0, t);
  return(t);
}
ATerm _2_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
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
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_3, v_3), q_3);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_1), (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue))));
  t = b_1;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_1), (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue))));
  t = f_1;
  return(t);
}
ATerm e_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm t)
{
  ATerm y_0 = NULL;
  t = w_114(t);
  y_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_0), (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue))));
  t = term_w_4;
  t = x_114(t);
  t = _2_0(a_1, d_1, t);
  t = _2_0(_id, e_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_x_4;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(g_1, test1_0_0, t);
  return(t);
}
