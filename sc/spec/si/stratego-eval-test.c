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
ATerm term_f_4;
void init_constant_terms (void)
{
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeInt(1);
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
ATerm Var_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_104 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm MatchVar_1_0 (ATerm o_99 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm);
ATerm pattern_match_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm do_test_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm);
ATerm apply_test_4_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm);
ATerm test1_0_0 (ATerm);
ATerm _2_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm);
ATerm test_suite_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Var_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,d_0 = NULL;
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
  t = r_87(t);
  c_0 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, c_0), a_0);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_1 = t;
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
      t = g_1;
      {
        ATerm q_0 = NULL,z_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_0 = ATgetFirst((ATermList) t);
            z_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_0;
        {
          ATerm e_0 (ATerm t)
          {
            t = z_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_0, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm i_1 = t;
    int j_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_1, t);
        ;
        LocalPopChoice(j_1);
      }
    else
      {
        t = i_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_104(t);
      }
    return(t);
  }
  t = t_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm k_1 = t;
    int l_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_106(t);
        ;
        LocalPopChoice(l_1);
      }
    else
      {
        t = k_1;
        t = f_106(t);
        t = _2_0(h_106, u_1, t);
        t = g_106(t);
      }
    return(t);
  }
  t = u_1(t);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_1 = ATgetFirst((ATermList) t);
      if(match_cons(m_1, sym__2))
        {
          x_1 = ATgetArgument(m_1, 0);
          y_1 = ATgetArgument(m_1, 1);
        }
      else
        _fail(t);
      b_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_1);
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_1);
  if(match_cons(t, sym__2))
    {
      if((c_2 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_2, d_2);
  {
    ATerm f_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm n_1 = ATgetArgument(t, 0);
          if(((ATgetType(n_1) != AT_LIST) || !(ATisEmpty(n_1))))
            _fail(t);
          {
            ATerm o_1 = ATgetArgument(t, 1);
            if(((ATgetType(o_1) != AT_LIST) || !(ATisEmpty(o_1))))
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
      ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm p_1 = ATgetArgument(t, 0);
          if(((ATgetType(p_1) == AT_LIST) && !(ATisEmpty(p_1))))
            {
              g_2 = ATgetFirst((ATermList) p_1);
              i_2 = (ATerm) ATgetNext((ATermList) p_1);
            }
          else
            _fail(t);
          {
            ATerm q_1 = ATgetArgument(t, 1);
            if(((ATgetType(q_1) == AT_LIST) && !(ATisEmpty(q_1))))
              {
                h_2 = ATgetFirst((ATermList) q_1);
                j_2 = (ATerm) ATgetNext((ATermList) q_1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_2, h_2), (ATerm) ATmakeAppl(sym__2, i_2, j_2));
      return(t);
    }
    ATerm h_0 (ATerm t)
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym__2))
        {
          k_2 = ATgetArgument(t, 0);
          l_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(l_2), k_2);
      return(t);
    }
    t = genzip_4_0(f_0, g_0, h_0, _id, t);
    f_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_2, b_2);
    {
      ATerm r_1 = t;
      int s_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_1 = ATgetArgument(t, 0);
              ATerm w_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_2;
          {
            ATerm i_0 (ATerm t)
            {
              t = b_2;
              return(t);
            }
            t = at_end_1_0(i_0, t);
          }
          ;
          LocalPopChoice(s_1);
        }
      else
        {
          t = r_1;
          {
            ATerm l_0 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_2, b_2));
            if(match_cons(t, sym__2))
              {
                ATerm z_1 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_1) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                l_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_0;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm Cons_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  v_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_2 = ATgetFirst((ATermList) t);
      r_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  p_2 = t;
  t = q_2;
  t = n_86(t);
  t_2 = t;
  t = r_2;
  t = o_86(t);
  u_2 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(u_2), t_2), p_2);
  return(t);
}
ATerm fetch_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm a_2 = t;
    int m_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_104, _id, t);
        ;
        LocalPopChoice(m_2);
      }
    else
      {
        t = a_2;
        t = Cons_2_0(_id, y_2, t);
      }
    return(t);
  }
  t = y_2(t);
  return(t);
}
ATerm MatchVar_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_2 = ATgetArgument(t, 0);
      if(((ATgetType(n_2) == AT_LIST) && !(ATisEmpty(n_2))))
        {
          ATerm o_2 = ATgetFirst((ATermList) n_2);
          if(match_cons(o_2, sym__2))
            {
              z_2 = ATgetArgument(o_2, 0);
              a_3 = ATgetArgument(o_2, 1);
            }
          else
            _fail(t);
          b_3 = (ATerm) ATgetNext((ATermList) n_2);
        }
      else
        _fail(t);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_2;
  t = o_99(t);
  t = d_3;
  {
    ATerm s_2 = t;
    if((PushChoice() == 0))
      {
        ATerm j_0 (ATerm t)
        {
          ATerm e_3 = NULL;
          if(match_cons(t, sym__2))
            {
              if((z_2 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
              e_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_3, e_3);
          {
            ATerm w_2 = t;
            if((PushChoice() == 0))
              {
                ATerm f_3 = NULL;
                if(match_cons(t, sym__2))
                  {
                    f_3 = ATgetArgument(t, 0);
                    if((f_3 != ATgetArgument(t, 1)))
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
        t = s_2;
      }
    t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(CheckATermList(d_3), (ATerm) ATmakeAppl(sym__2, z_2, a_3)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm x_2 = t;
    int c_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_118(t);
        ;
        LocalPopChoice(c_3);
      }
    else
      {
        t = x_2;
        t = c_118(t);
        t = g_3(t);
      }
    return(t);
  }
  t = g_3(t);
  return(t);
}
ATerm for_3_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t)
{
  t = e_118(t);
  t = while_not_2_0(f_118, g_118, t);
  return(t);
}
ATerm pattern_match_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm k_0 (ATerm t)
  {
    ATerm h_3 = NULL;
    h_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_3, (ATerm) ATempty);
    return(t);
  }
  ATerm m_0 (ATerm t)
  {
    ATerm j_3 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm i_3 = ATgetArgument(t, 0);
        if(((ATgetType(i_3) != AT_LIST) || !(ATisEmpty(i_3))))
          _fail(t);
        j_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = j_3;
    return(t);
  }
  ATerm n_0 (ATerm t)
  {
    ATerm y_3 = t;
    int z_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          ATerm k_3 = NULL,l_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_4 = ATgetFirst((ATermList) t);
              if(match_cons(a_4, sym__2))
                {
                  k_3 = ATgetArgument(a_4, 0);
                  if((k_3 != ATgetArgument(a_4, 1)))
                    {
                      _fail(ATgetArgument(a_4, 1));
                    }
                }
              else
                _fail(t);
              l_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_3;
          return(t);
        }
        t = _2_0(o_0, _id, t);
        ;
        LocalPopChoice(z_3);
      }
    else
      {
        t = y_3;
        {
          ATerm b_4 = t;
          int c_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1_0(p_99, t);
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
  t = for_3_0(k_0, m_0, n_0, t);
  return(t);
}
ATerm do_test_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  m_3 = t;
  t = z_114(t);
  n_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_3));
  t = m_3;
  {
    ATerm d_4 = t;
    int e_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_115(t);
        t = m_3;
        {
          ATerm p_0 (ATerm t)
          {
            ATerm o_3 = NULL;
            o_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_3, term_f_4);
            {
              ATerm g_4 = t;
              int h_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(o_3, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(h_4);
                }
              else
                {
                  t = g_4;
                  t = SSL_addr(o_3, (ATerm) ATmakeInt(1));
                }
            }
            return(t);
          }
          t = _2_0(p_0, _id, t);
        }
        ;
        LocalPopChoice(e_4);
      }
    else
      {
        t = d_4;
        {
          ATerm r_0 (ATerm t)
          {
            ATerm p_3 = NULL;
            p_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_3, term_f_4);
            {
              ATerm i_4 = t;
              int j_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_addi(p_3, (ATerm) ATmakeInt(1));
                  ;
                  LocalPopChoice(j_4);
                }
              else
                {
                  t = i_4;
                  t = SSL_addr(p_3, (ATerm) ATmakeInt(1));
                }
            }
            return(t);
          }
          t = _2_0(_id, r_0, t);
        }
      }
  }
  return(t);
}
ATerm apply_test_4_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm g_115 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm k_4 = t;
    int l_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_115(t);
        t = e_115(t);
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
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = g_115(t);
    if(((r_3 != NULL) && (r_3 != t)))
      _fail(t);
    else
      r_3 = t;
    {
      ATerm n_4 = t;
      int o_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = not_null(r_3);
          if(((q_3 != NULL) && (q_3 != t)))
            _fail(t);
          else
            q_3 = t;
          ;
          LocalPopChoice(o_4);
        }
      else
        {
          t = n_4;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_3)), (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue))));
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_3)), (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue))));
          t = not_null(r_3);
          _fail(t);
        }
    }
    return(t);
  }
  t = do_test_2_0(d_115, s_0, t);
  return(t);
}
ATerm test1_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_p_4;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = Var_1_0(_id, t);
      return(t);
    }
    t = pattern_match_1_0(a_1, t);
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
  t = apply_test_4_0(t_0, u_0, w_0, x_0, t);
  return(t);
}
ATerm _2_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  x_3 = t;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  s_3 = t;
  t = t_3;
  t = y_81(t);
  v_3 = t;
  t = u_3;
  t = z_81(t);
  w_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, v_3, w_3), s_3);
  return(t);
}
ATerm test_suite_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t)
{
  ATerm v_0 = NULL;
  t = x_114(t);
  v_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_0), (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue))));
  t = term_w_4;
  t = y_114(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm y_0 = NULL;
      y_0 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_0), (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue))));
      t = y_0;
      return(t);
    }
    ATerm d_1 (ATerm t)
    {
      ATerm c_1 = NULL;
      c_1 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_1), (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue))));
      t = c_1;
      return(t);
    }
    t = _2_0(b_1, d_1, t);
    {
      ATerm e_1 (ATerm t)
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        return(t);
      }
      t = _2_0(_id, e_1, t);
    }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_x_4;
    return(t);
  }
  t = test_suite_2_0(f_1, test1_0_0, t);
  return(t);
}
