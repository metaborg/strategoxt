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
ATerm term_y_4;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_u_4;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_k_4;
ATerm term_j_4;
ATerm term_g_4;
ATerm term_f_4;
ATerm term_c_4;
ATerm term_z_2;
ATerm term_w_2;
ATerm term_v_2;
ATerm term_o_2;
ATerm term_g_2;
void init_constant_terms (void)
{
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_2));
  term_v_2 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree-test", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(sym_B_0);
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym_C_0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym_F_2, term_j_4, term_k_4);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  application failed", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("  check failed: ", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym__2, term_w_4, term_w_4);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-adot-test", 0, ATtrue));
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm m_1 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm d_32, ATerm c_32, ATerm);
ATerm n_1 (ATerm c_80 (ATerm), ATerm z_31, ATerm y_31, ATerm);
ATerm foldr_3_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm p_1 (ATerm z_43, ATerm a_44, ATerm);
ATerm c_0 (ATerm);
ATerm f_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm q_1 (ATerm z_38, ATerm a_39, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm g_0 (ATerm);
ATerm i_0 (ATerm);
ATerm l_0 (ATerm);
ATerm m_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm r_1 (ATerm m_35, ATerm n_35, ATerm);
ATerm do_test_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm term_to_tree_test_0_0 (ATerm);
ATerm debug_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm test_suite_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm e_1 = NULL,h_1 = NULL,i_1 = NULL;
    e_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_1 = ATgetFirst((ATermList) t);
        i_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_1 = t;
      int w_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_0 = NULL,s_0 = NULL,d_0 = NULL;
          t = SSLgetAnnotations(e_1);
          j_0 = t;
          t = h_1;
          t = i_76(t);
          s_0 = t;
          t = (ATerm) ATinsert(CheckATermList(i_1), s_0);
          d_0 = t;
          t = SSLsetAnnotations(d_0, j_0);
          ;
          LocalPopChoice(w_1);
        }
      else
        {
          t = v_1;
          {
            ATerm g_1 = NULL,u_1 = NULL,e_0 = NULL;
            t = SSLgetAnnotations(e_1);
            g_1 = t;
            t = i_1;
            t = j_1(t);
            u_1 = t;
            t = (ATerm) ATinsert(CheckATermList(u_1), h_1);
            e_0 = t;
            t = SSLsetAnnotations(e_0, g_1);
          }
        }
    }
    return(t);
  }
  t = j_1(t);
  return(t);
}
ATerm m_1 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm d_32, ATerm c_32, ATerm t)
{
  t = g_80(t);
  {
    ATerm a_0 (ATerm t)
    {
      ATerm s_1 = NULL;
      s_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), s_1);
      t = f_80(t);
      return(t);
    }
    t = fetch_1_0(a_0, t);
    t = not_null(c_32);
  }
  return(t);
}
ATerm n_1 (ATerm c_80 (ATerm), ATerm z_31, ATerm y_31, ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm t_2 = NULL,u_2 = NULL,y_2 = NULL;
    t_2 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(y_31);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_2 = ATgetFirst((ATermList) t);
            y_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_1 = t;
          int y_1 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_2;
              {
                ATerm b_0 (ATerm t)
                {
                  t = not_null(y_31);
                  return(t);
                }
                t = m_1(c_80, b_0, not_null(u_2), not_null(y_2), t);
                t = c_3(t);
              }
              ;
              LocalPopChoice(y_1);
            }
          else
            {
              t = x_1;
              {
                ATerm e_2 = NULL,h_2 = NULL,h_0 = NULL;
                t = SSLgetAnnotations(t_2);
                e_2 = t;
                t = y_2;
                t = c_3(t);
                h_2 = t;
                t = (ATerm) ATinsert(CheckATermList(h_2), u_2);
                h_0 = t;
                t = SSLsetAnnotations(h_0, e_2);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(z_31);
  t = c_3(t);
  return(t);
}
ATerm foldr_3_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,o_3 = NULL,s_3 = NULL;
  k_3 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_3;
      t = s_82(t);
    }
  else
    {
      ATerm x_3 = NULL,b_4 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_3 = ATgetFirst((ATermList) t);
          s_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_3;
      t = u_82(t);
      x_3 = t;
      t = s_3;
      t = foldr_3_0(s_82, t_82, u_82, t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_3, b_4);
      t = t_82(t);
    }
  return(t);
}
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm e_5 = NULL,f_5 = NULL,j_5 = NULL;
    e_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_5;
      }
    else
      {
        ATerm x_2 = NULL,e_3 = NULL,h_3 = NULL,k_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_5 = ATgetFirst((ATermList) t);
            j_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_5);
        x_2 = t;
        t = f_5;
        t = y_75(t);
        e_3 = t;
        t = j_5;
        t = k_5(t);
        h_3 = t;
        t = (ATerm) ATinsert(CheckATermList(h_3), e_3);
        k_0 = t;
        t = SSLsetAnnotations(k_0, x_2);
      }
    return(t);
  }
  t = k_5(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_1 = t;
    int a_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_5;
        if((y_5 != t))
          {
            _fail(t);
          }
        t = x_5;
        ;
        LocalPopChoice(a_2);
      }
    else
      {
        t = z_1;
        t = (ATerm) ATmakeAppl(sym__2, y_5, z_5);
        {
          ATerm b_2 = t;
          int c_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_5, z_5);
              ;
              LocalPopChoice(c_2);
            }
          else
            {
              t = b_2;
              t = SSL_gtr(y_5, z_5);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_5, z_5);
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
ATerm c_0 (ATerm t)
{
  ATerm d_2 = t;
  int f_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_2);
    }
  else
    {
      t = d_2;
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_g_2;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_2 = t;
  int j_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_6 = NULL;
      t_6 = t;
      t = SSL_is_string(t_6);
      ;
      LocalPopChoice(j_2);
    }
  else
    {
      t = i_2;
      {
        ATerm k_2 = t;
        int l_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_0, t);
            ;
            LocalPopChoice(l_2);
          }
        else
          {
            t = k_2;
            {
              ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
              c_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_7 = ATgetArgument(t, 0);
                  t = d_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_7 = ATgetArgument(t, 0);
                      t = d_7;
                      {
                        ATerm m_2 = t;
                        int n_2 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(n_2);
                          }
                        else
                          {
                            t = m_2;
                            t = debug_1_0(f_0, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_7 = NULL,j_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_7 = ATgetArgument(t, 0);
                          e_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_7;
                      t = eval_config_0_0(t);
                      i_7 = t;
                      t = e_7;
                      t = eval_config_0_0(t);
                      j_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_7, j_7);
                      t = p_1(i_7, j_7, t);
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
  ATerm p_7 = NULL,q_7 = NULL;
  p_7 = t;
  t = term_o_2;
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_2, p_7);
  t = q_1(q_7, p_7, t);
  {
    ATerm p_2 = t;
    int q_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL,s_7 = NULL;
        t = eval_config_0_0(t);
        r_7 = t;
        t = term_o_2;
        s_7 = t;
        t = SSL_table_put(s_7, p_7, r_7);
        t = r_7;
        ;
        LocalPopChoice(q_2);
      }
    else
      {
        t = p_2;
      }
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm r_2 = t;
    int s_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_v_2;
        t = get_config_0_0(t);
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_7, term_w_2);
        t = geq_0_0(t);
        t = w_7;
        t = b_88(t);
        ;
        LocalPopChoice(s_2);
      }
    else
      {
        t = r_2;
        t = w_7;
      }
  }
  return(t);
}
ATerm g_0 (ATerm t)
{
  t = debug_1_0(i_0, t);
  return(t);
}
ATerm i_0 (ATerm t)
{
  t = term_z_2;
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  r_8 = t;
  t = new_0_0(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, r_8);
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  t_8 = t;
  t = new_0_0(t);
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  v_8 = t;
  t = SSL_explode_term(v_8);
  if(match_cons(t, sym__2))
    {
      ATerm a_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_3 = ATgetArgument(t, 1);
        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
          {
            u_8 = ATgetFirst((ATermList) b_3);
            {
              ATerm d_3 = (ATerm) ATgetNext((ATermList) b_3);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_8;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  x_8 = t;
  t = SSL_explode_term(x_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_3 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_3) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_3 = ATgetArgument(t, 1);
        if(((ATgetType(g_3) == AT_LIST) && !(ATisEmpty(g_3))))
          {
            w_8 = ATgetFirst((ATermList) g_3);
            {
              ATerm i_3 = (ATerm) ATgetNext((ATermList) g_3);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_8;
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1(w_0, y_8, z_8, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      if((a_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm b_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1(z_0, b_5, g_5, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      if((h_5 != ATgetArgument(t, 1)))
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
  ATerm a_8 = NULL,d_8 = NULL;
  ATerm e_9 (ATerm t)
  {
    ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,p_4 = NULL,o_0 = NULL,n_0 = NULL;
    p_8 = t;
    if(match_cons(t, sym__2))
      {
        l_8 = ATgetArgument(t, 0);
        m_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_8);
    k_8 = t;
    t = m_8;
    {
      ATerm j_3 = t;
      int l_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = map_1_0(l_0, t);
          ;
          LocalPopChoice(l_3);
        }
      else
        {
          t = j_3;
          t = SRTS_all(m_0, t);
        }
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_8, n_8);
      n_0 = t;
      t = SSLsetAnnotations(n_0, k_8);
      o_8 = t;
      if(match_cons(t, sym__2))
        {
          g_8 = ATgetArgument(t, 0);
          h_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_8);
      f_8 = t;
      t = h_8;
      {
        ATerm m_3 = t;
        int n_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_0, t);
            ;
            LocalPopChoice(n_3);
          }
        else
          {
            t = m_3;
            t = SRTS_all(q_0, t);
          }
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_8, i_8);
        o_0 = t;
        t = SSLsetAnnotations(o_0, f_8);
        j_8 = t;
        t = SSL_explode_term(o_8);
        if(match_cons(t, sym__2))
          {
            ATerm p_3 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_3) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_3 = ATgetArgument(t, 1);
              if(((ATgetType(q_3) == AT_LIST) && !(ATisEmpty(q_3))))
                {
                  ATerm r_3 = ATgetFirst((ATermList) q_3);
                  ATerm t_3 = (ATerm) ATgetNext((ATermList) q_3);
                  if(((ATgetType(t_3) == AT_LIST) && !(ATisEmpty(t_3))))
                    {
                      p_4 = ATgetFirst((ATermList) t_3);
                      {
                        ATerm u_3 = (ATerm) ATgetNext((ATermList) t_3);
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
        t = p_4;
        {
          ATerm v_3 = t;
          int w_3 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(r_0, u_0, e_9, t);
              ;
              LocalPopChoice(w_3);
            }
          else
            {
              t = v_3;
              {
                ATerm r_4 = NULL;
                t = SSL_explode_term(p_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_3 = ATgetArgument(t, 0);
                    r_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_4;
                t = foldr_3_0(x_0, y_0, e_9, t);
              }
            }
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), j_8);
        }
      }
    }
    return(t);
  }
  t = if_verbose5_1_0(g_0, t);
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  t = new_0_0(t);
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_8), not_null(d_8));
  t = e_9(t);
  return(t);
}
ATerm r_1 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_35, n_35);
      ;
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      t = SSL_addr(m_35, n_35);
    }
  return(t);
}
ATerm do_test_2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  h_9 = t;
  t = j_70(t);
  i_9 = t;
  t = term_c_4;
  j_9 = t;
  t = (ATerm) ATinsert(ATempty, i_9);
  k_9 = t;
  t = SSL_printnl(j_9, k_9);
  t = h_9;
  {
    ATerm d_4 = t;
    int e_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,t_0 = NULL;
        t = k_70(t);
        t = h_9;
        if(match_cons(t, sym__2))
          {
            m_9 = ATgetArgument(t, 0);
            n_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_9);
        l_9 = t;
        t = term_f_4;
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_9, term_f_4);
        t = r_1(m_9, p_9, t);
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, n_9);
        t_0 = t;
        t = SSLsetAnnotations(t_0, l_9);
        ;
        LocalPopChoice(e_4);
      }
    else
      {
        t = d_4;
        {
          ATerm y_9 = NULL,z_9 = NULL,n_5 = NULL,u_5 = NULL,b_6 = NULL,v_0 = NULL;
          if(match_cons(t, sym__2))
            {
              y_9 = ATgetArgument(t, 0);
              z_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_9);
          n_5 = t;
          t = term_f_4;
          b_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_9, term_f_4);
          t = r_1(z_9, b_6, t);
          u_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_9, u_5);
          v_0 = t;
          t = SSLsetAnnotations(v_0, n_5);
        }
      }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_g_4;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm h_4 = t;
  int i_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_4;
      t = term_to_tree_0_0(t);
      ;
      LocalPopChoice(i_4);
    }
  else
    {
      t = h_4;
      {
        ATerm n_10 = NULL,o_10 = NULL;
        t = term_c_4;
        n_10 = t;
        t = (ATerm) ATinsert(ATempty, term_m_4);
        o_10 = t;
        t = SSL_printnl(n_10, o_10);
        t = term_m_4;
        _fail(t);
      }
    }
  {
    ATerm n_4 = t;
    int o_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_10 = NULL,q_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
        p_10 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_10 = ATgetFirst((ATermList) t);
            v_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_10;
        if(match_cons(t, sym__2))
          {
            ATerm q_4 = ATgetArgument(t, 0);
            s_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_10;
        if(match_cons(t, sym_F_2))
          {
            t_10 = ATgetArgument(t, 0);
            u_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_10;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_10 = ATgetFirst((ATermList) t);
            z_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_10;
        if(match_cons(t, sym__2))
          {
            x_10 = ATgetArgument(t, 0);
            y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_10;
        if(!(match_cons(t, sym_B_0)))
          _fail(t);
        t = z_10;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_11 = ATgetFirst((ATermList) t);
            d_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_11;
        if(match_cons(t, sym__2))
          {
            b_11 = ATgetArgument(t, 0);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_11;
        if(!(match_cons(t, sym_C_0)))
          _fail(t);
        t = d_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_10;
        if((t_10 != t))
          {
            _fail(t);
          }
        t = b_11;
        if((u_10 != t))
          {
            _fail(t);
          }
        t = p_10;
        ;
        LocalPopChoice(o_4);
      }
    else
      {
        t = n_4;
        t = debug_1_0(d_1, t);
        _fail(t);
      }
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_s_4;
  return(t);
}
ATerm term_to_tree_test_0_0 (ATerm t)
{
  t = do_test_2_0(a_1, c_1, t);
  return(t);
}
ATerm debug_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  e_11 = t;
  t = y_89(t);
  f_11 = t;
  t = term_c_4;
  g_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_11), f_11);
  h_11 = t;
  t = SSL_printnl(g_11, h_11);
  t = e_11;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_t_4;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_u_4;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_v_4;
  return(t);
}
ATerm test_suite_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,k_1 = NULL,b_1 = NULL;
  t = h_70(t);
  t = debug_1_0(f_1, t);
  t = term_x_4;
  t = i_70(t);
  r_11 = t;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  l_11 = t;
  t = m_11;
  t = debug_1_0(l_1, t);
  o_11 = t;
  t = n_11;
  t = debug_1_0(o_1, t);
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_11, p_11);
  b_1 = t;
  t = SSLsetAnnotations(b_1, l_11);
  q_11 = t;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  i_11 = t;
  t = k_11;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
  k_1 = t;
  t = SSLsetAnnotations(k_1, i_11);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_y_4;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = test_suite_2_0(t_1, term_to_tree_test_0_0, t);
  return(t);
}
