#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Comment_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Anno_2;
Symbol sym_Parenthetical_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_As_2;
Symbol sym_Anno_2;
Symbol sym_Explode_2;
Symbol sym_DynRuleUnion_3;
Symbol sym_DynRuleIntersect_3;
Symbol sym_DynRuleUnionFix_2;
Symbol sym_DynRuleIntersectFix_2;
Symbol sym_AM_2;
Symbol sym_RGChoice_2;
Symbol sym_GChoice_2;
Symbol sym_RChoice_2;
Symbol sym_Choice_2;
Symbol sym_ExplodeCong_2;
Symbol sym_AnnoCong_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LGChoice_2;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_ParenStrat_1;
static void init_module_constructors (void)
{
  sym_Comment_2 = ATmakeSymbol("Comment", 2, ATfalse);
  ATprotectSymbol(sym_Comment_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Parenthetical_1 = ATmakeSymbol("Parenthetical", 1, ATfalse);
  ATprotectSymbol(sym_Parenthetical_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_DynRuleUnion_3 = ATmakeSymbol("DynRuleUnion", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleUnion_3);
  sym_DynRuleIntersect_3 = ATmakeSymbol("DynRuleIntersect", 3, ATfalse);
  ATprotectSymbol(sym_DynRuleIntersect_3);
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
ATerm term_d_52;
ATerm term_c_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_a_51;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym__2, term_d_51, term_e_51);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym__2, term_h_51, term_e_51);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   use pptable in file instead of Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm e_85 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm StrategoParenthesize_0_0 (ATerm t);
ATerm innermost_1_0 (ATerm j_113 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm z_107 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_108 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm m_3 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
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
ATerm option_wrap_2_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm t);
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
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_AnnoCong_2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      {
        ATerm b_1 = t;
        int c_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_18;
            {
              ATerm d_1 = t;
              int e_1 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm f_1 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_1);
                  t = e_18;
                }
              else
                {
                  t = d_1;
                  {
                    ATerm g_1 = t;
                    int h_1 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            ATerm i_1 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_1);
                        t = e_18;
                      }
                    else
                      {
                        t = g_1;
                        {
                          ATerm j_1 = t;
                          int k_1 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_BA_2))
                                {
                                  ATerm l_1 = ATgetArgument(t, 0);
                                  ATerm m_1 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_1);
                              t = e_18;
                            }
                          else
                            {
                              t = j_1;
                              {
                                ATerm n_1 = t;
                                int o_1 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        ATerm p_1 = ATgetArgument(t, 0);
                                        ATerm q_1 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(o_1);
                                    t = e_18;
                                  }
                                else
                                  {
                                    t = n_1;
                                    {
                                      ATerm r_1 = t;
                                      int s_1 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              ATerm t_1 = ATgetArgument(t, 0);
                                              ATerm u_1 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(s_1);
                                          t = e_18;
                                        }
                                      else
                                        {
                                          t = r_1;
                                          {
                                            ATerm v_1 = t;
                                            int w_1 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RChoice_2))
                                                  {
                                                    ATerm x_1 = ATgetArgument(t, 0);
                                                    ATerm y_1 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(w_1);
                                                t = e_18;
                                              }
                                            else
                                              {
                                                t = v_1;
                                                {
                                                  ATerm z_1 = t;
                                                  int a_2 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm b_2 = ATgetArgument(t, 0);
                                                          ATerm c_2 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(a_2);
                                                      t = e_18;
                                                    }
                                                  else
                                                    {
                                                      t = z_1;
                                                      {
                                                        ATerm d_2 = t;
                                                        int e_2 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LGChoice_2))
                                                              {
                                                                ATerm f_2 = ATgetArgument(t, 0);
                                                                ATerm g_2 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(e_2);
                                                            t = e_18;
                                                          }
                                                        else
                                                          {
                                                            t = d_2;
                                                            {
                                                              ATerm h_2 = t;
                                                              int i_2 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      ATerm j_2 = ATgetArgument(t, 0);
                                                                      ATerm k_2 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(i_2);
                                                                  t = e_18;
                                                                }
                                                              else
                                                                {
                                                                  t = h_2;
                                                                  {
                                                                    ATerm l_2 = t;
                                                                    int m_2 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                          {
                                                                            ATerm n_2 = ATgetArgument(t, 0);
                                                                            ATerm o_2 = ATgetArgument(t, 1);
                                                                            ATerm p_2 = ATgetArgument(t, 2);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(m_2);
                                                                        t = e_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_2;
                                                                        {
                                                                          ATerm q_2 = t;
                                                                          int r_2 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                {
                                                                                  ATerm s_2 = ATgetArgument(t, 0);
                                                                                  ATerm t_2 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(r_2);
                                                                              t = e_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_2;
                                                                              {
                                                                                ATerm u_2 = t;
                                                                                int v_2 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                      {
                                                                                        ATerm w_2 = ATgetArgument(t, 0);
                                                                                        ATerm x_2 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(v_2);
                                                                                    t = e_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_2;
                                                                                    {
                                                                                      ATerm y_2 = t;
                                                                                      int z_2 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              ATerm a_3 = ATgetArgument(t, 0);
                                                                                              ATerm b_3 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(z_2);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_2;
                                                                                          {
                                                                                            ATerm c_3 = t;
                                                                                            int d_3 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm e_3 = ATgetArgument(t, 0);
                                                                                                    ATerm f_3 = ATgetArgument(t, 1);
                                                                                                    ATerm g_3 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(d_3);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_3;
                                                                                                {
                                                                                                  ATerm n_3 = t;
                                                                                                  int o_3 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm p_3 = ATgetArgument(t, 0);
                                                                                                          ATerm q_3 = ATgetArgument(t, 1);
                                                                                                          ATerm r_3 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(o_3);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_3;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm s_3 = ATgetArgument(t, 0);
                                                                                                          ATerm t_3 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
            LocalPopChoice(c_1);
          }
        else
          {
            t = b_1;
            t = f_18;
            {
              ATerm u_3 = t;
              int v_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm w_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_3);
                  t = f_18;
                }
              else
                {
                  t = u_3;
                  {
                    ATerm x_3 = t;
                    int y_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            ATerm z_3 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_3);
                        t = f_18;
                      }
                    else
                      {
                        t = x_3;
                        {
                          ATerm a_4 = t;
                          int b_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_BA_2))
                                {
                                  ATerm c_4 = ATgetArgument(t, 0);
                                  ATerm d_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_4);
                              t = f_18;
                            }
                          else
                            {
                              t = a_4;
                              {
                                ATerm e_4 = t;
                                int f_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        ATerm g_4 = ATgetArgument(t, 0);
                                        ATerm h_4 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(f_4);
                                    t = f_18;
                                  }
                                else
                                  {
                                    t = e_4;
                                    {
                                      ATerm i_4 = t;
                                      int j_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              ATerm k_4 = ATgetArgument(t, 0);
                                              ATerm l_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(j_4);
                                          t = f_18;
                                        }
                                      else
                                        {
                                          t = i_4;
                                          {
                                            ATerm m_4 = t;
                                            int n_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RChoice_2))
                                                  {
                                                    ATerm o_4 = ATgetArgument(t, 0);
                                                    ATerm p_4 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(n_4);
                                                t = f_18;
                                              }
                                            else
                                              {
                                                t = m_4;
                                                {
                                                  ATerm q_4 = t;
                                                  int r_4 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm s_4 = ATgetArgument(t, 0);
                                                          ATerm t_4 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(r_4);
                                                      t = f_18;
                                                    }
                                                  else
                                                    {
                                                      t = q_4;
                                                      {
                                                        ATerm u_4 = t;
                                                        int v_4 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LGChoice_2))
                                                              {
                                                                ATerm w_4 = ATgetArgument(t, 0);
                                                                ATerm x_4 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(v_4);
                                                            t = f_18;
                                                          }
                                                        else
                                                          {
                                                            t = u_4;
                                                            {
                                                              ATerm y_4 = t;
                                                              int z_4 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      ATerm a_5 = ATgetArgument(t, 0);
                                                                      ATerm b_5 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(z_4);
                                                                  t = f_18;
                                                                }
                                                              else
                                                                {
                                                                  t = y_4;
                                                                  {
                                                                    ATerm c_5 = t;
                                                                    int d_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                          {
                                                                            ATerm e_5 = ATgetArgument(t, 0);
                                                                            ATerm f_5 = ATgetArgument(t, 1);
                                                                            ATerm g_5 = ATgetArgument(t, 2);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(d_5);
                                                                        t = f_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_5;
                                                                        {
                                                                          ATerm h_5 = t;
                                                                          int i_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                {
                                                                                  ATerm j_5 = ATgetArgument(t, 0);
                                                                                  ATerm k_5 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(i_5);
                                                                              t = f_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_5;
                                                                              {
                                                                                ATerm l_5 = t;
                                                                                int m_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                      {
                                                                                        ATerm n_5 = ATgetArgument(t, 0);
                                                                                        ATerm o_5 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(m_5);
                                                                                    t = f_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_5;
                                                                                    {
                                                                                      ATerm p_5 = t;
                                                                                      int q_5 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              ATerm r_5 = ATgetArgument(t, 0);
                                                                                              ATerm s_5 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(q_5);
                                                                                          t = f_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_5;
                                                                                          {
                                                                                            ATerm t_5 = t;
                                                                                            int u_5 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm v_5 = ATgetArgument(t, 0);
                                                                                                    ATerm w_5 = ATgetArgument(t, 1);
                                                                                                    ATerm x_5 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(u_5);
                                                                                                t = f_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_5;
                                                                                                {
                                                                                                  ATerm y_5 = t;
                                                                                                  int z_5 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm a_6 = ATgetArgument(t, 0);
                                                                                                          ATerm b_6 = ATgetArgument(t, 1);
                                                                                                          ATerm c_6 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(z_5);
                                                                                                      t = f_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_5;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm d_6 = ATgetArgument(t, 0);
                                                                                                          ATerm e_6 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = f_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
          }
      }
    }
  else
    {
      if(match_cons(t, sym_ExplodeCong_2))
        {
          e_18 = ATgetArgument(t, 0);
          f_18 = ATgetArgument(t, 1);
          {
            ATerm f_6 = t;
            int g_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_18;
                {
                  ATerm h_6 = t;
                  int i_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm j_6 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(i_6);
                      t = e_18;
                    }
                  else
                    {
                      t = h_6;
                      {
                        ATerm k_6 = t;
                        int l_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm m_6 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(l_6);
                            t = e_18;
                          }
                        else
                          {
                            t = k_6;
                            {
                              ATerm n_6 = t;
                              int o_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm p_6 = ATgetArgument(t, 0);
                                      ATerm q_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(o_6);
                                  t = e_18;
                                }
                              else
                                {
                                  t = n_6;
                                  {
                                    ATerm r_6 = t;
                                    int s_6 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm t_6 = ATgetArgument(t, 0);
                                            ATerm u_6 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(s_6);
                                        t = e_18;
                                      }
                                    else
                                      {
                                        t = r_6;
                                        {
                                          ATerm v_6 = t;
                                          int w_6 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm x_6 = ATgetArgument(t, 0);
                                                  ATerm y_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(w_6);
                                              t = e_18;
                                            }
                                          else
                                            {
                                              t = v_6;
                                              {
                                                ATerm z_6 = t;
                                                int a_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm b_7 = ATgetArgument(t, 0);
                                                        ATerm c_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_7);
                                                    t = e_18;
                                                  }
                                                else
                                                  {
                                                    t = z_6;
                                                    {
                                                      ATerm d_7 = t;
                                                      int e_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm f_7 = ATgetArgument(t, 0);
                                                              ATerm g_7 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(e_7);
                                                          t = e_18;
                                                        }
                                                      else
                                                        {
                                                          t = d_7;
                                                          {
                                                            ATerm h_7 = t;
                                                            int i_7 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm j_7 = ATgetArgument(t, 0);
                                                                    ATerm k_7 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(i_7);
                                                                t = e_18;
                                                              }
                                                            else
                                                              {
                                                                t = h_7;
                                                                {
                                                                  ATerm l_7 = t;
                                                                  int m_7 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm n_7 = ATgetArgument(t, 0);
                                                                          ATerm o_7 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(m_7);
                                                                      t = e_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = l_7;
                                                                      {
                                                                        ATerm p_7 = t;
                                                                        int q_7 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm r_7 = ATgetArgument(t, 0);
                                                                                ATerm s_7 = ATgetArgument(t, 1);
                                                                                ATerm t_7 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(q_7);
                                                                            t = e_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = p_7;
                                                                            {
                                                                              ATerm u_7 = t;
                                                                              int v_7 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm w_7 = ATgetArgument(t, 0);
                                                                                      ATerm x_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(v_7);
                                                                                  t = e_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_7;
                                                                                  {
                                                                                    ATerm y_7 = t;
                                                                                    int z_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm a_8 = ATgetArgument(t, 0);
                                                                                            ATerm b_8 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(z_7);
                                                                                        t = e_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = y_7;
                                                                                        {
                                                                                          ATerm c_8 = t;
                                                                                          int d_8 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                {
                                                                                                  ATerm e_8 = ATgetArgument(t, 0);
                                                                                                  ATerm f_8 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(d_8);
                                                                                              t = e_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = c_8;
                                                                                              {
                                                                                                ATerm g_8 = t;
                                                                                                int h_8 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm i_8 = ATgetArgument(t, 0);
                                                                                                        ATerm j_8 = ATgetArgument(t, 1);
                                                                                                        ATerm k_8 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(h_8);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_8;
                                                                                                    {
                                                                                                      ATerm l_8 = t;
                                                                                                      int m_8 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm n_8 = ATgetArgument(t, 0);
                                                                                                              ATerm o_8 = ATgetArgument(t, 1);
                                                                                                              ATerm p_8 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(m_8);
                                                                                                          t = e_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = l_8;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm q_8 = ATgetArgument(t, 0);
                                                                                                              ATerm r_8 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = e_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                LocalPopChoice(g_6);
              }
            else
              {
                t = f_6;
                t = f_18;
                {
                  ATerm s_8 = t;
                  int t_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm u_8 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(t_8);
                      t = f_18;
                    }
                  else
                    {
                      t = s_8;
                      {
                        ATerm v_8 = t;
                        int w_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm x_8 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_8);
                            t = f_18;
                          }
                        else
                          {
                            t = v_8;
                            {
                              ATerm y_8 = t;
                              int z_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm a_9 = ATgetArgument(t, 0);
                                      ATerm b_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(z_8);
                                  t = f_18;
                                }
                              else
                                {
                                  t = y_8;
                                  {
                                    ATerm c_9 = t;
                                    int d_9 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm e_9 = ATgetArgument(t, 0);
                                            ATerm f_9 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(d_9);
                                        t = f_18;
                                      }
                                    else
                                      {
                                        t = c_9;
                                        {
                                          ATerm g_9 = t;
                                          int h_9 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm i_9 = ATgetArgument(t, 0);
                                                  ATerm j_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(h_9);
                                              t = f_18;
                                            }
                                          else
                                            {
                                              t = g_9;
                                              {
                                                ATerm k_9 = t;
                                                int l_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm m_9 = ATgetArgument(t, 0);
                                                        ATerm n_9 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_9);
                                                    t = f_18;
                                                  }
                                                else
                                                  {
                                                    t = k_9;
                                                    {
                                                      ATerm o_9 = t;
                                                      int p_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm q_9 = ATgetArgument(t, 0);
                                                              ATerm r_9 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(p_9);
                                                          t = f_18;
                                                        }
                                                      else
                                                        {
                                                          t = o_9;
                                                          {
                                                            ATerm s_9 = t;
                                                            int t_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm u_9 = ATgetArgument(t, 0);
                                                                    ATerm v_9 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(t_9);
                                                                t = f_18;
                                                              }
                                                            else
                                                              {
                                                                t = s_9;
                                                                {
                                                                  ATerm w_9 = t;
                                                                  int x_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm y_9 = ATgetArgument(t, 0);
                                                                          ATerm z_9 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(x_9);
                                                                      t = f_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = w_9;
                                                                      {
                                                                        ATerm a_10 = t;
                                                                        int b_10 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm c_10 = ATgetArgument(t, 0);
                                                                                ATerm d_10 = ATgetArgument(t, 1);
                                                                                ATerm e_10 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(b_10);
                                                                            t = f_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = a_10;
                                                                            {
                                                                              ATerm f_10 = t;
                                                                              int g_10 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm h_10 = ATgetArgument(t, 0);
                                                                                      ATerm i_10 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(g_10);
                                                                                  t = f_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_10;
                                                                                  {
                                                                                    ATerm j_10 = t;
                                                                                    int k_10 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm l_10 = ATgetArgument(t, 0);
                                                                                            ATerm m_10 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(k_10);
                                                                                        t = f_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_10;
                                                                                        {
                                                                                          ATerm n_10 = t;
                                                                                          int o_10 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                {
                                                                                                  ATerm p_10 = ATgetArgument(t, 0);
                                                                                                  ATerm q_10 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(o_10);
                                                                                              t = f_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_10;
                                                                                              {
                                                                                                ATerm r_10 = t;
                                                                                                int s_10 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm t_10 = ATgetArgument(t, 0);
                                                                                                        ATerm u_10 = ATgetArgument(t, 1);
                                                                                                        ATerm v_10 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(s_10);
                                                                                                    t = f_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = r_10;
                                                                                                    {
                                                                                                      ATerm w_10 = t;
                                                                                                      int x_10 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm y_10 = ATgetArgument(t, 0);
                                                                                                              ATerm z_10 = ATgetArgument(t, 1);
                                                                                                              ATerm a_11 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(x_10);
                                                                                                          t = f_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = w_10;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm b_11 = ATgetArgument(t, 0);
                                                                                                              ATerm c_11 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = f_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Explode_2))
            {
              e_18 = ATgetArgument(t, 0);
              f_18 = ATgetArgument(t, 1);
              {
                ATerm d_11 = t;
                int e_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_18;
                    {
                      ATerm f_11 = t;
                      int g_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm h_11 = ATgetArgument(t, 0);
                              ATerm i_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(g_11);
                          t = e_18;
                        }
                      else
                        {
                          t = f_11;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm j_11 = ATgetArgument(t, 0);
                              ATerm k_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = e_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                    LocalPopChoice(e_11);
                  }
                else
                  {
                    t = d_11;
                    t = f_18;
                    {
                      ATerm l_11 = t;
                      int m_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm n_11 = ATgetArgument(t, 0);
                              ATerm o_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_11);
                          t = f_18;
                        }
                      else
                        {
                          t = l_11;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm p_11 = ATgetArgument(t, 0);
                              ATerm q_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = f_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_Build_1))
                {
                  e_18 = ATgetArgument(t, 0);
                  t = e_18;
                  {
                    ATerm r_11 = t;
                    int s_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_BA_2))
                          {
                            ATerm t_11 = ATgetArgument(t, 0);
                            ATerm u_11 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_11);
                        t = e_18;
                      }
                    else
                      {
                        t = r_11;
                        {
                          ATerm v_11 = t;
                          int w_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Choice_2))
                                {
                                  ATerm x_11 = ATgetArgument(t, 0);
                                  ATerm y_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(w_11);
                              t = e_18;
                            }
                          else
                            {
                              t = v_11;
                              {
                                ATerm z_11 = t;
                                int a_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_LChoice_2))
                                      {
                                        ATerm b_12 = ATgetArgument(t, 0);
                                        ATerm c_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(a_12);
                                    t = e_18;
                                  }
                                else
                                  {
                                    t = z_11;
                                    {
                                      ATerm d_12 = t;
                                      int e_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_RChoice_2))
                                            {
                                              ATerm f_12 = ATgetArgument(t, 0);
                                              ATerm g_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(e_12);
                                          t = e_18;
                                        }
                                      else
                                        {
                                          t = d_12;
                                          {
                                            ATerm h_12 = t;
                                            int i_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_GChoice_2))
                                                  {
                                                    ATerm j_12 = ATgetArgument(t, 0);
                                                    ATerm k_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(i_12);
                                                t = e_18;
                                              }
                                            else
                                              {
                                                t = h_12;
                                                {
                                                  ATerm l_12 = t;
                                                  int m_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LGChoice_2))
                                                        {
                                                          ATerm n_12 = ATgetArgument(t, 0);
                                                          ATerm o_12 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(m_12);
                                                      t = e_18;
                                                    }
                                                  else
                                                    {
                                                      t = l_12;
                                                      {
                                                        ATerm p_12 = t;
                                                        int q_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_RGChoice_2))
                                                              {
                                                                ATerm r_12 = ATgetArgument(t, 0);
                                                                ATerm s_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(q_12);
                                                            t = e_18;
                                                          }
                                                        else
                                                          {
                                                            t = p_12;
                                                            {
                                                              ATerm t_12 = t;
                                                              int u_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                    {
                                                                      ATerm v_12 = ATgetArgument(t, 0);
                                                                      ATerm w_12 = ATgetArgument(t, 1);
                                                                      ATerm x_12 = ATgetArgument(t, 2);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(u_12);
                                                                  t = e_18;
                                                                }
                                                              else
                                                                {
                                                                  t = t_12;
                                                                  {
                                                                    ATerm y_12 = t;
                                                                    int z_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                          {
                                                                            ATerm a_13 = ATgetArgument(t, 0);
                                                                            ATerm b_13 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(z_12);
                                                                        t = e_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_12;
                                                                        {
                                                                          ATerm c_13 = t;
                                                                          int d_13 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                {
                                                                                  ATerm e_13 = ATgetArgument(t, 0);
                                                                                  ATerm f_13 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(d_13);
                                                                              t = e_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_13;
                                                                              {
                                                                                ATerm g_13 = t;
                                                                                int h_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_AM_2))
                                                                                      {
                                                                                        ATerm i_13 = ATgetArgument(t, 0);
                                                                                        ATerm j_13 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(h_13);
                                                                                    t = e_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_13;
                                                                                    {
                                                                                      ATerm k_13 = t;
                                                                                      int l_13 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                            {
                                                                                              ATerm m_13 = ATgetArgument(t, 0);
                                                                                              ATerm n_13 = ATgetArgument(t, 1);
                                                                                              ATerm o_13 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(l_13);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_13;
                                                                                          {
                                                                                            ATerm p_13 = t;
                                                                                            int q_13 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                  {
                                                                                                    ATerm r_13 = ATgetArgument(t, 0);
                                                                                                    ATerm s_13 = ATgetArgument(t, 1);
                                                                                                    ATerm t_13 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(q_13);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_13;
                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                  {
                                                                                                    ATerm u_13 = ATgetArgument(t, 0);
                                                                                                    ATerm v_13 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                t = e_18;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, e_18));
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      e_18 = ATgetArgument(t, 0);
                      t = e_18;
                      {
                        ATerm w_13 = t;
                        int x_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_BA_2))
                              {
                                ATerm y_13 = ATgetArgument(t, 0);
                                ATerm z_13 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_13);
                            t = e_18;
                          }
                        else
                          {
                            t = w_13;
                            {
                              ATerm a_14 = t;
                              int b_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_Choice_2))
                                    {
                                      ATerm c_14 = ATgetArgument(t, 0);
                                      ATerm d_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(b_14);
                                  t = e_18;
                                }
                              else
                                {
                                  t = a_14;
                                  {
                                    ATerm e_14 = t;
                                    int f_14 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            ATerm g_14 = ATgetArgument(t, 0);
                                            ATerm h_14 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(f_14);
                                        t = e_18;
                                      }
                                    else
                                      {
                                        t = e_14;
                                        {
                                          ATerm i_14 = t;
                                          int j_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_RChoice_2))
                                                {
                                                  ATerm k_14 = ATgetArgument(t, 0);
                                                  ATerm l_14 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(j_14);
                                              t = e_18;
                                            }
                                          else
                                            {
                                              t = i_14;
                                              {
                                                ATerm m_14 = t;
                                                int n_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_GChoice_2))
                                                      {
                                                        ATerm o_14 = ATgetArgument(t, 0);
                                                        ATerm p_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_14);
                                                    t = e_18;
                                                  }
                                                else
                                                  {
                                                    t = m_14;
                                                    {
                                                      ATerm q_14 = t;
                                                      int r_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_LGChoice_2))
                                                            {
                                                              ATerm s_14 = ATgetArgument(t, 0);
                                                              ATerm t_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(r_14);
                                                          t = e_18;
                                                        }
                                                      else
                                                        {
                                                          t = q_14;
                                                          {
                                                            ATerm u_14 = t;
                                                            int v_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_RGChoice_2))
                                                                  {
                                                                    ATerm w_14 = ATgetArgument(t, 0);
                                                                    ATerm x_14 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(v_14);
                                                                t = e_18;
                                                              }
                                                            else
                                                              {
                                                                t = u_14;
                                                                {
                                                                  ATerm y_14 = t;
                                                                  int z_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                        {
                                                                          ATerm a_15 = ATgetArgument(t, 0);
                                                                          ATerm b_15 = ATgetArgument(t, 1);
                                                                          ATerm c_15 = ATgetArgument(t, 2);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(z_14);
                                                                      t = e_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_14;
                                                                      {
                                                                        ATerm d_15 = t;
                                                                        int e_15 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                              {
                                                                                ATerm f_15 = ATgetArgument(t, 0);
                                                                                ATerm g_15 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(e_15);
                                                                            t = e_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_15;
                                                                            {
                                                                              ATerm h_15 = t;
                                                                              int i_15 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                    {
                                                                                      ATerm j_15 = ATgetArgument(t, 0);
                                                                                      ATerm k_15 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(i_15);
                                                                                  t = e_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_15;
                                                                                  {
                                                                                    ATerm l_15 = t;
                                                                                    int m_15 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm n_15 = ATgetArgument(t, 0);
                                                                                            ATerm o_15 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(m_15);
                                                                                        t = e_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_15;
                                                                                        {
                                                                                          ATerm p_15 = t;
                                                                                          int q_15 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm r_15 = ATgetArgument(t, 0);
                                                                                                  ATerm s_15 = ATgetArgument(t, 1);
                                                                                                  ATerm t_15 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(q_15);
                                                                                              t = e_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = p_15;
                                                                                              {
                                                                                                ATerm u_15 = t;
                                                                                                int v_15 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm w_15 = ATgetArgument(t, 0);
                                                                                                        ATerm x_15 = ATgetArgument(t, 1);
                                                                                                        ATerm y_15 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(v_15);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = u_15;
                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                      {
                                                                                                        ATerm z_15 = ATgetArgument(t, 0);
                                                                                                        ATerm a_16 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, e_18));
                    }
                  else
                    {
                      if(match_cons(t, sym_BA_2))
                        {
                          e_18 = ATgetArgument(t, 0);
                          f_18 = ATgetArgument(t, 1);
                          {
                            ATerm b_16 = t;
                            int c_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_18;
                                {
                                  ATerm d_16 = t;
                                  int e_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm f_16 = ATgetArgument(t, 0);
                                          ATerm g_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(e_16);
                                      t = e_18;
                                    }
                                  else
                                    {
                                      t = d_16;
                                      {
                                        ATerm h_16 = t;
                                        int i_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm j_16 = ATgetArgument(t, 0);
                                                ATerm k_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(i_16);
                                            t = e_18;
                                          }
                                        else
                                          {
                                            t = h_16;
                                            {
                                              ATerm l_16 = t;
                                              int m_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm n_16 = ATgetArgument(t, 0);
                                                      ATerm o_16 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(m_16);
                                                  t = e_18;
                                                }
                                              else
                                                {
                                                  t = l_16;
                                                  {
                                                    ATerm p_16 = t;
                                                    int q_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm r_16 = ATgetArgument(t, 0);
                                                            ATerm s_16 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(q_16);
                                                        t = e_18;
                                                      }
                                                    else
                                                      {
                                                        t = p_16;
                                                        {
                                                          ATerm t_16 = t;
                                                          int u_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm v_16 = ATgetArgument(t, 0);
                                                                  ATerm w_16 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(u_16);
                                                              t = e_18;
                                                            }
                                                          else
                                                            {
                                                              t = t_16;
                                                              {
                                                                ATerm x_16 = t;
                                                                int y_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm z_16 = ATgetArgument(t, 0);
                                                                        ATerm a_17 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(y_16);
                                                                    t = e_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_16;
                                                                    {
                                                                      ATerm b_17 = t;
                                                                      int c_17 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm d_17 = ATgetArgument(t, 0);
                                                                              ATerm e_17 = ATgetArgument(t, 1);
                                                                              ATerm f_17 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(c_17);
                                                                          t = e_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_17;
                                                                          {
                                                                            ATerm g_17 = t;
                                                                            int h_17 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm i_17 = ATgetArgument(t, 0);
                                                                                    ATerm j_17 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(h_17);
                                                                                t = e_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_17;
                                                                                {
                                                                                  ATerm k_17 = t;
                                                                                  int l_17 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm m_17 = ATgetArgument(t, 0);
                                                                                          ATerm n_17 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(l_17);
                                                                                      t = e_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_17;
                                                                                      {
                                                                                        ATerm o_17 = t;
                                                                                        int p_17 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm q_17 = ATgetArgument(t, 0);
                                                                                                ATerm r_17 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(p_17);
                                                                                            t = e_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = o_17;
                                                                                            {
                                                                                              ATerm s_17 = t;
                                                                                              int t_17 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm u_17 = ATgetArgument(t, 0);
                                                                                                      ATerm v_17 = ATgetArgument(t, 1);
                                                                                                      ATerm w_17 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(t_17);
                                                                                                  t = e_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = s_17;
                                                                                                  {
                                                                                                    ATerm x_17 = t;
                                                                                                    int y_17 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm z_17 = ATgetArgument(t, 0);
                                                                                                            ATerm a_18 = ATgetArgument(t, 1);
                                                                                                            ATerm b_18 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(y_17);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = x_17;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm c_18 = ATgetArgument(t, 0);
                                                                                                            ATerm h_18 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                LocalPopChoice(c_16);
                              }
                            else
                              {
                                t = b_16;
                                t = f_18;
                                {
                                  ATerm i_18 = t;
                                  int j_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm k_18 = ATgetArgument(t, 0);
                                          ATerm l_18 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(j_18);
                                      t = f_18;
                                    }
                                  else
                                    {
                                      t = i_18;
                                      {
                                        ATerm m_18 = t;
                                        int n_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm o_18 = ATgetArgument(t, 0);
                                                ATerm p_18 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(n_18);
                                            t = f_18;
                                          }
                                        else
                                          {
                                            t = m_18;
                                            {
                                              ATerm q_18 = t;
                                              int r_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm s_18 = ATgetArgument(t, 0);
                                                      ATerm t_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(r_18);
                                                  t = f_18;
                                                }
                                              else
                                                {
                                                  t = q_18;
                                                  {
                                                    ATerm u_18 = t;
                                                    int v_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm w_18 = ATgetArgument(t, 0);
                                                            ATerm x_18 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(v_18);
                                                        t = f_18;
                                                      }
                                                    else
                                                      {
                                                        t = u_18;
                                                        {
                                                          ATerm y_18 = t;
                                                          int z_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm a_19 = ATgetArgument(t, 0);
                                                                  ATerm b_19 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(z_18);
                                                              t = f_18;
                                                            }
                                                          else
                                                            {
                                                              t = y_18;
                                                              {
                                                                ATerm c_19 = t;
                                                                int d_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm e_19 = ATgetArgument(t, 0);
                                                                        ATerm f_19 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(d_19);
                                                                    t = f_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_19;
                                                                    {
                                                                      ATerm g_19 = t;
                                                                      int h_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm i_19 = ATgetArgument(t, 0);
                                                                              ATerm j_19 = ATgetArgument(t, 1);
                                                                              ATerm k_19 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(h_19);
                                                                          t = f_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_19;
                                                                          {
                                                                            ATerm l_19 = t;
                                                                            int m_19 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm n_19 = ATgetArgument(t, 0);
                                                                                    ATerm o_19 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_19);
                                                                                t = f_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_19;
                                                                                {
                                                                                  ATerm p_19 = t;
                                                                                  int q_19 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm s_19 = ATgetArgument(t, 0);
                                                                                          ATerm t_19 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(q_19);
                                                                                      t = f_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_19;
                                                                                      {
                                                                                        ATerm b_20 = t;
                                                                                        int k_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm l_20 = ATgetArgument(t, 0);
                                                                                                ATerm m_20 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(k_20);
                                                                                            t = f_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_20;
                                                                                            {
                                                                                              ATerm n_20 = t;
                                                                                              int o_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm p_20 = ATgetArgument(t, 0);
                                                                                                      ATerm q_20 = ATgetArgument(t, 1);
                                                                                                      ATerm r_20 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(o_20);
                                                                                                  t = f_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_20;
                                                                                                  {
                                                                                                    ATerm s_20 = t;
                                                                                                    int t_20 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm u_20 = ATgetArgument(t, 0);
                                                                                                            ATerm v_20 = ATgetArgument(t, 1);
                                                                                                            ATerm w_20 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(t_20);
                                                                                                        t = f_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = s_20;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm x_20 = ATgetArgument(t, 0);
                                                                                                            ATerm y_20 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = f_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              e_18 = ATgetArgument(t, 0);
                              f_18 = ATgetArgument(t, 1);
                              {
                                ATerm z_20 = t;
                                int a_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_18;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm b_21 = ATgetArgument(t, 0);
                                        ATerm c_21 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                    LocalPopChoice(a_21);
                                  }
                                else
                                  {
                                    t = z_20;
                                    t = f_18;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm d_21 = ATgetArgument(t, 0);
                                        ATerm e_21 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                {
                                  e_18 = ATgetArgument(t, 0);
                                  f_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_21 = t;
                                    int g_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = e_18;
                                        {
                                          ATerm h_21 = t;
                                          int i_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm j_21 = ATgetArgument(t, 0);
                                                  ATerm k_21 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(i_21);
                                              t = e_18;
                                            }
                                          else
                                            {
                                              t = h_21;
                                              {
                                                ATerm l_21 = t;
                                                int m_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm n_21 = ATgetArgument(t, 0);
                                                        ATerm o_21 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_21);
                                                    t = e_18;
                                                  }
                                                else
                                                  {
                                                    t = l_21;
                                                    {
                                                      ATerm p_21 = t;
                                                      int q_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm r_21 = ATgetArgument(t, 0);
                                                              ATerm s_21 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_21);
                                                          t = e_18;
                                                        }
                                                      else
                                                        {
                                                          t = p_21;
                                                          {
                                                            ATerm t_21 = t;
                                                            int u_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm v_21 = ATgetArgument(t, 0);
                                                                    ATerm w_21 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(u_21);
                                                                t = e_18;
                                                              }
                                                            else
                                                              {
                                                                t = t_21;
                                                                {
                                                                  ATerm x_21 = t;
                                                                  int y_21 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm z_21 = ATgetArgument(t, 0);
                                                                          ATerm a_22 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(y_21);
                                                                      t = e_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_21;
                                                                      {
                                                                        ATerm b_22 = t;
                                                                        int c_22 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm d_22 = ATgetArgument(t, 0);
                                                                                ATerm e_22 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(c_22);
                                                                            t = e_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_22;
                                                                            {
                                                                              ATerm f_22 = t;
                                                                              int g_22 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm h_22 = ATgetArgument(t, 0);
                                                                                      ATerm i_22 = ATgetArgument(t, 1);
                                                                                      ATerm j_22 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(g_22);
                                                                                  t = e_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_22;
                                                                                  {
                                                                                    ATerm k_22 = t;
                                                                                    int l_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm m_22 = ATgetArgument(t, 0);
                                                                                            ATerm n_22 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(l_22);
                                                                                        t = e_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_22;
                                                                                        {
                                                                                          ATerm o_22 = t;
                                                                                          int p_22 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm q_22 = ATgetArgument(t, 0);
                                                                                                  ATerm r_22 = ATgetArgument(t, 1);
                                                                                                  ATerm s_22 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(p_22);
                                                                                              t = e_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_22;
                                                                                              {
                                                                                                ATerm t_22 = t;
                                                                                                int u_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm v_22 = ATgetArgument(t, 0);
                                                                                                        ATerm w_22 = ATgetArgument(t, 1);
                                                                                                        ATerm x_22 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(u_22);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = t_22;
                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                      {
                                                                                                        ATerm y_22 = ATgetArgument(t, 0);
                                                                                                        ATerm z_22 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                        LocalPopChoice(g_21);
                                      }
                                    else
                                      {
                                        t = f_21;
                                        t = f_18;
                                        {
                                          ATerm a_23 = t;
                                          int b_23 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm c_23 = ATgetArgument(t, 0);
                                                  ATerm d_23 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(b_23);
                                              t = f_18;
                                            }
                                          else
                                            {
                                              t = a_23;
                                              {
                                                ATerm e_23 = t;
                                                int f_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm g_23 = ATgetArgument(t, 0);
                                                        ATerm h_23 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(f_23);
                                                    t = f_18;
                                                  }
                                                else
                                                  {
                                                    t = e_23;
                                                    {
                                                      ATerm i_23 = t;
                                                      int j_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm k_23 = ATgetArgument(t, 0);
                                                              ATerm l_23 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(j_23);
                                                          t = f_18;
                                                        }
                                                      else
                                                        {
                                                          t = i_23;
                                                          {
                                                            ATerm m_23 = t;
                                                            int n_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm o_23 = ATgetArgument(t, 0);
                                                                    ATerm p_23 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(n_23);
                                                                t = f_18;
                                                              }
                                                            else
                                                              {
                                                                t = m_23;
                                                                {
                                                                  ATerm q_23 = t;
                                                                  int r_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm s_23 = ATgetArgument(t, 0);
                                                                          ATerm t_23 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(r_23);
                                                                      t = f_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_23;
                                                                      {
                                                                        ATerm u_23 = t;
                                                                        int v_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm w_23 = ATgetArgument(t, 0);
                                                                                ATerm x_23 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(v_23);
                                                                            t = f_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_23;
                                                                            {
                                                                              ATerm y_23 = t;
                                                                              int z_23 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm a_24 = ATgetArgument(t, 0);
                                                                                      ATerm b_24 = ATgetArgument(t, 1);
                                                                                      ATerm c_24 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(z_23);
                                                                                  t = f_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_23;
                                                                                  {
                                                                                    ATerm d_24 = t;
                                                                                    int e_24 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm f_24 = ATgetArgument(t, 0);
                                                                                            ATerm g_24 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(e_24);
                                                                                        t = f_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = d_24;
                                                                                        {
                                                                                          ATerm h_24 = t;
                                                                                          int i_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm j_24 = ATgetArgument(t, 0);
                                                                                                  ATerm k_24 = ATgetArgument(t, 1);
                                                                                                  ATerm l_24 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(i_24);
                                                                                              t = f_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_24;
                                                                                              {
                                                                                                ATerm m_24 = t;
                                                                                                int n_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm o_24 = ATgetArgument(t, 0);
                                                                                                        ATerm p_24 = ATgetArgument(t, 1);
                                                                                                        ATerm q_24 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(n_24);
                                                                                                    t = f_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_24;
                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                      {
                                                                                                        ATerm r_24 = ATgetArgument(t, 0);
                                                                                                        ATerm s_24 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = f_18;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                    {
                                      e_18 = ATgetArgument(t, 0);
                                      f_18 = ATgetArgument(t, 1);
                                      {
                                        ATerm t_24 = t;
                                        int u_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = e_18;
                                            {
                                              ATerm v_24 = t;
                                              int w_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm x_24 = ATgetArgument(t, 0);
                                                      ATerm y_24 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(w_24);
                                                  t = e_18;
                                                }
                                              else
                                                {
                                                  t = v_24;
                                                  {
                                                    ATerm z_24 = t;
                                                    int a_25 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm b_25 = ATgetArgument(t, 0);
                                                            ATerm c_25 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(a_25);
                                                        t = e_18;
                                                      }
                                                    else
                                                      {
                                                        t = z_24;
                                                        {
                                                          ATerm d_25 = t;
                                                          int e_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm f_25 = ATgetArgument(t, 0);
                                                                  ATerm g_25 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(e_25);
                                                              t = e_18;
                                                            }
                                                          else
                                                            {
                                                              t = d_25;
                                                              {
                                                                ATerm h_25 = t;
                                                                int i_25 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm j_25 = ATgetArgument(t, 0);
                                                                        ATerm k_25 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(i_25);
                                                                    t = e_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = h_25;
                                                                    {
                                                                      ATerm l_25 = t;
                                                                      int m_25 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm n_25 = ATgetArgument(t, 0);
                                                                              ATerm o_25 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(m_25);
                                                                          t = e_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = l_25;
                                                                          {
                                                                            ATerm p_25 = t;
                                                                            int q_25 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm r_25 = ATgetArgument(t, 0);
                                                                                    ATerm s_25 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(q_25);
                                                                                t = e_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = p_25;
                                                                                {
                                                                                  ATerm t_25 = t;
                                                                                  int u_25 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm v_25 = ATgetArgument(t, 0);
                                                                                          ATerm w_25 = ATgetArgument(t, 1);
                                                                                          ATerm x_25 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(u_25);
                                                                                      t = e_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = t_25;
                                                                                      {
                                                                                        ATerm y_25 = t;
                                                                                        int z_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm a_26 = ATgetArgument(t, 0);
                                                                                                ATerm b_26 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(z_25);
                                                                                            t = e_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_25;
                                                                                            {
                                                                                              ATerm c_26 = t;
                                                                                              int d_26 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm e_26 = ATgetArgument(t, 0);
                                                                                                      ATerm f_26 = ATgetArgument(t, 1);
                                                                                                      ATerm g_26 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(d_26);
                                                                                                  t = e_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_26;
                                                                                                  {
                                                                                                    ATerm h_26 = t;
                                                                                                    int i_26 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm j_26 = ATgetArgument(t, 0);
                                                                                                            ATerm k_26 = ATgetArgument(t, 1);
                                                                                                            ATerm l_26 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(i_26);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_26;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm m_26 = ATgetArgument(t, 0);
                                                                                                            ATerm n_26 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                            LocalPopChoice(u_24);
                                          }
                                        else
                                          {
                                            t = t_24;
                                            t = f_18;
                                            {
                                              ATerm o_26 = t;
                                              int p_26 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm q_26 = ATgetArgument(t, 0);
                                                      ATerm r_26 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(p_26);
                                                  t = f_18;
                                                }
                                              else
                                                {
                                                  t = o_26;
                                                  {
                                                    ATerm s_26 = t;
                                                    int t_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm u_26 = ATgetArgument(t, 0);
                                                            ATerm v_26 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(t_26);
                                                        t = f_18;
                                                      }
                                                    else
                                                      {
                                                        t = s_26;
                                                        {
                                                          ATerm w_26 = t;
                                                          int x_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm y_26 = ATgetArgument(t, 0);
                                                                  ATerm z_26 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(x_26);
                                                              t = f_18;
                                                            }
                                                          else
                                                            {
                                                              t = w_26;
                                                              {
                                                                ATerm a_27 = t;
                                                                int b_27 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm c_27 = ATgetArgument(t, 0);
                                                                        ATerm d_27 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(b_27);
                                                                    t = f_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_27;
                                                                    {
                                                                      ATerm e_27 = t;
                                                                      int f_27 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm g_27 = ATgetArgument(t, 0);
                                                                              ATerm h_27 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(f_27);
                                                                          t = f_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = e_27;
                                                                          {
                                                                            ATerm i_27 = t;
                                                                            int j_27 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm k_27 = ATgetArgument(t, 0);
                                                                                    ATerm l_27 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(j_27);
                                                                                t = f_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = i_27;
                                                                                {
                                                                                  ATerm m_27 = t;
                                                                                  int n_27 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm o_27 = ATgetArgument(t, 0);
                                                                                          ATerm p_27 = ATgetArgument(t, 1);
                                                                                          ATerm q_27 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(n_27);
                                                                                      t = f_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = m_27;
                                                                                      {
                                                                                        ATerm r_27 = t;
                                                                                        int s_27 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm t_27 = ATgetArgument(t, 0);
                                                                                                ATerm u_27 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(s_27);
                                                                                            t = f_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = r_27;
                                                                                            {
                                                                                              ATerm v_27 = t;
                                                                                              int w_27 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm x_27 = ATgetArgument(t, 0);
                                                                                                      ATerm y_27 = ATgetArgument(t, 1);
                                                                                                      ATerm z_27 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(w_27);
                                                                                                  t = f_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_27;
                                                                                                  {
                                                                                                    ATerm a_28 = t;
                                                                                                    int b_28 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm c_28 = ATgetArgument(t, 0);
                                                                                                            ATerm d_28 = ATgetArgument(t, 1);
                                                                                                            ATerm e_28 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(b_28);
                                                                                                        t = f_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = a_28;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm f_28 = ATgetArgument(t, 0);
                                                                                                            ATerm g_28 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = f_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_AM_2))
                                        {
                                          e_18 = ATgetArgument(t, 0);
                                          f_18 = ATgetArgument(t, 1);
                                          {
                                            ATerm h_28 = t;
                                            int i_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = e_18;
                                                {
                                                  ATerm j_28 = t;
                                                  int k_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm l_28 = ATgetArgument(t, 0);
                                                          ATerm m_28 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(k_28);
                                                      t = e_18;
                                                    }
                                                  else
                                                    {
                                                      t = j_28;
                                                      {
                                                        ATerm n_28 = t;
                                                        int o_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm p_28 = ATgetArgument(t, 0);
                                                                ATerm q_28 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(o_28);
                                                            t = e_18;
                                                          }
                                                        else
                                                          {
                                                            t = n_28;
                                                            {
                                                              ATerm r_28 = t;
                                                              int s_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm t_28 = ATgetArgument(t, 0);
                                                                      ATerm u_28 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(s_28);
                                                                  t = e_18;
                                                                }
                                                              else
                                                                {
                                                                  t = r_28;
                                                                  {
                                                                    ATerm v_28 = t;
                                                                    int w_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm x_28 = ATgetArgument(t, 0);
                                                                            ATerm y_28 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(w_28);
                                                                        t = e_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_28;
                                                                        {
                                                                          ATerm z_28 = t;
                                                                          int a_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm b_29 = ATgetArgument(t, 0);
                                                                                  ATerm c_29 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(a_29);
                                                                              t = e_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_28;
                                                                              {
                                                                                ATerm d_29 = t;
                                                                                int e_29 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm f_29 = ATgetArgument(t, 0);
                                                                                        ATerm g_29 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(e_29);
                                                                                    t = e_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_29;
                                                                                    {
                                                                                      ATerm h_29 = t;
                                                                                      int i_29 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm j_29 = ATgetArgument(t, 0);
                                                                                              ATerm k_29 = ATgetArgument(t, 1);
                                                                                              ATerm l_29 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(i_29);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_29;
                                                                                          {
                                                                                            ATerm m_29 = t;
                                                                                            int n_29 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm o_29 = ATgetArgument(t, 0);
                                                                                                    ATerm p_29 = ATgetArgument(t, 1);
                                                                                                    ATerm q_29 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(n_29);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_29;
                                                                                                {
                                                                                                  ATerm r_29 = t;
                                                                                                  int s_29 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm t_29 = ATgetArgument(t, 0);
                                                                                                          ATerm u_29 = ATgetArgument(t, 1);
                                                                                                          ATerm v_29 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(s_29);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_29;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm w_29 = ATgetArgument(t, 0);
                                                                                                          ATerm x_29 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                LocalPopChoice(i_28);
                                              }
                                            else
                                              {
                                                t = h_28;
                                                t = f_18;
                                                {
                                                  ATerm y_29 = t;
                                                  int z_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm a_30 = ATgetArgument(t, 0);
                                                          ATerm b_30 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(z_29);
                                                      t = f_18;
                                                    }
                                                  else
                                                    {
                                                      t = y_29;
                                                      {
                                                        ATerm c_30 = t;
                                                        int d_30 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm e_30 = ATgetArgument(t, 0);
                                                                ATerm f_30 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(d_30);
                                                            t = f_18;
                                                          }
                                                        else
                                                          {
                                                            t = c_30;
                                                            {
                                                              ATerm g_30 = t;
                                                              int h_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm i_30 = ATgetArgument(t, 0);
                                                                      ATerm j_30 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(h_30);
                                                                  t = f_18;
                                                                }
                                                              else
                                                                {
                                                                  t = g_30;
                                                                  {
                                                                    ATerm k_30 = t;
                                                                    int l_30 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm m_30 = ATgetArgument(t, 0);
                                                                            ATerm n_30 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(l_30);
                                                                        t = f_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_30;
                                                                        {
                                                                          ATerm o_30 = t;
                                                                          int p_30 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm q_30 = ATgetArgument(t, 0);
                                                                                  ATerm r_30 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(p_30);
                                                                              t = f_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_30;
                                                                              {
                                                                                ATerm s_30 = t;
                                                                                int t_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm u_30 = ATgetArgument(t, 0);
                                                                                        ATerm v_30 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(t_30);
                                                                                    t = f_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_30;
                                                                                    {
                                                                                      ATerm w_30 = t;
                                                                                      int x_30 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm y_30 = ATgetArgument(t, 0);
                                                                                              ATerm z_30 = ATgetArgument(t, 1);
                                                                                              ATerm a_31 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(x_30);
                                                                                          t = f_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_30;
                                                                                          {
                                                                                            ATerm b_31 = t;
                                                                                            int c_31 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm d_31 = ATgetArgument(t, 0);
                                                                                                    ATerm e_31 = ATgetArgument(t, 1);
                                                                                                    ATerm f_31 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(c_31);
                                                                                                t = f_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_31;
                                                                                                {
                                                                                                  ATerm g_31 = t;
                                                                                                  int h_31 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm i_31 = ATgetArgument(t, 0);
                                                                                                          ATerm j_31 = ATgetArgument(t, 1);
                                                                                                          ATerm k_31 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(h_31);
                                                                                                      t = f_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_31;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm l_31 = ATgetArgument(t, 0);
                                                                                                          ATerm m_31 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = f_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_AM_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                            {
                                              e_18 = ATgetArgument(t, 0);
                                              f_18 = ATgetArgument(t, 1);
                                              g_18 = ATgetArgument(t, 2);
                                              {
                                                ATerm n_31 = t;
                                                int o_31 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = e_18;
                                                    {
                                                      ATerm p_31 = t;
                                                      int q_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm r_31 = ATgetArgument(t, 0);
                                                              ATerm s_31 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_31);
                                                          t = e_18;
                                                        }
                                                      else
                                                        {
                                                          t = p_31;
                                                          {
                                                            ATerm t_31 = t;
                                                            int u_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm v_31 = ATgetArgument(t, 0);
                                                                    ATerm w_31 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(u_31);
                                                                t = e_18;
                                                              }
                                                            else
                                                              {
                                                                t = t_31;
                                                                {
                                                                  ATerm x_31 = t;
                                                                  int y_31 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm z_31 = ATgetArgument(t, 0);
                                                                          ATerm a_32 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(y_31);
                                                                      t = e_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_31;
                                                                      {
                                                                        ATerm b_32 = t;
                                                                        int c_32 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm d_32 = ATgetArgument(t, 0);
                                                                                ATerm e_32 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(c_32);
                                                                            t = e_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_32;
                                                                            {
                                                                              ATerm f_32 = t;
                                                                              int g_32 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm h_32 = ATgetArgument(t, 0);
                                                                                      ATerm i_32 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(g_32);
                                                                                  t = e_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_32;
                                                                                  {
                                                                                    ATerm j_32 = t;
                                                                                    int k_32 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm l_32 = ATgetArgument(t, 0);
                                                                                            ATerm m_32 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(k_32);
                                                                                        t = e_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_32;
                                                                                        {
                                                                                          ATerm n_32 = t;
                                                                                          int o_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm p_32 = ATgetArgument(t, 0);
                                                                                                  ATerm q_32 = ATgetArgument(t, 1);
                                                                                                  ATerm r_32 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(o_32);
                                                                                              t = e_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_32;
                                                                                              {
                                                                                                ATerm s_32 = t;
                                                                                                int t_32 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm u_32 = ATgetArgument(t, 0);
                                                                                                        ATerm v_32 = ATgetArgument(t, 1);
                                                                                                        ATerm w_32 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(t_32);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = s_32;
                                                                                                    {
                                                                                                      ATerm x_32 = t;
                                                                                                      int y_32 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm z_32 = ATgetArgument(t, 0);
                                                                                                              ATerm a_33 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(y_32);
                                                                                                          t = e_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = x_32;
                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                            {
                                                                                                              ATerm b_33 = ATgetArgument(t, 0);
                                                                                                              ATerm c_33 = ATgetArgument(t, 1);
                                                                                                              ATerm d_33 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = e_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18, g_18);
                                                    LocalPopChoice(o_31);
                                                  }
                                                else
                                                  {
                                                    t = n_31;
                                                    {
                                                      ATerm e_33 = t;
                                                      int f_33 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = f_18;
                                                          {
                                                            ATerm g_33 = t;
                                                            int h_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Choice_2))
                                                                  {
                                                                    ATerm i_33 = ATgetArgument(t, 0);
                                                                    ATerm j_33 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(h_33);
                                                                t = f_18;
                                                              }
                                                            else
                                                              {
                                                                t = g_33;
                                                                {
                                                                  ATerm k_33 = t;
                                                                  int l_33 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          ATerm m_33 = ATgetArgument(t, 0);
                                                                          ATerm n_33 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(l_33);
                                                                      t = f_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_33;
                                                                      {
                                                                        ATerm o_33 = t;
                                                                        int p_33 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RChoice_2))
                                                                              {
                                                                                ATerm q_33 = ATgetArgument(t, 0);
                                                                                ATerm r_33 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(p_33);
                                                                            t = f_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_33;
                                                                            {
                                                                              ATerm s_33 = t;
                                                                              int t_33 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      ATerm u_33 = ATgetArgument(t, 0);
                                                                                      ATerm v_33 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(t_33);
                                                                                  t = f_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = s_33;
                                                                                  {
                                                                                    ATerm w_33 = t;
                                                                                    int x_33 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LGChoice_2))
                                                                                          {
                                                                                            ATerm y_33 = ATgetArgument(t, 0);
                                                                                            ATerm z_33 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(x_33);
                                                                                        t = f_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = w_33;
                                                                                        {
                                                                                          ATerm a_34 = t;
                                                                                          int b_34 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                                {
                                                                                                  ATerm c_34 = ATgetArgument(t, 0);
                                                                                                  ATerm d_34 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(b_34);
                                                                                              t = f_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = a_34;
                                                                                              {
                                                                                                ATerm e_34 = t;
                                                                                                int f_34 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                      {
                                                                                                        ATerm g_34 = ATgetArgument(t, 0);
                                                                                                        ATerm h_34 = ATgetArgument(t, 1);
                                                                                                        ATerm i_34 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(f_34);
                                                                                                    t = f_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_34;
                                                                                                    {
                                                                                                      ATerm j_34 = t;
                                                                                                      int k_34 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm l_34 = ATgetArgument(t, 0);
                                                                                                              ATerm m_34 = ATgetArgument(t, 1);
                                                                                                              ATerm n_34 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(k_34);
                                                                                                          t = f_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = j_34;
                                                                                                          {
                                                                                                            ATerm o_34 = t;
                                                                                                            int p_34 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm q_34 = ATgetArgument(t, 0);
                                                                                                                    ATerm r_34 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(p_34);
                                                                                                                t = f_18;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = o_34;
                                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                  {
                                                                                                                    ATerm s_34 = ATgetArgument(t, 0);
                                                                                                                    ATerm t_34 = ATgetArgument(t, 1);
                                                                                                                    ATerm u_34 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = f_18;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, e_18, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_18), g_18);
                                                          LocalPopChoice(f_33);
                                                        }
                                                      else
                                                        {
                                                          t = e_33;
                                                          t = g_18;
                                                          {
                                                            ATerm v_34 = t;
                                                            int w_34 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Choice_2))
                                                                  {
                                                                    ATerm x_34 = ATgetArgument(t, 0);
                                                                    ATerm y_34 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(w_34);
                                                                t = g_18;
                                                              }
                                                            else
                                                              {
                                                                t = v_34;
                                                                {
                                                                  ATerm z_34 = t;
                                                                  int a_35 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          ATerm b_35 = ATgetArgument(t, 0);
                                                                          ATerm c_35 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(a_35);
                                                                      t = g_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = z_34;
                                                                      {
                                                                        ATerm d_35 = t;
                                                                        int e_35 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RChoice_2))
                                                                              {
                                                                                ATerm f_35 = ATgetArgument(t, 0);
                                                                                ATerm g_35 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(e_35);
                                                                            t = g_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_35;
                                                                            {
                                                                              ATerm h_35 = t;
                                                                              int i_35 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      ATerm j_35 = ATgetArgument(t, 0);
                                                                                      ATerm k_35 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(i_35);
                                                                                  t = g_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_35;
                                                                                  {
                                                                                    ATerm l_35 = t;
                                                                                    int m_35 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LGChoice_2))
                                                                                          {
                                                                                            ATerm n_35 = ATgetArgument(t, 0);
                                                                                            ATerm o_35 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(m_35);
                                                                                        t = g_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_35;
                                                                                        {
                                                                                          ATerm p_35 = t;
                                                                                          int q_35 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                                {
                                                                                                  ATerm r_35 = ATgetArgument(t, 0);
                                                                                                  ATerm s_35 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(q_35);
                                                                                              t = g_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = p_35;
                                                                                              {
                                                                                                ATerm t_35 = t;
                                                                                                int u_35 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                      {
                                                                                                        ATerm v_35 = ATgetArgument(t, 0);
                                                                                                        ATerm w_35 = ATgetArgument(t, 1);
                                                                                                        ATerm x_35 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(u_35);
                                                                                                    t = g_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = t_35;
                                                                                                    {
                                                                                                      ATerm y_35 = t;
                                                                                                      int z_35 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm a_36 = ATgetArgument(t, 0);
                                                                                                              ATerm b_36 = ATgetArgument(t, 1);
                                                                                                              ATerm c_36 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(z_35);
                                                                                                          t = g_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = y_35;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm d_36 = ATgetArgument(t, 0);
                                                                                                              ATerm e_36 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = g_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, e_18, f_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_18));
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                {
                                                  e_18 = ATgetArgument(t, 0);
                                                  f_18 = ATgetArgument(t, 1);
                                                  g_18 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm f_36 = t;
                                                    int g_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = e_18;
                                                        {
                                                          ATerm h_36 = t;
                                                          int i_36 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm j_36 = ATgetArgument(t, 0);
                                                                  ATerm k_36 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(i_36);
                                                              t = e_18;
                                                            }
                                                          else
                                                            {
                                                              t = h_36;
                                                              {
                                                                ATerm l_36 = t;
                                                                int m_36 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm n_36 = ATgetArgument(t, 0);
                                                                        ATerm o_36 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(m_36);
                                                                    t = e_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_36;
                                                                    {
                                                                      ATerm p_36 = t;
                                                                      int q_36 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm r_36 = ATgetArgument(t, 0);
                                                                              ATerm s_36 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(q_36);
                                                                          t = e_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_36;
                                                                          {
                                                                            ATerm t_36 = t;
                                                                            int u_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm v_36 = ATgetArgument(t, 0);
                                                                                    ATerm w_36 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(u_36);
                                                                                t = e_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = t_36;
                                                                                {
                                                                                  ATerm x_36 = t;
                                                                                  int y_36 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm z_36 = ATgetArgument(t, 0);
                                                                                          ATerm a_37 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(y_36);
                                                                                      t = e_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_36;
                                                                                      {
                                                                                        ATerm b_37 = t;
                                                                                        int c_37 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm d_37 = ATgetArgument(t, 0);
                                                                                                ATerm e_37 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(c_37);
                                                                                            t = e_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_37;
                                                                                            {
                                                                                              ATerm f_37 = t;
                                                                                              int g_37 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm h_37 = ATgetArgument(t, 0);
                                                                                                      ATerm i_37 = ATgetArgument(t, 1);
                                                                                                      ATerm j_37 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(g_37);
                                                                                                  t = e_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = f_37;
                                                                                                  {
                                                                                                    ATerm k_37 = t;
                                                                                                    int l_37 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm m_37 = ATgetArgument(t, 0);
                                                                                                            ATerm n_37 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(l_37);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_37;
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm o_37 = ATgetArgument(t, 0);
                                                                                                            ATerm p_37 = ATgetArgument(t, 1);
                                                                                                            ATerm q_37 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18, g_18);
                                                        LocalPopChoice(g_36);
                                                      }
                                                    else
                                                      {
                                                        t = f_36;
                                                        {
                                                          ATerm r_37 = t;
                                                          int s_37 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = f_18;
                                                              {
                                                                ATerm t_37 = t;
                                                                int u_37 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm v_37 = ATgetArgument(t, 0);
                                                                        ATerm w_37 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(u_37);
                                                                    t = f_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = t_37;
                                                                    {
                                                                      ATerm x_37 = t;
                                                                      int y_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm z_37 = ATgetArgument(t, 0);
                                                                              ATerm a_38 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(y_37);
                                                                          t = f_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_37;
                                                                          {
                                                                            ATerm b_38 = t;
                                                                            int c_38 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm d_38 = ATgetArgument(t, 0);
                                                                                    ATerm e_38 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(c_38);
                                                                                t = f_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = b_38;
                                                                                {
                                                                                  ATerm f_38 = t;
                                                                                  int g_38 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm h_38 = ATgetArgument(t, 0);
                                                                                          ATerm i_38 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(g_38);
                                                                                      t = f_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = f_38;
                                                                                      {
                                                                                        ATerm j_38 = t;
                                                                                        int k_38 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm l_38 = ATgetArgument(t, 0);
                                                                                                ATerm m_38 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(k_38);
                                                                                            t = f_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = j_38;
                                                                                            {
                                                                                              ATerm n_38 = t;
                                                                                              int o_38 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm p_38 = ATgetArgument(t, 0);
                                                                                                      ATerm q_38 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(o_38);
                                                                                                  t = f_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = n_38;
                                                                                                  {
                                                                                                    ATerm r_38 = t;
                                                                                                    int s_38 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm t_38 = ATgetArgument(t, 0);
                                                                                                            ATerm u_38 = ATgetArgument(t, 1);
                                                                                                            ATerm v_38 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(s_38);
                                                                                                        t = f_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = r_38;
                                                                                                        {
                                                                                                          ATerm w_38 = t;
                                                                                                          int x_38 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm y_38 = ATgetArgument(t, 0);
                                                                                                                  ATerm z_38 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(x_38);
                                                                                                              t = f_18;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = w_38;
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm a_39 = ATgetArgument(t, 0);
                                                                                                                  ATerm b_39 = ATgetArgument(t, 1);
                                                                                                                  ATerm c_39 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = f_18;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, e_18, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_18), g_18);
                                                              LocalPopChoice(s_37);
                                                            }
                                                          else
                                                            {
                                                              t = r_37;
                                                              t = g_18;
                                                              {
                                                                ATerm d_39 = t;
                                                                int e_39 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm f_39 = ATgetArgument(t, 0);
                                                                        ATerm g_39 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(e_39);
                                                                    t = g_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_39;
                                                                    {
                                                                      ATerm h_39 = t;
                                                                      int i_39 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm j_39 = ATgetArgument(t, 0);
                                                                              ATerm k_39 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(i_39);
                                                                          t = g_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_39;
                                                                          {
                                                                            ATerm l_39 = t;
                                                                            int m_39 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm n_39 = ATgetArgument(t, 0);
                                                                                    ATerm o_39 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_39);
                                                                                t = g_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_39;
                                                                                {
                                                                                  ATerm p_39 = t;
                                                                                  int q_39 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm r_39 = ATgetArgument(t, 0);
                                                                                          ATerm s_39 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(q_39);
                                                                                      t = g_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_39;
                                                                                      {
                                                                                        ATerm t_39 = t;
                                                                                        int u_39 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm v_39 = ATgetArgument(t, 0);
                                                                                                ATerm w_39 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(u_39);
                                                                                            t = g_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_39;
                                                                                            {
                                                                                              ATerm x_39 = t;
                                                                                              int y_39 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm z_39 = ATgetArgument(t, 0);
                                                                                                      ATerm a_40 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(y_39);
                                                                                                  t = g_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = x_39;
                                                                                                  {
                                                                                                    ATerm b_40 = t;
                                                                                                    int c_40 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm d_40 = ATgetArgument(t, 0);
                                                                                                            ATerm e_40 = ATgetArgument(t, 1);
                                                                                                            ATerm f_40 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(c_40);
                                                                                                        t = g_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_40;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm g_40 = ATgetArgument(t, 0);
                                                                                                            ATerm h_40 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = g_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, e_18, f_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_18));
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Seq_2))
                                                    {
                                                      e_18 = ATgetArgument(t, 0);
                                                      f_18 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm i_40 = t;
                                                        int j_40 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = e_18;
                                                            {
                                                              ATerm k_40 = t;
                                                              int l_40 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm m_40 = ATgetArgument(t, 0);
                                                                      ATerm n_40 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(l_40);
                                                                  t = e_18;
                                                                }
                                                              else
                                                                {
                                                                  t = k_40;
                                                                  {
                                                                    ATerm o_40 = t;
                                                                    int p_40 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm q_40 = ATgetArgument(t, 0);
                                                                            ATerm r_40 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(p_40);
                                                                        t = e_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_40;
                                                                        {
                                                                          ATerm s_40 = t;
                                                                          int t_40 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm u_40 = ATgetArgument(t, 0);
                                                                                  ATerm v_40 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(t_40);
                                                                              t = e_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_40;
                                                                              {
                                                                                ATerm w_40 = t;
                                                                                int x_40 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm y_40 = ATgetArgument(t, 0);
                                                                                        ATerm z_40 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(x_40);
                                                                                    t = e_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_40;
                                                                                    {
                                                                                      ATerm a_41 = t;
                                                                                      int b_41 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm c_41 = ATgetArgument(t, 0);
                                                                                              ATerm d_41 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(b_41);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_41;
                                                                                          {
                                                                                            ATerm e_41 = t;
                                                                                            int f_41 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm g_41 = ATgetArgument(t, 0);
                                                                                                    ATerm h_41 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(f_41);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_41;
                                                                                                {
                                                                                                  ATerm i_41 = t;
                                                                                                  int j_41 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm k_41 = ATgetArgument(t, 0);
                                                                                                          ATerm l_41 = ATgetArgument(t, 1);
                                                                                                          ATerm m_41 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(j_41);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_41;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm n_41 = ATgetArgument(t, 0);
                                                                                                          ATerm o_41 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                            LocalPopChoice(j_40);
                                                          }
                                                        else
                                                          {
                                                            t = i_40;
                                                            t = f_18;
                                                            {
                                                              ATerm p_41 = t;
                                                              int q_41 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm r_41 = ATgetArgument(t, 0);
                                                                      ATerm s_41 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(q_41);
                                                                  t = f_18;
                                                                }
                                                              else
                                                                {
                                                                  t = p_41;
                                                                  {
                                                                    ATerm t_41 = t;
                                                                    int u_41 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm v_41 = ATgetArgument(t, 0);
                                                                            ATerm w_41 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(u_41);
                                                                        t = f_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_41;
                                                                        {
                                                                          ATerm x_41 = t;
                                                                          int y_41 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm z_41 = ATgetArgument(t, 0);
                                                                                  ATerm a_42 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(y_41);
                                                                              t = f_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_41;
                                                                              {
                                                                                ATerm b_42 = t;
                                                                                int c_42 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm d_42 = ATgetArgument(t, 0);
                                                                                        ATerm e_42 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(c_42);
                                                                                    t = f_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_42;
                                                                                    {
                                                                                      ATerm f_42 = t;
                                                                                      int g_42 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm h_42 = ATgetArgument(t, 0);
                                                                                              ATerm i_42 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(g_42);
                                                                                          t = f_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_42;
                                                                                          {
                                                                                            ATerm j_42 = t;
                                                                                            int k_42 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm l_42 = ATgetArgument(t, 0);
                                                                                                    ATerm m_42 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(k_42);
                                                                                                t = f_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_42;
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm n_42 = ATgetArgument(t, 0);
                                                                                                    ATerm o_42 = ATgetArgument(t, 1);
                                                                                                    ATerm p_42 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                t = f_18;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_18));
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          e_18 = ATgetArgument(t, 0);
                                                          f_18 = ATgetArgument(t, 1);
                                                          t = e_18;
                                                          {
                                                            ATerm q_42 = t;
                                                            int r_42 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm s_42 = ATgetArgument(t, 0);
                                                                    ATerm t_42 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(r_42);
                                                                t = e_18;
                                                              }
                                                            else
                                                              {
                                                                t = q_42;
                                                                {
                                                                  ATerm u_42 = t;
                                                                  int v_42 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm w_42 = ATgetArgument(t, 0);
                                                                          ATerm x_42 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(v_42);
                                                                      t = e_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_42;
                                                                      {
                                                                        ATerm y_42 = t;
                                                                        int z_42 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm a_43 = ATgetArgument(t, 0);
                                                                                ATerm b_43 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(z_42);
                                                                            t = e_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = y_42;
                                                                            {
                                                                              ATerm c_43 = t;
                                                                              int d_43 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm e_43 = ATgetArgument(t, 0);
                                                                                      ATerm f_43 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(d_43);
                                                                                  t = e_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = c_43;
                                                                                  {
                                                                                    ATerm g_43 = t;
                                                                                    int h_43 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm i_43 = ATgetArgument(t, 0);
                                                                                            ATerm j_43 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(h_43);
                                                                                        t = e_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_43;
                                                                                        {
                                                                                          ATerm k_43 = t;
                                                                                          int l_43 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm m_43 = ATgetArgument(t, 0);
                                                                                                  ATerm n_43 = ATgetArgument(t, 1);
                                                                                                  ATerm o_43 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(l_43);
                                                                                              t = e_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = k_43;
                                                                                              if(match_cons(t, sym_Choice_2))
                                                                                                {
                                                                                                  ATerm p_43 = ATgetArgument(t, 0);
                                                                                                  ATerm q_43 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = e_18;
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_LChoice_2))
                                                            {
                                                              e_18 = ATgetArgument(t, 0);
                                                              f_18 = ATgetArgument(t, 1);
                                                              t = e_18;
                                                              {
                                                                ATerm r_43 = t;
                                                                int s_43 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm t_43 = ATgetArgument(t, 0);
                                                                        ATerm u_43 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(s_43);
                                                                    t = e_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_43;
                                                                    {
                                                                      ATerm v_43 = t;
                                                                      int w_43 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm x_43 = ATgetArgument(t, 0);
                                                                              ATerm y_43 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(w_43);
                                                                          t = e_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = v_43;
                                                                          {
                                                                            ATerm z_43 = t;
                                                                            int a_44 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm b_44 = ATgetArgument(t, 0);
                                                                                    ATerm c_44 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(a_44);
                                                                                t = e_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = z_43;
                                                                                {
                                                                                  ATerm d_44 = t;
                                                                                  int e_44 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm f_44 = ATgetArgument(t, 0);
                                                                                          ATerm g_44 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(e_44);
                                                                                      t = e_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_44;
                                                                                      {
                                                                                        ATerm h_44 = t;
                                                                                        int i_44 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm j_44 = ATgetArgument(t, 0);
                                                                                                ATerm k_44 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(i_44);
                                                                                            t = e_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_44;
                                                                                            {
                                                                                              ATerm l_44 = t;
                                                                                              int m_44 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm n_44 = ATgetArgument(t, 0);
                                                                                                      ATerm o_44 = ATgetArgument(t, 1);
                                                                                                      ATerm p_44 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(m_44);
                                                                                                  t = e_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = l_44;
                                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                                    {
                                                                                                      ATerm q_44 = ATgetArgument(t, 0);
                                                                                                      ATerm r_44 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = e_18;
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  e_18 = ATgetArgument(t, 0);
                                                                  f_18 = ATgetArgument(t, 1);
                                                                  t = e_18;
                                                                  {
                                                                    ATerm s_44 = t;
                                                                    int t_44 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm u_44 = ATgetArgument(t, 0);
                                                                            ATerm v_44 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(t_44);
                                                                        t = e_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_44;
                                                                        {
                                                                          ATerm w_44 = t;
                                                                          int x_44 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm y_44 = ATgetArgument(t, 0);
                                                                                  ATerm z_44 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(x_44);
                                                                              t = e_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_44;
                                                                              {
                                                                                ATerm a_45 = t;
                                                                                int b_45 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm c_45 = ATgetArgument(t, 0);
                                                                                        ATerm d_45 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(b_45);
                                                                                    t = e_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_45;
                                                                                    {
                                                                                      ATerm e_45 = t;
                                                                                      int f_45 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm g_45 = ATgetArgument(t, 0);
                                                                                              ATerm h_45 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(f_45);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_45;
                                                                                          {
                                                                                            ATerm i_45 = t;
                                                                                            int j_45 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm k_45 = ATgetArgument(t, 0);
                                                                                                    ATerm l_45 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(j_45);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_45;
                                                                                                {
                                                                                                  ATerm m_45 = t;
                                                                                                  int n_45 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm o_45 = ATgetArgument(t, 0);
                                                                                                          ATerm p_45 = ATgetArgument(t, 1);
                                                                                                          ATerm q_45 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(n_45);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_45;
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm r_45 = ATgetArgument(t, 0);
                                                                                                          ATerm s_45 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_GChoice_2))
                                                                    {
                                                                      e_18 = ATgetArgument(t, 0);
                                                                      f_18 = ATgetArgument(t, 1);
                                                                      t = e_18;
                                                                      {
                                                                        ATerm t_45 = t;
                                                                        int u_45 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_Choice_2))
                                                                              {
                                                                                ATerm v_45 = ATgetArgument(t, 0);
                                                                                ATerm w_45 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(u_45);
                                                                            t = e_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_45;
                                                                            {
                                                                              ATerm x_45 = t;
                                                                              int y_45 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                    {
                                                                                      ATerm z_45 = ATgetArgument(t, 0);
                                                                                      ATerm a_46 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(y_45);
                                                                                  t = e_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = x_45;
                                                                                  {
                                                                                    ATerm b_46 = t;
                                                                                    int c_46 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                          {
                                                                                            ATerm d_46 = ATgetArgument(t, 0);
                                                                                            ATerm e_46 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(c_46);
                                                                                        t = e_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_46;
                                                                                        {
                                                                                          ATerm f_46 = t;
                                                                                          int g_46 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm h_46 = ATgetArgument(t, 0);
                                                                                                  ATerm i_46 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(g_46);
                                                                                              t = e_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = f_46;
                                                                                              {
                                                                                                ATerm j_46 = t;
                                                                                                int k_46 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm l_46 = ATgetArgument(t, 0);
                                                                                                        ATerm m_46 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(k_46);
                                                                                                    t = e_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = j_46;
                                                                                                    {
                                                                                                      ATerm n_46 = t;
                                                                                                      int o_46 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm p_46 = ATgetArgument(t, 0);
                                                                                                              ATerm q_46 = ATgetArgument(t, 1);
                                                                                                              ATerm r_46 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(o_46);
                                                                                                          t = e_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_46;
                                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                                            {
                                                                                                              ATerm s_46 = ATgetArgument(t, 0);
                                                                                                              ATerm t_46 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = e_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                      t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          e_18 = ATgetArgument(t, 0);
                                                                          f_18 = ATgetArgument(t, 1);
                                                                          t = e_18;
                                                                          {
                                                                            ATerm u_46 = t;
                                                                            int v_46 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_Choice_2))
                                                                                  {
                                                                                    ATerm w_46 = ATgetArgument(t, 0);
                                                                                    ATerm x_46 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(v_46);
                                                                                t = e_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_46;
                                                                                {
                                                                                  ATerm y_46 = t;
                                                                                  int z_46 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          ATerm a_47 = ATgetArgument(t, 0);
                                                                                          ATerm b_47 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(z_46);
                                                                                      t = e_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_46;
                                                                                      {
                                                                                        ATerm c_47 = t;
                                                                                        int d_47 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RChoice_2))
                                                                                              {
                                                                                                ATerm e_47 = ATgetArgument(t, 0);
                                                                                                ATerm f_47 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(d_47);
                                                                                            t = e_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_47;
                                                                                            {
                                                                                              ATerm g_47 = t;
                                                                                              int h_47 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                                    {
                                                                                                      ATerm i_47 = ATgetArgument(t, 0);
                                                                                                      ATerm j_47 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(h_47);
                                                                                                  t = e_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = g_47;
                                                                                                  {
                                                                                                    ATerm k_47 = t;
                                                                                                    int l_47 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm m_47 = ATgetArgument(t, 0);
                                                                                                            ATerm n_47 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(l_47);
                                                                                                        t = e_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = k_47;
                                                                                                        {
                                                                                                          ATerm o_47 = t;
                                                                                                          int p_47 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm q_47 = ATgetArgument(t, 0);
                                                                                                                  ATerm r_47 = ATgetArgument(t, 1);
                                                                                                                  ATerm s_47 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(p_47);
                                                                                                              t = e_18;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = o_47;
                                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                                {
                                                                                                                  ATerm t_47 = ATgetArgument(t, 0);
                                                                                                                  ATerm u_47 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = e_18;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                          t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                            {
                                                                              e_18 = ATgetArgument(t, 0);
                                                                              f_18 = ATgetArgument(t, 1);
                                                                              t = e_18;
                                                                              {
                                                                                ATerm v_47 = t;
                                                                                int w_47 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                      {
                                                                                        ATerm x_47 = ATgetArgument(t, 0);
                                                                                        ATerm y_47 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(w_47);
                                                                                    t = e_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_47;
                                                                                    {
                                                                                      ATerm z_47 = t;
                                                                                      int a_48 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                            {
                                                                                              ATerm b_48 = ATgetArgument(t, 0);
                                                                                              ATerm c_48 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(a_48);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_47;
                                                                                          {
                                                                                            ATerm d_48 = t;
                                                                                            int e_48 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                  {
                                                                                                    ATerm f_48 = ATgetArgument(t, 0);
                                                                                                    ATerm g_48 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(e_48);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_48;
                                                                                                {
                                                                                                  ATerm h_48 = t;
                                                                                                  int i_48 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                                        {
                                                                                                          ATerm j_48 = ATgetArgument(t, 0);
                                                                                                          ATerm k_48 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(i_48);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_48;
                                                                                                      {
                                                                                                        ATerm l_48 = t;
                                                                                                        int m_48 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                                              {
                                                                                                                ATerm n_48 = ATgetArgument(t, 0);
                                                                                                                ATerm o_48 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(m_48);
                                                                                                            t = e_18;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_48;
                                                                                                            {
                                                                                                              ATerm p_48 = t;
                                                                                                              int q_48 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                    {
                                                                                                                      ATerm r_48 = ATgetArgument(t, 0);
                                                                                                                      ATerm s_48 = ATgetArgument(t, 1);
                                                                                                                      ATerm t_48 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(q_48);
                                                                                                                  t = e_18;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_48;
                                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm u_48 = ATgetArgument(t, 0);
                                                                                                                      ATerm v_48 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = e_18;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                              t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                {
                                                                                  e_18 = ATgetArgument(t, 0);
                                                                                  f_18 = ATgetArgument(t, 1);
                                                                                  g_18 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              {
                                                                                ATerm w_48 = t;
                                                                                int x_48 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = e_18;
                                                                                    {
                                                                                      ATerm y_48 = t;
                                                                                      int z_48 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_Choice_2))
                                                                                            {
                                                                                              ATerm a_49 = ATgetArgument(t, 0);
                                                                                              ATerm b_49 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(z_48);
                                                                                          t = e_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_48;
                                                                                          {
                                                                                            ATerm c_49 = t;
                                                                                            int d_49 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                                  {
                                                                                                    ATerm e_49 = ATgetArgument(t, 0);
                                                                                                    ATerm f_49 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(d_49);
                                                                                                t = e_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_49;
                                                                                                {
                                                                                                  ATerm g_49 = t;
                                                                                                  int h_49 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm i_49 = ATgetArgument(t, 0);
                                                                                                          ATerm j_49 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(h_49);
                                                                                                      t = e_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_49;
                                                                                                      {
                                                                                                        ATerm k_49 = t;
                                                                                                        int l_49 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                                              {
                                                                                                                ATerm m_49 = ATgetArgument(t, 0);
                                                                                                                ATerm n_49 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(l_49);
                                                                                                            t = e_18;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_49;
                                                                                                            {
                                                                                                              ATerm o_49 = t;
                                                                                                              int p_49 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm q_49 = ATgetArgument(t, 0);
                                                                                                                      ATerm r_49 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(p_49);
                                                                                                                  t = e_18;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = o_49;
                                                                                                                  {
                                                                                                                    ATerm s_49 = t;
                                                                                                                    int t_49 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                                          {
                                                                                                                            ATerm u_49 = ATgetArgument(t, 0);
                                                                                                                            ATerm v_49 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(t_49);
                                                                                                                        t = e_18;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_49;
                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                          {
                                                                                                                            ATerm w_49 = ATgetArgument(t, 0);
                                                                                                                            ATerm x_49 = ATgetArgument(t, 1);
                                                                                                                            ATerm y_49 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = e_18;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_18), f_18, g_18);
                                                                                    LocalPopChoice(x_48);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_48;
                                                                                    t = f_18;
                                                                                    {
                                                                                      ATerm z_49 = t;
                                                                                      int a_50 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_Choice_2))
                                                                                            {
                                                                                              ATerm b_50 = ATgetArgument(t, 0);
                                                                                              ATerm c_50 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(a_50);
                                                                                          t = f_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_49;
                                                                                          {
                                                                                            ATerm d_50 = t;
                                                                                            int e_50 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                                  {
                                                                                                    ATerm f_50 = ATgetArgument(t, 0);
                                                                                                    ATerm g_50 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(e_50);
                                                                                                t = f_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_50;
                                                                                                {
                                                                                                  ATerm h_50 = t;
                                                                                                  int i_50 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm j_50 = ATgetArgument(t, 0);
                                                                                                          ATerm k_50 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(i_50);
                                                                                                      t = f_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_50;
                                                                                                      {
                                                                                                        ATerm l_50 = t;
                                                                                                        int m_50 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                                              {
                                                                                                                ATerm n_50 = ATgetArgument(t, 0);
                                                                                                                ATerm o_50 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(m_50);
                                                                                                            t = f_18;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_50;
                                                                                                            {
                                                                                                              ATerm p_50 = t;
                                                                                                              int q_50 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm r_50 = ATgetArgument(t, 0);
                                                                                                                      ATerm s_50 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(q_50);
                                                                                                                  t = f_18;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_50;
                                                                                                                  {
                                                                                                                    ATerm t_50 = t;
                                                                                                                    int u_50 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                                          {
                                                                                                                            ATerm v_50 = ATgetArgument(t, 0);
                                                                                                                            ATerm w_50 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(u_50);
                                                                                                                        t = f_18;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = t_50;
                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                          {
                                                                                                                            ATerm x_50 = ATgetArgument(t, 0);
                                                                                                                            ATerm y_50 = ATgetArgument(t, 1);
                                                                                                                            ATerm z_50 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = f_18;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_18, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_18), g_18);
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm r_19 = NULL;
  r_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_19), term_a_51);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_a_51;
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(c_51);
      }
    else
      {
        t = b_51;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  if(match_string(t, "-a"))
    {
      t = u_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = u_19;
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  t = term_f_51;
  t = set_config_0_0(t);
  t = v_19;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_g_51;
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
  ATerm w_19 = NULL;
  w_19 = t;
  t = term_i_51;
  t = set_config_0_0(t);
  t = w_19;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  if(match_string(t, "-I"))
    {
      t = x_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = x_19;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_51, (ATerm) ATinsert(ATempty, y_19));
  t = extend_config_0_0(t);
  t = y_19;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_k_51;
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
  ATerm z_19 = NULL;
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_51, z_19);
  t = set_config_0_0(t);
  t = z_19;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_m_51;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_0, c_0, d_0, t);
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
      {
        ATerm p_51 = t;
        int q_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_0, f_0, g_0, t);
            LocalPopChoice(q_51);
          }
        else
          {
            t = p_51;
            {
              ATerm r_51 = t;
              int s_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(h_0, i_0, j_0, t);
                  LocalPopChoice(s_51);
                }
              else
                {
                  t = r_51;
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
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
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
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20 = NULL;
      a_20 = t;
      t = term_d_51;
      t = get_config_0_0(t);
      t = a_20;
      LocalPopChoice(w_51);
    }
  else
    {
      t = v_51;
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
  t = term_x_51;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_y_51;
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
  ATerm c_20 = NULL;
  if(match_cons(t, sym_Parenthetical_1))
    {
      c_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, c_20);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  t = term_h_51;
  t = get_config_0_0(t);
  t = d_20;
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
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  e_20 = t;
  t = SSLgetAnnotations(h_20);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_20 = ATgetFirst((ATermList) t);
      g_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Comment_2, e_20, (ATerm) ATinsert(CheckATermList(g_20), f_20));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_z_51;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = term_l_51;
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_52);
      }
    else
      {
        t = a_52;
        t = term_c_52;
      }
  }
  t = xtc_find_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_20), j_20), term_l_51);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_d_52;
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
