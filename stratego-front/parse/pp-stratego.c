#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Comment_2;
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
static Symbol sym_Parenthetical_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_As_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_DynRuleIntersectUnion_4;
static Symbol sym_DynRuleUnion_3;
static Symbol sym_DynRuleIntersect_3;
static Symbol sym_DynRuleIntersectUnionFix_3;
static Symbol sym_DynRuleUnionFix_2;
static Symbol sym_DynRuleIntersectFix_2;
static Symbol sym_AM_2;
static Symbol sym_RGChoice_2;
static Symbol sym_GChoice_2;
static Symbol sym_RChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_ExplodeCong_2;
static Symbol sym_AnnoCong_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LGChoice_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_ParenStrat_1;
static void init_module_constructors (void)
{
  sym_Comment_2 = ATmakeSymbol("Comment", 2, ATfalse);
  ATprotectSymbol(sym_Comment_2);
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
  sym_Parenthetical_1 = ATmakeSymbol("Parenthetical", 1, ATfalse);
  ATprotectSymbol(sym_Parenthetical_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_DynRuleIntersectUnion_4 = ATmakeSymbol("DynRuleIntersectUnion", 4, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectUnion_4);
  sym_DynRuleUnion_3 = ATmakeSymbol("DynRuleUnion", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleUnion_3);
  sym_DynRuleIntersect_3 = ATmakeSymbol("DynRuleIntersect", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersect_3);
  sym_DynRuleIntersectUnionFix_3 = ATmakeSymbol("DynRuleIntersectUnionFix", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectUnionFix_3);
  sym_DynRuleUnionFix_2 = ATmakeSymbol("DynRuleUnionFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleUnionFix_2);
  sym_DynRuleIntersectFix_2 = ATmakeSymbol("DynRuleIntersectFix", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersectFix_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_RGChoice_2 = ATmakeSymbol("RGChoice", 2, ATfalse);
  ATprotectSymbol(sym_RGChoice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
}
static ATerm term_g_70;
static ATerm term_f_70;
static ATerm term_c_70;
static ATerm term_b_70;
static ATerm term_a_70;
static ATerm term_p_69;
static ATerm term_o_69;
static ATerm term_n_69;
static ATerm term_m_69;
static ATerm term_l_69;
static ATerm term_k_69;
static ATerm term_j_69;
static ATerm term_i_69;
static ATerm term_h_69;
static ATerm term_g_69;
static ATerm term_d_69;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(sym__2, term_g_69, term_h_69);
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(sym__2, term_k_69, term_h_69);
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   use pptable in file instead of Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm f_93 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm d_95 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm c_95 (ATerm), ATerm t);
ATerm StrategoParenthesize_0_0 (ATerm t);
ATerm innermost_1_0 (ATerm i_99 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_5 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm k_6 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm g_4 (ATerm), ATerm h_4 (ATerm), ATerm i_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm j_4 (ATerm), ATerm k_4 (ATerm), ATerm l_4 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm l_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm pp_stratego_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm pp_stratego_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm StrategoParenthesize_0_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
      d_24 = ATgetArgument(t, 2);
      {
        ATerm b_1 = t;
        int c_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_24;
            {
              ATerm d_1 = t;
              int e_1 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      ATerm f_1 = ATgetArgument(t, 0);
                      ATerm g_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_1);
                  t = g_24;
                }
              else
                {
                  t = d_1;
                  {
                    ATerm h_1 = t;
                    int i_1 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_LChoice_2))
                          {
                            ATerm j_1 = ATgetArgument(t, 0);
                            ATerm k_1 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(i_1);
                        t = g_24;
                      }
                    else
                      {
                        t = h_1;
                        {
                          ATerm l_1 = t;
                          int m_1 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_RChoice_2))
                                {
                                  ATerm n_1 = ATgetArgument(t, 0);
                                  ATerm o_1 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_1);
                              t = g_24;
                            }
                          else
                            {
                              t = l_1;
                              {
                                ATerm p_1 = t;
                                int q_1 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_GChoice_2))
                                      {
                                        ATerm r_1 = ATgetArgument(t, 0);
                                        ATerm s_1 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_1);
                                    t = g_24;
                                  }
                                else
                                  {
                                    t = p_1;
                                    {
                                      ATerm t_1 = t;
                                      int u_1 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              ATerm v_1 = ATgetArgument(t, 0);
                                              ATerm w_1 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(u_1);
                                          t = g_24;
                                        }
                                      else
                                        {
                                          t = t_1;
                                          {
                                            ATerm x_1 = t;
                                            int y_1 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RGChoice_2))
                                                  {
                                                    ATerm z_1 = ATgetArgument(t, 0);
                                                    ATerm a_2 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(y_1);
                                                t = g_24;
                                              }
                                            else
                                              {
                                                t = x_1;
                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                  {
                                                    ATerm b_2 = ATgetArgument(t, 0);
                                                    ATerm c_2 = ATgetArgument(t, 1);
                                                    ATerm d_2 = ATgetArgument(t, 2);
                                                  }
                                                else
                                                  _fail(t);
                                                t = g_24;
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_24), d_24);
            LocalPopChoice(c_1);
          }
        else
          {
            t = b_1;
            t = f_24;
            {
              ATerm e_2 = t;
              int f_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      ATerm g_2 = ATgetArgument(t, 0);
                      ATerm h_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_2);
                  t = f_24;
                }
              else
                {
                  t = e_2;
                  {
                    ATerm i_2 = t;
                    int j_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_LChoice_2))
                          {
                            ATerm k_2 = ATgetArgument(t, 0);
                            ATerm l_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_2);
                        t = f_24;
                      }
                    else
                      {
                        t = i_2;
                        {
                          ATerm m_2 = t;
                          int n_2 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_RChoice_2))
                                {
                                  ATerm o_2 = ATgetArgument(t, 0);
                                  ATerm p_2 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_2);
                              t = f_24;
                            }
                          else
                            {
                              t = m_2;
                              {
                                ATerm q_2 = t;
                                int r_2 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_GChoice_2))
                                      {
                                        ATerm s_2 = ATgetArgument(t, 0);
                                        ATerm t_2 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(r_2);
                                    t = f_24;
                                  }
                                else
                                  {
                                    t = q_2;
                                    {
                                      ATerm u_2 = t;
                                      int v_2 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              ATerm w_2 = ATgetArgument(t, 0);
                                              ATerm x_2 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(v_2);
                                          t = f_24;
                                        }
                                      else
                                        {
                                          t = u_2;
                                          {
                                            ATerm y_2 = t;
                                            int z_2 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RGChoice_2))
                                                  {
                                                    ATerm a_3 = ATgetArgument(t, 0);
                                                    ATerm b_3 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(z_2);
                                                t = f_24;
                                              }
                                            else
                                              {
                                                t = y_2;
                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                  {
                                                    ATerm c_3 = ATgetArgument(t, 0);
                                                    ATerm d_3 = ATgetArgument(t, 1);
                                                    ATerm e_3 = ATgetArgument(t, 2);
                                                  }
                                                else
                                                  _fail(t);
                                                t = f_24;
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24, d_24);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_RGChoice_2))
        {
          f_24 = ATgetArgument(t, 0);
          g_24 = ATgetArgument(t, 1);
          t = f_24;
          {
            ATerm f_3 = t;
            int g_3 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Choice_2))
                  {
                    ATerm h_3 = ATgetArgument(t, 0);
                    ATerm i_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(g_3);
                t = f_24;
              }
            else
              {
                t = f_3;
                {
                  ATerm j_3 = t;
                  int k_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LChoice_2))
                        {
                          ATerm l_3 = ATgetArgument(t, 0);
                          ATerm m_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(k_3);
                      t = f_24;
                    }
                  else
                    {
                      t = j_3;
                      {
                        ATerm n_3 = t;
                        int o_3 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_RChoice_2))
                              {
                                ATerm p_3 = ATgetArgument(t, 0);
                                ATerm q_3 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(o_3);
                            t = f_24;
                          }
                        else
                          {
                            t = n_3;
                            {
                              ATerm r_3 = t;
                              int s_3 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      ATerm t_3 = ATgetArgument(t, 0);
                                      ATerm u_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(s_3);
                                  t = f_24;
                                }
                              else
                                {
                                  t = r_3;
                                  {
                                    ATerm v_3 = t;
                                    int w_3 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_LGChoice_2))
                                          {
                                            ATerm x_3 = ATgetArgument(t, 0);
                                            ATerm y_3 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(w_3);
                                        t = f_24;
                                      }
                                    else
                                      {
                                        t = v_3;
                                        {
                                          ATerm z_3 = t;
                                          int a_4 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                {
                                                  ATerm b_4 = ATgetArgument(t, 0);
                                                  ATerm c_4 = ATgetArgument(t, 1);
                                                  ATerm d_4 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(a_4);
                                              t = f_24;
                                            }
                                          else
                                            {
                                              t = z_3;
                                              if(match_cons(t, sym_RGChoice_2))
                                                {
                                                  ATerm e_4 = ATgetArgument(t, 0);
                                                  ATerm f_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = f_24;
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
        }
      else
        {
          if(match_cons(t, sym_LGChoice_2))
            {
              f_24 = ATgetArgument(t, 0);
              g_24 = ATgetArgument(t, 1);
              t = f_24;
              {
                ATerm m_4 = t;
                int n_4 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Choice_2))
                      {
                        ATerm o_4 = ATgetArgument(t, 0);
                        ATerm p_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_4);
                    t = f_24;
                  }
                else
                  {
                    t = m_4;
                    {
                      ATerm q_4 = t;
                      int r_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              ATerm s_4 = ATgetArgument(t, 0);
                              ATerm t_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_4);
                          t = f_24;
                        }
                      else
                        {
                          t = q_4;
                          {
                            ATerm u_4 = t;
                            int v_4 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_RChoice_2))
                                  {
                                    ATerm w_4 = ATgetArgument(t, 0);
                                    ATerm x_4 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(v_4);
                                t = f_24;
                              }
                            else
                              {
                                t = u_4;
                                {
                                  ATerm y_4 = t;
                                  int z_4 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          ATerm a_5 = ATgetArgument(t, 0);
                                          ATerm b_5 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(z_4);
                                      t = f_24;
                                    }
                                  else
                                    {
                                      t = y_4;
                                      {
                                        ATerm d_5 = t;
                                        int e_5 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_RGChoice_2))
                                              {
                                                ATerm f_5 = ATgetArgument(t, 0);
                                                ATerm g_5 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(e_5);
                                            t = f_24;
                                          }
                                        else
                                          {
                                            t = d_5;
                                            {
                                              ATerm h_5 = t;
                                              int i_5 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      ATerm j_5 = ATgetArgument(t, 0);
                                                      ATerm k_5 = ATgetArgument(t, 1);
                                                      ATerm l_5 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(i_5);
                                                  t = f_24;
                                                }
                                              else
                                                {
                                                  t = h_5;
                                                  if(match_cons(t, sym_LGChoice_2))
                                                    {
                                                      ATerm m_5 = ATgetArgument(t, 0);
                                                      ATerm n_5 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = f_24;
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
              }
              t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
            }
          else
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  f_24 = ATgetArgument(t, 0);
                  g_24 = ATgetArgument(t, 1);
                  t = f_24;
                  {
                    ATerm p_5 = t;
                    int q_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Choice_2))
                          {
                            ATerm r_5 = ATgetArgument(t, 0);
                            ATerm s_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_5);
                        t = f_24;
                      }
                    else
                      {
                        t = p_5;
                        {
                          ATerm t_5 = t;
                          int u_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  ATerm v_5 = ATgetArgument(t, 0);
                                  ATerm w_5 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_5);
                              t = f_24;
                            }
                          else
                            {
                              t = t_5;
                              {
                                ATerm x_5 = t;
                                int y_5 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_RChoice_2))
                                      {
                                        ATerm z_5 = ATgetArgument(t, 0);
                                        ATerm a_6 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(y_5);
                                    t = f_24;
                                  }
                                else
                                  {
                                    t = x_5;
                                    {
                                      ATerm b_6 = t;
                                      int c_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              ATerm d_6 = ATgetArgument(t, 0);
                                              ATerm e_6 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(c_6);
                                          t = f_24;
                                        }
                                      else
                                        {
                                          t = b_6;
                                          {
                                            ATerm f_6 = t;
                                            int g_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RGChoice_2))
                                                  {
                                                    ATerm h_6 = ATgetArgument(t, 0);
                                                    ATerm i_6 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(g_6);
                                                t = f_24;
                                              }
                                            else
                                              {
                                                t = f_6;
                                                {
                                                  ATerm j_6 = t;
                                                  int n_6 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                        {
                                                          ATerm o_6 = ATgetArgument(t, 0);
                                                          ATerm p_6 = ATgetArgument(t, 1);
                                                          ATerm q_6 = ATgetArgument(t, 2);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(n_6);
                                                      t = f_24;
                                                    }
                                                  else
                                                    {
                                                      t = j_6;
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm r_6 = ATgetArgument(t, 0);
                                                          ATerm s_6 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = f_24;
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                }
              else
                {
                  if(match_cons(t, sym_RChoice_2))
                    {
                      f_24 = ATgetArgument(t, 0);
                      g_24 = ATgetArgument(t, 1);
                      t = f_24;
                      {
                        ATerm t_6 = t;
                        int u_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Choice_2))
                              {
                                ATerm v_6 = ATgetArgument(t, 0);
                                ATerm w_6 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_6);
                            t = f_24;
                          }
                        else
                          {
                            t = t_6;
                            {
                              ATerm x_6 = t;
                              int y_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_LChoice_2))
                                    {
                                      ATerm z_6 = ATgetArgument(t, 0);
                                      ATerm a_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(y_6);
                                  t = f_24;
                                }
                              else
                                {
                                  t = x_6;
                                  {
                                    ATerm b_7 = t;
                                    int c_7 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_GChoice_2))
                                          {
                                            ATerm d_7 = ATgetArgument(t, 0);
                                            ATerm e_7 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(c_7);
                                        t = f_24;
                                      }
                                    else
                                      {
                                        t = b_7;
                                        {
                                          ATerm f_7 = t;
                                          int g_7 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LGChoice_2))
                                                {
                                                  ATerm h_7 = ATgetArgument(t, 0);
                                                  ATerm i_7 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(g_7);
                                              t = f_24;
                                            }
                                          else
                                            {
                                              t = f_7;
                                              {
                                                ATerm j_7 = t;
                                                int k_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RGChoice_2))
                                                      {
                                                        ATerm l_7 = ATgetArgument(t, 0);
                                                        ATerm m_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(k_7);
                                                    t = f_24;
                                                  }
                                                else
                                                  {
                                                    t = j_7;
                                                    {
                                                      ATerm n_7 = t;
                                                      int o_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                            {
                                                              ATerm p_7 = ATgetArgument(t, 0);
                                                              ATerm q_7 = ATgetArgument(t, 1);
                                                              ATerm r_7 = ATgetArgument(t, 2);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(o_7);
                                                          t = f_24;
                                                        }
                                                      else
                                                        {
                                                          t = n_7;
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm s_7 = ATgetArgument(t, 0);
                                                              ATerm t_7 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = f_24;
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                      t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                    }
                  else
                    {
                      if(match_cons(t, sym_LChoice_2))
                        {
                          f_24 = ATgetArgument(t, 0);
                          g_24 = ATgetArgument(t, 1);
                          t = f_24;
                          {
                            ATerm u_7 = t;
                            int v_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Choice_2))
                                  {
                                    ATerm w_7 = ATgetArgument(t, 0);
                                    ATerm x_7 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(v_7);
                                t = f_24;
                              }
                            else
                              {
                                t = u_7;
                                {
                                  ATerm y_7 = t;
                                  int z_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_RChoice_2))
                                        {
                                          ATerm a_8 = ATgetArgument(t, 0);
                                          ATerm b_8 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(z_7);
                                      t = f_24;
                                    }
                                  else
                                    {
                                      t = y_7;
                                      {
                                        ATerm c_8 = t;
                                        int d_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_GChoice_2))
                                              {
                                                ATerm e_8 = ATgetArgument(t, 0);
                                                ATerm f_8 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(d_8);
                                            t = f_24;
                                          }
                                        else
                                          {
                                            t = c_8;
                                            {
                                              ATerm g_8 = t;
                                              int h_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_LGChoice_2))
                                                    {
                                                      ATerm i_8 = ATgetArgument(t, 0);
                                                      ATerm j_8 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(h_8);
                                                  t = f_24;
                                                }
                                              else
                                                {
                                                  t = g_8;
                                                  {
                                                    ATerm k_8 = t;
                                                    int l_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_RGChoice_2))
                                                          {
                                                            ATerm m_8 = ATgetArgument(t, 0);
                                                            ATerm n_8 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(l_8);
                                                        t = f_24;
                                                      }
                                                    else
                                                      {
                                                        t = k_8;
                                                        {
                                                          ATerm o_8 = t;
                                                          int p_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  ATerm q_8 = ATgetArgument(t, 0);
                                                                  ATerm r_8 = ATgetArgument(t, 1);
                                                                  ATerm s_8 = ATgetArgument(t, 2);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(p_8);
                                                              t = f_24;
                                                            }
                                                          else
                                                            {
                                                              t = o_8;
                                                              if(match_cons(t, sym_LChoice_2))
                                                                {
                                                                  ATerm t_8 = ATgetArgument(t, 0);
                                                                  ATerm u_8 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = f_24;
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                              }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              f_24 = ATgetArgument(t, 0);
                              g_24 = ATgetArgument(t, 1);
                              t = f_24;
                              {
                                ATerm v_8 = t;
                                int w_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_LChoice_2))
                                      {
                                        ATerm x_8 = ATgetArgument(t, 0);
                                        ATerm y_8 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(w_8);
                                    t = f_24;
                                  }
                                else
                                  {
                                    t = v_8;
                                    {
                                      ATerm z_8 = t;
                                      int a_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_RChoice_2))
                                            {
                                              ATerm b_9 = ATgetArgument(t, 0);
                                              ATerm c_9 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(a_9);
                                          t = f_24;
                                        }
                                      else
                                        {
                                          t = z_8;
                                          {
                                            ATerm d_9 = t;
                                            int e_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_GChoice_2))
                                                  {
                                                    ATerm f_9 = ATgetArgument(t, 0);
                                                    ATerm g_9 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(e_9);
                                                t = f_24;
                                              }
                                            else
                                              {
                                                t = d_9;
                                                {
                                                  ATerm h_9 = t;
                                                  int i_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LGChoice_2))
                                                        {
                                                          ATerm j_9 = ATgetArgument(t, 0);
                                                          ATerm k_9 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(i_9);
                                                      t = f_24;
                                                    }
                                                  else
                                                    {
                                                      t = h_9;
                                                      {
                                                        ATerm l_9 = t;
                                                        int m_9 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_RGChoice_2))
                                                              {
                                                                ATerm n_9 = ATgetArgument(t, 0);
                                                                ATerm o_9 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(m_9);
                                                            t = f_24;
                                                          }
                                                        else
                                                          {
                                                            t = l_9;
                                                            {
                                                              ATerm p_9 = t;
                                                              int q_9 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                    {
                                                                      ATerm r_9 = ATgetArgument(t, 0);
                                                                      ATerm s_9 = ATgetArgument(t, 1);
                                                                      ATerm t_9 = ATgetArgument(t, 2);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(q_9);
                                                                  t = f_24;
                                                                }
                                                              else
                                                                {
                                                                  t = p_9;
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm u_9 = ATgetArgument(t, 0);
                                                                      ATerm v_9 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = f_24;
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  f_24 = ATgetArgument(t, 0);
                                  g_24 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_9 = t;
                                    int x_9 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = g_24;
                                        {
                                          ATerm y_9 = t;
                                          int z_9 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm a_10 = ATgetArgument(t, 0);
                                                  ATerm b_10 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(z_9);
                                              t = g_24;
                                            }
                                          else
                                            {
                                              t = y_9;
                                              {
                                                ATerm c_10 = t;
                                                int d_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm e_10 = ATgetArgument(t, 0);
                                                        ATerm f_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_10);
                                                    t = g_24;
                                                  }
                                                else
                                                  {
                                                    t = c_10;
                                                    {
                                                      ATerm g_10 = t;
                                                      int h_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm i_10 = ATgetArgument(t, 0);
                                                              ATerm j_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(h_10);
                                                          t = g_24;
                                                        }
                                                      else
                                                        {
                                                          t = g_10;
                                                          {
                                                            ATerm k_10 = t;
                                                            int l_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm m_10 = ATgetArgument(t, 0);
                                                                    ATerm n_10 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(l_10);
                                                                t = g_24;
                                                              }
                                                            else
                                                              {
                                                                t = k_10;
                                                                {
                                                                  ATerm o_10 = t;
                                                                  int p_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm q_10 = ATgetArgument(t, 0);
                                                                          ATerm r_10 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(p_10);
                                                                      t = g_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_10;
                                                                      {
                                                                        ATerm s_10 = t;
                                                                        int t_10 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm u_10 = ATgetArgument(t, 0);
                                                                                ATerm v_10 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(t_10);
                                                                            t = g_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = s_10;
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm w_10 = ATgetArgument(t, 0);
                                                                                ATerm x_10 = ATgetArgument(t, 1);
                                                                                ATerm y_10 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            t = g_24;
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                        LocalPopChoice(x_9);
                                      }
                                    else
                                      {
                                        t = w_9;
                                        t = f_24;
                                        {
                                          ATerm z_10 = t;
                                          int a_11 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm b_11 = ATgetArgument(t, 0);
                                                  ATerm c_11 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(a_11);
                                              t = f_24;
                                            }
                                          else
                                            {
                                              t = z_10;
                                              {
                                                ATerm d_11 = t;
                                                int e_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm f_11 = ATgetArgument(t, 0);
                                                        ATerm g_11 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_11);
                                                    t = f_24;
                                                  }
                                                else
                                                  {
                                                    t = d_11;
                                                    {
                                                      ATerm h_11 = t;
                                                      int i_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm j_11 = ATgetArgument(t, 0);
                                                              ATerm k_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(i_11);
                                                          t = f_24;
                                                        }
                                                      else
                                                        {
                                                          t = h_11;
                                                          {
                                                            ATerm l_11 = t;
                                                            int m_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm n_11 = ATgetArgument(t, 0);
                                                                    ATerm o_11 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(m_11);
                                                                t = f_24;
                                                              }
                                                            else
                                                              {
                                                                t = l_11;
                                                                {
                                                                  ATerm p_11 = t;
                                                                  int q_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm r_11 = ATgetArgument(t, 0);
                                                                          ATerm s_11 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(q_11);
                                                                      t = f_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = p_11;
                                                                      {
                                                                        ATerm t_11 = t;
                                                                        int u_11 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm v_11 = ATgetArgument(t, 0);
                                                                                ATerm w_11 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(u_11);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_11;
                                                                            {
                                                                              ATerm x_11 = t;
                                                                              int y_11 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm z_11 = ATgetArgument(t, 0);
                                                                                      ATerm a_12 = ATgetArgument(t, 1);
                                                                                      ATerm b_12 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(y_11);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_11;
                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                    {
                                                                                      ATerm c_12 = ATgetArgument(t, 0);
                                                                                      ATerm d_12 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = f_24;
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                    {
                                      f_24 = ATgetArgument(t, 0);
                                      g_24 = ATgetArgument(t, 1);
                                      d_24 = ATgetArgument(t, 2);
                                      c_24 = ATgetArgument(t, 3);
                                      {
                                        ATerm e_12 = t;
                                        int f_12 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = c_24;
                                            {
                                              ATerm g_12 = t;
                                              int h_12 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm i_12 = ATgetArgument(t, 0);
                                                      ATerm j_12 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(h_12);
                                                  t = c_24;
                                                }
                                              else
                                                {
                                                  t = g_12;
                                                  {
                                                    ATerm k_12 = t;
                                                    int l_12 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm m_12 = ATgetArgument(t, 0);
                                                            ATerm n_12 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(l_12);
                                                        t = c_24;
                                                      }
                                                    else
                                                      {
                                                        t = k_12;
                                                        {
                                                          ATerm o_12 = t;
                                                          int p_12 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm q_12 = ATgetArgument(t, 0);
                                                                  ATerm r_12 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(p_12);
                                                              t = c_24;
                                                            }
                                                          else
                                                            {
                                                              t = o_12;
                                                              {
                                                                ATerm s_12 = t;
                                                                int t_12 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm u_12 = ATgetArgument(t, 0);
                                                                        ATerm v_12 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(t_12);
                                                                    t = c_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_12;
                                                                    {
                                                                      ATerm w_12 = t;
                                                                      int x_12 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm y_12 = ATgetArgument(t, 0);
                                                                              ATerm z_12 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(x_12);
                                                                          t = c_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_12;
                                                                          {
                                                                            ATerm a_13 = t;
                                                                            int b_13 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm c_13 = ATgetArgument(t, 0);
                                                                                    ATerm d_13 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(b_13);
                                                                                t = c_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = a_13;
                                                                                {
                                                                                  ATerm e_13 = t;
                                                                                  int f_13 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm g_13 = ATgetArgument(t, 0);
                                                                                          ATerm h_13 = ATgetArgument(t, 1);
                                                                                          ATerm i_13 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(f_13);
                                                                                      t = c_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_13;
                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                        {
                                                                                          ATerm j_13 = ATgetArgument(t, 0);
                                                                                          ATerm k_13 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = c_24;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, f_24, g_24, d_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, c_24));
                                            LocalPopChoice(f_12);
                                          }
                                        else
                                          {
                                            t = e_12;
                                            {
                                              ATerm l_13 = t;
                                              int m_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = d_24;
                                                  {
                                                    ATerm n_13 = t;
                                                    int o_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_Choice_2))
                                                          {
                                                            ATerm p_13 = ATgetArgument(t, 0);
                                                            ATerm q_13 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(o_13);
                                                        t = d_24;
                                                      }
                                                    else
                                                      {
                                                        t = n_13;
                                                        {
                                                          ATerm r_13 = t;
                                                          int s_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LChoice_2))
                                                                {
                                                                  ATerm t_13 = ATgetArgument(t, 0);
                                                                  ATerm u_13 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(s_13);
                                                              t = d_24;
                                                            }
                                                          else
                                                            {
                                                              t = r_13;
                                                              {
                                                                ATerm v_13 = t;
                                                                int w_13 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RChoice_2))
                                                                      {
                                                                        ATerm x_13 = ATgetArgument(t, 0);
                                                                        ATerm y_13 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(w_13);
                                                                    t = d_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_13;
                                                                    {
                                                                      ATerm z_13 = t;
                                                                      int a_14 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GChoice_2))
                                                                            {
                                                                              ATerm b_14 = ATgetArgument(t, 0);
                                                                              ATerm c_14 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(a_14);
                                                                          t = d_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_13;
                                                                          {
                                                                            ATerm d_14 = t;
                                                                            int e_14 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                  {
                                                                                    ATerm f_14 = ATgetArgument(t, 0);
                                                                                    ATerm g_14 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(e_14);
                                                                                t = d_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = d_14;
                                                                                {
                                                                                  ATerm h_14 = t;
                                                                                  int i_14 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                                        {
                                                                                          ATerm j_14 = ATgetArgument(t, 0);
                                                                                          ATerm k_14 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(i_14);
                                                                                      t = d_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_14;
                                                                                      {
                                                                                        ATerm l_14 = t;
                                                                                        int m_14 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                              {
                                                                                                ATerm n_14 = ATgetArgument(t, 0);
                                                                                                ATerm o_14 = ATgetArgument(t, 1);
                                                                                                ATerm p_14 = ATgetArgument(t, 2);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(m_14);
                                                                                            t = d_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_14;
                                                                                            {
                                                                                              ATerm q_14 = t;
                                                                                              int r_14 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                    {
                                                                                                      ATerm s_14 = ATgetArgument(t, 0);
                                                                                                      ATerm t_14 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(r_14);
                                                                                                  t = d_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = q_14;
                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                    {
                                                                                                      ATerm u_14 = ATgetArgument(t, 0);
                                                                                                      ATerm v_14 = ATgetArgument(t, 1);
                                                                                                      ATerm w_14 = ATgetArgument(t, 2);
                                                                                                      ATerm x_14 = ATgetArgument(t, 3);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = d_24;
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, f_24, g_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, d_24), c_24);
                                                  LocalPopChoice(m_13);
                                                }
                                              else
                                                {
                                                  t = l_13;
                                                  {
                                                    ATerm y_14 = t;
                                                    int z_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = g_24;
                                                        {
                                                          ATerm a_15 = t;
                                                          int b_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm c_15 = ATgetArgument(t, 0);
                                                                  ATerm d_15 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(b_15);
                                                              t = g_24;
                                                            }
                                                          else
                                                            {
                                                              t = a_15;
                                                              {
                                                                ATerm e_15 = t;
                                                                int f_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm g_15 = ATgetArgument(t, 0);
                                                                        ATerm h_15 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(f_15);
                                                                    t = g_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_15;
                                                                    {
                                                                      ATerm i_15 = t;
                                                                      int j_15 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm k_15 = ATgetArgument(t, 0);
                                                                              ATerm l_15 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(j_15);
                                                                          t = g_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_15;
                                                                          {
                                                                            ATerm m_15 = t;
                                                                            int n_15 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm o_15 = ATgetArgument(t, 0);
                                                                                    ATerm p_15 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(n_15);
                                                                                t = g_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_15;
                                                                                {
                                                                                  ATerm q_15 = t;
                                                                                  int r_15 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm s_15 = ATgetArgument(t, 0);
                                                                                          ATerm t_15 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(r_15);
                                                                                      t = g_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_15;
                                                                                      {
                                                                                        ATerm u_15 = t;
                                                                                        int v_15 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm w_15 = ATgetArgument(t, 0);
                                                                                                ATerm x_15 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(v_15);
                                                                                            t = g_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_15;
                                                                                            {
                                                                                              ATerm y_15 = t;
                                                                                              int z_15 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm a_16 = ATgetArgument(t, 0);
                                                                                                      ATerm b_16 = ATgetArgument(t, 1);
                                                                                                      ATerm c_16 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(z_15);
                                                                                                  t = g_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = y_15;
                                                                                                  {
                                                                                                    ATerm d_16 = t;
                                                                                                    int e_16 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm f_16 = ATgetArgument(t, 0);
                                                                                                            ATerm g_16 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(e_16);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = d_16;
                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                          {
                                                                                                            ATerm h_16 = ATgetArgument(t, 0);
                                                                                                            ATerm i_16 = ATgetArgument(t, 1);
                                                                                                            ATerm j_16 = ATgetArgument(t, 2);
                                                                                                            ATerm k_16 = ATgetArgument(t, 3);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, f_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_24), d_24, c_24);
                                                        LocalPopChoice(z_14);
                                                      }
                                                    else
                                                      {
                                                        t = y_14;
                                                        t = f_24;
                                                        {
                                                          ATerm l_16 = t;
                                                          int m_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm n_16 = ATgetArgument(t, 0);
                                                                  ATerm o_16 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(m_16);
                                                              t = f_24;
                                                            }
                                                          else
                                                            {
                                                              t = l_16;
                                                              {
                                                                ATerm p_16 = t;
                                                                int q_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm r_16 = ATgetArgument(t, 0);
                                                                        ATerm s_16 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(q_16);
                                                                    t = f_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_16;
                                                                    {
                                                                      ATerm t_16 = t;
                                                                      int u_16 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm v_16 = ATgetArgument(t, 0);
                                                                              ATerm w_16 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(u_16);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = t_16;
                                                                          {
                                                                            ATerm x_16 = t;
                                                                            int y_16 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm z_16 = ATgetArgument(t, 0);
                                                                                    ATerm a_17 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(y_16);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = x_16;
                                                                                {
                                                                                  ATerm b_17 = t;
                                                                                  int c_17 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm d_17 = ATgetArgument(t, 0);
                                                                                          ATerm e_17 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(c_17);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_17;
                                                                                      {
                                                                                        ATerm f_17 = t;
                                                                                        int g_17 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm h_17 = ATgetArgument(t, 0);
                                                                                                ATerm i_17 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(g_17);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_17;
                                                                                            {
                                                                                              ATerm j_17 = t;
                                                                                              int k_17 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm l_17 = ATgetArgument(t, 0);
                                                                                                      ATerm m_17 = ATgetArgument(t, 1);
                                                                                                      ATerm n_17 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(k_17);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = j_17;
                                                                                                  {
                                                                                                    ATerm o_17 = t;
                                                                                                    int p_17 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm q_17 = ATgetArgument(t, 0);
                                                                                                            ATerm r_17 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(p_17);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = o_17;
                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                          {
                                                                                                            ATerm s_17 = ATgetArgument(t, 0);
                                                                                                            ATerm t_17 = ATgetArgument(t, 1);
                                                                                                            ATerm u_17 = ATgetArgument(t, 2);
                                                                                                            ATerm v_17 = ATgetArgument(t, 3);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24, d_24, c_24);
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynRuleUnion_3))
                                        {
                                          f_24 = ATgetArgument(t, 0);
                                          g_24 = ATgetArgument(t, 1);
                                          d_24 = ATgetArgument(t, 2);
                                          {
                                            ATerm w_17 = t;
                                            int x_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = d_24;
                                                {
                                                  ATerm y_17 = t;
                                                  int z_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm a_18 = ATgetArgument(t, 0);
                                                          ATerm b_18 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(z_17);
                                                      t = d_24;
                                                    }
                                                  else
                                                    {
                                                      t = y_17;
                                                      {
                                                        ATerm c_18 = t;
                                                        int d_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm e_18 = ATgetArgument(t, 0);
                                                                ATerm f_18 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(d_18);
                                                            t = d_24;
                                                          }
                                                        else
                                                          {
                                                            t = c_18;
                                                            {
                                                              ATerm g_18 = t;
                                                              int h_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm i_18 = ATgetArgument(t, 0);
                                                                      ATerm j_18 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(h_18);
                                                                  t = d_24;
                                                                }
                                                              else
                                                                {
                                                                  t = g_18;
                                                                  {
                                                                    ATerm k_18 = t;
                                                                    int l_18 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm m_18 = ATgetArgument(t, 0);
                                                                            ATerm n_18 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(l_18);
                                                                        t = d_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_18;
                                                                        {
                                                                          ATerm o_18 = t;
                                                                          int p_18 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm q_18 = ATgetArgument(t, 0);
                                                                                  ATerm r_18 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(p_18);
                                                                              t = d_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_18;
                                                                              {
                                                                                ATerm s_18 = t;
                                                                                int t_18 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm u_18 = ATgetArgument(t, 0);
                                                                                        ATerm v_18 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(t_18);
                                                                                    t = d_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_18;
                                                                                    {
                                                                                      ATerm w_18 = t;
                                                                                      int x_18 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm y_18 = ATgetArgument(t, 0);
                                                                                              ATerm z_18 = ATgetArgument(t, 1);
                                                                                              ATerm a_19 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(x_18);
                                                                                          t = d_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_18;
                                                                                          {
                                                                                            ATerm b_19 = t;
                                                                                            int c_19 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                  {
                                                                                                    ATerm d_19 = ATgetArgument(t, 0);
                                                                                                    ATerm e_19 = ATgetArgument(t, 1);
                                                                                                    ATerm f_19 = ATgetArgument(t, 2);
                                                                                                    ATerm g_19 = ATgetArgument(t, 3);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(c_19);
                                                                                                t = d_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_19;
                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                  {
                                                                                                    ATerm h_19 = ATgetArgument(t, 0);
                                                                                                    ATerm i_19 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                t = d_24;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, f_24, g_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, d_24));
                                                LocalPopChoice(x_17);
                                              }
                                            else
                                              {
                                                t = w_17;
                                                {
                                                  ATerm j_19 = t;
                                                  int k_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = g_24;
                                                      {
                                                        ATerm l_19 = t;
                                                        int m_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Choice_2))
                                                              {
                                                                ATerm n_19 = ATgetArgument(t, 0);
                                                                ATerm o_19 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(m_19);
                                                            t = g_24;
                                                          }
                                                        else
                                                          {
                                                            t = l_19;
                                                            {
                                                              ATerm p_19 = t;
                                                              int q_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      ATerm r_19 = ATgetArgument(t, 0);
                                                                      ATerm s_19 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(q_19);
                                                                  t = g_24;
                                                                }
                                                              else
                                                                {
                                                                  t = p_19;
                                                                  {
                                                                    ATerm t_19 = t;
                                                                    int u_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_RChoice_2))
                                                                          {
                                                                            ATerm v_19 = ATgetArgument(t, 0);
                                                                            ATerm w_19 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(u_19);
                                                                        t = g_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_19;
                                                                        {
                                                                          ATerm x_19 = t;
                                                                          int y_19 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  ATerm z_19 = ATgetArgument(t, 0);
                                                                                  ATerm a_20 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(y_19);
                                                                              t = g_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_19;
                                                                              {
                                                                                ATerm b_20 = t;
                                                                                int c_20 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                      {
                                                                                        ATerm d_20 = ATgetArgument(t, 0);
                                                                                        ATerm e_20 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(c_20);
                                                                                    t = g_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_20;
                                                                                    {
                                                                                      ATerm f_20 = t;
                                                                                      int g_20 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                            {
                                                                                              ATerm h_20 = ATgetArgument(t, 0);
                                                                                              ATerm i_20 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(g_20);
                                                                                          t = g_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_20;
                                                                                          {
                                                                                            ATerm j_20 = t;
                                                                                            int k_20 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm l_20 = ATgetArgument(t, 0);
                                                                                                    ATerm m_20 = ATgetArgument(t, 1);
                                                                                                    ATerm n_20 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(k_20);
                                                                                                t = g_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_20;
                                                                                                {
                                                                                                  ATerm o_20 = t;
                                                                                                  int p_20 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                        {
                                                                                                          ATerm q_20 = ATgetArgument(t, 0);
                                                                                                          ATerm r_20 = ATgetArgument(t, 1);
                                                                                                          ATerm s_20 = ATgetArgument(t, 2);
                                                                                                          ATerm t_20 = ATgetArgument(t, 3);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(p_20);
                                                                                                      t = g_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_20;
                                                                                                      {
                                                                                                        ATerm u_20 = t;
                                                                                                        int v_20 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Seq_2))
                                                                                                              {
                                                                                                                ATerm w_20 = ATgetArgument(t, 0);
                                                                                                                ATerm x_20 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(v_20);
                                                                                                            t = g_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = u_20;
                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                              {
                                                                                                                ATerm y_20 = ATgetArgument(t, 0);
                                                                                                                ATerm z_20 = ATgetArgument(t, 1);
                                                                                                                ATerm a_21 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            t = g_24;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, f_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_24), d_24);
                                                      LocalPopChoice(k_19);
                                                    }
                                                  else
                                                    {
                                                      t = j_19;
                                                      t = f_24;
                                                      {
                                                        ATerm b_21 = t;
                                                        int c_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Choice_2))
                                                              {
                                                                ATerm d_21 = ATgetArgument(t, 0);
                                                                ATerm e_21 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(c_21);
                                                            t = f_24;
                                                          }
                                                        else
                                                          {
                                                            t = b_21;
                                                            {
                                                              ATerm f_21 = t;
                                                              int g_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      ATerm h_21 = ATgetArgument(t, 0);
                                                                      ATerm i_21 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(g_21);
                                                                  t = f_24;
                                                                }
                                                              else
                                                                {
                                                                  t = f_21;
                                                                  {
                                                                    ATerm j_21 = t;
                                                                    int k_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_RChoice_2))
                                                                          {
                                                                            ATerm l_21 = ATgetArgument(t, 0);
                                                                            ATerm m_21 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(k_21);
                                                                        t = f_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_21;
                                                                        {
                                                                          ATerm n_21 = t;
                                                                          int o_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  ATerm p_21 = ATgetArgument(t, 0);
                                                                                  ATerm q_21 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(o_21);
                                                                              t = f_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_21;
                                                                              {
                                                                                ATerm r_21 = t;
                                                                                int s_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                      {
                                                                                        ATerm t_21 = ATgetArgument(t, 0);
                                                                                        ATerm u_21 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(s_21);
                                                                                    t = f_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_21;
                                                                                    {
                                                                                      ATerm v_21 = t;
                                                                                      int w_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                            {
                                                                                              ATerm x_21 = ATgetArgument(t, 0);
                                                                                              ATerm y_21 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(w_21);
                                                                                          t = f_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_21;
                                                                                          {
                                                                                            ATerm z_21 = t;
                                                                                            int a_22 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm b_22 = ATgetArgument(t, 0);
                                                                                                    ATerm c_22 = ATgetArgument(t, 1);
                                                                                                    ATerm d_22 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(a_22);
                                                                                                t = f_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_21;
                                                                                                {
                                                                                                  ATerm e_22 = t;
                                                                                                  int f_22 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                        {
                                                                                                          ATerm g_22 = ATgetArgument(t, 0);
                                                                                                          ATerm h_22 = ATgetArgument(t, 1);
                                                                                                          ATerm i_22 = ATgetArgument(t, 2);
                                                                                                          ATerm j_22 = ATgetArgument(t, 3);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(f_22);
                                                                                                      t = f_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_22;
                                                                                                      {
                                                                                                        ATerm k_22 = t;
                                                                                                        int l_22 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Seq_2))
                                                                                                              {
                                                                                                                ATerm m_22 = ATgetArgument(t, 0);
                                                                                                                ATerm n_22 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(l_22);
                                                                                                            t = f_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_22;
                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                              {
                                                                                                                ATerm o_22 = ATgetArgument(t, 0);
                                                                                                                ATerm p_22 = ATgetArgument(t, 1);
                                                                                                                ATerm q_22 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            t = f_24;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24, d_24);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                            {
                                              f_24 = ATgetArgument(t, 0);
                                              g_24 = ATgetArgument(t, 1);
                                              d_24 = ATgetArgument(t, 2);
                                              {
                                                ATerm r_22 = t;
                                                int s_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = d_24;
                                                    {
                                                      ATerm t_22 = t;
                                                      int u_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm v_22 = ATgetArgument(t, 0);
                                                              ATerm w_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(u_22);
                                                          t = d_24;
                                                        }
                                                      else
                                                        {
                                                          t = t_22;
                                                          {
                                                            ATerm x_22 = t;
                                                            int y_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm z_22 = ATgetArgument(t, 0);
                                                                    ATerm a_23 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(y_22);
                                                                t = d_24;
                                                              }
                                                            else
                                                              {
                                                                t = x_22;
                                                                {
                                                                  ATerm b_23 = t;
                                                                  int c_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm d_23 = ATgetArgument(t, 0);
                                                                          ATerm e_23 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(c_23);
                                                                      t = d_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_23;
                                                                      {
                                                                        ATerm f_23 = t;
                                                                        int g_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm h_23 = ATgetArgument(t, 0);
                                                                                ATerm i_23 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(g_23);
                                                                            t = d_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = f_23;
                                                                            {
                                                                              ATerm j_23 = t;
                                                                              int k_23 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm l_23 = ATgetArgument(t, 0);
                                                                                      ATerm m_23 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(k_23);
                                                                                  t = d_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_23;
                                                                                  {
                                                                                    ATerm n_23 = t;
                                                                                    int o_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm p_23 = ATgetArgument(t, 0);
                                                                                            ATerm q_23 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(o_23);
                                                                                        t = d_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_23;
                                                                                        {
                                                                                          ATerm r_23 = t;
                                                                                          int s_23 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm t_23 = ATgetArgument(t, 0);
                                                                                                  ATerm u_23 = ATgetArgument(t, 1);
                                                                                                  ATerm v_23 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(s_23);
                                                                                              t = d_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_23;
                                                                                              {
                                                                                                ATerm w_23 = t;
                                                                                                int x_23 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm y_23 = ATgetArgument(t, 0);
                                                                                                        ATerm z_23 = ATgetArgument(t, 1);
                                                                                                        ATerm a_24 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(x_23);
                                                                                                    t = d_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = w_23;
                                                                                                    {
                                                                                                      ATerm b_24 = t;
                                                                                                      int h_24 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                            {
                                                                                                              ATerm i_24 = ATgetArgument(t, 0);
                                                                                                              ATerm j_24 = ATgetArgument(t, 1);
                                                                                                              ATerm k_24 = ATgetArgument(t, 2);
                                                                                                              ATerm l_24 = ATgetArgument(t, 3);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(h_24);
                                                                                                          t = d_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = b_24;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm m_24 = ATgetArgument(t, 0);
                                                                                                              ATerm n_24 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = d_24;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, f_24, g_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, d_24));
                                                    LocalPopChoice(s_22);
                                                  }
                                                else
                                                  {
                                                    t = r_22;
                                                    {
                                                      ATerm o_24 = t;
                                                      int p_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_24;
                                                          {
                                                            ATerm q_24 = t;
                                                            int r_24 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Choice_2))
                                                                  {
                                                                    ATerm s_24 = ATgetArgument(t, 0);
                                                                    ATerm t_24 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(r_24);
                                                                t = g_24;
                                                              }
                                                            else
                                                              {
                                                                t = q_24;
                                                                {
                                                                  ATerm u_24 = t;
                                                                  int v_24 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          ATerm w_24 = ATgetArgument(t, 0);
                                                                          ATerm x_24 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(v_24);
                                                                      t = g_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_24;
                                                                      {
                                                                        ATerm y_24 = t;
                                                                        int z_24 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RChoice_2))
                                                                              {
                                                                                ATerm a_25 = ATgetArgument(t, 0);
                                                                                ATerm b_25 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(z_24);
                                                                            t = g_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = y_24;
                                                                            {
                                                                              ATerm c_25 = t;
                                                                              int d_25 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      ATerm e_25 = ATgetArgument(t, 0);
                                                                                      ATerm f_25 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(d_25);
                                                                                  t = g_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_25;
                                                                                  {
                                                                                    ATerm g_25 = t;
                                                                                    int h_25 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LGChoice_2))
                                                                                          {
                                                                                            ATerm i_25 = ATgetArgument(t, 0);
                                                                                            ATerm j_25 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(h_25);
                                                                                        t = g_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_25;
                                                                                        {
                                                                                          ATerm k_25 = t;
                                                                                          int l_25 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                                {
                                                                                                  ATerm m_25 = ATgetArgument(t, 0);
                                                                                                  ATerm n_25 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(l_25);
                                                                                              t = g_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_25;
                                                                                              {
                                                                                                ATerm o_25 = t;
                                                                                                int p_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                      {
                                                                                                        ATerm q_25 = ATgetArgument(t, 0);
                                                                                                        ATerm r_25 = ATgetArgument(t, 1);
                                                                                                        ATerm s_25 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(p_25);
                                                                                                    t = g_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = o_25;
                                                                                                    {
                                                                                                      ATerm t_25 = t;
                                                                                                      int u_25 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm v_25 = ATgetArgument(t, 0);
                                                                                                              ATerm w_25 = ATgetArgument(t, 1);
                                                                                                              ATerm x_25 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(u_25);
                                                                                                          t = g_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = t_25;
                                                                                                          {
                                                                                                            ATerm z_25 = t;
                                                                                                            int a_26 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm i_26 = ATgetArgument(t, 0);
                                                                                                                    ATerm r_26 = ATgetArgument(t, 1);
                                                                                                                    ATerm s_26 = ATgetArgument(t, 2);
                                                                                                                    ATerm t_26 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(a_26);
                                                                                                                t = g_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = z_25;
                                                                                                                {
                                                                                                                  ATerm u_26 = t;
                                                                                                                  int v_26 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm w_26 = ATgetArgument(t, 0);
                                                                                                                          ATerm x_26 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(v_26);
                                                                                                                      t = g_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = u_26;
                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                        {
                                                                                                                          ATerm y_26 = ATgetArgument(t, 0);
                                                                                                                          ATerm z_26 = ATgetArgument(t, 1);
                                                                                                                          ATerm a_27 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = g_24;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, f_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_24), d_24);
                                                          LocalPopChoice(p_24);
                                                        }
                                                      else
                                                        {
                                                          t = o_24;
                                                          t = f_24;
                                                          {
                                                            ATerm b_27 = t;
                                                            int c_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Choice_2))
                                                                  {
                                                                    ATerm d_27 = ATgetArgument(t, 0);
                                                                    ATerm e_27 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(c_27);
                                                                t = f_24;
                                                              }
                                                            else
                                                              {
                                                                t = b_27;
                                                                {
                                                                  ATerm f_27 = t;
                                                                  int g_27 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          ATerm h_27 = ATgetArgument(t, 0);
                                                                          ATerm i_27 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(g_27);
                                                                      t = f_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_27;
                                                                      {
                                                                        ATerm j_27 = t;
                                                                        int k_27 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RChoice_2))
                                                                              {
                                                                                ATerm l_27 = ATgetArgument(t, 0);
                                                                                ATerm m_27 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(k_27);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = j_27;
                                                                            {
                                                                              ATerm n_27 = t;
                                                                              int o_27 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      ATerm p_27 = ATgetArgument(t, 0);
                                                                                      ATerm q_27 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(o_27);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = n_27;
                                                                                  {
                                                                                    ATerm r_27 = t;
                                                                                    int s_27 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LGChoice_2))
                                                                                          {
                                                                                            ATerm t_27 = ATgetArgument(t, 0);
                                                                                            ATerm u_27 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(s_27);
                                                                                        t = f_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = r_27;
                                                                                        {
                                                                                          ATerm v_27 = t;
                                                                                          int w_27 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                                {
                                                                                                  ATerm x_27 = ATgetArgument(t, 0);
                                                                                                  ATerm y_27 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(w_27);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = v_27;
                                                                                              {
                                                                                                ATerm z_27 = t;
                                                                                                int a_28 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                      {
                                                                                                        ATerm b_28 = ATgetArgument(t, 0);
                                                                                                        ATerm c_28 = ATgetArgument(t, 1);
                                                                                                        ATerm d_28 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(a_28);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = z_27;
                                                                                                    {
                                                                                                      ATerm e_28 = t;
                                                                                                      int f_28 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm g_28 = ATgetArgument(t, 0);
                                                                                                              ATerm h_28 = ATgetArgument(t, 1);
                                                                                                              ATerm i_28 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(f_28);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = e_28;
                                                                                                          {
                                                                                                            ATerm j_28 = t;
                                                                                                            int k_28 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm l_28 = ATgetArgument(t, 0);
                                                                                                                    ATerm m_28 = ATgetArgument(t, 1);
                                                                                                                    ATerm n_28 = ATgetArgument(t, 2);
                                                                                                                    ATerm o_28 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(k_28);
                                                                                                                t = f_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = j_28;
                                                                                                                {
                                                                                                                  ATerm p_28 = t;
                                                                                                                  int q_28 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm r_28 = ATgetArgument(t, 0);
                                                                                                                          ATerm s_28 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(q_28);
                                                                                                                      t = f_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = p_28;
                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                        {
                                                                                                                          ATerm t_28 = ATgetArgument(t, 0);
                                                                                                                          ATerm u_28 = ATgetArgument(t, 1);
                                                                                                                          ATerm v_28 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = f_24;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24, d_24);
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_AM_2))
                                                {
                                                  f_24 = ATgetArgument(t, 0);
                                                  g_24 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm w_28 = t;
                                                    int x_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = g_24;
                                                        {
                                                          ATerm y_28 = t;
                                                          int z_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm a_29 = ATgetArgument(t, 0);
                                                                  ATerm b_29 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(z_28);
                                                              t = g_24;
                                                            }
                                                          else
                                                            {
                                                              t = y_28;
                                                              {
                                                                ATerm c_29 = t;
                                                                int d_29 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm e_29 = ATgetArgument(t, 0);
                                                                        ATerm f_29 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(d_29);
                                                                    t = g_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_29;
                                                                    {
                                                                      ATerm g_29 = t;
                                                                      int h_29 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm i_29 = ATgetArgument(t, 0);
                                                                              ATerm j_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(h_29);
                                                                          t = g_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_29;
                                                                          {
                                                                            ATerm k_29 = t;
                                                                            int l_29 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm m_29 = ATgetArgument(t, 0);
                                                                                    ATerm n_29 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(l_29);
                                                                                t = g_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = k_29;
                                                                                {
                                                                                  ATerm o_29 = t;
                                                                                  int p_29 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm q_29 = ATgetArgument(t, 0);
                                                                                          ATerm r_29 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(p_29);
                                                                                      t = g_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_29;
                                                                                      {
                                                                                        ATerm s_29 = t;
                                                                                        int t_29 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm u_29 = ATgetArgument(t, 0);
                                                                                                ATerm v_29 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(t_29);
                                                                                            t = g_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = s_29;
                                                                                            {
                                                                                              ATerm w_29 = t;
                                                                                              int x_29 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm y_29 = ATgetArgument(t, 0);
                                                                                                      ATerm z_29 = ATgetArgument(t, 1);
                                                                                                      ATerm a_30 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(x_29);
                                                                                                  t = g_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = w_29;
                                                                                                  {
                                                                                                    ATerm b_30 = t;
                                                                                                    int c_30 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                          {
                                                                                                            ATerm d_30 = ATgetArgument(t, 0);
                                                                                                            ATerm e_30 = ATgetArgument(t, 1);
                                                                                                            ATerm f_30 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(c_30);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_30;
                                                                                                        {
                                                                                                          ATerm g_30 = t;
                                                                                                          int h_30 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm i_30 = ATgetArgument(t, 0);
                                                                                                                  ATerm j_30 = ATgetArgument(t, 1);
                                                                                                                  ATerm k_30 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(h_30);
                                                                                                              t = g_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = g_30;
                                                                                                              {
                                                                                                                ATerm l_30 = t;
                                                                                                                int m_30 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm n_30 = ATgetArgument(t, 0);
                                                                                                                        ATerm o_30 = ATgetArgument(t, 1);
                                                                                                                        ATerm p_30 = ATgetArgument(t, 2);
                                                                                                                        ATerm q_30 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(m_30);
                                                                                                                    t = g_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = l_30;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm r_30 = ATgetArgument(t, 0);
                                                                                                                        ATerm s_30 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = g_24;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_AM_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                        LocalPopChoice(x_28);
                                                      }
                                                    else
                                                      {
                                                        t = w_28;
                                                        t = f_24;
                                                        {
                                                          ATerm t_30 = t;
                                                          int u_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm v_30 = ATgetArgument(t, 0);
                                                                  ATerm w_30 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(u_30);
                                                              t = f_24;
                                                            }
                                                          else
                                                            {
                                                              t = t_30;
                                                              {
                                                                ATerm x_30 = t;
                                                                int y_30 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm z_30 = ATgetArgument(t, 0);
                                                                        ATerm a_31 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(y_30);
                                                                    t = f_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_30;
                                                                    {
                                                                      ATerm b_31 = t;
                                                                      int c_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm d_31 = ATgetArgument(t, 0);
                                                                              ATerm e_31 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(c_31);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_31;
                                                                          {
                                                                            ATerm f_31 = t;
                                                                            int g_31 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm h_31 = ATgetArgument(t, 0);
                                                                                    ATerm i_31 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(g_31);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_31;
                                                                                {
                                                                                  ATerm j_31 = t;
                                                                                  int k_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm l_31 = ATgetArgument(t, 0);
                                                                                          ATerm m_31 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(k_31);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_31;
                                                                                      {
                                                                                        ATerm n_31 = t;
                                                                                        int o_31 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm p_31 = ATgetArgument(t, 0);
                                                                                                ATerm q_31 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(o_31);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_31;
                                                                                            {
                                                                                              ATerm r_31 = t;
                                                                                              int s_31 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm t_31 = ATgetArgument(t, 0);
                                                                                                      ATerm u_31 = ATgetArgument(t, 1);
                                                                                                      ATerm v_31 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(s_31);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = r_31;
                                                                                                  {
                                                                                                    ATerm w_31 = t;
                                                                                                    int x_31 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                          {
                                                                                                            ATerm y_31 = ATgetArgument(t, 0);
                                                                                                            ATerm z_31 = ATgetArgument(t, 1);
                                                                                                            ATerm a_32 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(x_31);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = w_31;
                                                                                                        {
                                                                                                          ATerm b_32 = t;
                                                                                                          int c_32 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm d_32 = ATgetArgument(t, 0);
                                                                                                                  ATerm e_32 = ATgetArgument(t, 1);
                                                                                                                  ATerm f_32 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(c_32);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_32;
                                                                                                              {
                                                                                                                ATerm g_32 = t;
                                                                                                                int h_32 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm i_32 = ATgetArgument(t, 0);
                                                                                                                        ATerm j_32 = ATgetArgument(t, 1);
                                                                                                                        ATerm k_32 = ATgetArgument(t, 2);
                                                                                                                        ATerm l_32 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(h_32);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = g_32;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm m_32 = ATgetArgument(t, 0);
                                                                                                                        ATerm n_32 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                    {
                                                      f_24 = ATgetArgument(t, 0);
                                                      g_24 = ATgetArgument(t, 1);
                                                      d_24 = ATgetArgument(t, 2);
                                                      {
                                                        ATerm o_32 = t;
                                                        int p_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = d_24;
                                                            {
                                                              ATerm q_32 = t;
                                                              int r_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm s_32 = ATgetArgument(t, 0);
                                                                      ATerm t_32 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(r_32);
                                                                  t = d_24;
                                                                }
                                                              else
                                                                {
                                                                  t = q_32;
                                                                  {
                                                                    ATerm u_32 = t;
                                                                    int v_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm w_32 = ATgetArgument(t, 0);
                                                                            ATerm x_32 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(v_32);
                                                                        t = d_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_32;
                                                                        {
                                                                          ATerm y_32 = t;
                                                                          int z_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm a_33 = ATgetArgument(t, 0);
                                                                                  ATerm b_33 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(z_32);
                                                                              t = d_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_32;
                                                                              {
                                                                                ATerm c_33 = t;
                                                                                int d_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm e_33 = ATgetArgument(t, 0);
                                                                                        ATerm f_33 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(d_33);
                                                                                    t = d_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_33;
                                                                                    {
                                                                                      ATerm g_33 = t;
                                                                                      int h_33 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm i_33 = ATgetArgument(t, 0);
                                                                                              ATerm j_33 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(h_33);
                                                                                          t = d_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = g_33;
                                                                                          {
                                                                                            ATerm k_33 = t;
                                                                                            int l_33 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm m_33 = ATgetArgument(t, 0);
                                                                                                    ATerm n_33 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(l_33);
                                                                                                t = d_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_33;
                                                                                                {
                                                                                                  ATerm o_33 = t;
                                                                                                  int p_33 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm q_33 = ATgetArgument(t, 0);
                                                                                                          ATerm r_33 = ATgetArgument(t, 1);
                                                                                                          ATerm s_33 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(p_33);
                                                                                                      t = d_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_33;
                                                                                                      {
                                                                                                        ATerm t_33 = t;
                                                                                                        int u_33 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_AM_2))
                                                                                                              {
                                                                                                                ATerm v_33 = ATgetArgument(t, 0);
                                                                                                                ATerm w_33 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(u_33);
                                                                                                            t = d_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = t_33;
                                                                                                            {
                                                                                                              ATerm x_33 = t;
                                                                                                              int y_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                    {
                                                                                                                      ATerm z_33 = ATgetArgument(t, 0);
                                                                                                                      ATerm a_34 = ATgetArgument(t, 1);
                                                                                                                      ATerm b_34 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(y_33);
                                                                                                                  t = d_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_33;
                                                                                                                  {
                                                                                                                    ATerm c_34 = t;
                                                                                                                    int d_34 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                          {
                                                                                                                            ATerm e_34 = ATgetArgument(t, 0);
                                                                                                                            ATerm f_34 = ATgetArgument(t, 1);
                                                                                                                            ATerm g_34 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(d_34);
                                                                                                                        t = d_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_34;
                                                                                                                        {
                                                                                                                          ATerm h_34 = t;
                                                                                                                          int i_34 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                {
                                                                                                                                  ATerm j_34 = ATgetArgument(t, 0);
                                                                                                                                  ATerm k_34 = ATgetArgument(t, 1);
                                                                                                                                  ATerm l_34 = ATgetArgument(t, 2);
                                                                                                                                  ATerm m_34 = ATgetArgument(t, 3);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              LocalPopChoice(i_34);
                                                                                                                              t = d_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_34;
                                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                                {
                                                                                                                                  ATerm n_34 = ATgetArgument(t, 0);
                                                                                                                                  ATerm o_34 = ATgetArgument(t, 1);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              t = d_24;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, f_24, g_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, d_24));
                                                            LocalPopChoice(p_32);
                                                          }
                                                        else
                                                          {
                                                            t = o_32;
                                                            {
                                                              ATerm p_34 = t;
                                                              int q_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = g_24;
                                                                  {
                                                                    ATerm r_34 = t;
                                                                    int s_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm t_34 = ATgetArgument(t, 0);
                                                                            ATerm u_34 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(s_34);
                                                                        t = g_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_34;
                                                                        {
                                                                          ATerm v_34 = t;
                                                                          int w_34 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm x_34 = ATgetArgument(t, 0);
                                                                                  ATerm y_34 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(w_34);
                                                                              t = g_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_34;
                                                                              {
                                                                                ATerm z_34 = t;
                                                                                int a_35 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                      {
                                                                                        ATerm b_35 = ATgetArgument(t, 0);
                                                                                        ATerm c_35 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(a_35);
                                                                                    t = g_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_34;
                                                                                    {
                                                                                      ATerm d_35 = t;
                                                                                      int e_35 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                            {
                                                                                              ATerm f_35 = ATgetArgument(t, 0);
                                                                                              ATerm g_35 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(e_35);
                                                                                          t = g_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_35;
                                                                                          {
                                                                                            ATerm h_35 = t;
                                                                                            int i_35 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                                  {
                                                                                                    ATerm j_35 = ATgetArgument(t, 0);
                                                                                                    ATerm k_35 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(i_35);
                                                                                                t = g_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_35;
                                                                                                {
                                                                                                  ATerm l_35 = t;
                                                                                                  int m_35 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                                                        {
                                                                                                          ATerm n_35 = ATgetArgument(t, 0);
                                                                                                          ATerm o_35 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(m_35);
                                                                                                      t = g_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_35;
                                                                                                      {
                                                                                                        ATerm p_35 = t;
                                                                                                        int q_35 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                              {
                                                                                                                ATerm r_35 = ATgetArgument(t, 0);
                                                                                                                ATerm s_35 = ATgetArgument(t, 1);
                                                                                                                ATerm t_35 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(q_35);
                                                                                                            t = g_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_35;
                                                                                                            {
                                                                                                              ATerm u_35 = t;
                                                                                                              int v_35 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                                    {
                                                                                                                      ATerm w_35 = ATgetArgument(t, 0);
                                                                                                                      ATerm x_35 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(v_35);
                                                                                                                  t = g_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = u_35;
                                                                                                                  {
                                                                                                                    ATerm y_35 = t;
                                                                                                                    int z_35 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                          {
                                                                                                                            ATerm a_36 = ATgetArgument(t, 0);
                                                                                                                            ATerm b_36 = ATgetArgument(t, 1);
                                                                                                                            ATerm c_36 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(z_35);
                                                                                                                        t = g_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = y_35;
                                                                                                                        {
                                                                                                                          ATerm d_36 = t;
                                                                                                                          int e_36 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                {
                                                                                                                                  ATerm f_36 = ATgetArgument(t, 0);
                                                                                                                                  ATerm g_36 = ATgetArgument(t, 1);
                                                                                                                                  ATerm h_36 = ATgetArgument(t, 2);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              LocalPopChoice(e_36);
                                                                                                                              t = g_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_36;
                                                                                                                              {
                                                                                                                                ATerm i_36 = t;
                                                                                                                                int j_36 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                      {
                                                                                                                                        ATerm k_36 = ATgetArgument(t, 0);
                                                                                                                                        ATerm l_36 = ATgetArgument(t, 1);
                                                                                                                                        ATerm m_36 = ATgetArgument(t, 2);
                                                                                                                                        ATerm n_36 = ATgetArgument(t, 3);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    LocalPopChoice(j_36);
                                                                                                                                    t = g_24;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = i_36;
                                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                                      {
                                                                                                                                        ATerm o_36 = ATgetArgument(t, 0);
                                                                                                                                        ATerm p_36 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = g_24;
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, f_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_24), d_24);
                                                                  LocalPopChoice(q_34);
                                                                }
                                                              else
                                                                {
                                                                  t = p_34;
                                                                  t = f_24;
                                                                  {
                                                                    ATerm q_36 = t;
                                                                    int r_36 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm s_36 = ATgetArgument(t, 0);
                                                                            ATerm t_36 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(r_36);
                                                                        t = f_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_36;
                                                                        {
                                                                          ATerm u_36 = t;
                                                                          int v_36 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm w_36 = ATgetArgument(t, 0);
                                                                                  ATerm x_36 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(v_36);
                                                                              t = f_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_36;
                                                                              {
                                                                                ATerm y_36 = t;
                                                                                int z_36 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                      {
                                                                                        ATerm a_37 = ATgetArgument(t, 0);
                                                                                        ATerm b_37 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(z_36);
                                                                                    t = f_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_36;
                                                                                    {
                                                                                      ATerm c_37 = t;
                                                                                      int d_37 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                            {
                                                                                              ATerm e_37 = ATgetArgument(t, 0);
                                                                                              ATerm f_37 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(d_37);
                                                                                          t = f_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_37;
                                                                                          {
                                                                                            ATerm g_37 = t;
                                                                                            int h_37 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                                  {
                                                                                                    ATerm i_37 = ATgetArgument(t, 0);
                                                                                                    ATerm j_37 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(h_37);
                                                                                                t = f_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_37;
                                                                                                {
                                                                                                  ATerm k_37 = t;
                                                                                                  int l_37 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                                                        {
                                                                                                          ATerm m_37 = ATgetArgument(t, 0);
                                                                                                          ATerm n_37 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(l_37);
                                                                                                      t = f_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = k_37;
                                                                                                      {
                                                                                                        ATerm o_37 = t;
                                                                                                        int p_37 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                              {
                                                                                                                ATerm q_37 = ATgetArgument(t, 0);
                                                                                                                ATerm r_37 = ATgetArgument(t, 1);
                                                                                                                ATerm s_37 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(p_37);
                                                                                                            t = f_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_37;
                                                                                                            {
                                                                                                              ATerm t_37 = t;
                                                                                                              int u_37 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                                    {
                                                                                                                      ATerm v_37 = ATgetArgument(t, 0);
                                                                                                                      ATerm w_37 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(u_37);
                                                                                                                  t = f_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_37;
                                                                                                                  {
                                                                                                                    ATerm x_37 = t;
                                                                                                                    int y_37 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                          {
                                                                                                                            ATerm z_37 = ATgetArgument(t, 0);
                                                                                                                            ATerm a_38 = ATgetArgument(t, 1);
                                                                                                                            ATerm b_38 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(y_37);
                                                                                                                        t = f_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = x_37;
                                                                                                                        {
                                                                                                                          ATerm c_38 = t;
                                                                                                                          int d_38 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                {
                                                                                                                                  ATerm e_38 = ATgetArgument(t, 0);
                                                                                                                                  ATerm f_38 = ATgetArgument(t, 1);
                                                                                                                                  ATerm g_38 = ATgetArgument(t, 2);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              LocalPopChoice(d_38);
                                                                                                                              t = f_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = c_38;
                                                                                                                              {
                                                                                                                                ATerm h_38 = t;
                                                                                                                                int i_38 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                      {
                                                                                                                                        ATerm j_38 = ATgetArgument(t, 0);
                                                                                                                                        ATerm k_38 = ATgetArgument(t, 1);
                                                                                                                                        ATerm l_38 = ATgetArgument(t, 2);
                                                                                                                                        ATerm m_38 = ATgetArgument(t, 3);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    LocalPopChoice(i_38);
                                                                                                                                    t = f_24;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = h_38;
                                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                                      {
                                                                                                                                        ATerm n_38 = ATgetArgument(t, 0);
                                                                                                                                        ATerm o_38 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    t = f_24;
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24, d_24);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                        {
                                                          f_24 = ATgetArgument(t, 0);
                                                          g_24 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm p_38 = t;
                                                            int q_38 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_24;
                                                                {
                                                                  ATerm r_38 = t;
                                                                  int s_38 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          ATerm t_38 = ATgetArgument(t, 0);
                                                                          ATerm u_38 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(s_38);
                                                                      t = g_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_38;
                                                                      {
                                                                        ATerm v_38 = t;
                                                                        int w_38 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_LChoice_2))
                                                                              {
                                                                                ATerm x_38 = ATgetArgument(t, 0);
                                                                                ATerm y_38 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(w_38);
                                                                            t = g_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = v_38;
                                                                            {
                                                                              ATerm z_38 = t;
                                                                              int a_39 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      ATerm b_39 = ATgetArgument(t, 0);
                                                                                      ATerm c_39 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(a_39);
                                                                                  t = g_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_38;
                                                                                  {
                                                                                    ATerm d_39 = t;
                                                                                    int e_39 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                          {
                                                                                            ATerm f_39 = ATgetArgument(t, 0);
                                                                                            ATerm g_39 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(e_39);
                                                                                        t = g_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = d_39;
                                                                                        {
                                                                                          ATerm h_39 = t;
                                                                                          int i_39 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm j_39 = ATgetArgument(t, 0);
                                                                                                  ATerm k_39 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(i_39);
                                                                                              t = g_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_39;
                                                                                              {
                                                                                                ATerm l_39 = t;
                                                                                                int m_39 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm n_39 = ATgetArgument(t, 0);
                                                                                                        ATerm o_39 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(m_39);
                                                                                                    t = g_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = l_39;
                                                                                                    {
                                                                                                      ATerm p_39 = t;
                                                                                                      int q_39 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm r_39 = ATgetArgument(t, 0);
                                                                                                              ATerm s_39 = ATgetArgument(t, 1);
                                                                                                              ATerm t_39 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(q_39);
                                                                                                          t = g_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = p_39;
                                                                                                          {
                                                                                                            ATerm u_39 = t;
                                                                                                            int v_39 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                                  {
                                                                                                                    ATerm w_39 = ATgetArgument(t, 0);
                                                                                                                    ATerm x_39 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(v_39);
                                                                                                                t = g_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = u_39;
                                                                                                                {
                                                                                                                  ATerm y_39 = t;
                                                                                                                  int z_39 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                        {
                                                                                                                          ATerm a_40 = ATgetArgument(t, 0);
                                                                                                                          ATerm b_40 = ATgetArgument(t, 1);
                                                                                                                          ATerm c_40 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(z_39);
                                                                                                                      t = g_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = y_39;
                                                                                                                      {
                                                                                                                        ATerm d_40 = t;
                                                                                                                        int e_40 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                              {
                                                                                                                                ATerm f_40 = ATgetArgument(t, 0);
                                                                                                                                ATerm g_40 = ATgetArgument(t, 1);
                                                                                                                                ATerm h_40 = ATgetArgument(t, 2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            LocalPopChoice(e_40);
                                                                                                                            t = g_24;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = d_40;
                                                                                                                            {
                                                                                                                              ATerm i_40 = t;
                                                                                                                              int j_40 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                    {
                                                                                                                                      ATerm k_40 = ATgetArgument(t, 0);
                                                                                                                                      ATerm l_40 = ATgetArgument(t, 1);
                                                                                                                                      ATerm m_40 = ATgetArgument(t, 2);
                                                                                                                                      ATerm n_40 = ATgetArgument(t, 3);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  LocalPopChoice(j_40);
                                                                                                                                  t = g_24;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = i_40;
                                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                                    {
                                                                                                                                      ATerm o_40 = ATgetArgument(t, 0);
                                                                                                                                      ATerm p_40 = ATgetArgument(t, 1);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = g_24;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                                t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                LocalPopChoice(q_38);
                                                              }
                                                            else
                                                              {
                                                                t = p_38;
                                                                t = f_24;
                                                                {
                                                                  ATerm q_40 = t;
                                                                  int r_40 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          ATerm s_40 = ATgetArgument(t, 0);
                                                                          ATerm t_40 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(r_40);
                                                                      t = f_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_40;
                                                                      {
                                                                        ATerm u_40 = t;
                                                                        int v_40 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_LChoice_2))
                                                                              {
                                                                                ATerm w_40 = ATgetArgument(t, 0);
                                                                                ATerm x_40 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(v_40);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_40;
                                                                            {
                                                                              ATerm y_40 = t;
                                                                              int z_40 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      ATerm a_41 = ATgetArgument(t, 0);
                                                                                      ATerm b_41 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(z_40);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_40;
                                                                                  {
                                                                                    ATerm c_41 = t;
                                                                                    int d_41 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                          {
                                                                                            ATerm e_41 = ATgetArgument(t, 0);
                                                                                            ATerm f_41 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(d_41);
                                                                                        t = f_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_41;
                                                                                        {
                                                                                          ATerm g_41 = t;
                                                                                          int h_41 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm i_41 = ATgetArgument(t, 0);
                                                                                                  ATerm j_41 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(h_41);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_41;
                                                                                              {
                                                                                                ATerm k_41 = t;
                                                                                                int l_41 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm m_41 = ATgetArgument(t, 0);
                                                                                                        ATerm n_41 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(l_41);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = k_41;
                                                                                                    {
                                                                                                      ATerm o_41 = t;
                                                                                                      int p_41 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm q_41 = ATgetArgument(t, 0);
                                                                                                              ATerm r_41 = ATgetArgument(t, 1);
                                                                                                              ATerm s_41 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(p_41);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_41;
                                                                                                          {
                                                                                                            ATerm t_41 = t;
                                                                                                            int u_41 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                                  {
                                                                                                                    ATerm v_41 = ATgetArgument(t, 0);
                                                                                                                    ATerm w_41 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(u_41);
                                                                                                                t = f_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = t_41;
                                                                                                                {
                                                                                                                  ATerm x_41 = t;
                                                                                                                  int y_41 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                        {
                                                                                                                          ATerm z_41 = ATgetArgument(t, 0);
                                                                                                                          ATerm a_42 = ATgetArgument(t, 1);
                                                                                                                          ATerm b_42 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(y_41);
                                                                                                                      t = f_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = x_41;
                                                                                                                      {
                                                                                                                        ATerm c_42 = t;
                                                                                                                        int d_42 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                              {
                                                                                                                                ATerm e_42 = ATgetArgument(t, 0);
                                                                                                                                ATerm f_42 = ATgetArgument(t, 1);
                                                                                                                                ATerm g_42 = ATgetArgument(t, 2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            LocalPopChoice(d_42);
                                                                                                                            t = f_24;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = c_42;
                                                                                                                            {
                                                                                                                              ATerm h_42 = t;
                                                                                                                              int i_42 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                    {
                                                                                                                                      ATerm j_42 = ATgetArgument(t, 0);
                                                                                                                                      ATerm k_42 = ATgetArgument(t, 1);
                                                                                                                                      ATerm l_42 = ATgetArgument(t, 2);
                                                                                                                                      ATerm m_42 = ATgetArgument(t, 3);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  LocalPopChoice(i_42);
                                                                                                                                  t = f_24;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = h_42;
                                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                                    {
                                                                                                                                      ATerm n_42 = ATgetArgument(t, 0);
                                                                                                                                      ATerm o_42 = ATgetArgument(t, 1);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  t = f_24;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                                t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                            {
                                                              f_24 = ATgetArgument(t, 0);
                                                              g_24 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm p_42 = t;
                                                                int q_42 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = g_24;
                                                                    {
                                                                      ATerm r_42 = t;
                                                                      int s_42 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              ATerm t_42 = ATgetArgument(t, 0);
                                                                              ATerm u_42 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(s_42);
                                                                          t = g_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_42;
                                                                          {
                                                                            ATerm v_42 = t;
                                                                            int w_42 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                  {
                                                                                    ATerm x_42 = ATgetArgument(t, 0);
                                                                                    ATerm y_42 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(w_42);
                                                                                t = g_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_42;
                                                                                {
                                                                                  ATerm z_42 = t;
                                                                                  int a_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          ATerm b_43 = ATgetArgument(t, 0);
                                                                                          ATerm c_43 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(a_43);
                                                                                      t = g_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_42;
                                                                                      {
                                                                                        ATerm d_43 = t;
                                                                                        int e_43 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm f_43 = ATgetArgument(t, 0);
                                                                                                ATerm g_43 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(e_43);
                                                                                            t = g_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_43;
                                                                                            {
                                                                                              ATerm h_43 = t;
                                                                                              int i_43 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm j_43 = ATgetArgument(t, 0);
                                                                                                      ATerm k_43 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_43);
                                                                                                  t = g_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_43;
                                                                                                  {
                                                                                                    ATerm l_43 = t;
                                                                                                    int m_43 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm n_43 = ATgetArgument(t, 0);
                                                                                                            ATerm o_43 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(m_43);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_43;
                                                                                                        {
                                                                                                          ATerm p_43 = t;
                                                                                                          int q_43 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm r_43 = ATgetArgument(t, 0);
                                                                                                                  ATerm s_43 = ATgetArgument(t, 1);
                                                                                                                  ATerm t_43 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(q_43);
                                                                                                              t = g_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = p_43;
                                                                                                              {
                                                                                                                ATerm u_43 = t;
                                                                                                                int v_43 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_AM_2))
                                                                                                                      {
                                                                                                                        ATerm w_43 = ATgetArgument(t, 0);
                                                                                                                        ATerm x_43 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(v_43);
                                                                                                                    t = g_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = u_43;
                                                                                                                    {
                                                                                                                      ATerm y_43 = t;
                                                                                                                      int z_43 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                            {
                                                                                                                              ATerm a_44 = ATgetArgument(t, 0);
                                                                                                                              ATerm b_44 = ATgetArgument(t, 1);
                                                                                                                              ATerm c_44 = ATgetArgument(t, 2);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(z_43);
                                                                                                                          t = g_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = y_43;
                                                                                                                          {
                                                                                                                            ATerm d_44 = t;
                                                                                                                            int e_44 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                  {
                                                                                                                                    ATerm f_44 = ATgetArgument(t, 0);
                                                                                                                                    ATerm g_44 = ATgetArgument(t, 1);
                                                                                                                                    ATerm h_44 = ATgetArgument(t, 2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(e_44);
                                                                                                                                t = g_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = d_44;
                                                                                                                                {
                                                                                                                                  ATerm i_44 = t;
                                                                                                                                  int j_44 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                        {
                                                                                                                                          ATerm k_44 = ATgetArgument(t, 0);
                                                                                                                                          ATerm l_44 = ATgetArgument(t, 1);
                                                                                                                                          ATerm m_44 = ATgetArgument(t, 2);
                                                                                                                                          ATerm n_44 = ATgetArgument(t, 3);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(j_44);
                                                                                                                                      t = g_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = i_44;
                                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                                        {
                                                                                                                                          ATerm o_44 = ATgetArgument(t, 0);
                                                                                                                                          ATerm p_44 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = g_24;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                    t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                    LocalPopChoice(q_42);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_42;
                                                                    t = f_24;
                                                                    {
                                                                      ATerm q_44 = t;
                                                                      int r_44 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              ATerm s_44 = ATgetArgument(t, 0);
                                                                              ATerm t_44 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(r_44);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = q_44;
                                                                          {
                                                                            ATerm u_44 = t;
                                                                            int v_44 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                  {
                                                                                    ATerm w_44 = ATgetArgument(t, 0);
                                                                                    ATerm x_44 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(v_44);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_44;
                                                                                {
                                                                                  ATerm y_44 = t;
                                                                                  int z_44 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          ATerm a_45 = ATgetArgument(t, 0);
                                                                                          ATerm b_45 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(z_44);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_44;
                                                                                      {
                                                                                        ATerm c_45 = t;
                                                                                        int d_45 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm e_45 = ATgetArgument(t, 0);
                                                                                                ATerm f_45 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(d_45);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_45;
                                                                                            {
                                                                                              ATerm g_45 = t;
                                                                                              int h_45 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm i_45 = ATgetArgument(t, 0);
                                                                                                      ATerm j_45 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(h_45);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_45;
                                                                                                  {
                                                                                                    ATerm k_45 = t;
                                                                                                    int l_45 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm m_45 = ATgetArgument(t, 0);
                                                                                                            ATerm n_45 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(l_45);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_45;
                                                                                                        {
                                                                                                          ATerm o_45 = t;
                                                                                                          int p_45 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm q_45 = ATgetArgument(t, 0);
                                                                                                                  ATerm r_45 = ATgetArgument(t, 1);
                                                                                                                  ATerm s_45 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(p_45);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = o_45;
                                                                                                              {
                                                                                                                ATerm t_45 = t;
                                                                                                                int u_45 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_AM_2))
                                                                                                                      {
                                                                                                                        ATerm v_45 = ATgetArgument(t, 0);
                                                                                                                        ATerm w_45 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(u_45);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = t_45;
                                                                                                                    {
                                                                                                                      ATerm x_45 = t;
                                                                                                                      int y_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                            {
                                                                                                                              ATerm z_45 = ATgetArgument(t, 0);
                                                                                                                              ATerm a_46 = ATgetArgument(t, 1);
                                                                                                                              ATerm b_46 = ATgetArgument(t, 2);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(y_45);
                                                                                                                          t = f_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_45;
                                                                                                                          {
                                                                                                                            ATerm c_46 = t;
                                                                                                                            int d_46 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                  {
                                                                                                                                    ATerm e_46 = ATgetArgument(t, 0);
                                                                                                                                    ATerm f_46 = ATgetArgument(t, 1);
                                                                                                                                    ATerm g_46 = ATgetArgument(t, 2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(d_46);
                                                                                                                                t = f_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = c_46;
                                                                                                                                {
                                                                                                                                  ATerm h_46 = t;
                                                                                                                                  int i_46 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                        {
                                                                                                                                          ATerm j_46 = ATgetArgument(t, 0);
                                                                                                                                          ATerm k_46 = ATgetArgument(t, 1);
                                                                                                                                          ATerm l_46 = ATgetArgument(t, 2);
                                                                                                                                          ATerm m_46 = ATgetArgument(t, 3);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(i_46);
                                                                                                                                      t = f_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = h_46;
                                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                                        {
                                                                                                                                          ATerm n_46 = ATgetArgument(t, 0);
                                                                                                                                          ATerm o_46 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      t = f_24;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                    t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Anno_2))
                                                                {
                                                                  f_24 = ATgetArgument(t, 0);
                                                                  g_24 = ATgetArgument(t, 1);
                                                                  {
                                                                    ATerm p_46 = t;
                                                                    int q_46 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = g_24;
                                                                        if(match_cons(t, sym_As_2))
                                                                          {
                                                                            ATerm r_46 = ATgetArgument(t, 0);
                                                                            ATerm s_46 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Anno_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                        LocalPopChoice(q_46);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_46;
                                                                        t = f_24;
                                                                        if(match_cons(t, sym_As_2))
                                                                          {
                                                                            ATerm t_46 = ATgetArgument(t, 0);
                                                                            ATerm u_46 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        t = (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                      }
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_BA_2))
                                                                    {
                                                                      f_24 = ATgetArgument(t, 0);
                                                                      g_24 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm v_46 = t;
                                                                        int w_46 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = g_24;
                                                                            {
                                                                              ATerm x_46 = t;
                                                                              int y_46 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      ATerm z_46 = ATgetArgument(t, 0);
                                                                                      ATerm a_47 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(y_46);
                                                                                  t = g_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_46;
                                                                                  {
                                                                                    ATerm b_47 = t;
                                                                                    int c_47 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                          {
                                                                                            ATerm d_47 = ATgetArgument(t, 0);
                                                                                            ATerm e_47 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(c_47);
                                                                                        t = g_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_47;
                                                                                        {
                                                                                          ATerm f_47 = t;
                                                                                          int g_47 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                {
                                                                                                  ATerm h_47 = ATgetArgument(t, 0);
                                                                                                  ATerm i_47 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(g_47);
                                                                                              t = g_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_47;
                                                                                              {
                                                                                                ATerm j_47 = t;
                                                                                                int k_47 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                      {
                                                                                                        ATerm l_47 = ATgetArgument(t, 0);
                                                                                                        ATerm m_47 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(k_47);
                                                                                                    t = g_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = j_47;
                                                                                                    {
                                                                                                      ATerm n_47 = t;
                                                                                                      int o_47 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                            {
                                                                                                              ATerm p_47 = ATgetArgument(t, 0);
                                                                                                              ATerm q_47 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(o_47);
                                                                                                          t = g_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_47;
                                                                                                          {
                                                                                                            ATerm r_47 = t;
                                                                                                            int s_47 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm t_47 = ATgetArgument(t, 0);
                                                                                                                    ATerm u_47 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(s_47);
                                                                                                                t = g_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = r_47;
                                                                                                                {
                                                                                                                  ATerm v_47 = t;
                                                                                                                  int w_47 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm x_47 = ATgetArgument(t, 0);
                                                                                                                          ATerm y_47 = ATgetArgument(t, 1);
                                                                                                                          ATerm z_47 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(w_47);
                                                                                                                      t = g_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = v_47;
                                                                                                                      {
                                                                                                                        ATerm a_48 = t;
                                                                                                                        int b_48 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                              {
                                                                                                                                ATerm c_48 = ATgetArgument(t, 0);
                                                                                                                                ATerm d_48 = ATgetArgument(t, 1);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            LocalPopChoice(b_48);
                                                                                                                            t = g_24;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = a_48;
                                                                                                                            {
                                                                                                                              ATerm e_48 = t;
                                                                                                                              int f_48 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                    {
                                                                                                                                      ATerm g_48 = ATgetArgument(t, 0);
                                                                                                                                      ATerm h_48 = ATgetArgument(t, 1);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  LocalPopChoice(f_48);
                                                                                                                                  t = g_24;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = e_48;
                                                                                                                                  {
                                                                                                                                    ATerm i_48 = t;
                                                                                                                                    int j_48 = stack_ptr;
                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                          {
                                                                                                                                            ATerm k_48 = ATgetArgument(t, 0);
                                                                                                                                            ATerm l_48 = ATgetArgument(t, 1);
                                                                                                                                            ATerm m_48 = ATgetArgument(t, 2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          _fail(t);
                                                                                                                                        LocalPopChoice(j_48);
                                                                                                                                        t = g_24;
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        t = i_48;
                                                                                                                                        {
                                                                                                                                          ATerm n_48 = t;
                                                                                                                                          int o_48 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                                                                {
                                                                                                                                                  ATerm p_48 = ATgetArgument(t, 0);
                                                                                                                                                  ATerm q_48 = ATgetArgument(t, 1);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(o_48);
                                                                                                                                              t = g_24;
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = n_48;
                                                                                                                                              {
                                                                                                                                                ATerm r_48 = t;
                                                                                                                                                int s_48 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                      {
                                                                                                                                                        ATerm t_48 = ATgetArgument(t, 0);
                                                                                                                                                        ATerm u_48 = ATgetArgument(t, 1);
                                                                                                                                                        ATerm v_48 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(s_48);
                                                                                                                                                    t = g_24;
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = r_48;
                                                                                                                                                    {
                                                                                                                                                      ATerm w_48 = t;
                                                                                                                                                      int x_48 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                            {
                                                                                                                                                              ATerm y_48 = ATgetArgument(t, 0);
                                                                                                                                                              ATerm z_48 = ATgetArgument(t, 1);
                                                                                                                                                              ATerm a_49 = ATgetArgument(t, 2);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          LocalPopChoice(x_48);
                                                                                                                                                          t = g_24;
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = w_48;
                                                                                                                                                          {
                                                                                                                                                            ATerm b_49 = t;
                                                                                                                                                            int c_49 = stack_ptr;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                  {
                                                                                                                                                                    ATerm d_49 = ATgetArgument(t, 0);
                                                                                                                                                                    ATerm e_49 = ATgetArgument(t, 1);
                                                                                                                                                                    ATerm f_49 = ATgetArgument(t, 2);
                                                                                                                                                                    ATerm g_49 = ATgetArgument(t, 3);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                LocalPopChoice(c_49);
                                                                                                                                                                t = g_24;
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = b_49;
                                                                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                                                                  {
                                                                                                                                                                    ATerm h_49 = ATgetArgument(t, 0);
                                                                                                                                                                    ATerm i_49 = ATgetArgument(t, 1);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                t = g_24;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym_BA_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                            LocalPopChoice(w_46);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = v_46;
                                                                            t = f_24;
                                                                            {
                                                                              ATerm j_49 = t;
                                                                              int k_49 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      ATerm l_49 = ATgetArgument(t, 0);
                                                                                      ATerm m_49 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(k_49);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_49;
                                                                                  {
                                                                                    ATerm n_49 = t;
                                                                                    int o_49 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                          {
                                                                                            ATerm p_49 = ATgetArgument(t, 0);
                                                                                            ATerm q_49 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(o_49);
                                                                                        t = f_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_49;
                                                                                        {
                                                                                          ATerm r_49 = t;
                                                                                          int s_49 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                {
                                                                                                  ATerm t_49 = ATgetArgument(t, 0);
                                                                                                  ATerm u_49 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(s_49);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_49;
                                                                                              {
                                                                                                ATerm v_49 = t;
                                                                                                int w_49 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                      {
                                                                                                        ATerm x_49 = ATgetArgument(t, 0);
                                                                                                        ATerm y_49 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(w_49);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = v_49;
                                                                                                    {
                                                                                                      ATerm z_49 = t;
                                                                                                      int a_50 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                            {
                                                                                                              ATerm b_50 = ATgetArgument(t, 0);
                                                                                                              ATerm c_50 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(a_50);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = z_49;
                                                                                                          {
                                                                                                            ATerm d_50 = t;
                                                                                                            int e_50 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm f_50 = ATgetArgument(t, 0);
                                                                                                                    ATerm g_50 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(e_50);
                                                                                                                t = f_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = d_50;
                                                                                                                {
                                                                                                                  ATerm h_50 = t;
                                                                                                                  int i_50 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm j_50 = ATgetArgument(t, 0);
                                                                                                                          ATerm k_50 = ATgetArgument(t, 1);
                                                                                                                          ATerm l_50 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(i_50);
                                                                                                                      t = f_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = h_50;
                                                                                                                      {
                                                                                                                        ATerm m_50 = t;
                                                                                                                        int n_50 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                              {
                                                                                                                                ATerm o_50 = ATgetArgument(t, 0);
                                                                                                                                ATerm p_50 = ATgetArgument(t, 1);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            LocalPopChoice(n_50);
                                                                                                                            t = f_24;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = m_50;
                                                                                                                            {
                                                                                                                              ATerm q_50 = t;
                                                                                                                              int r_50 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                    {
                                                                                                                                      ATerm s_50 = ATgetArgument(t, 0);
                                                                                                                                      ATerm t_50 = ATgetArgument(t, 1);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    _fail(t);
                                                                                                                                  LocalPopChoice(r_50);
                                                                                                                                  t = f_24;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = q_50;
                                                                                                                                  {
                                                                                                                                    ATerm u_50 = t;
                                                                                                                                    int v_50 = stack_ptr;
                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                          {
                                                                                                                                            ATerm w_50 = ATgetArgument(t, 0);
                                                                                                                                            ATerm x_50 = ATgetArgument(t, 1);
                                                                                                                                            ATerm y_50 = ATgetArgument(t, 2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          _fail(t);
                                                                                                                                        LocalPopChoice(v_50);
                                                                                                                                        t = f_24;
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        t = u_50;
                                                                                                                                        {
                                                                                                                                          ATerm z_50 = t;
                                                                                                                                          int a_51 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                                                                {
                                                                                                                                                  ATerm b_51 = ATgetArgument(t, 0);
                                                                                                                                                  ATerm c_51 = ATgetArgument(t, 1);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(a_51);
                                                                                                                                              t = f_24;
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = z_50;
                                                                                                                                              {
                                                                                                                                                ATerm d_51 = t;
                                                                                                                                                int e_51 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                      {
                                                                                                                                                        ATerm f_51 = ATgetArgument(t, 0);
                                                                                                                                                        ATerm g_51 = ATgetArgument(t, 1);
                                                                                                                                                        ATerm h_51 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(e_51);
                                                                                                                                                    t = f_24;
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = d_51;
                                                                                                                                                    {
                                                                                                                                                      ATerm i_51 = t;
                                                                                                                                                      int j_51 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                            {
                                                                                                                                                              ATerm k_51 = ATgetArgument(t, 0);
                                                                                                                                                              ATerm l_51 = ATgetArgument(t, 1);
                                                                                                                                                              ATerm m_51 = ATgetArgument(t, 2);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            _fail(t);
                                                                                                                                                          LocalPopChoice(j_51);
                                                                                                                                                          t = f_24;
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = i_51;
                                                                                                                                                          {
                                                                                                                                                            ATerm n_51 = t;
                                                                                                                                                            int o_51 = stack_ptr;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                  {
                                                                                                                                                                    ATerm p_51 = ATgetArgument(t, 0);
                                                                                                                                                                    ATerm q_51 = ATgetArgument(t, 1);
                                                                                                                                                                    ATerm r_51 = ATgetArgument(t, 2);
                                                                                                                                                                    ATerm s_51 = ATgetArgument(t, 3);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                LocalPopChoice(o_51);
                                                                                                                                                                t = f_24;
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = n_51;
                                                                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                                                                  {
                                                                                                                                                                    ATerm t_51 = ATgetArgument(t, 0);
                                                                                                                                                                    ATerm u_51 = ATgetArgument(t, 1);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                t = f_24;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Match_1))
                                                                        {
                                                                          f_24 = ATgetArgument(t, 0);
                                                                          t = f_24;
                                                                          {
                                                                            ATerm v_51 = t;
                                                                            int w_51 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_BA_2))
                                                                                  {
                                                                                    ATerm x_51 = ATgetArgument(t, 0);
                                                                                    ATerm y_51 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(w_51);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_51;
                                                                                {
                                                                                  ATerm z_51 = t;
                                                                                  int a_52 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_Choice_2))
                                                                                        {
                                                                                          ATerm b_52 = ATgetArgument(t, 0);
                                                                                          ATerm c_52 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(a_52);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_51;
                                                                                      {
                                                                                        ATerm d_52 = t;
                                                                                        int e_52 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LChoice_2))
                                                                                              {
                                                                                                ATerm f_52 = ATgetArgument(t, 0);
                                                                                                ATerm g_52 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(e_52);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_52;
                                                                                            {
                                                                                              ATerm h_52 = t;
                                                                                              int i_52 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                                    {
                                                                                                      ATerm j_52 = ATgetArgument(t, 0);
                                                                                                      ATerm k_52 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_52);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_52;
                                                                                                  {
                                                                                                    ATerm l_52 = t;
                                                                                                    int m_52 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                                          {
                                                                                                            ATerm n_52 = ATgetArgument(t, 0);
                                                                                                            ATerm o_52 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(m_52);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_52;
                                                                                                        {
                                                                                                          ATerm p_52 = t;
                                                                                                          int q_52 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                                {
                                                                                                                  ATerm r_52 = ATgetArgument(t, 0);
                                                                                                                  ATerm s_52 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(q_52);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = p_52;
                                                                                                              {
                                                                                                                ATerm t_52 = t;
                                                                                                                int u_52 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                                      {
                                                                                                                        ATerm v_52 = ATgetArgument(t, 0);
                                                                                                                        ATerm w_52 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(u_52);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = t_52;
                                                                                                                    {
                                                                                                                      ATerm x_52 = t;
                                                                                                                      int y_52 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                            {
                                                                                                                              ATerm z_52 = ATgetArgument(t, 0);
                                                                                                                              ATerm a_53 = ATgetArgument(t, 1);
                                                                                                                              ATerm b_53 = ATgetArgument(t, 2);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(y_52);
                                                                                                                          t = f_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = x_52;
                                                                                                                          {
                                                                                                                            ATerm c_53 = t;
                                                                                                                            int d_53 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                                  {
                                                                                                                                    ATerm e_53 = ATgetArgument(t, 0);
                                                                                                                                    ATerm f_53 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(d_53);
                                                                                                                                t = f_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = c_53;
                                                                                                                                {
                                                                                                                                  ATerm g_53 = t;
                                                                                                                                  int h_53 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                        {
                                                                                                                                          ATerm i_53 = ATgetArgument(t, 0);
                                                                                                                                          ATerm j_53 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(h_53);
                                                                                                                                      t = f_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = g_53;
                                                                                                                                      {
                                                                                                                                        ATerm k_53 = t;
                                                                                                                                        int l_53 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                              {
                                                                                                                                                ATerm m_53 = ATgetArgument(t, 0);
                                                                                                                                                ATerm n_53 = ATgetArgument(t, 1);
                                                                                                                                                ATerm o_53 = ATgetArgument(t, 2);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            LocalPopChoice(l_53);
                                                                                                                                            t = f_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = k_53;
                                                                                                                                            {
                                                                                                                                              ATerm p_53 = t;
                                                                                                                                              int q_53 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                                                                    {
                                                                                                                                                      ATerm r_53 = ATgetArgument(t, 0);
                                                                                                                                                      ATerm s_53 = ATgetArgument(t, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  LocalPopChoice(q_53);
                                                                                                                                                  t = f_24;
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = p_53;
                                                                                                                                                  {
                                                                                                                                                    ATerm t_53 = t;
                                                                                                                                                    int u_53 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                          {
                                                                                                                                                            ATerm v_53 = ATgetArgument(t, 0);
                                                                                                                                                            ATerm w_53 = ATgetArgument(t, 1);
                                                                                                                                                            ATerm x_53 = ATgetArgument(t, 2);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          _fail(t);
                                                                                                                                                        LocalPopChoice(u_53);
                                                                                                                                                        t = f_24;
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = t_53;
                                                                                                                                                        {
                                                                                                                                                          ATerm y_53 = t;
                                                                                                                                                          int z_53 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                                {
                                                                                                                                                                  ATerm a_54 = ATgetArgument(t, 0);
                                                                                                                                                                  ATerm b_54 = ATgetArgument(t, 1);
                                                                                                                                                                  ATerm c_54 = ATgetArgument(t, 2);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              LocalPopChoice(z_53);
                                                                                                                                                              t = f_24;
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = y_53;
                                                                                                                                                              {
                                                                                                                                                                ATerm d_54 = t;
                                                                                                                                                                int e_54 = stack_ptr;
                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm f_54 = ATgetArgument(t, 0);
                                                                                                                                                                        ATerm g_54 = ATgetArgument(t, 1);
                                                                                                                                                                        ATerm h_54 = ATgetArgument(t, 2);
                                                                                                                                                                        ATerm i_54 = ATgetArgument(t, 3);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    LocalPopChoice(e_54);
                                                                                                                                                                    t = f_24;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    t = d_54;
                                                                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm j_54 = ATgetArgument(t, 0);
                                                                                                                                                                        ATerm k_54 = ATgetArgument(t, 1);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    t = f_24;
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Build_1))
                                                                            {
                                                                              f_24 = ATgetArgument(t, 0);
                                                                              t = f_24;
                                                                              {
                                                                                ATerm l_54 = t;
                                                                                int m_54 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_BA_2))
                                                                                      {
                                                                                        ATerm n_54 = ATgetArgument(t, 0);
                                                                                        ATerm o_54 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(m_54);
                                                                                    t = f_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_54;
                                                                                    {
                                                                                      ATerm p_54 = t;
                                                                                      int q_54 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_Choice_2))
                                                                                            {
                                                                                              ATerm r_54 = ATgetArgument(t, 0);
                                                                                              ATerm s_54 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(q_54);
                                                                                          t = f_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_54;
                                                                                          {
                                                                                            ATerm t_54 = t;
                                                                                            int u_54 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                                  {
                                                                                                    ATerm v_54 = ATgetArgument(t, 0);
                                                                                                    ATerm w_54 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(u_54);
                                                                                                t = f_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_54;
                                                                                                {
                                                                                                  ATerm x_54 = t;
                                                                                                  int y_54 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm z_54 = ATgetArgument(t, 0);
                                                                                                          ATerm a_55 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(y_54);
                                                                                                      t = f_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = x_54;
                                                                                                      {
                                                                                                        ATerm b_55 = t;
                                                                                                        int c_55 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                                              {
                                                                                                                ATerm d_55 = ATgetArgument(t, 0);
                                                                                                                ATerm e_55 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(c_55);
                                                                                                            t = f_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = b_55;
                                                                                                            {
                                                                                                              ATerm f_55 = t;
                                                                                                              int g_55 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm h_55 = ATgetArgument(t, 0);
                                                                                                                      ATerm i_55 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(g_55);
                                                                                                                  t = f_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_55;
                                                                                                                  {
                                                                                                                    ATerm j_55 = t;
                                                                                                                    int k_55 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                                          {
                                                                                                                            ATerm l_55 = ATgetArgument(t, 0);
                                                                                                                            ATerm m_55 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(k_55);
                                                                                                                        t = f_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_55;
                                                                                                                        {
                                                                                                                          ATerm n_55 = t;
                                                                                                                          int o_55 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                {
                                                                                                                                  ATerm p_55 = ATgetArgument(t, 0);
                                                                                                                                  ATerm q_55 = ATgetArgument(t, 1);
                                                                                                                                  ATerm r_55 = ATgetArgument(t, 2);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                _fail(t);
                                                                                                                              LocalPopChoice(o_55);
                                                                                                                              t = f_24;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = n_55;
                                                                                                                              {
                                                                                                                                ATerm s_55 = t;
                                                                                                                                int t_55 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                                      {
                                                                                                                                        ATerm u_55 = ATgetArgument(t, 0);
                                                                                                                                        ATerm v_55 = ATgetArgument(t, 1);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      _fail(t);
                                                                                                                                    LocalPopChoice(t_55);
                                                                                                                                    t = f_24;
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = s_55;
                                                                                                                                    {
                                                                                                                                      ATerm w_55 = t;
                                                                                                                                      int x_55 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                            {
                                                                                                                                              ATerm y_55 = ATgetArgument(t, 0);
                                                                                                                                              ATerm z_55 = ATgetArgument(t, 1);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            _fail(t);
                                                                                                                                          LocalPopChoice(x_55);
                                                                                                                                          t = f_24;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_55;
                                                                                                                                          {
                                                                                                                                            ATerm a_56 = t;
                                                                                                                                            int b_56 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                                  {
                                                                                                                                                    ATerm c_56 = ATgetArgument(t, 0);
                                                                                                                                                    ATerm d_56 = ATgetArgument(t, 1);
                                                                                                                                                    ATerm e_56 = ATgetArgument(t, 2);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  _fail(t);
                                                                                                                                                LocalPopChoice(b_56);
                                                                                                                                                t = f_24;
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = a_56;
                                                                                                                                                {
                                                                                                                                                  ATerm f_56 = t;
                                                                                                                                                  int g_56 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      if(match_cons(t, sym_AM_2))
                                                                                                                                                        {
                                                                                                                                                          ATerm h_56 = ATgetArgument(t, 0);
                                                                                                                                                          ATerm i_56 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        _fail(t);
                                                                                                                                                      LocalPopChoice(g_56);
                                                                                                                                                      t = f_24;
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = f_56;
                                                                                                                                                      {
                                                                                                                                                        ATerm j_56 = t;
                                                                                                                                                        int k_56 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                              {
                                                                                                                                                                ATerm l_56 = ATgetArgument(t, 0);
                                                                                                                                                                ATerm m_56 = ATgetArgument(t, 1);
                                                                                                                                                                ATerm n_56 = ATgetArgument(t, 2);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              _fail(t);
                                                                                                                                                            LocalPopChoice(k_56);
                                                                                                                                                            t = f_24;
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = j_56;
                                                                                                                                                            {
                                                                                                                                                              ATerm o_56 = t;
                                                                                                                                                              int p_56 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm q_56 = ATgetArgument(t, 0);
                                                                                                                                                                      ATerm r_56 = ATgetArgument(t, 1);
                                                                                                                                                                      ATerm s_56 = ATgetArgument(t, 2);
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  LocalPopChoice(p_56);
                                                                                                                                                                  t = f_24;
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = o_56;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm t_56 = t;
                                                                                                                                                                    int u_56 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                          {
                                                                                                                                                                            ATerm v_56 = ATgetArgument(t, 0);
                                                                                                                                                                            ATerm w_56 = ATgetArgument(t, 1);
                                                                                                                                                                            ATerm x_56 = ATgetArgument(t, 2);
                                                                                                                                                                            ATerm y_56 = ATgetArgument(t, 3);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          _fail(t);
                                                                                                                                                                        LocalPopChoice(u_56);
                                                                                                                                                                        t = f_24;
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = t_56;
                                                                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                                                                          {
                                                                                                                                                                            ATerm z_56 = ATgetArgument(t, 0);
                                                                                                                                                                            ATerm a_57 = ATgetArgument(t, 1);
                                                                                                                                                                          }
                                                                                                                                                                        else
                                                                                                                                                                          _fail(t);
                                                                                                                                                                        t = f_24;
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Explode_2))
                                                                                {
                                                                                  f_24 = ATgetArgument(t, 0);
                                                                                  g_24 = ATgetArgument(t, 1);
                                                                                  {
                                                                                    ATerm b_57 = t;
                                                                                    int c_57 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = g_24;
                                                                                        {
                                                                                          ATerm d_57 = t;
                                                                                          int e_57 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                {
                                                                                                  ATerm f_57 = ATgetArgument(t, 0);
                                                                                                  ATerm g_57 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(e_57);
                                                                                              t = g_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_57;
                                                                                              if(match_cons(t, sym_As_2))
                                                                                                {
                                                                                                  ATerm h_57 = ATgetArgument(t, 0);
                                                                                                  ATerm i_57 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = g_24;
                                                                                            }
                                                                                        }
                                                                                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                                        LocalPopChoice(c_57);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_57;
                                                                                        t = f_24;
                                                                                        {
                                                                                          ATerm j_57 = t;
                                                                                          int k_57 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                {
                                                                                                  ATerm l_57 = ATgetArgument(t, 0);
                                                                                                  ATerm m_57 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(k_57);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = j_57;
                                                                                              if(match_cons(t, sym_As_2))
                                                                                                {
                                                                                                  ATerm n_57 = ATgetArgument(t, 0);
                                                                                                  ATerm o_57 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = f_24;
                                                                                            }
                                                                                        }
                                                                                        t = (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_ExplodeCong_2))
                                                                                    {
                                                                                      f_24 = ATgetArgument(t, 0);
                                                                                      g_24 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm p_57 = t;
                                                                                        int q_57 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = g_24;
                                                                                            {
                                                                                              ATerm r_57 = t;
                                                                                              int s_57 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Build_1))
                                                                                                    {
                                                                                                      ATerm t_57 = ATgetArgument(t, 0);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(s_57);
                                                                                                  t = g_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = r_57;
                                                                                                  {
                                                                                                    ATerm u_57 = t;
                                                                                                    int v_57 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Match_1))
                                                                                                          {
                                                                                                            ATerm w_57 = ATgetArgument(t, 0);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(v_57);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = u_57;
                                                                                                        {
                                                                                                          ATerm x_57 = t;
                                                                                                          int y_57 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_BA_2))
                                                                                                                {
                                                                                                                  ATerm z_57 = ATgetArgument(t, 0);
                                                                                                                  ATerm a_58 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(y_57);
                                                                                                              t = g_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = x_57;
                                                                                                              {
                                                                                                                ATerm b_58 = t;
                                                                                                                int c_58 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                                                      {
                                                                                                                        ATerm d_58 = ATgetArgument(t, 0);
                                                                                                                        ATerm e_58 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(c_58);
                                                                                                                    t = g_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = b_58;
                                                                                                                    {
                                                                                                                      ATerm f_58 = t;
                                                                                                                      int g_58 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                                                            {
                                                                                                                              ATerm h_58 = ATgetArgument(t, 0);
                                                                                                                              ATerm i_58 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(g_58);
                                                                                                                          t = g_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = f_58;
                                                                                                                          {
                                                                                                                            ATerm j_58 = t;
                                                                                                                            int k_58 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm l_58 = ATgetArgument(t, 0);
                                                                                                                                    ATerm m_58 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(k_58);
                                                                                                                                t = g_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = j_58;
                                                                                                                                {
                                                                                                                                  ATerm n_58 = t;
                                                                                                                                  int o_58 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                                                                        {
                                                                                                                                          ATerm p_58 = ATgetArgument(t, 0);
                                                                                                                                          ATerm q_58 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(o_58);
                                                                                                                                      t = g_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = n_58;
                                                                                                                                      {
                                                                                                                                        ATerm r_58 = t;
                                                                                                                                        int s_58 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                                                                              {
                                                                                                                                                ATerm t_58 = ATgetArgument(t, 0);
                                                                                                                                                ATerm u_58 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            LocalPopChoice(s_58);
                                                                                                                                            t = g_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = r_58;
                                                                                                                                            {
                                                                                                                                              ATerm v_58 = t;
                                                                                                                                              int w_58 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                                                                    {
                                                                                                                                                      ATerm x_58 = ATgetArgument(t, 0);
                                                                                                                                                      ATerm y_58 = ATgetArgument(t, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  LocalPopChoice(w_58);
                                                                                                                                                  t = g_24;
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = v_58;
                                                                                                                                                  {
                                                                                                                                                    ATerm z_58 = t;
                                                                                                                                                    int a_59 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                                          {
                                                                                                                                                            ATerm b_59 = ATgetArgument(t, 0);
                                                                                                                                                            ATerm c_59 = ATgetArgument(t, 1);
                                                                                                                                                            ATerm d_59 = ATgetArgument(t, 2);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          _fail(t);
                                                                                                                                                        LocalPopChoice(a_59);
                                                                                                                                                        t = g_24;
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = z_58;
                                                                                                                                                        {
                                                                                                                                                          ATerm e_59 = t;
                                                                                                                                                          int f_59 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                                                                {
                                                                                                                                                                  ATerm g_59 = ATgetArgument(t, 0);
                                                                                                                                                                  ATerm h_59 = ATgetArgument(t, 1);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              LocalPopChoice(f_59);
                                                                                                                                                              t = g_24;
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = e_59;
                                                                                                                                                              {
                                                                                                                                                                ATerm i_59 = t;
                                                                                                                                                                int j_59 = stack_ptr;
                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm k_59 = ATgetArgument(t, 0);
                                                                                                                                                                        ATerm l_59 = ATgetArgument(t, 1);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    LocalPopChoice(j_59);
                                                                                                                                                                    t = g_24;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    t = i_59;
                                                                                                                                                                    {
                                                                                                                                                                      ATerm m_59 = t;
                                                                                                                                                                      int n_59 = stack_ptr;
                                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm o_59 = ATgetArgument(t, 0);
                                                                                                                                                                              ATerm p_59 = ATgetArgument(t, 1);
                                                                                                                                                                              ATerm q_59 = ATgetArgument(t, 2);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          LocalPopChoice(n_59);
                                                                                                                                                                          t = g_24;
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          t = m_59;
                                                                                                                                                                          {
                                                                                                                                                                            ATerm r_59 = t;
                                                                                                                                                                            int s_59 = stack_ptr;
                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm t_59 = ATgetArgument(t, 0);
                                                                                                                                                                                    ATerm u_59 = ATgetArgument(t, 1);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                LocalPopChoice(s_59);
                                                                                                                                                                                t = g_24;
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                t = r_59;
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm v_59 = t;
                                                                                                                                                                                  int w_59 = stack_ptr;
                                                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm x_59 = ATgetArgument(t, 0);
                                                                                                                                                                                          ATerm y_59 = ATgetArgument(t, 1);
                                                                                                                                                                                          ATerm z_59 = ATgetArgument(t, 2);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      LocalPopChoice(w_59);
                                                                                                                                                                                      t = g_24;
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      t = v_59;
                                                                                                                                                                                      {
                                                                                                                                                                                        ATerm a_60 = t;
                                                                                                                                                                                        int b_60 = stack_ptr;
                                                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm c_60 = ATgetArgument(t, 0);
                                                                                                                                                                                                ATerm d_60 = ATgetArgument(t, 1);
                                                                                                                                                                                                ATerm e_60 = ATgetArgument(t, 2);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            LocalPopChoice(b_60);
                                                                                                                                                                                            t = g_24;
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            t = a_60;
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm f_60 = t;
                                                                                                                                                                                              int g_60 = stack_ptr;
                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm h_60 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm i_60 = ATgetArgument(t, 1);
                                                                                                                                                                                                      ATerm j_60 = ATgetArgument(t, 2);
                                                                                                                                                                                                      ATerm k_60 = ATgetArgument(t, 3);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  LocalPopChoice(g_60);
                                                                                                                                                                                                  t = g_24;
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  t = f_60;
                                                                                                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm l_60 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm m_60 = ATgetArgument(t, 1);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = g_24;
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                                            LocalPopChoice(q_57);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_57;
                                                                                            t = f_24;
                                                                                            {
                                                                                              ATerm n_60 = t;
                                                                                              int o_60 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Build_1))
                                                                                                    {
                                                                                                      ATerm p_60 = ATgetArgument(t, 0);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(o_60);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_60;
                                                                                                  {
                                                                                                    ATerm q_60 = t;
                                                                                                    int r_60 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Match_1))
                                                                                                          {
                                                                                                            ATerm s_60 = ATgetArgument(t, 0);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(r_60);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = q_60;
                                                                                                        {
                                                                                                          ATerm t_60 = t;
                                                                                                          int u_60 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_BA_2))
                                                                                                                {
                                                                                                                  ATerm v_60 = ATgetArgument(t, 0);
                                                                                                                  ATerm w_60 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(u_60);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = t_60;
                                                                                                              {
                                                                                                                ATerm x_60 = t;
                                                                                                                int y_60 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                                                      {
                                                                                                                        ATerm z_60 = ATgetArgument(t, 0);
                                                                                                                        ATerm a_61 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(y_60);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = x_60;
                                                                                                                    {
                                                                                                                      ATerm b_61 = t;
                                                                                                                      int c_61 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                                                            {
                                                                                                                              ATerm d_61 = ATgetArgument(t, 0);
                                                                                                                              ATerm e_61 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(c_61);
                                                                                                                          t = f_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_61;
                                                                                                                          {
                                                                                                                            ATerm f_61 = t;
                                                                                                                            int g_61 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm h_61 = ATgetArgument(t, 0);
                                                                                                                                    ATerm i_61 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(g_61);
                                                                                                                                t = f_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = f_61;
                                                                                                                                {
                                                                                                                                  ATerm j_61 = t;
                                                                                                                                  int k_61 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                                                                        {
                                                                                                                                          ATerm l_61 = ATgetArgument(t, 0);
                                                                                                                                          ATerm m_61 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(k_61);
                                                                                                                                      t = f_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_61;
                                                                                                                                      {
                                                                                                                                        ATerm n_61 = t;
                                                                                                                                        int o_61 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                                                                              {
                                                                                                                                                ATerm p_61 = ATgetArgument(t, 0);
                                                                                                                                                ATerm q_61 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            LocalPopChoice(o_61);
                                                                                                                                            t = f_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = n_61;
                                                                                                                                            {
                                                                                                                                              ATerm r_61 = t;
                                                                                                                                              int s_61 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                                                                    {
                                                                                                                                                      ATerm t_61 = ATgetArgument(t, 0);
                                                                                                                                                      ATerm u_61 = ATgetArgument(t, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  LocalPopChoice(s_61);
                                                                                                                                                  t = f_24;
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = r_61;
                                                                                                                                                  {
                                                                                                                                                    ATerm v_61 = t;
                                                                                                                                                    int w_61 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                                          {
                                                                                                                                                            ATerm x_61 = ATgetArgument(t, 0);
                                                                                                                                                            ATerm y_61 = ATgetArgument(t, 1);
                                                                                                                                                            ATerm z_61 = ATgetArgument(t, 2);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          _fail(t);
                                                                                                                                                        LocalPopChoice(w_61);
                                                                                                                                                        t = f_24;
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = v_61;
                                                                                                                                                        {
                                                                                                                                                          ATerm a_62 = t;
                                                                                                                                                          int b_62 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                                                                {
                                                                                                                                                                  ATerm c_62 = ATgetArgument(t, 0);
                                                                                                                                                                  ATerm d_62 = ATgetArgument(t, 1);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              LocalPopChoice(b_62);
                                                                                                                                                              t = f_24;
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = a_62;
                                                                                                                                                              {
                                                                                                                                                                ATerm e_62 = t;
                                                                                                                                                                int f_62 = stack_ptr;
                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm g_62 = ATgetArgument(t, 0);
                                                                                                                                                                        ATerm h_62 = ATgetArgument(t, 1);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    LocalPopChoice(f_62);
                                                                                                                                                                    t = f_24;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    t = e_62;
                                                                                                                                                                    {
                                                                                                                                                                      ATerm i_62 = t;
                                                                                                                                                                      int j_62 = stack_ptr;
                                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm k_62 = ATgetArgument(t, 0);
                                                                                                                                                                              ATerm l_62 = ATgetArgument(t, 1);
                                                                                                                                                                              ATerm m_62 = ATgetArgument(t, 2);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          LocalPopChoice(j_62);
                                                                                                                                                                          t = f_24;
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          t = i_62;
                                                                                                                                                                          {
                                                                                                                                                                            ATerm n_62 = t;
                                                                                                                                                                            int o_62 = stack_ptr;
                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm p_62 = ATgetArgument(t, 0);
                                                                                                                                                                                    ATerm q_62 = ATgetArgument(t, 1);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                LocalPopChoice(o_62);
                                                                                                                                                                                t = f_24;
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                t = n_62;
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm r_62 = t;
                                                                                                                                                                                  int s_62 = stack_ptr;
                                                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm t_62 = ATgetArgument(t, 0);
                                                                                                                                                                                          ATerm u_62 = ATgetArgument(t, 1);
                                                                                                                                                                                          ATerm v_62 = ATgetArgument(t, 2);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      LocalPopChoice(s_62);
                                                                                                                                                                                      t = f_24;
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      t = r_62;
                                                                                                                                                                                      {
                                                                                                                                                                                        ATerm w_62 = t;
                                                                                                                                                                                        int x_62 = stack_ptr;
                                                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm y_62 = ATgetArgument(t, 0);
                                                                                                                                                                                                ATerm z_62 = ATgetArgument(t, 1);
                                                                                                                                                                                                ATerm a_63 = ATgetArgument(t, 2);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            LocalPopChoice(x_62);
                                                                                                                                                                                            t = f_24;
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            t = w_62;
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm b_63 = t;
                                                                                                                                                                                              int c_63 = stack_ptr;
                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm d_63 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm e_63 = ATgetArgument(t, 1);
                                                                                                                                                                                                      ATerm f_63 = ATgetArgument(t, 2);
                                                                                                                                                                                                      ATerm g_63 = ATgetArgument(t, 3);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  LocalPopChoice(c_63);
                                                                                                                                                                                                  t = f_24;
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  t = b_63;
                                                                                                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm h_63 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm i_63 = ATgetArgument(t, 1);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = f_24;
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_AnnoCong_2))
                                                                                        {
                                                                                          f_24 = ATgetArgument(t, 0);
                                                                                          g_24 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      {
                                                                                        ATerm j_63 = t;
                                                                                        int k_63 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = g_24;
                                                                                            {
                                                                                              ATerm l_63 = t;
                                                                                              int m_63 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Build_1))
                                                                                                    {
                                                                                                      ATerm n_63 = ATgetArgument(t, 0);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(m_63);
                                                                                                  t = g_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = l_63;
                                                                                                  {
                                                                                                    ATerm o_63 = t;
                                                                                                    int p_63 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Match_1))
                                                                                                          {
                                                                                                            ATerm q_63 = ATgetArgument(t, 0);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(p_63);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = o_63;
                                                                                                        {
                                                                                                          ATerm r_63 = t;
                                                                                                          int s_63 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_BA_2))
                                                                                                                {
                                                                                                                  ATerm t_63 = ATgetArgument(t, 0);
                                                                                                                  ATerm u_63 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(s_63);
                                                                                                              t = g_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_63;
                                                                                                              {
                                                                                                                ATerm v_63 = t;
                                                                                                                int w_63 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                                                      {
                                                                                                                        ATerm x_63 = ATgetArgument(t, 0);
                                                                                                                        ATerm y_63 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(w_63);
                                                                                                                    t = g_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = v_63;
                                                                                                                    {
                                                                                                                      ATerm z_63 = t;
                                                                                                                      int a_64 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                                                            {
                                                                                                                              ATerm b_64 = ATgetArgument(t, 0);
                                                                                                                              ATerm c_64 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(a_64);
                                                                                                                          t = g_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = z_63;
                                                                                                                          {
                                                                                                                            ATerm d_64 = t;
                                                                                                                            int e_64 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm f_64 = ATgetArgument(t, 0);
                                                                                                                                    ATerm g_64 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(e_64);
                                                                                                                                t = g_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = d_64;
                                                                                                                                {
                                                                                                                                  ATerm h_64 = t;
                                                                                                                                  int i_64 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                                                                        {
                                                                                                                                          ATerm j_64 = ATgetArgument(t, 0);
                                                                                                                                          ATerm k_64 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(i_64);
                                                                                                                                      t = g_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = h_64;
                                                                                                                                      {
                                                                                                                                        ATerm l_64 = t;
                                                                                                                                        int m_64 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                                                                              {
                                                                                                                                                ATerm n_64 = ATgetArgument(t, 0);
                                                                                                                                                ATerm o_64 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            LocalPopChoice(m_64);
                                                                                                                                            t = g_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = l_64;
                                                                                                                                            {
                                                                                                                                              ATerm p_64 = t;
                                                                                                                                              int q_64 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                                                                    {
                                                                                                                                                      ATerm r_64 = ATgetArgument(t, 0);
                                                                                                                                                      ATerm s_64 = ATgetArgument(t, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  LocalPopChoice(q_64);
                                                                                                                                                  t = g_24;
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = p_64;
                                                                                                                                                  {
                                                                                                                                                    ATerm t_64 = t;
                                                                                                                                                    int u_64 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                                          {
                                                                                                                                                            ATerm v_64 = ATgetArgument(t, 0);
                                                                                                                                                            ATerm w_64 = ATgetArgument(t, 1);
                                                                                                                                                            ATerm x_64 = ATgetArgument(t, 2);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          _fail(t);
                                                                                                                                                        LocalPopChoice(u_64);
                                                                                                                                                        t = g_24;
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = t_64;
                                                                                                                                                        {
                                                                                                                                                          ATerm y_64 = t;
                                                                                                                                                          int z_64 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                                                                {
                                                                                                                                                                  ATerm a_65 = ATgetArgument(t, 0);
                                                                                                                                                                  ATerm b_65 = ATgetArgument(t, 1);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              LocalPopChoice(z_64);
                                                                                                                                                              t = g_24;
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = y_64;
                                                                                                                                                              {
                                                                                                                                                                ATerm c_65 = t;
                                                                                                                                                                int d_65 = stack_ptr;
                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm e_65 = ATgetArgument(t, 0);
                                                                                                                                                                        ATerm f_65 = ATgetArgument(t, 1);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    LocalPopChoice(d_65);
                                                                                                                                                                    t = g_24;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    t = c_65;
                                                                                                                                                                    {
                                                                                                                                                                      ATerm g_65 = t;
                                                                                                                                                                      int h_65 = stack_ptr;
                                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm i_65 = ATgetArgument(t, 0);
                                                                                                                                                                              ATerm j_65 = ATgetArgument(t, 1);
                                                                                                                                                                              ATerm k_65 = ATgetArgument(t, 2);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          LocalPopChoice(h_65);
                                                                                                                                                                          t = g_24;
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          t = g_65;
                                                                                                                                                                          {
                                                                                                                                                                            ATerm l_65 = t;
                                                                                                                                                                            int m_65 = stack_ptr;
                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm n_65 = ATgetArgument(t, 0);
                                                                                                                                                                                    ATerm o_65 = ATgetArgument(t, 1);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                LocalPopChoice(m_65);
                                                                                                                                                                                t = g_24;
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                t = l_65;
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm p_65 = t;
                                                                                                                                                                                  int q_65 = stack_ptr;
                                                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm r_65 = ATgetArgument(t, 0);
                                                                                                                                                                                          ATerm s_65 = ATgetArgument(t, 1);
                                                                                                                                                                                          ATerm t_65 = ATgetArgument(t, 2);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      LocalPopChoice(q_65);
                                                                                                                                                                                      t = g_24;
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      t = p_65;
                                                                                                                                                                                      {
                                                                                                                                                                                        ATerm u_65 = t;
                                                                                                                                                                                        int v_65 = stack_ptr;
                                                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm w_65 = ATgetArgument(t, 0);
                                                                                                                                                                                                ATerm x_65 = ATgetArgument(t, 1);
                                                                                                                                                                                                ATerm y_65 = ATgetArgument(t, 2);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            LocalPopChoice(v_65);
                                                                                                                                                                                            t = g_24;
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            t = u_65;
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm z_65 = t;
                                                                                                                                                                                              int a_66 = stack_ptr;
                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm b_66 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm c_66 = ATgetArgument(t, 1);
                                                                                                                                                                                                      ATerm d_66 = ATgetArgument(t, 2);
                                                                                                                                                                                                      ATerm e_66 = ATgetArgument(t, 3);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  LocalPopChoice(a_66);
                                                                                                                                                                                                  t = g_24;
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  t = z_65;
                                                                                                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm f_66 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm g_66 = ATgetArgument(t, 1);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = g_24;
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                                            LocalPopChoice(k_63);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_63;
                                                                                            t = f_24;
                                                                                            {
                                                                                              ATerm h_66 = t;
                                                                                              int i_66 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Build_1))
                                                                                                    {
                                                                                                      ATerm j_66 = ATgetArgument(t, 0);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_66);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_66;
                                                                                                  {
                                                                                                    ATerm k_66 = t;
                                                                                                    int l_66 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Match_1))
                                                                                                          {
                                                                                                            ATerm m_66 = ATgetArgument(t, 0);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(l_66);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_66;
                                                                                                        {
                                                                                                          ATerm n_66 = t;
                                                                                                          int o_66 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_BA_2))
                                                                                                                {
                                                                                                                  ATerm p_66 = ATgetArgument(t, 0);
                                                                                                                  ATerm q_66 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(o_66);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = n_66;
                                                                                                              {
                                                                                                                ATerm r_66 = t;
                                                                                                                int s_66 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                                                      {
                                                                                                                        ATerm t_66 = ATgetArgument(t, 0);
                                                                                                                        ATerm u_66 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(s_66);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = r_66;
                                                                                                                    {
                                                                                                                      ATerm v_66 = t;
                                                                                                                      int w_66 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                                                            {
                                                                                                                              ATerm x_66 = ATgetArgument(t, 0);
                                                                                                                              ATerm y_66 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(w_66);
                                                                                                                          t = f_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = v_66;
                                                                                                                          {
                                                                                                                            ATerm z_66 = t;
                                                                                                                            int a_67 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm b_67 = ATgetArgument(t, 0);
                                                                                                                                    ATerm c_67 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(a_67);
                                                                                                                                t = f_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = z_66;
                                                                                                                                {
                                                                                                                                  ATerm d_67 = t;
                                                                                                                                  int e_67 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                                                                        {
                                                                                                                                          ATerm f_67 = ATgetArgument(t, 0);
                                                                                                                                          ATerm g_67 = ATgetArgument(t, 1);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        _fail(t);
                                                                                                                                      LocalPopChoice(e_67);
                                                                                                                                      t = f_24;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = d_67;
                                                                                                                                      {
                                                                                                                                        ATerm h_67 = t;
                                                                                                                                        int i_67 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                                                                              {
                                                                                                                                                ATerm j_67 = ATgetArgument(t, 0);
                                                                                                                                                ATerm k_67 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            LocalPopChoice(i_67);
                                                                                                                                            t = f_24;
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = h_67;
                                                                                                                                            {
                                                                                                                                              ATerm l_67 = t;
                                                                                                                                              int m_67 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                                                                    {
                                                                                                                                                      ATerm n_67 = ATgetArgument(t, 0);
                                                                                                                                                      ATerm o_67 = ATgetArgument(t, 1);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    _fail(t);
                                                                                                                                                  LocalPopChoice(m_67);
                                                                                                                                                  t = f_24;
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = l_67;
                                                                                                                                                  {
                                                                                                                                                    ATerm p_67 = t;
                                                                                                                                                    int q_67 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                                          {
                                                                                                                                                            ATerm r_67 = ATgetArgument(t, 0);
                                                                                                                                                            ATerm s_67 = ATgetArgument(t, 1);
                                                                                                                                                            ATerm t_67 = ATgetArgument(t, 2);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          _fail(t);
                                                                                                                                                        LocalPopChoice(q_67);
                                                                                                                                                        t = f_24;
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = p_67;
                                                                                                                                                        {
                                                                                                                                                          ATerm u_67 = t;
                                                                                                                                                          int v_67 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                                                                                                {
                                                                                                                                                                  ATerm w_67 = ATgetArgument(t, 0);
                                                                                                                                                                  ATerm x_67 = ATgetArgument(t, 1);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                _fail(t);
                                                                                                                                                              LocalPopChoice(v_67);
                                                                                                                                                              t = f_24;
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = u_67;
                                                                                                                                                              {
                                                                                                                                                                ATerm y_67 = t;
                                                                                                                                                                int z_67 = stack_ptr;
                                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                                  {
                                                                                                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm a_68 = ATgetArgument(t, 0);
                                                                                                                                                                        ATerm b_68 = ATgetArgument(t, 1);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    LocalPopChoice(z_67);
                                                                                                                                                                    t = f_24;
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  {
                                                                                                                                                                    t = y_67;
                                                                                                                                                                    {
                                                                                                                                                                      ATerm c_68 = t;
                                                                                                                                                                      int d_68 = stack_ptr;
                                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm e_68 = ATgetArgument(t, 0);
                                                                                                                                                                              ATerm f_68 = ATgetArgument(t, 1);
                                                                                                                                                                              ATerm g_68 = ATgetArgument(t, 2);
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          LocalPopChoice(d_68);
                                                                                                                                                                          t = f_24;
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        {
                                                                                                                                                                          t = c_68;
                                                                                                                                                                          {
                                                                                                                                                                            ATerm h_68 = t;
                                                                                                                                                                            int i_68 = stack_ptr;
                                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                                              {
                                                                                                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                                                                                                  {
                                                                                                                                                                                    ATerm j_68 = ATgetArgument(t, 0);
                                                                                                                                                                                    ATerm k_68 = ATgetArgument(t, 1);
                                                                                                                                                                                  }
                                                                                                                                                                                else
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                                LocalPopChoice(i_68);
                                                                                                                                                                                t = f_24;
                                                                                                                                                                              }
                                                                                                                                                                            else
                                                                                                                                                                              {
                                                                                                                                                                                t = h_68;
                                                                                                                                                                                {
                                                                                                                                                                                  ATerm l_68 = t;
                                                                                                                                                                                  int m_68 = stack_ptr;
                                                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                                                    {
                                                                                                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                                                                                        {
                                                                                                                                                                                          ATerm n_68 = ATgetArgument(t, 0);
                                                                                                                                                                                          ATerm o_68 = ATgetArgument(t, 1);
                                                                                                                                                                                          ATerm p_68 = ATgetArgument(t, 2);
                                                                                                                                                                                        }
                                                                                                                                                                                      else
                                                                                                                                                                                        _fail(t);
                                                                                                                                                                                      LocalPopChoice(m_68);
                                                                                                                                                                                      t = f_24;
                                                                                                                                                                                    }
                                                                                                                                                                                  else
                                                                                                                                                                                    {
                                                                                                                                                                                      t = l_68;
                                                                                                                                                                                      {
                                                                                                                                                                                        ATerm q_68 = t;
                                                                                                                                                                                        int r_68 = stack_ptr;
                                                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                                                          {
                                                                                                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                                                                                              {
                                                                                                                                                                                                ATerm s_68 = ATgetArgument(t, 0);
                                                                                                                                                                                                ATerm t_68 = ATgetArgument(t, 1);
                                                                                                                                                                                                ATerm u_68 = ATgetArgument(t, 2);
                                                                                                                                                                                              }
                                                                                                                                                                                            else
                                                                                                                                                                                              _fail(t);
                                                                                                                                                                                            LocalPopChoice(r_68);
                                                                                                                                                                                            t = f_24;
                                                                                                                                                                                          }
                                                                                                                                                                                        else
                                                                                                                                                                                          {
                                                                                                                                                                                            t = q_68;
                                                                                                                                                                                            {
                                                                                                                                                                                              ATerm v_68 = t;
                                                                                                                                                                                              int w_68 = stack_ptr;
                                                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                                                {
                                                                                                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm x_68 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm y_68 = ATgetArgument(t, 1);
                                                                                                                                                                                                      ATerm z_68 = ATgetArgument(t, 2);
                                                                                                                                                                                                      ATerm a_69 = ATgetArgument(t, 3);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  LocalPopChoice(w_68);
                                                                                                                                                                                                  t = f_24;
                                                                                                                                                                                                }
                                                                                                                                                                                              else
                                                                                                                                                                                                {
                                                                                                                                                                                                  t = v_68;
                                                                                                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                                                                                                    {
                                                                                                                                                                                                      ATerm b_69 = ATgetArgument(t, 0);
                                                                                                                                                                                                      ATerm c_69 = ATgetArgument(t, 1);
                                                                                                                                                                                                    }
                                                                                                                                                                                                  else
                                                                                                                                                                                                    _fail(t);
                                                                                                                                                                                                  t = f_24;
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_25), term_d_69);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_d_69;
  {
    ATerm e_69 = t;
    int f_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(f_69);
      }
    else
      {
        t = e_69;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  if(match_string(t, "-a"))
    {
      t = b_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = b_26;
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = term_i_69;
  t = set_config_0_0(t);
  t = c_26;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_j_69;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  t = term_l_69;
  t = set_config_0_0(t);
  t = d_26;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_m_69;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  if(match_string(t, "-I"))
    {
      t = e_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = e_26;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_69, (ATerm) ATinsert(ATempty, f_26));
  t = extend_config_0_0(t);
  t = f_26;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_n_69;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_69, g_26);
  t = set_config_0_0(t);
  t = g_26;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_p_69;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm q_69 = t;
  int r_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_0, c_0, d_0, t);
      LocalPopChoice(r_69);
    }
  else
    {
      t = q_69;
      {
        ATerm s_69 = t;
        int t_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_0, f_0, g_0, t);
            LocalPopChoice(t_69);
          }
        else
          {
            t = s_69;
            {
              ATerm u_69 = t;
              int v_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(h_0, i_0, j_0, t);
                  LocalPopChoice(v_69);
                }
              else
                {
                  t = u_69;
                  t = ArgOption_3_0(k_0, l_0, m_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm w_69 = t;
  int x_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(x_69);
    }
  else
    {
      t = w_69;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = xtc_io_1_0(p_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm y_69 = t;
  int z_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_26 = NULL;
      h_26 = t;
      t = term_g_69;
      t = get_config_0_0(t);
      t = h_26;
      LocalPopChoice(z_69);
    }
  else
    {
      t = y_69;
      t = xtc_transform_2_0(q_0, pass_includes_0_0, t);
    }
  t = xtc_transform_1_0(r_0, t);
  t = xtc_io_transform_1_0(s_0, t);
  t = xtc_transform_2_0(y_0, z_0, t);
  t = xtc_transform_2_0(a_1, pass_verbose_0_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_a_70;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_b_70;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = innermost_1_0(StrategoParenthesize_0_0, t);
  t = topdown_1_0(t_0, t);
  t = try_1_0(v_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = try_1_0(u_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_26 = NULL;
  if(match_cons(t, sym_Parenthetical_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, j_26);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = term_k_69;
  t = get_config_0_0(t);
  t = k_26;
  t = bottomup_1_0(w_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = try_1_0(x_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  o_26 = t;
  l_26 = t;
  t = SSLgetAnnotations(o_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_26 = ATgetFirst((ATermList) t);
      n_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Comment_2, l_26, (ATerm) ATinsert(CheckATermList(n_26), m_26));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_c_70;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = term_o_69;
  {
    ATerm d_70 = t;
    int e_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_70);
      }
    else
      {
        t = d_70;
        t = term_f_70;
      }
  }
  t = xtc_find_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(p_26), q_26), term_o_69);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_g_70;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_2_0(n_0, o_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
