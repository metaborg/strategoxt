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
Symbol sym_F_2;
Symbol sym_B_0;
Symbol sym_C_0;
Symbol sym_Path_1;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_F_2 = ATmakeSymbol("F", 2, ATfalse);
  ATprotectSymbol(sym_F_2);
  sym_B_0 = ATmakeSymbol("B", 0, ATfalse);
  ATprotectSymbol(sym_B_0);
  sym_C_0 = ATmakeSymbol("C", 0, ATfalse);
  ATprotectSymbol(sym_C_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_b_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_r_5;
ATerm term_r_4;
ATerm term_q_3;
void init_constant_terms (void)
{
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree-test", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_B_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_F_2, term_w_5, term_z_5);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_x_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-adot-test", 0, ATtrue));
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm union_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm d_0 (ATerm);
ATerm h_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm k_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm m_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm do_test_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm term_to_tree_test_0_0 (ATerm);
ATerm _2_0 (ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm test_suite_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    ATerm p_1 = t;
    int q_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_76, _id, t);
        ;
        LocalPopChoice(q_1);
      }
    else
      {
        t = p_1;
        t = Cons_2_0(_id, a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm union_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,f_0 = NULL;
  if(match_cons(t, sym__2))
    {
      e_0 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  {
    ATerm g_0 (ATerm t)
    {
      ATerm r_1 = t;
      int s_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_0;
          ;
          LocalPopChoice(s_1);
        }
      else
        {
          t = r_1;
          {
            ATerm t_1 = t;
            int u_1 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_0 = NULL,l_0 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_0 = ATgetFirst((ATermList) t);
                    l_0 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_0;
                {
                  ATerm b_0 (ATerm t)
                  {
                    ATerm p_0 = NULL;
                    p_0 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_0, p_0);
                    t = c_80(t);
                    return(t);
                  }
                  t = fetch_1_0(b_0, t);
                  t = l_0;
                  t = g_0(t);
                }
                ;
                LocalPopChoice(u_1);
              }
            else
              {
                t = t_1;
                t = Cons_2_0(_id, g_0, t);
              }
          }
        }
      return(t);
    }
    t = g_0(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t)
{
  ATerm v_1 = t;
  int w_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_82(t);
      ;
      LocalPopChoice(w_1);
    }
  else
    {
      t = v_1;
      {
        ATerm n_0 = NULL,o_0 = NULL,s_0 = NULL,t_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_0 = ATgetFirst((ATermList) t);
            o_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_0;
        t = s_82(t);
        s_0 = t;
        t = o_0;
        t = foldr_3_0(q_82, r_82, s_82, t);
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
        t = r_82(t);
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm x_1 = t;
    int y_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_1);
      }
    else
      {
        t = x_1;
        t = Cons_2_0(x_75, l_1, t);
      }
    return(t);
  }
  t = l_1(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_1 = t;
    int a_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_2;
        if((e_2 != t))
          {
            _fail(t);
          }
        t = d_2;
        ;
        LocalPopChoice(a_2);
      }
    else
      {
        t = z_1;
        t = d_2;
        {
          ATerm b_2 = t;
          int c_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_2, f_2);
              ;
              LocalPopChoice(c_2);
            }
          else
            {
              t = b_2;
              t = SSL_gtr(e_2, f_2);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
        }
      }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_2 = t;
  int h_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_2);
    }
  else
    {
      t = g_2;
      {
        ATerm m_2 = NULL,n_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_2 = ATgetFirst((ATermList) t);
            n_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_2;
        {
          ATerm c_0 (ATerm t)
          {
            t = n_2;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_0, t);
        }
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL;
  d_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_2 = ATgetFirst((ATermList) t);
      z_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  x_2 = t;
  t = y_2;
  t = b_63(t);
  a_3 = t;
  t = z_2;
  t = c_63(t);
  b_3 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_3), a_3), x_2);
  return(t);
}
ATerm at_end_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm i_2 = t;
    int j_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_3, t);
        ;
        LocalPopChoice(j_2);
      }
    else
      {
        t = i_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_76(t);
      }
    return(t);
  }
  t = g_3(t);
  return(t);
}
ATerm d_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  t = SSL_explode_string(j_3);
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  t = SSL_explode_string(k_3);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  t = _2_0(d_0, h_0, t);
  {
    ATerm k_2 = t;
    int l_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL,n_3 = NULL;
        if(match_cons(t, sym__2))
          {
            m_3 = ATgetArgument(t, 0);
            n_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_3;
        {
          ATerm i_0 (ATerm t)
          {
            t = n_3;
            return(t);
          }
          t = at_end_1_0(i_0, t);
        }
        ;
        LocalPopChoice(l_2);
      }
    else
      {
        t = k_2;
        {
          ATerm m_1 = NULL,n_1 = NULL;
          m_1 = t;
          t = SSL_explode_term(m_1);
          if(match_cons(t, sym__2))
            {
              ATerm o_2 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_2) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_1;
          t = concat_0_0(t);
        }
      }
    i_3 = t;
    t = SSL_implode_string(i_3);
  }
  return(t);
}
ATerm k_0 (ATerm t)
{
  ATerm p_2 = t;
  int q_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_2);
    }
  else
    {
      t = p_2;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_2 = t;
  int s_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 = NULL;
      z_3 = t;
      t = SSL_is_string(z_3);
      ;
      LocalPopChoice(s_2);
    }
  else
    {
      t = r_2;
      {
        ATerm t_2 = t;
        int u_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_0, t);
            ;
            LocalPopChoice(u_2);
          }
        else
          {
            t = t_2;
            {
              ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
              d_4 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_4 = ATgetArgument(t, 0);
                  t = e_4;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_4 = ATgetArgument(t, 0);
                      t = e_4;
                      {
                        ATerm v_2 = t;
                        int w_2 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_4);
                            {
                              ATerm c_3 = t;
                              int e_3 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm o_3 = NULL;
                                  t = eval_config_0_0(t);
                                  o_3 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_4, o_3);
                                  t = o_3;
                                  ;
                                  LocalPopChoice(e_3);
                                }
                              else
                                {
                                  t = c_3;
                                }
                            }
                            ;
                            LocalPopChoice(w_2);
                          }
                        else
                          {
                            t = v_2;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_4), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = e_4;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_4 = NULL,k_4 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_4 = ATgetArgument(t, 0);
                          f_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_4;
                      t = eval_config_0_0(t);
                      j_4 = t;
                      t = f_4;
                      t = eval_config_0_0(t);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_4, k_4);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm f_3 = t;
  int h_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 = NULL,s_4 = NULL;
      q_4 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_3 = t;
        int p_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 = NULL;
            t = eval_config_0_0(t);
            m_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_4);
            t = m_4;
            ;
            LocalPopChoice(p_3);
          }
        else
          {
            t = l_3;
          }
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_4, term_q_3);
        t = geq_0_0(t);
        t = q_4;
        t = z_87(t);
      }
      ;
      LocalPopChoice(h_3);
    }
  else
    {
      t = f_3;
    }
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_4), (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue))));
  t = y_4;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  t = new_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, z_4);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  b_5 = t;
  t = new_0_0(t);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_5, b_5);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  o_5 = t;
  t = SSL_explode_term(o_5);
  if(match_cons(t, sym__2))
    {
      ATerm r_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_3 = ATgetArgument(t, 1);
        if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
          {
            p_5 = ATgetFirst((ATermList) s_3);
            {
              ATerm t_3 = (ATerm) ATgetNext((ATermList) s_3);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_5;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  s_5 = t;
  t = SSL_explode_term(s_5);
  if(match_cons(t, sym__2))
    {
      ATerm u_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_3 = ATgetArgument(t, 1);
        if(((ATgetType(v_3) == AT_LIST) && !(ATisEmpty(v_3))))
          {
            t_5 = ATgetFirst((ATermList) v_3);
            {
              ATerm w_3 = (ATerm) ATgetNext((ATermList) v_3);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_5;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = union_1_0(a_1, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      if((d_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = union_1_0(d_1, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      if((e_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t = if_verbose5_1_0(m_0, t);
  t_4 = t;
  t = new_0_0(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, t_4);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_6 = NULL;
      ATerm q_0 (ATerm t)
      {
        ATerm x_3 = t;
        int y_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_0, t);
            ;
            LocalPopChoice(y_3);
          }
        else
          {
            t = x_3;
            t = SRTS_all(u_0, t);
          }
        return(t);
      }
      t = _2_0(_id, q_0, t);
      v_4 = t;
      {
        ATerm v_0 (ATerm t)
        {
          ATerm a_4 = t;
          int b_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map_1_0(w_0, t);
              ;
              LocalPopChoice(b_4);
            }
          else
            {
              t = a_4;
              t = SRTS_all(x_0, t);
            }
          return(t);
        }
        t = _2_0(_id, v_0, t);
        w_4 = t;
        t = SSL_explode_term(v_4);
        if(match_cons(t, sym__2))
          {
            ATerm c_4 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_4) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_4 = ATgetArgument(t, 1);
              if(((ATgetType(g_4) == AT_LIST) && !(ATisEmpty(g_4))))
                {
                  ATerm h_4 = ATgetFirst((ATermList) g_4);
                  ATerm i_4 = (ATerm) ATgetNext((ATermList) g_4);
                  if(((ATgetType(i_4) == AT_LIST) && !(ATisEmpty(i_4))))
                    {
                      y_6 = ATgetFirst((ATermList) i_4);
                      {
                        ATerm l_4 = (ATerm) ATgetNext((ATermList) i_4);
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_6;
        {
          ATerm n_4 = t;
          int o_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(y_0, z_0, f_5, t);
              ;
              LocalPopChoice(o_4);
            }
          else
            {
              t = n_4;
              {
                ATerm a_7 = NULL;
                t = SSL_explode_term(y_6);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_4 = ATgetArgument(t, 0);
                    a_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_7;
                t = foldr_3_0(b_1, c_1, f_5, t);
              }
            }
          x_4 = t;
          t = (ATerm) ATinsert(CheckATermList(x_4), w_4);
        }
      }
      return(t);
    }
    t = f_5(t);
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, term_r_4);
  {
    ATerm e_5 = t;
    int i_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_5, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(i_5);
      }
    else
      {
        t = e_5;
        t = SSL_addr(j_5, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, term_r_4);
  {
    ATerm l_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_5, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = l_5;
        t = SSL_addr(k_5, (ATerm) ATmakeInt(1));
      }
  }
  return(t);
}
ATerm do_test_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  g_5 = t;
  t = i_70(t);
  h_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_5));
  t = g_5;
  {
    ATerm n_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_70(t);
        t = g_5;
        t = _2_0(e_1, _id, t);
        ;
        LocalPopChoice(q_5);
      }
    else
      {
        t = n_5;
        t = _2_0(_id, f_1, t);
      }
  }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_r_5;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_6;
      t = term_to_tree_0_0(t);
      ;
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue))));
      t = term_t_6;
      _fail(t);
    }
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
        x_5 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_5 = ATgetFirst((ATermList) t);
            d_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_5;
        if(match_cons(t, sym__2))
          {
            ATerm w_6 = ATgetArgument(t, 0);
            a_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_6;
        if(match_cons(t, sym_F_2))
          {
            b_6 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_6 = ATgetFirst((ATermList) t);
            h_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_6;
        if(match_cons(t, sym__2))
          {
            f_6 = ATgetArgument(t, 0);
            g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_6;
        if(!(match_cons(t, sym_B_0)))
          _fail(t);
        t = h_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_6 = ATgetFirst((ATermList) t);
            l_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_6;
        if(match_cons(t, sym__2))
          {
            j_6 = ATgetArgument(t, 0);
            k_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_6;
        if(!(match_cons(t, sym_C_0)))
          _fail(t);
        t = l_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_6;
        if((b_6 != t))
          {
            _fail(t);
          }
        t = j_6;
        if((c_6 != t))
          {
            _fail(t);
          }
        t = x_5;
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        {
          ATerm f_7 = NULL;
          f_7 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(ATmakeSymbol("  check failed: ", 0, ATtrue))));
          t = f_7;
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm term_to_tree_test_0_0 (ATerm t)
{
  t = do_test_2_0(g_1, h_1, t);
  return(t);
}
ATerm _2_0 (ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  r_6 = t;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_6);
  m_6 = t;
  t = n_6;
  t = m_58(t);
  p_6 = t;
  t = o_6;
  t = n_58(t);
  q_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_6, q_6), m_6);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm l_7 = NULL;
  l_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_7), (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue))));
  t = l_7;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_7), (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue))));
  t = o_7;
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
{
  ATerm i_7 = NULL;
  t = g_70(t);
  i_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_7), (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue))));
  t = term_z_6;
  t = h_70(t);
  t = _2_0(i_1, j_1, t);
  t = _2_0(_id, k_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(o_1, term_to_tree_test_0_0, t);
  return(t);
}
