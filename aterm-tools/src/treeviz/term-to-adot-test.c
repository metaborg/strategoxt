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
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_a_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_u_3;
ATerm term_s_3;
ATerm term_r_3;
ATerm term_k_3;
ATerm term_c_3;
void init_constant_terms (void)
{
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree-test", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_B_0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_F_2, term_d_6, term_e_6);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("  check failed: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_o_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-adot-test", 0, ATtrue));
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm m_1 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm d_32, ATerm c_32, ATerm);
ATerm n_1 (ATerm c_80 (ATerm), ATerm z_31, ATerm y_31, ATerm);
ATerm foldr_3_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm p_1 (ATerm z_43, ATerm a_44, ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm q_1 (ATerm z_38, ATerm a_39, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm r_1 (ATerm m_35, ATerm n_35, ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm do_test_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm term_to_tree_test_0_0 (ATerm);
ATerm _2_0 (ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm);
ATerm debug_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm e_2 (ATerm);
ATerm test_suite_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm);
ATerm f_2 (ATerm);
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
    ATerm j_2 = t;
    int k_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_76, _id, t);
        ;
        LocalPopChoice(k_2);
      }
    else
      {
        t = j_2;
        t = Cons_2_0(_id, a_0, t);
      }
    return(t);
  }
  t = a_0(t);
  return(t);
}
ATerm m_1 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm d_32, ATerm c_32, ATerm t)
{
  t = g_80(t);
  {
    ATerm k_0 (ATerm t)
    {
      ATerm b_0 = NULL;
      b_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_32, b_0);
      t = f_80(t);
      return(t);
    }
    t = fetch_1_0(k_0, t);
    t = c_32;
  }
  return(t);
}
ATerm n_1 (ATerm c_80 (ATerm), ATerm z_31, ATerm y_31, ATerm t)
{
  t = z_31;
  {
    ATerm i_0 (ATerm t)
    {
      ATerm l_2 = t;
      int m_2 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_31;
          ;
          LocalPopChoice(m_2);
        }
      else
        {
          t = l_2;
          {
            ATerm n_2 = t;
            int o_2 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_0 = NULL,e_0 = NULL,f_0 = NULL;
                d_0 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_0 = ATgetFirst((ATermList) t);
                    f_0 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_0;
                {
                  ATerm l_0 (ATerm t)
                  {
                    t = y_31;
                    return(t);
                  }
                  t = m_1(c_80, l_0, e_0, f_0, t);
                  t = i_0(t);
                }
                ;
                LocalPopChoice(o_2);
              }
            else
              {
                t = n_2;
                t = Cons_2_0(_id, i_0, t);
              }
          }
        }
      return(t);
    }
    t = i_0(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t)
{
  ATerm p_2 = t;
  int q_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_82(t);
      ;
      LocalPopChoice(q_2);
    }
  else
    {
      t = p_2;
      {
        ATerm v_0 = NULL,x_0 = NULL,d_1 = NULL,h_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_0 = ATgetFirst((ATermList) t);
            x_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_0;
        t = u_82(t);
        d_1 = t;
        t = x_0;
        t = foldr_3_0(s_82, t_82, u_82, t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_1, h_1);
        t = t_82(t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,c_0 = NULL,g_0 = NULL;
  d_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_1 = ATgetFirst((ATermList) t);
      a_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_2);
  y_1 = t;
  t = z_1;
  t = c_63(t);
  b_2 = t;
  t = a_2;
  t = d_63(t);
  c_2 = t;
  g_0 = t;
  t = (ATerm) ATinsert(CheckATermList(c_2), b_2);
  c_0 = t;
  t = SSLsetAnnotations(c_0, y_1);
  return(t);
}
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm r_2 = t;
    int t_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_2);
      }
    else
      {
        t = r_2;
        t = Cons_2_0(y_75, i_2, t);
      }
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL,v_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_2 = t;
    int x_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_2;
        if((u_2 != t))
          {
            _fail(t);
          }
        t = s_2;
        ;
        LocalPopChoice(x_2);
      }
    else
      {
        t = w_2;
        t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
        {
          ATerm y_2 = t;
          int z_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_2, v_2);
              ;
              LocalPopChoice(z_2);
            }
          else
            {
              t = y_2;
              t = SSL_gtr(u_2, v_2);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
        }
      }
  }
  return(t);
}
ATerm p_1 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_strcat(z_43, a_44);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm a_3 = t;
  int b_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_3);
    }
  else
    {
      t = a_3;
    }
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_c_3;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_3 = t;
  int e_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_3 = NULL;
      i_3 = t;
      t = SSL_is_string(i_3);
      ;
      LocalPopChoice(e_3);
    }
  else
    {
      t = d_3;
      {
        ATerm f_3 = t;
        int g_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_0, t);
            ;
            LocalPopChoice(g_3);
          }
        else
          {
            t = f_3;
            {
              ATerm o_3 = NULL,p_3 = NULL,t_3 = NULL;
              o_3 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_3 = ATgetArgument(t, 0);
                  t = p_3;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_3 = ATgetArgument(t, 0);
                      t = p_3;
                      {
                        ATerm h_3 = t;
                        int j_3 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_3);
                          }
                        else
                          {
                            t = h_3;
                            t = debug_1_0(n_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_4 = NULL,c_4 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_3 = ATgetArgument(t, 0);
                          t_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_3;
                      t = eval_config_0_0(t);
                      b_4 = t;
                      t = t_3;
                      t = eval_config_0_0(t);
                      c_4 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_4, c_4);
                      t = p_1(b_4, c_4, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_1 (ATerm z_38, ATerm a_39, ATerm t)
{
  t = SSL_table_get(z_38, a_39);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  t = term_k_3;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_3, f_4);
  t = q_1(g_4, f_4, t);
  {
    ATerm l_3 = t;
    int m_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL,i_4 = NULL;
        t = eval_config_0_0(t);
        h_4 = t;
        t = term_k_3;
        i_4 = t;
        t = SSL_table_put(i_4, f_4, h_4);
        t = h_4;
        ;
        LocalPopChoice(m_3);
      }
    else
      {
        t = l_3;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm n_3 = t;
  int q_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 = NULL,m_4 = NULL;
      j_4 = t;
      t = term_r_3;
      t = get_config_0_0(t);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_4, term_s_3);
      t = geq_0_0(t);
      t = j_4;
      t = b_88(t);
      ;
      LocalPopChoice(q_3);
    }
  else
    {
      t = n_3;
    }
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = debug_1_0(p_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_u_3;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  v_4 = t;
  t = new_0_0(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, v_4);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm x_4 = NULL,a_5 = NULL;
  x_4 = t;
  t = new_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, x_4);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  b_5 = t;
  t = SSL_explode_term(b_5);
  if(match_cons(t, sym__2))
    {
      ATerm v_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_3 = ATgetArgument(t, 1);
        if(((ATgetType(w_3) == AT_LIST) && !(ATisEmpty(w_3))))
          {
            c_5 = ATgetFirst((ATermList) w_3);
            {
              ATerm x_3 = (ATerm) ATgetNext((ATermList) w_3);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_5;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  e_5 = t;
  t = SSL_explode_term(e_5);
  if(match_cons(t, sym__2))
    {
      ATerm y_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_3 = ATgetArgument(t, 1);
        if(((ATgetType(z_3) == AT_LIST) && !(ATisEmpty(z_3))))
          {
            f_5 = ATgetFirst((ATermList) z_3);
            {
              ATerm a_4 = (ATerm) ATgetNext((ATermList) z_3);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_5;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1(a_1, g_5, h_5, t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm i_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      if((i_5 != ATgetArgument(t, 1)))
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
  ATerm x_1 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1(e_1, x_1, g_2, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      if((h_2 != ATgetArgument(t, 1)))
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
  ATerm n_4 = NULL,o_4 = NULL;
  t = if_verbose5_1_0(o_0, t);
  n_4 = t;
  t = new_0_0(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, n_4);
  {
    ATerm m_5 (ATerm t)
    {
      ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,o_1 = NULL;
      ATerm q_0 (ATerm t)
      {
        ATerm d_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_0, t);
            ;
            LocalPopChoice(e_4);
          }
        else
          {
            t = d_4;
            t = SRTS_all(s_0, t);
          }
        return(t);
      }
      t = _2_0(_id, q_0, t);
      r_4 = t;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm k_4 = t;
          int l_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map_1_0(u_0, t);
              ;
              LocalPopChoice(l_4);
            }
          else
            {
              t = k_4;
              t = SRTS_all(w_0, t);
            }
          return(t);
        }
        t = _2_0(_id, t_0, t);
        s_4 = t;
        t = SSL_explode_term(r_4);
        if(match_cons(t, sym__2))
          {
            ATerm p_4 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_4) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_4 = ATgetArgument(t, 1);
              if(((ATgetType(q_4) == AT_LIST) && !(ATisEmpty(q_4))))
                {
                  ATerm u_4 = ATgetFirst((ATermList) q_4);
                  ATerm y_4 = (ATerm) ATgetNext((ATermList) q_4);
                  if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
                    {
                      o_1 = ATgetFirst((ATermList) y_4);
                      {
                        ATerm z_4 = (ATerm) ATgetNext((ATermList) y_4);
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
        t = o_1;
        {
          ATerm d_5 = t;
          int j_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(y_0, z_0, m_5, t);
              ;
              LocalPopChoice(j_5);
            }
          else
            {
              t = d_5;
              {
                ATerm t_1 = NULL;
                t = SSL_explode_term(o_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_5 = ATgetArgument(t, 0);
                    t_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_1;
                t = foldr_3_0(b_1, c_1, m_5, t);
              }
            }
          t_4 = t;
          t = (ATerm) ATinsert(CheckATermList(t_4), s_4);
        }
      }
      return(t);
    }
    t = m_5(t);
  }
  return(t);
}
ATerm r_1 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm l_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_35, n_35);
      ;
      LocalPopChoice(v_5);
    }
  else
    {
      t = l_5;
      t = SSL_addr(m_35, n_35);
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  r_5 = t;
  t = term_w_5;
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_5, term_w_5);
  t = r_1(r_5, s_5, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL;
  t_5 = t;
  t = term_w_5;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_5, term_w_5);
  t = r_1(t_5, u_5, t);
  return(t);
}
ATerm do_test_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  n_5 = t;
  t = j_70(t);
  o_5 = t;
  t = term_x_5;
  p_5 = t;
  t = (ATerm) ATinsert(ATempty, o_5);
  q_5 = t;
  t = SSL_printnl(p_5, q_5);
  t = n_5;
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_70(t);
        t = n_5;
        t = _2_0(f_1, _id, t);
        ;
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        t = _2_0(_id, g_1, t);
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_a_6;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_6;
      t = term_to_tree_0_0(t);
      ;
      LocalPopChoice(c_6);
    }
  else
    {
      t = b_6;
      {
        ATerm l_6 = NULL,m_6 = NULL;
        t = term_x_5;
        l_6 = t;
        t = (ATerm) ATinsert(ATempty, term_g_6);
        m_6 = t;
        t = SSL_printnl(l_6, m_6);
        t = term_g_6;
        _fail(t);
      }
    }
  {
    ATerm h_6 = t;
    int i_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL,o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
        n_6 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_6 = ATgetFirst((ATermList) t);
            t_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_6;
        if(match_cons(t, sym__2))
          {
            ATerm j_6 = ATgetArgument(t, 0);
            q_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_6;
        if(match_cons(t, sym_F_2))
          {
            r_6 = ATgetArgument(t, 0);
            s_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_6 = ATgetFirst((ATermList) t);
            x_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_6;
        if(match_cons(t, sym__2))
          {
            v_6 = ATgetArgument(t, 0);
            w_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_6;
        if(!(match_cons(t, sym_B_0)))
          _fail(t);
        t = x_6;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_6 = ATgetFirst((ATermList) t);
            b_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_6;
        if(match_cons(t, sym__2))
          {
            z_6 = ATgetArgument(t, 0);
            a_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_7;
        if(!(match_cons(t, sym_C_0)))
          _fail(t);
        t = b_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_6;
        if((r_6 != t))
          {
            _fail(t);
          }
        t = z_6;
        if((s_6 != t))
          {
            _fail(t);
          }
        t = n_6;
        ;
        LocalPopChoice(i_6);
      }
    else
      {
        t = h_6;
        t = debug_1_0(k_1, t);
        _fail(t);
      }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm term_to_tree_test_0_0 (ATerm t)
{
  t = do_test_2_0(i_1, j_1, t);
  return(t);
}
ATerm _2_0 (ATerm n_58 (ATerm), ATerm o_58 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,h_0 = NULL,j_0 = NULL;
  h_7 = t;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_7);
  c_7 = t;
  t = d_7;
  t = n_58(t);
  f_7 = t;
  t = e_7;
  t = o_58(t);
  g_7 = t;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_7, g_7);
  h_0 = t;
  t = SSLsetAnnotations(h_0, c_7);
  return(t);
}
ATerm debug_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  k_7 = t;
  t = y_89(t);
  l_7 = t;
  t = term_x_5;
  m_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_7), l_7);
  n_7 = t;
  t = SSL_printnl(m_7, n_7);
  t = k_7;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_p_6;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  return(t);
}
ATerm test_suite_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  t = h_70(t);
  t = debug_1_0(l_1, t);
  t = term_p_7;
  t = i_70(t);
  t = _2_0(s_1, u_1, t);
  t = _2_0(_id, e_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_q_7;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(f_2, term_to_tree_test_0_0, t);
  return(t);
}
