#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Anno_2;
static Symbol sym_Op_2;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_SVar_1;
static Symbol sym_CallNoArgs_1;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Call_2;
static Symbol sym_Id_0;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDef_3;
static Symbol sym_OpDecl_2;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_RDef_3;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Anno_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Anno_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
}
static ATerm term_c_2;
static ATerm term_q_1;
static ATerm term_p_1;
static ATerm term_o_1;
static ATerm term_n_1;
static ATerm term_m_1;
static ATerm term_k_1;
static ATerm term_j_1;
static ATerm term_i_1;
static ATerm term_g_1;
static ATerm term_e_1;
static ATerm term_b_1;
static ATerm term_z_0;
static ATerm term_y_0;
static ATerm term_x_0;
static ATerm term_w_0;
static ATerm term_v_0;
static ATerm term_u_0;
static ATerm term_t_0;
static ATerm term_r_0;
static ATerm term_p_0;
static ATerm term_n_0;
static ATerm term_m_0;
static ATerm term_j_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_0));
  term_j_0 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_m_0));
  term_m_0 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_n_0));
  term_n_0 = (ATerm) ATmakeAppl(ATmakeSymbol("constructors", 0, ATtrue));
  ATprotect(&(term_p_0));
  term_p_0 = (ATerm) ATmakeAppl(ATmakeSymbol("fail", 0, ATtrue));
  ATprotect(&(term_r_0));
  term_r_0 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_t_0));
  term_t_0 = (ATerm) ATmakeAppl(ATmakeSymbol("in", 0, ATtrue));
  ATprotect(&(term_u_0));
  term_u_0 = (ATerm) ATmakeAppl(ATmakeSymbol("let", 0, ATtrue));
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(ATmakeSymbol("module", 0, ATtrue));
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(ATmakeSymbol("one", 0, ATtrue));
  ATprotect(&(term_y_0));
  term_y_0 = (ATerm) ATmakeAppl(ATmakeSymbol("overlays", 0, ATtrue));
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(ATmakeSymbol("override", 0, ATtrue));
  ATprotect(&(term_b_1));
  term_b_1 = (ATerm) ATmakeAppl(ATmakeSymbol("prim", 0, ATtrue));
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeAppl(ATmakeSymbol("rules", 0, ATtrue));
  ATprotect(&(term_g_1));
  term_g_1 = (ATerm) ATmakeAppl(ATmakeSymbol("script", 0, ATtrue));
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("signature", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("sorts", 0, ATtrue));
  ATprotect(&(term_m_1));
  term_m_1 = (ATerm) ATmakeAppl(ATmakeSymbol("strategies", 0, ATtrue));
  ATprotect(&(term_n_1));
  term_n_1 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego", 0, ATtrue));
  ATprotect(&(term_o_1));
  term_o_1 = (ATerm) ATmakeAppl(ATmakeSymbol("test", 0, ATtrue));
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(ATmakeSymbol("thread", 0, ATtrue));
  ATprotect(&(term_q_1));
  term_q_1 = (ATerm) ATmakeAppl(ATmakeSymbol("where", 0, ATtrue));
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
}
#include <srts/init-stratego-application.h>
ATerm member_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm AddLeadingPrime_0_0 (ATerm t);
ATerm Var_1_0 (ATerm i_88 (ATerm), ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm real_to_string_0_0 (ATerm t);
ATerm double_quote_chars_0_0 (ATerm t);
ATerm escape_chars_0_0 (ATerm t);
ATerm is_double_quoted_chars_0_0 (ATerm t);
ATerm string_as_chars_1_0 (ATerm m_111 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm EnsugarOnce_0_0 (ATerm t);
ATerm try_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm double_quote_0_0 (ATerm t);
ATerm is_double_quoted_0_0 (ATerm t);
ATerm split_last_0_0 (ATerm t);
ATerm implode_cons_0_0 (ATerm t);
ATerm Ensugar_0_0 (ATerm t);
ATerm repeat_1_0 (ATerm k_93 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm h_94 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm Stratego_Ensugar_0_0 (ATerm t);
ATerm io_wrap_1_0 (ATerm b_121 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  t = (ATerm) ATinsert(CheckATermList(d_0), term_j_0);
  return(t);
}
ATerm AddLeadingPrime_0_0 (ATerm t)
{
  ATerm b_0 = NULL;
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_1), term_p_1), term_o_1), term_n_1), term_m_1), term_k_1), term_j_1), term_i_1), term_g_1), term_e_1), term_b_1), term_z_0), term_y_0), term_x_0), term_w_0), term_v_0), term_u_0), term_t_0), term_r_0), term_p_0), term_n_0), term_m_0));
  t = member_0_0(t);
  t = b_0;
  t = string_as_chars_1_0(a_0, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm r_1 = t;
  if((PushChoice() == 0))
    {
      t = is_double_quoted_chars_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_1;
    }
  t = escape_chars_0_0(t);
  t = double_quote_chars_0_0(t);
  return(t);
}
ATerm EnsugarOnce_0_0 (ATerm t)
{
  ATerm s_1 = t;
  int t_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
      r_3 = t;
      if(match_cons(t, sym_Str_1))
        {
          s_3 = ATgetArgument(t, 0);
          {
            ATerm v_3 = NULL;
            t = s_3;
            t = string_as_chars_1_0(c_0, t);
            v_3 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, v_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              s_3 = ATgetArgument(t, 0);
              {
                ATerm x_3 = NULL;
                t = s_3;
                t = real_to_string_0_0(t);
                x_3 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, x_3);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  s_3 = ATgetArgument(t, 0);
                  {
                    ATerm z_3 = NULL;
                    t = s_3;
                    t = int_to_string_0_0(t);
                    z_3 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, z_3);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      s_3 = ATgetArgument(t, 0);
                      t_3 = ATgetArgument(t, 1);
                      {
                        ATerm i_0 = NULL;
                        t = t_3;
                        t = Ensugar_0_0(t);
                        if(match_cons(t, sym_List_1))
                          {
                            i_0 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Anno_2, s_3, i_0);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DefaultVarDec_1))
                        {
                          s_3 = ATgetArgument(t, 0);
                          {
                            ATerm q_0 = NULL,s_0 = NULL,g_0 = NULL;
                            t = SSLgetAnnotations(r_3);
                            q_0 = t;
                            t = s_3;
                            t = AddLeadingPrime_0_0(t);
                            s_0 = t;
                            t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_0);
                            g_0 = t;
                            t = SSLsetAnnotations(g_0, q_0);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_RDef_3))
                            {
                              s_3 = ATgetArgument(t, 0);
                              t_3 = ATgetArgument(t, 1);
                              q_3 = ATgetArgument(t, 2);
                              {
                                ATerm a_1 = NULL,h_1 = NULL,l_0 = NULL;
                                t = SSLgetAnnotations(r_3);
                                a_1 = t;
                                t = s_3;
                                t = AddLeadingPrime_0_0(t);
                                h_1 = t;
                                t = (ATerm) ATmakeAppl(sym_RDef_3, h_1, t_3, q_3);
                                l_0 = t;
                                t = SSLsetAnnotations(l_0, a_1);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDef_3))
                                {
                                  s_3 = ATgetArgument(t, 0);
                                  t_3 = ATgetArgument(t, 1);
                                  q_3 = ATgetArgument(t, 2);
                                  {
                                    ATerm w_1 = NULL,b_2 = NULL,o_0 = NULL;
                                    t = SSLgetAnnotations(r_3);
                                    w_1 = t;
                                    t = s_3;
                                    t = AddLeadingPrime_0_0(t);
                                    b_2 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDef_3, b_2, t_3, q_3);
                                    o_0 = t;
                                    t = SSLsetAnnotations(o_0, w_1);
                                  }
                                }
                              else
                                {
                                  ATerm n_2 = NULL,j_5 = NULL,c_1 = NULL;
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      s_3 = ATgetArgument(t, 0);
                                      t_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(r_3);
                                  n_2 = t;
                                  t = s_3;
                                  t = AddLeadingPrime_0_0(t);
                                  j_5 = t;
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_5, t_3);
                                  c_1 = t;
                                  t = SSLsetAnnotations(c_1, n_2);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(t_1);
    }
  else
    {
      t = s_1;
      {
        ATerm u_1 = t;
        int v_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(AddLeadingPrime_0_0, t);
            LocalPopChoice(v_1);
          }
        else
          {
            t = u_1;
            {
              ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
              w_4 = t;
              if(match_cons(t, sym_SVar_1))
                {
                  x_4 = ATgetArgument(t, 0);
                  {
                    ATerm g_6 = NULL,i_6 = NULL,d_1 = NULL;
                    t = SSLgetAnnotations(w_4);
                    g_6 = t;
                    t = x_4;
                    t = AddLeadingPrime_0_0(t);
                    i_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SVar_1, i_6);
                    d_1 = t;
                    t = SSLsetAnnotations(d_1, g_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OpDecl_2))
                    {
                      x_4 = ATgetArgument(t, 0);
                      y_4 = ATgetArgument(t, 1);
                      {
                        ATerm p_6 = NULL,s_6 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(w_4);
                        p_6 = t;
                        t = x_4;
                        t = AddLeadingPrime_0_0(t);
                        s_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OpDecl_2, s_6, y_4);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, p_6);
                      }
                    }
                  else
                    {
                      ATerm v_8 = NULL,y_8 = NULL,l_1 = NULL;
                      if(match_cons(t, sym_Op_2))
                        {
                          x_4 = ATgetArgument(t, 0);
                          y_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(w_4);
                      v_8 = t;
                      t = x_4;
                      t = AddLeadingPrime_0_0(t);
                      y_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, y_8, y_4);
                      l_1 = t;
                      t = SSLsetAnnotations(l_1, v_8);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm implode_cons_0_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  v_5 = t;
  if(match_cons(t, sym_Op_2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      t = q_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_5 = ATgetFirst((ATermList) t);
          s_5 = (ATerm) ATgetNext((ATermList) t);
          t = s_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_5 = ATgetFirst((ATermList) t);
              u_5 = (ATerm) ATgetNext((ATermList) t);
              t = u_5;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = p_5;
                  if(match_string(t, "Cons"))
                    {
                      ATerm x_1 = t;
                      int y_1 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_5 = NULL;
                          t = t_5;
                          t = implode_cons_0_0(t);
                          y_5 = t;
                          t = (ATerm) ATinsert(CheckATermList(y_5), r_5);
                          LocalPopChoice(y_1);
                        }
                      else
                        {
                          t = x_1;
                          t = (ATerm) ATinsert(ATempty, v_5);
                        }
                    }
                  else
                    {
                      t = (ATerm) ATinsert(ATempty, v_5);
                    }
                }
              else
                {
                  t = (ATerm) ATinsert(ATempty, v_5);
                }
            }
          else
            {
              t = (ATerm) ATinsert(ATempty, v_5);
            }
        }
      else
        {
          t = (ATerm) ATinsert(ATempty, v_5);
        }
    }
  else
    {
      t = (ATerm) ATinsert(ATempty, v_5);
    }
  return(t);
}
ATerm Ensugar_0_0 (ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_Op_2))
    {
      f_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
      t = f_8;
      if(match_string(t, "Cons"))
        {
          ATerm e_9 = NULL,f_9 = NULL,h_9 = NULL,i_9 = NULL;
          t = g_8;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_1 = ATgetFirst((ATermList) t);
              a_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_8;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_2 = ATgetFirst((ATermList) t);
              c_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_8;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_8;
          t = implode_cons_0_0(t);
          t = split_last_0_0(t);
          if(match_cons(t, sym__2))
            {
              h_9 = ATgetArgument(t, 0);
              i_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_9;
          if(match_cons(t, sym_Op_2))
            {
              e_9 = ATgetArgument(t, 0);
              f_9 = ATgetArgument(t, 1);
              t = f_9;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_9;
                  if(match_string(t, "Nil"))
                    {
                      t = (ATerm) ATmakeAppl(sym_List_1, h_9);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_ListTail_2, h_9, i_9);
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym_ListTail_2, h_9, i_9);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym_ListTail_2, h_9, i_9);
            }
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Nil", 0, ATtrue)))
            _fail(t);
          t = g_8;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = term_c_2;
        }
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          f_8 = ATgetArgument(t, 0);
          g_8 = ATgetArgument(t, 1);
          t = g_8;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallNoArgs_1, f_8);
        }
      else
        {
          if(match_cons(t, sym_StratRule_3))
            {
              f_8 = ATgetArgument(t, 0);
              g_8 = ATgetArgument(t, 1);
              d_8 = ATgetArgument(t, 2);
              t = d_8;
              if(!(match_cons(t, sym_Id_0)))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_StratRuleNoCond_2, f_8, g_8);
            }
          else
            {
              if(match_cons(t, sym_Rule_3))
                {
                  f_8 = ATgetArgument(t, 0);
                  g_8 = ATgetArgument(t, 1);
                  d_8 = ATgetArgument(t, 2);
                  t = d_8;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, f_8, g_8);
                }
              else
                {
                  if(match_cons(t, sym_PrimT_3))
                    {
                      f_8 = ATgetArgument(t, 0);
                      g_8 = ATgetArgument(t, 1);
                      d_8 = ATgetArgument(t, 2);
                      {
                        ATerm a_10 = NULL;
                        t = f_8;
                        {
                          ATerm d_2 = t;
                          if((PushChoice() == 0))
                            {
                              t = is_double_quoted_0_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = d_2;
                            }
                        }
                        t = f_8;
                        t = double_quote_0_0(t);
                        a_10 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, a_10, g_8, d_8);
                      }
                    }
                  else
                    {
                      ATerm k_10 = NULL;
                      if(match_cons(t, sym_Prim_2))
                        {
                          f_8 = ATgetArgument(t, 0);
                          g_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_8;
                      {
                        ATerm e_2 = t;
                        if((PushChoice() == 0))
                          {
                            t = is_double_quoted_0_0(t);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = e_2;
                          }
                      }
                      t = f_8;
                      t = double_quote_0_0(t);
                      k_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Prim_2, k_10, g_8);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL;
  q_8 = t;
  t = SSL_explode_term(q_8);
  if(match_cons(t, sym__2))
    {
      ATerm f_2 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_2) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_2 = ATgetArgument(t, 1);
        if(((ATgetType(g_2) == AT_LIST) && !(ATisEmpty(g_2))))
          {
            p_8 = ATgetFirst((ATermList) g_2);
            {
              ATerm h_2 = (ATerm) ATgetNext((ATermList) g_2);
              if(((ATgetType(h_2) != AT_LIST) || !(ATisEmpty(h_2))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_8;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = repeat_1_0(Ensugar_0_0, t);
  t = try_1_0(EnsugarOnce_0_0, t);
  return(t);
}
ATerm Stratego_Ensugar_0_0 (ATerm t)
{
  t = try_1_0(e_0, t);
  t = topdown_1_0(f_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_1_0(Stratego_Ensugar_0_0, t);
  return(t);
}
