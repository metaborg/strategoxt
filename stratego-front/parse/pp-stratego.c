#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
static void init_module_constructors (void)
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
ATerm term_a_52;
ATerm term_z_51;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_u_50;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym__2, term_x_50, term_y_50);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym__2, term_b_51, term_y_50);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   use pptable in file instead of Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm StrategoParenthesize_0_0 (ATerm t);
ATerm innermost_1_0 (ATerm j_113 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm z_107 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_108 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm l_3 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm g_3 (ATerm), ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm t);
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  z_17 = t;
  if(match_cons(t, sym_AnnoCong_2))
    {
      a_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
      {
        ATerm z_0 = t;
        int a_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_18;
            {
              ATerm b_1 = t;
              int c_1 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm d_1 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_1);
                  t = a_18;
                }
              else
                {
                  t = b_1;
                  {
                    ATerm e_1 = t;
                    int f_1 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            ATerm g_1 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_1);
                        t = a_18;
                      }
                    else
                      {
                        t = e_1;
                        {
                          ATerm h_1 = t;
                          int i_1 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_BA_2))
                                {
                                  ATerm j_1 = ATgetArgument(t, 0);
                                  ATerm k_1 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(i_1);
                              t = a_18;
                            }
                          else
                            {
                              t = h_1;
                              {
                                ATerm l_1 = t;
                                int m_1 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        ATerm n_1 = ATgetArgument(t, 0);
                                        ATerm o_1 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(m_1);
                                    t = a_18;
                                  }
                                else
                                  {
                                    t = l_1;
                                    {
                                      ATerm p_1 = t;
                                      int q_1 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              ATerm r_1 = ATgetArgument(t, 0);
                                              ATerm s_1 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(q_1);
                                          t = a_18;
                                        }
                                      else
                                        {
                                          t = p_1;
                                          {
                                            ATerm t_1 = t;
                                            int u_1 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RChoice_2))
                                                  {
                                                    ATerm v_1 = ATgetArgument(t, 0);
                                                    ATerm w_1 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(u_1);
                                                t = a_18;
                                              }
                                            else
                                              {
                                                t = t_1;
                                                {
                                                  ATerm x_1 = t;
                                                  int y_1 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm z_1 = ATgetArgument(t, 0);
                                                          ATerm a_2 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(y_1);
                                                      t = a_18;
                                                    }
                                                  else
                                                    {
                                                      t = x_1;
                                                      {
                                                        ATerm b_2 = t;
                                                        int c_2 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LGChoice_2))
                                                              {
                                                                ATerm d_2 = ATgetArgument(t, 0);
                                                                ATerm e_2 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(c_2);
                                                            t = a_18;
                                                          }
                                                        else
                                                          {
                                                            t = b_2;
                                                            {
                                                              ATerm f_2 = t;
                                                              int g_2 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      ATerm h_2 = ATgetArgument(t, 0);
                                                                      ATerm i_2 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(g_2);
                                                                  t = a_18;
                                                                }
                                                              else
                                                                {
                                                                  t = f_2;
                                                                  {
                                                                    ATerm j_2 = t;
                                                                    int k_2 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                          {
                                                                            ATerm l_2 = ATgetArgument(t, 0);
                                                                            ATerm m_2 = ATgetArgument(t, 1);
                                                                            ATerm n_2 = ATgetArgument(t, 2);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(k_2);
                                                                        t = a_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_2;
                                                                        {
                                                                          ATerm o_2 = t;
                                                                          int p_2 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                {
                                                                                  ATerm q_2 = ATgetArgument(t, 0);
                                                                                  ATerm r_2 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(p_2);
                                                                              t = a_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_2;
                                                                              {
                                                                                ATerm s_2 = t;
                                                                                int t_2 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                      {
                                                                                        ATerm u_2 = ATgetArgument(t, 0);
                                                                                        ATerm v_2 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(t_2);
                                                                                    t = a_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_2;
                                                                                    {
                                                                                      ATerm w_2 = t;
                                                                                      int x_2 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              ATerm y_2 = ATgetArgument(t, 0);
                                                                                              ATerm z_2 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(x_2);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = w_2;
                                                                                          {
                                                                                            ATerm a_3 = t;
                                                                                            int b_3 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm c_3 = ATgetArgument(t, 0);
                                                                                                    ATerm d_3 = ATgetArgument(t, 1);
                                                                                                    ATerm e_3 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(b_3);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_3;
                                                                                                {
                                                                                                  ATerm f_3 = t;
                                                                                                  int m_3 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm n_3 = ATgetArgument(t, 0);
                                                                                                          ATerm o_3 = ATgetArgument(t, 1);
                                                                                                          ATerm p_3 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(m_3);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = f_3;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm q_3 = ATgetArgument(t, 0);
                                                                                                          ATerm r_3 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
            LocalPopChoice(a_1);
          }
        else
          {
            t = z_0;
            t = b_18;
            {
              ATerm s_3 = t;
              int t_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm u_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_3);
                  t = b_18;
                }
              else
                {
                  t = s_3;
                  {
                    ATerm v_3 = t;
                    int w_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            ATerm x_3 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_3);
                        t = b_18;
                      }
                    else
                      {
                        t = v_3;
                        {
                          ATerm y_3 = t;
                          int z_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_BA_2))
                                {
                                  ATerm a_4 = ATgetArgument(t, 0);
                                  ATerm b_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_3);
                              t = b_18;
                            }
                          else
                            {
                              t = y_3;
                              {
                                ATerm c_4 = t;
                                int d_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        ATerm e_4 = ATgetArgument(t, 0);
                                        ATerm f_4 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(d_4);
                                    t = b_18;
                                  }
                                else
                                  {
                                    t = c_4;
                                    {
                                      ATerm g_4 = t;
                                      int h_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              ATerm i_4 = ATgetArgument(t, 0);
                                              ATerm j_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_4);
                                          t = b_18;
                                        }
                                      else
                                        {
                                          t = g_4;
                                          {
                                            ATerm k_4 = t;
                                            int l_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RChoice_2))
                                                  {
                                                    ATerm m_4 = ATgetArgument(t, 0);
                                                    ATerm n_4 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(l_4);
                                                t = b_18;
                                              }
                                            else
                                              {
                                                t = k_4;
                                                {
                                                  ATerm o_4 = t;
                                                  int p_4 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm q_4 = ATgetArgument(t, 0);
                                                          ATerm r_4 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(p_4);
                                                      t = b_18;
                                                    }
                                                  else
                                                    {
                                                      t = o_4;
                                                      {
                                                        ATerm s_4 = t;
                                                        int t_4 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LGChoice_2))
                                                              {
                                                                ATerm u_4 = ATgetArgument(t, 0);
                                                                ATerm v_4 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(t_4);
                                                            t = b_18;
                                                          }
                                                        else
                                                          {
                                                            t = s_4;
                                                            {
                                                              ATerm w_4 = t;
                                                              int x_4 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      ATerm y_4 = ATgetArgument(t, 0);
                                                                      ATerm z_4 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(x_4);
                                                                  t = b_18;
                                                                }
                                                              else
                                                                {
                                                                  t = w_4;
                                                                  {
                                                                    ATerm a_5 = t;
                                                                    int b_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                          {
                                                                            ATerm c_5 = ATgetArgument(t, 0);
                                                                            ATerm d_5 = ATgetArgument(t, 1);
                                                                            ATerm e_5 = ATgetArgument(t, 2);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(b_5);
                                                                        t = b_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_5;
                                                                        {
                                                                          ATerm f_5 = t;
                                                                          int g_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                {
                                                                                  ATerm h_5 = ATgetArgument(t, 0);
                                                                                  ATerm i_5 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(g_5);
                                                                              t = b_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_5;
                                                                              {
                                                                                ATerm j_5 = t;
                                                                                int k_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                      {
                                                                                        ATerm l_5 = ATgetArgument(t, 0);
                                                                                        ATerm m_5 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(k_5);
                                                                                    t = b_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_5;
                                                                                    {
                                                                                      ATerm n_5 = t;
                                                                                      int o_5 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              ATerm p_5 = ATgetArgument(t, 0);
                                                                                              ATerm q_5 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(o_5);
                                                                                          t = b_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_5;
                                                                                          {
                                                                                            ATerm r_5 = t;
                                                                                            int s_5 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm t_5 = ATgetArgument(t, 0);
                                                                                                    ATerm u_5 = ATgetArgument(t, 1);
                                                                                                    ATerm v_5 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(s_5);
                                                                                                t = b_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_5;
                                                                                                {
                                                                                                  ATerm w_5 = t;
                                                                                                  int x_5 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm y_5 = ATgetArgument(t, 0);
                                                                                                          ATerm z_5 = ATgetArgument(t, 1);
                                                                                                          ATerm a_6 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(x_5);
                                                                                                      t = b_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = w_5;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm b_6 = ATgetArgument(t, 0);
                                                                                                          ATerm c_6 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = b_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
          }
      }
    }
  else
    {
      if(match_cons(t, sym_ExplodeCong_2))
        {
          a_18 = ATgetArgument(t, 0);
          b_18 = ATgetArgument(t, 1);
          {
            ATerm d_6 = t;
            int e_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_18;
                {
                  ATerm f_6 = t;
                  int g_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm h_6 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(g_6);
                      t = a_18;
                    }
                  else
                    {
                      t = f_6;
                      {
                        ATerm i_6 = t;
                        int j_6 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm k_6 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(j_6);
                            t = a_18;
                          }
                        else
                          {
                            t = i_6;
                            {
                              ATerm l_6 = t;
                              int m_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm n_6 = ATgetArgument(t, 0);
                                      ATerm o_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(m_6);
                                  t = a_18;
                                }
                              else
                                {
                                  t = l_6;
                                  {
                                    ATerm p_6 = t;
                                    int q_6 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm r_6 = ATgetArgument(t, 0);
                                            ATerm s_6 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(q_6);
                                        t = a_18;
                                      }
                                    else
                                      {
                                        t = p_6;
                                        {
                                          ATerm t_6 = t;
                                          int u_6 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm v_6 = ATgetArgument(t, 0);
                                                  ATerm w_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(u_6);
                                              t = a_18;
                                            }
                                          else
                                            {
                                              t = t_6;
                                              {
                                                ATerm x_6 = t;
                                                int y_6 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm z_6 = ATgetArgument(t, 0);
                                                        ATerm a_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(y_6);
                                                    t = a_18;
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
                                                          t = a_18;
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
                                                                t = a_18;
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
                                                                      t = a_18;
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
                                                                            t = a_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = n_7;
                                                                            {
                                                                              ATerm s_7 = t;
                                                                              int t_7 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm u_7 = ATgetArgument(t, 0);
                                                                                      ATerm v_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(t_7);
                                                                                  t = a_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = s_7;
                                                                                  {
                                                                                    ATerm w_7 = t;
                                                                                    int x_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm y_7 = ATgetArgument(t, 0);
                                                                                            ATerm z_7 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(x_7);
                                                                                        t = a_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = w_7;
                                                                                        {
                                                                                          ATerm a_8 = t;
                                                                                          int b_8 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                {
                                                                                                  ATerm c_8 = ATgetArgument(t, 0);
                                                                                                  ATerm d_8 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(b_8);
                                                                                              t = a_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = a_8;
                                                                                              {
                                                                                                ATerm e_8 = t;
                                                                                                int f_8 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm g_8 = ATgetArgument(t, 0);
                                                                                                        ATerm h_8 = ATgetArgument(t, 1);
                                                                                                        ATerm i_8 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(f_8);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_8;
                                                                                                    {
                                                                                                      ATerm j_8 = t;
                                                                                                      int k_8 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm l_8 = ATgetArgument(t, 0);
                                                                                                              ATerm m_8 = ATgetArgument(t, 1);
                                                                                                              ATerm n_8 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(k_8);
                                                                                                          t = a_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = j_8;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm o_8 = ATgetArgument(t, 0);
                                                                                                              ATerm p_8 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = a_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                LocalPopChoice(e_6);
              }
            else
              {
                t = d_6;
                t = b_18;
                {
                  ATerm q_8 = t;
                  int r_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm s_8 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(r_8);
                      t = b_18;
                    }
                  else
                    {
                      t = q_8;
                      {
                        ATerm t_8 = t;
                        int u_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm v_8 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_8);
                            t = b_18;
                          }
                        else
                          {
                            t = t_8;
                            {
                              ATerm w_8 = t;
                              int x_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm y_8 = ATgetArgument(t, 0);
                                      ATerm z_8 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(x_8);
                                  t = b_18;
                                }
                              else
                                {
                                  t = w_8;
                                  {
                                    ATerm a_9 = t;
                                    int b_9 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm c_9 = ATgetArgument(t, 0);
                                            ATerm d_9 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(b_9);
                                        t = b_18;
                                      }
                                    else
                                      {
                                        t = a_9;
                                        {
                                          ATerm e_9 = t;
                                          int f_9 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm g_9 = ATgetArgument(t, 0);
                                                  ATerm h_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(f_9);
                                              t = b_18;
                                            }
                                          else
                                            {
                                              t = e_9;
                                              {
                                                ATerm i_9 = t;
                                                int j_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm k_9 = ATgetArgument(t, 0);
                                                        ATerm l_9 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_9);
                                                    t = b_18;
                                                  }
                                                else
                                                  {
                                                    t = i_9;
                                                    {
                                                      ATerm m_9 = t;
                                                      int n_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm o_9 = ATgetArgument(t, 0);
                                                              ATerm p_9 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(n_9);
                                                          t = b_18;
                                                        }
                                                      else
                                                        {
                                                          t = m_9;
                                                          {
                                                            ATerm q_9 = t;
                                                            int r_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm s_9 = ATgetArgument(t, 0);
                                                                    ATerm t_9 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(r_9);
                                                                t = b_18;
                                                              }
                                                            else
                                                              {
                                                                t = q_9;
                                                                {
                                                                  ATerm u_9 = t;
                                                                  int v_9 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm w_9 = ATgetArgument(t, 0);
                                                                          ATerm x_9 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(v_9);
                                                                      t = b_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_9;
                                                                      {
                                                                        ATerm y_9 = t;
                                                                        int z_9 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm a_10 = ATgetArgument(t, 0);
                                                                                ATerm b_10 = ATgetArgument(t, 1);
                                                                                ATerm c_10 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(z_9);
                                                                            t = b_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = y_9;
                                                                            {
                                                                              ATerm d_10 = t;
                                                                              int e_10 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm f_10 = ATgetArgument(t, 0);
                                                                                      ATerm g_10 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(e_10);
                                                                                  t = b_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = d_10;
                                                                                  {
                                                                                    ATerm h_10 = t;
                                                                                    int i_10 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm j_10 = ATgetArgument(t, 0);
                                                                                            ATerm k_10 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(i_10);
                                                                                        t = b_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_10;
                                                                                        {
                                                                                          ATerm l_10 = t;
                                                                                          int m_10 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                {
                                                                                                  ATerm n_10 = ATgetArgument(t, 0);
                                                                                                  ATerm o_10 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(m_10);
                                                                                              t = b_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_10;
                                                                                              {
                                                                                                ATerm p_10 = t;
                                                                                                int q_10 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm r_10 = ATgetArgument(t, 0);
                                                                                                        ATerm s_10 = ATgetArgument(t, 1);
                                                                                                        ATerm t_10 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(q_10);
                                                                                                    t = b_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = p_10;
                                                                                                    {
                                                                                                      ATerm u_10 = t;
                                                                                                      int v_10 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm w_10 = ATgetArgument(t, 0);
                                                                                                              ATerm x_10 = ATgetArgument(t, 1);
                                                                                                              ATerm y_10 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(v_10);
                                                                                                          t = b_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = u_10;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm z_10 = ATgetArgument(t, 0);
                                                                                                              ATerm a_11 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = b_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Explode_2))
            {
              a_18 = ATgetArgument(t, 0);
              b_18 = ATgetArgument(t, 1);
              {
                ATerm b_11 = t;
                int c_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_18;
                    {
                      ATerm d_11 = t;
                      int e_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm f_11 = ATgetArgument(t, 0);
                              ATerm g_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_11);
                          t = a_18;
                        }
                      else
                        {
                          t = d_11;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm h_11 = ATgetArgument(t, 0);
                              ATerm i_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = a_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                    LocalPopChoice(c_11);
                  }
                else
                  {
                    t = b_11;
                    t = b_18;
                    {
                      ATerm j_11 = t;
                      int k_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm l_11 = ATgetArgument(t, 0);
                              ATerm m_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_11);
                          t = b_18;
                        }
                      else
                        {
                          t = j_11;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm n_11 = ATgetArgument(t, 0);
                              ATerm o_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = b_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_Build_1))
                {
                  a_18 = ATgetArgument(t, 0);
                  t = a_18;
                  {
                    ATerm p_11 = t;
                    int q_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_BA_2))
                          {
                            ATerm r_11 = ATgetArgument(t, 0);
                            ATerm s_11 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_11);
                        t = a_18;
                      }
                    else
                      {
                        t = p_11;
                        {
                          ATerm t_11 = t;
                          int u_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Choice_2))
                                {
                                  ATerm v_11 = ATgetArgument(t, 0);
                                  ATerm w_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_11);
                              t = a_18;
                            }
                          else
                            {
                              t = t_11;
                              {
                                ATerm x_11 = t;
                                int y_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_LChoice_2))
                                      {
                                        ATerm z_11 = ATgetArgument(t, 0);
                                        ATerm a_12 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(y_11);
                                    t = a_18;
                                  }
                                else
                                  {
                                    t = x_11;
                                    {
                                      ATerm b_12 = t;
                                      int c_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_RChoice_2))
                                            {
                                              ATerm d_12 = ATgetArgument(t, 0);
                                              ATerm e_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(c_12);
                                          t = a_18;
                                        }
                                      else
                                        {
                                          t = b_12;
                                          {
                                            ATerm f_12 = t;
                                            int g_12 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_GChoice_2))
                                                  {
                                                    ATerm h_12 = ATgetArgument(t, 0);
                                                    ATerm i_12 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(g_12);
                                                t = a_18;
                                              }
                                            else
                                              {
                                                t = f_12;
                                                {
                                                  ATerm j_12 = t;
                                                  int k_12 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LGChoice_2))
                                                        {
                                                          ATerm l_12 = ATgetArgument(t, 0);
                                                          ATerm m_12 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(k_12);
                                                      t = a_18;
                                                    }
                                                  else
                                                    {
                                                      t = j_12;
                                                      {
                                                        ATerm n_12 = t;
                                                        int o_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_RGChoice_2))
                                                              {
                                                                ATerm p_12 = ATgetArgument(t, 0);
                                                                ATerm q_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(o_12);
                                                            t = a_18;
                                                          }
                                                        else
                                                          {
                                                            t = n_12;
                                                            {
                                                              ATerm r_12 = t;
                                                              int s_12 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                    {
                                                                      ATerm t_12 = ATgetArgument(t, 0);
                                                                      ATerm u_12 = ATgetArgument(t, 1);
                                                                      ATerm v_12 = ATgetArgument(t, 2);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(s_12);
                                                                  t = a_18;
                                                                }
                                                              else
                                                                {
                                                                  t = r_12;
                                                                  {
                                                                    ATerm w_12 = t;
                                                                    int x_12 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                          {
                                                                            ATerm y_12 = ATgetArgument(t, 0);
                                                                            ATerm z_12 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(x_12);
                                                                        t = a_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_12;
                                                                        {
                                                                          ATerm a_13 = t;
                                                                          int b_13 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                {
                                                                                  ATerm c_13 = ATgetArgument(t, 0);
                                                                                  ATerm d_13 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(b_13);
                                                                              t = a_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_13;
                                                                              {
                                                                                ATerm e_13 = t;
                                                                                int f_13 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_AM_2))
                                                                                      {
                                                                                        ATerm g_13 = ATgetArgument(t, 0);
                                                                                        ATerm h_13 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(f_13);
                                                                                    t = a_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_13;
                                                                                    {
                                                                                      ATerm i_13 = t;
                                                                                      int j_13 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                            {
                                                                                              ATerm k_13 = ATgetArgument(t, 0);
                                                                                              ATerm l_13 = ATgetArgument(t, 1);
                                                                                              ATerm m_13 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(j_13);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_13;
                                                                                          {
                                                                                            ATerm n_13 = t;
                                                                                            int o_13 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                  {
                                                                                                    ATerm p_13 = ATgetArgument(t, 0);
                                                                                                    ATerm q_13 = ATgetArgument(t, 1);
                                                                                                    ATerm r_13 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(o_13);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = n_13;
                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                  {
                                                                                                    ATerm s_13 = ATgetArgument(t, 0);
                                                                                                    ATerm t_13 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                t = a_18;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_18));
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      a_18 = ATgetArgument(t, 0);
                      t = a_18;
                      {
                        ATerm u_13 = t;
                        int v_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_BA_2))
                              {
                                ATerm w_13 = ATgetArgument(t, 0);
                                ATerm x_13 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(v_13);
                            t = a_18;
                          }
                        else
                          {
                            t = u_13;
                            {
                              ATerm y_13 = t;
                              int z_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_Choice_2))
                                    {
                                      ATerm a_14 = ATgetArgument(t, 0);
                                      ATerm b_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(z_13);
                                  t = a_18;
                                }
                              else
                                {
                                  t = y_13;
                                  {
                                    ATerm c_14 = t;
                                    int d_14 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            ATerm e_14 = ATgetArgument(t, 0);
                                            ATerm f_14 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(d_14);
                                        t = a_18;
                                      }
                                    else
                                      {
                                        t = c_14;
                                        {
                                          ATerm g_14 = t;
                                          int h_14 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_RChoice_2))
                                                {
                                                  ATerm i_14 = ATgetArgument(t, 0);
                                                  ATerm j_14 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(h_14);
                                              t = a_18;
                                            }
                                          else
                                            {
                                              t = g_14;
                                              {
                                                ATerm k_14 = t;
                                                int l_14 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_GChoice_2))
                                                      {
                                                        ATerm m_14 = ATgetArgument(t, 0);
                                                        ATerm n_14 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_14);
                                                    t = a_18;
                                                  }
                                                else
                                                  {
                                                    t = k_14;
                                                    {
                                                      ATerm o_14 = t;
                                                      int p_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_LGChoice_2))
                                                            {
                                                              ATerm q_14 = ATgetArgument(t, 0);
                                                              ATerm r_14 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(p_14);
                                                          t = a_18;
                                                        }
                                                      else
                                                        {
                                                          t = o_14;
                                                          {
                                                            ATerm s_14 = t;
                                                            int t_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_RGChoice_2))
                                                                  {
                                                                    ATerm u_14 = ATgetArgument(t, 0);
                                                                    ATerm v_14 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(t_14);
                                                                t = a_18;
                                                              }
                                                            else
                                                              {
                                                                t = s_14;
                                                                {
                                                                  ATerm w_14 = t;
                                                                  int x_14 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                        {
                                                                          ATerm y_14 = ATgetArgument(t, 0);
                                                                          ATerm z_14 = ATgetArgument(t, 1);
                                                                          ATerm a_15 = ATgetArgument(t, 2);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(x_14);
                                                                      t = a_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = w_14;
                                                                      {
                                                                        ATerm b_15 = t;
                                                                        int c_15 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                              {
                                                                                ATerm d_15 = ATgetArgument(t, 0);
                                                                                ATerm e_15 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(c_15);
                                                                            t = a_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_15;
                                                                            {
                                                                              ATerm f_15 = t;
                                                                              int g_15 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                    {
                                                                                      ATerm h_15 = ATgetArgument(t, 0);
                                                                                      ATerm i_15 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(g_15);
                                                                                  t = a_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_15;
                                                                                  {
                                                                                    ATerm j_15 = t;
                                                                                    int k_15 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm l_15 = ATgetArgument(t, 0);
                                                                                            ATerm m_15 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(k_15);
                                                                                        t = a_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_15;
                                                                                        {
                                                                                          ATerm n_15 = t;
                                                                                          int o_15 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm p_15 = ATgetArgument(t, 0);
                                                                                                  ATerm q_15 = ATgetArgument(t, 1);
                                                                                                  ATerm r_15 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(o_15);
                                                                                              t = a_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_15;
                                                                                              {
                                                                                                ATerm s_15 = t;
                                                                                                int t_15 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm u_15 = ATgetArgument(t, 0);
                                                                                                        ATerm v_15 = ATgetArgument(t, 1);
                                                                                                        ATerm w_15 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(t_15);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = s_15;
                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                      {
                                                                                                        ATerm x_15 = ATgetArgument(t, 0);
                                                                                                        ATerm y_15 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_18));
                    }
                  else
                    {
                      if(match_cons(t, sym_BA_2))
                        {
                          a_18 = ATgetArgument(t, 0);
                          b_18 = ATgetArgument(t, 1);
                          {
                            ATerm z_15 = t;
                            int a_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_18;
                                {
                                  ATerm b_16 = t;
                                  int c_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm d_16 = ATgetArgument(t, 0);
                                          ATerm e_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(c_16);
                                      t = a_18;
                                    }
                                  else
                                    {
                                      t = b_16;
                                      {
                                        ATerm f_16 = t;
                                        int g_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm h_16 = ATgetArgument(t, 0);
                                                ATerm i_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(g_16);
                                            t = a_18;
                                          }
                                        else
                                          {
                                            t = f_16;
                                            {
                                              ATerm j_16 = t;
                                              int k_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm l_16 = ATgetArgument(t, 0);
                                                      ATerm m_16 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(k_16);
                                                  t = a_18;
                                                }
                                              else
                                                {
                                                  t = j_16;
                                                  {
                                                    ATerm n_16 = t;
                                                    int o_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm p_16 = ATgetArgument(t, 0);
                                                            ATerm q_16 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(o_16);
                                                        t = a_18;
                                                      }
                                                    else
                                                      {
                                                        t = n_16;
                                                        {
                                                          ATerm r_16 = t;
                                                          int s_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm t_16 = ATgetArgument(t, 0);
                                                                  ATerm u_16 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(s_16);
                                                              t = a_18;
                                                            }
                                                          else
                                                            {
                                                              t = r_16;
                                                              {
                                                                ATerm v_16 = t;
                                                                int w_16 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm x_16 = ATgetArgument(t, 0);
                                                                        ATerm y_16 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(w_16);
                                                                    t = a_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_16;
                                                                    {
                                                                      ATerm z_16 = t;
                                                                      int a_17 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm b_17 = ATgetArgument(t, 0);
                                                                              ATerm c_17 = ATgetArgument(t, 1);
                                                                              ATerm d_17 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(a_17);
                                                                          t = a_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_16;
                                                                          {
                                                                            ATerm e_17 = t;
                                                                            int f_17 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm g_17 = ATgetArgument(t, 0);
                                                                                    ATerm h_17 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(f_17);
                                                                                t = a_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = e_17;
                                                                                {
                                                                                  ATerm i_17 = t;
                                                                                  int j_17 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm k_17 = ATgetArgument(t, 0);
                                                                                          ATerm l_17 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(j_17);
                                                                                      t = a_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = i_17;
                                                                                      {
                                                                                        ATerm m_17 = t;
                                                                                        int n_17 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm o_17 = ATgetArgument(t, 0);
                                                                                                ATerm p_17 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(n_17);
                                                                                            t = a_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_17;
                                                                                            {
                                                                                              ATerm q_17 = t;
                                                                                              int r_17 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm s_17 = ATgetArgument(t, 0);
                                                                                                      ATerm t_17 = ATgetArgument(t, 1);
                                                                                                      ATerm u_17 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(r_17);
                                                                                                  t = a_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = q_17;
                                                                                                  {
                                                                                                    ATerm v_17 = t;
                                                                                                    int w_17 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm x_17 = ATgetArgument(t, 0);
                                                                                                            ATerm y_17 = ATgetArgument(t, 1);
                                                                                                            ATerm d_18 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(w_17);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = v_17;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm e_18 = ATgetArgument(t, 0);
                                                                                                            ATerm f_18 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                LocalPopChoice(a_16);
                              }
                            else
                              {
                                t = z_15;
                                t = b_18;
                                {
                                  ATerm g_18 = t;
                                  int h_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm i_18 = ATgetArgument(t, 0);
                                          ATerm j_18 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(h_18);
                                      t = b_18;
                                    }
                                  else
                                    {
                                      t = g_18;
                                      {
                                        ATerm k_18 = t;
                                        int l_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm m_18 = ATgetArgument(t, 0);
                                                ATerm n_18 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(l_18);
                                            t = b_18;
                                          }
                                        else
                                          {
                                            t = k_18;
                                            {
                                              ATerm o_18 = t;
                                              int p_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm q_18 = ATgetArgument(t, 0);
                                                      ATerm r_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(p_18);
                                                  t = b_18;
                                                }
                                              else
                                                {
                                                  t = o_18;
                                                  {
                                                    ATerm s_18 = t;
                                                    int t_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm u_18 = ATgetArgument(t, 0);
                                                            ATerm v_18 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(t_18);
                                                        t = b_18;
                                                      }
                                                    else
                                                      {
                                                        t = s_18;
                                                        {
                                                          ATerm w_18 = t;
                                                          int x_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm y_18 = ATgetArgument(t, 0);
                                                                  ATerm z_18 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(x_18);
                                                              t = b_18;
                                                            }
                                                          else
                                                            {
                                                              t = w_18;
                                                              {
                                                                ATerm a_19 = t;
                                                                int b_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm c_19 = ATgetArgument(t, 0);
                                                                        ATerm d_19 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(b_19);
                                                                    t = b_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_19;
                                                                    {
                                                                      ATerm e_19 = t;
                                                                      int f_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm g_19 = ATgetArgument(t, 0);
                                                                              ATerm h_19 = ATgetArgument(t, 1);
                                                                              ATerm i_19 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(f_19);
                                                                          t = b_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = e_19;
                                                                          {
                                                                            ATerm j_19 = t;
                                                                            int k_19 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm l_19 = ATgetArgument(t, 0);
                                                                                    ATerm m_19 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(k_19);
                                                                                t = b_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = j_19;
                                                                                {
                                                                                  ATerm o_19 = t;
                                                                                  int p_19 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm x_19 = ATgetArgument(t, 0);
                                                                                          ATerm z_19 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(p_19);
                                                                                      t = b_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_19;
                                                                                      {
                                                                                        ATerm d_20 = t;
                                                                                        int e_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm f_20 = ATgetArgument(t, 0);
                                                                                                ATerm g_20 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(e_20);
                                                                                            t = b_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_20;
                                                                                            {
                                                                                              ATerm h_20 = t;
                                                                                              int i_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm j_20 = ATgetArgument(t, 0);
                                                                                                      ATerm k_20 = ATgetArgument(t, 1);
                                                                                                      ATerm l_20 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_20);
                                                                                                  t = b_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_20;
                                                                                                  {
                                                                                                    ATerm m_20 = t;
                                                                                                    int n_20 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm o_20 = ATgetArgument(t, 0);
                                                                                                            ATerm p_20 = ATgetArgument(t, 1);
                                                                                                            ATerm q_20 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(n_20);
                                                                                                        t = b_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = m_20;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm r_20 = ATgetArgument(t, 0);
                                                                                                            ATerm s_20 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = b_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              a_18 = ATgetArgument(t, 0);
                              b_18 = ATgetArgument(t, 1);
                              {
                                ATerm t_20 = t;
                                int u_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = a_18;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm v_20 = ATgetArgument(t, 0);
                                        ATerm w_20 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                    LocalPopChoice(u_20);
                                  }
                                else
                                  {
                                    t = t_20;
                                    t = b_18;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm x_20 = ATgetArgument(t, 0);
                                        ATerm y_20 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                {
                                  a_18 = ATgetArgument(t, 0);
                                  b_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_20 = t;
                                    int a_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = a_18;
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
                                              t = a_18;
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
                                                    t = a_18;
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
                                                          t = a_18;
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
                                                                t = a_18;
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
                                                                      t = a_18;
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
                                                                            t = a_18;
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
                                                                                  t = a_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_21;
                                                                                  {
                                                                                    ATerm e_22 = t;
                                                                                    int f_22 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm g_22 = ATgetArgument(t, 0);
                                                                                            ATerm h_22 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(f_22);
                                                                                        t = a_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = e_22;
                                                                                        {
                                                                                          ATerm i_22 = t;
                                                                                          int j_22 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm k_22 = ATgetArgument(t, 0);
                                                                                                  ATerm l_22 = ATgetArgument(t, 1);
                                                                                                  ATerm m_22 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(j_22);
                                                                                              t = a_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = i_22;
                                                                                              {
                                                                                                ATerm n_22 = t;
                                                                                                int o_22 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm p_22 = ATgetArgument(t, 0);
                                                                                                        ATerm q_22 = ATgetArgument(t, 1);
                                                                                                        ATerm r_22 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(o_22);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_22;
                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                      {
                                                                                                        ATerm s_22 = ATgetArgument(t, 0);
                                                                                                        ATerm t_22 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                        LocalPopChoice(a_21);
                                      }
                                    else
                                      {
                                        t = z_20;
                                        t = b_18;
                                        {
                                          ATerm u_22 = t;
                                          int v_22 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm w_22 = ATgetArgument(t, 0);
                                                  ATerm x_22 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(v_22);
                                              t = b_18;
                                            }
                                          else
                                            {
                                              t = u_22;
                                              {
                                                ATerm y_22 = t;
                                                int z_22 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm a_23 = ATgetArgument(t, 0);
                                                        ATerm b_23 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_22);
                                                    t = b_18;
                                                  }
                                                else
                                                  {
                                                    t = y_22;
                                                    {
                                                      ATerm c_23 = t;
                                                      int d_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm e_23 = ATgetArgument(t, 0);
                                                              ATerm f_23 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(d_23);
                                                          t = b_18;
                                                        }
                                                      else
                                                        {
                                                          t = c_23;
                                                          {
                                                            ATerm g_23 = t;
                                                            int h_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm i_23 = ATgetArgument(t, 0);
                                                                    ATerm j_23 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(h_23);
                                                                t = b_18;
                                                              }
                                                            else
                                                              {
                                                                t = g_23;
                                                                {
                                                                  ATerm k_23 = t;
                                                                  int l_23 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm m_23 = ATgetArgument(t, 0);
                                                                          ATerm n_23 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(l_23);
                                                                      t = b_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_23;
                                                                      {
                                                                        ATerm o_23 = t;
                                                                        int p_23 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm q_23 = ATgetArgument(t, 0);
                                                                                ATerm r_23 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(p_23);
                                                                            t = b_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_23;
                                                                            {
                                                                              ATerm s_23 = t;
                                                                              int t_23 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm u_23 = ATgetArgument(t, 0);
                                                                                      ATerm v_23 = ATgetArgument(t, 1);
                                                                                      ATerm w_23 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(t_23);
                                                                                  t = b_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = s_23;
                                                                                  {
                                                                                    ATerm x_23 = t;
                                                                                    int y_23 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm z_23 = ATgetArgument(t, 0);
                                                                                            ATerm a_24 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(y_23);
                                                                                        t = b_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_23;
                                                                                        {
                                                                                          ATerm b_24 = t;
                                                                                          int c_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm d_24 = ATgetArgument(t, 0);
                                                                                                  ATerm e_24 = ATgetArgument(t, 1);
                                                                                                  ATerm f_24 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(c_24);
                                                                                              t = b_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_24;
                                                                                              {
                                                                                                ATerm g_24 = t;
                                                                                                int h_24 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm i_24 = ATgetArgument(t, 0);
                                                                                                        ATerm j_24 = ATgetArgument(t, 1);
                                                                                                        ATerm k_24 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(h_24);
                                                                                                    t = b_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_24;
                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                      {
                                                                                                        ATerm l_24 = ATgetArgument(t, 0);
                                                                                                        ATerm m_24 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = b_18;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                    {
                                      a_18 = ATgetArgument(t, 0);
                                      b_18 = ATgetArgument(t, 1);
                                      {
                                        ATerm n_24 = t;
                                        int o_24 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = a_18;
                                            {
                                              ATerm p_24 = t;
                                              int q_24 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm r_24 = ATgetArgument(t, 0);
                                                      ATerm s_24 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(q_24);
                                                  t = a_18;
                                                }
                                              else
                                                {
                                                  t = p_24;
                                                  {
                                                    ATerm t_24 = t;
                                                    int u_24 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm v_24 = ATgetArgument(t, 0);
                                                            ATerm w_24 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(u_24);
                                                        t = a_18;
                                                      }
                                                    else
                                                      {
                                                        t = t_24;
                                                        {
                                                          ATerm x_24 = t;
                                                          int y_24 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm z_24 = ATgetArgument(t, 0);
                                                                  ATerm a_25 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(y_24);
                                                              t = a_18;
                                                            }
                                                          else
                                                            {
                                                              t = x_24;
                                                              {
                                                                ATerm b_25 = t;
                                                                int c_25 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm d_25 = ATgetArgument(t, 0);
                                                                        ATerm e_25 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(c_25);
                                                                    t = a_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = b_25;
                                                                    {
                                                                      ATerm f_25 = t;
                                                                      int g_25 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm h_25 = ATgetArgument(t, 0);
                                                                              ATerm i_25 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(g_25);
                                                                          t = a_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = f_25;
                                                                          {
                                                                            ATerm j_25 = t;
                                                                            int k_25 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm l_25 = ATgetArgument(t, 0);
                                                                                    ATerm m_25 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(k_25);
                                                                                t = a_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = j_25;
                                                                                {
                                                                                  ATerm n_25 = t;
                                                                                  int o_25 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm p_25 = ATgetArgument(t, 0);
                                                                                          ATerm q_25 = ATgetArgument(t, 1);
                                                                                          ATerm r_25 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(o_25);
                                                                                      t = a_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_25;
                                                                                      {
                                                                                        ATerm s_25 = t;
                                                                                        int t_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm u_25 = ATgetArgument(t, 0);
                                                                                                ATerm v_25 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(t_25);
                                                                                            t = a_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = s_25;
                                                                                            {
                                                                                              ATerm w_25 = t;
                                                                                              int x_25 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm y_25 = ATgetArgument(t, 0);
                                                                                                      ATerm z_25 = ATgetArgument(t, 1);
                                                                                                      ATerm a_26 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(x_25);
                                                                                                  t = a_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = w_25;
                                                                                                  {
                                                                                                    ATerm b_26 = t;
                                                                                                    int c_26 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm d_26 = ATgetArgument(t, 0);
                                                                                                            ATerm e_26 = ATgetArgument(t, 1);
                                                                                                            ATerm f_26 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(c_26);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_26;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm g_26 = ATgetArgument(t, 0);
                                                                                                            ATerm h_26 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                            LocalPopChoice(o_24);
                                          }
                                        else
                                          {
                                            t = n_24;
                                            t = b_18;
                                            {
                                              ATerm i_26 = t;
                                              int j_26 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm k_26 = ATgetArgument(t, 0);
                                                      ATerm l_26 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(j_26);
                                                  t = b_18;
                                                }
                                              else
                                                {
                                                  t = i_26;
                                                  {
                                                    ATerm m_26 = t;
                                                    int n_26 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm o_26 = ATgetArgument(t, 0);
                                                            ATerm p_26 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(n_26);
                                                        t = b_18;
                                                      }
                                                    else
                                                      {
                                                        t = m_26;
                                                        {
                                                          ATerm q_26 = t;
                                                          int r_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm s_26 = ATgetArgument(t, 0);
                                                                  ATerm t_26 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(r_26);
                                                              t = b_18;
                                                            }
                                                          else
                                                            {
                                                              t = q_26;
                                                              {
                                                                ATerm u_26 = t;
                                                                int v_26 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm w_26 = ATgetArgument(t, 0);
                                                                        ATerm x_26 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(v_26);
                                                                    t = b_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_26;
                                                                    {
                                                                      ATerm y_26 = t;
                                                                      int z_26 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm a_27 = ATgetArgument(t, 0);
                                                                              ATerm b_27 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(z_26);
                                                                          t = b_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = y_26;
                                                                          {
                                                                            ATerm c_27 = t;
                                                                            int d_27 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm e_27 = ATgetArgument(t, 0);
                                                                                    ATerm f_27 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(d_27);
                                                                                t = b_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = c_27;
                                                                                {
                                                                                  ATerm g_27 = t;
                                                                                  int h_27 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm i_27 = ATgetArgument(t, 0);
                                                                                          ATerm j_27 = ATgetArgument(t, 1);
                                                                                          ATerm k_27 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(h_27);
                                                                                      t = b_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_27;
                                                                                      {
                                                                                        ATerm l_27 = t;
                                                                                        int m_27 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm n_27 = ATgetArgument(t, 0);
                                                                                                ATerm o_27 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(m_27);
                                                                                            t = b_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_27;
                                                                                            {
                                                                                              ATerm p_27 = t;
                                                                                              int q_27 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm r_27 = ATgetArgument(t, 0);
                                                                                                      ATerm s_27 = ATgetArgument(t, 1);
                                                                                                      ATerm t_27 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(q_27);
                                                                                                  t = b_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = p_27;
                                                                                                  {
                                                                                                    ATerm u_27 = t;
                                                                                                    int v_27 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm w_27 = ATgetArgument(t, 0);
                                                                                                            ATerm x_27 = ATgetArgument(t, 1);
                                                                                                            ATerm y_27 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(v_27);
                                                                                                        t = b_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = u_27;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm z_27 = ATgetArgument(t, 0);
                                                                                                            ATerm a_28 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = b_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_AM_2))
                                        {
                                          a_18 = ATgetArgument(t, 0);
                                          b_18 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_28 = t;
                                            int c_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = a_18;
                                                {
                                                  ATerm d_28 = t;
                                                  int e_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm f_28 = ATgetArgument(t, 0);
                                                          ATerm g_28 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(e_28);
                                                      t = a_18;
                                                    }
                                                  else
                                                    {
                                                      t = d_28;
                                                      {
                                                        ATerm h_28 = t;
                                                        int i_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm j_28 = ATgetArgument(t, 0);
                                                                ATerm k_28 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(i_28);
                                                            t = a_18;
                                                          }
                                                        else
                                                          {
                                                            t = h_28;
                                                            {
                                                              ATerm l_28 = t;
                                                              int m_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm n_28 = ATgetArgument(t, 0);
                                                                      ATerm o_28 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(m_28);
                                                                  t = a_18;
                                                                }
                                                              else
                                                                {
                                                                  t = l_28;
                                                                  {
                                                                    ATerm p_28 = t;
                                                                    int q_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm r_28 = ATgetArgument(t, 0);
                                                                            ATerm s_28 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(q_28);
                                                                        t = a_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_28;
                                                                        {
                                                                          ATerm t_28 = t;
                                                                          int u_28 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm v_28 = ATgetArgument(t, 0);
                                                                                  ATerm w_28 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(u_28);
                                                                              t = a_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_28;
                                                                              {
                                                                                ATerm x_28 = t;
                                                                                int y_28 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm z_28 = ATgetArgument(t, 0);
                                                                                        ATerm a_29 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(y_28);
                                                                                    t = a_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_28;
                                                                                    {
                                                                                      ATerm b_29 = t;
                                                                                      int c_29 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm d_29 = ATgetArgument(t, 0);
                                                                                              ATerm e_29 = ATgetArgument(t, 1);
                                                                                              ATerm f_29 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(c_29);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_29;
                                                                                          {
                                                                                            ATerm g_29 = t;
                                                                                            int h_29 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm i_29 = ATgetArgument(t, 0);
                                                                                                    ATerm j_29 = ATgetArgument(t, 1);
                                                                                                    ATerm k_29 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(h_29);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_29;
                                                                                                {
                                                                                                  ATerm l_29 = t;
                                                                                                  int m_29 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm n_29 = ATgetArgument(t, 0);
                                                                                                          ATerm o_29 = ATgetArgument(t, 1);
                                                                                                          ATerm p_29 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(m_29);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_29;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm q_29 = ATgetArgument(t, 0);
                                                                                                          ATerm r_29 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                LocalPopChoice(c_28);
                                              }
                                            else
                                              {
                                                t = b_28;
                                                t = b_18;
                                                {
                                                  ATerm s_29 = t;
                                                  int t_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm u_29 = ATgetArgument(t, 0);
                                                          ATerm v_29 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(t_29);
                                                      t = b_18;
                                                    }
                                                  else
                                                    {
                                                      t = s_29;
                                                      {
                                                        ATerm w_29 = t;
                                                        int x_29 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm y_29 = ATgetArgument(t, 0);
                                                                ATerm z_29 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(x_29);
                                                            t = b_18;
                                                          }
                                                        else
                                                          {
                                                            t = w_29;
                                                            {
                                                              ATerm a_30 = t;
                                                              int b_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm c_30 = ATgetArgument(t, 0);
                                                                      ATerm d_30 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(b_30);
                                                                  t = b_18;
                                                                }
                                                              else
                                                                {
                                                                  t = a_30;
                                                                  {
                                                                    ATerm e_30 = t;
                                                                    int f_30 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm g_30 = ATgetArgument(t, 0);
                                                                            ATerm h_30 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_30);
                                                                        t = b_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_30;
                                                                        {
                                                                          ATerm i_30 = t;
                                                                          int j_30 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm k_30 = ATgetArgument(t, 0);
                                                                                  ATerm l_30 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(j_30);
                                                                              t = b_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_30;
                                                                              {
                                                                                ATerm m_30 = t;
                                                                                int n_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm o_30 = ATgetArgument(t, 0);
                                                                                        ATerm p_30 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(n_30);
                                                                                    t = b_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_30;
                                                                                    {
                                                                                      ATerm q_30 = t;
                                                                                      int r_30 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm s_30 = ATgetArgument(t, 0);
                                                                                              ATerm t_30 = ATgetArgument(t, 1);
                                                                                              ATerm u_30 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(r_30);
                                                                                          t = b_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_30;
                                                                                          {
                                                                                            ATerm v_30 = t;
                                                                                            int w_30 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm x_30 = ATgetArgument(t, 0);
                                                                                                    ATerm y_30 = ATgetArgument(t, 1);
                                                                                                    ATerm z_30 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(w_30);
                                                                                                t = b_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_30;
                                                                                                {
                                                                                                  ATerm a_31 = t;
                                                                                                  int b_31 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm c_31 = ATgetArgument(t, 0);
                                                                                                          ATerm d_31 = ATgetArgument(t, 1);
                                                                                                          ATerm e_31 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(b_31);
                                                                                                      t = b_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_31;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm f_31 = ATgetArgument(t, 0);
                                                                                                          ATerm g_31 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = b_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_AM_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                            {
                                              a_18 = ATgetArgument(t, 0);
                                              b_18 = ATgetArgument(t, 1);
                                              c_18 = ATgetArgument(t, 2);
                                              {
                                                ATerm h_31 = t;
                                                int i_31 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_18;
                                                    {
                                                      ATerm j_31 = t;
                                                      int k_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm l_31 = ATgetArgument(t, 0);
                                                              ATerm m_31 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(k_31);
                                                          t = a_18;
                                                        }
                                                      else
                                                        {
                                                          t = j_31;
                                                          {
                                                            ATerm n_31 = t;
                                                            int o_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm p_31 = ATgetArgument(t, 0);
                                                                    ATerm q_31 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(o_31);
                                                                t = a_18;
                                                              }
                                                            else
                                                              {
                                                                t = n_31;
                                                                {
                                                                  ATerm r_31 = t;
                                                                  int s_31 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm t_31 = ATgetArgument(t, 0);
                                                                          ATerm u_31 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(s_31);
                                                                      t = a_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = r_31;
                                                                      {
                                                                        ATerm v_31 = t;
                                                                        int w_31 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm x_31 = ATgetArgument(t, 0);
                                                                                ATerm y_31 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(w_31);
                                                                            t = a_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = v_31;
                                                                            {
                                                                              ATerm z_31 = t;
                                                                              int a_32 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm b_32 = ATgetArgument(t, 0);
                                                                                      ATerm c_32 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(a_32);
                                                                                  t = a_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = z_31;
                                                                                  {
                                                                                    ATerm d_32 = t;
                                                                                    int e_32 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm f_32 = ATgetArgument(t, 0);
                                                                                            ATerm g_32 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(e_32);
                                                                                        t = a_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = d_32;
                                                                                        {
                                                                                          ATerm h_32 = t;
                                                                                          int i_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm j_32 = ATgetArgument(t, 0);
                                                                                                  ATerm k_32 = ATgetArgument(t, 1);
                                                                                                  ATerm l_32 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(i_32);
                                                                                              t = a_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = h_32;
                                                                                              {
                                                                                                ATerm m_32 = t;
                                                                                                int n_32 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm o_32 = ATgetArgument(t, 0);
                                                                                                        ATerm p_32 = ATgetArgument(t, 1);
                                                                                                        ATerm q_32 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(n_32);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = m_32;
                                                                                                    {
                                                                                                      ATerm r_32 = t;
                                                                                                      int s_32 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm t_32 = ATgetArgument(t, 0);
                                                                                                              ATerm u_32 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(s_32);
                                                                                                          t = a_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = r_32;
                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                            {
                                                                                                              ATerm v_32 = ATgetArgument(t, 0);
                                                                                                              ATerm w_32 = ATgetArgument(t, 1);
                                                                                                              ATerm x_32 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = a_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18, c_18);
                                                    LocalPopChoice(i_31);
                                                  }
                                                else
                                                  {
                                                    t = h_31;
                                                    {
                                                      ATerm y_32 = t;
                                                      int z_32 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = b_18;
                                                          {
                                                            ATerm a_33 = t;
                                                            int b_33 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Choice_2))
                                                                  {
                                                                    ATerm c_33 = ATgetArgument(t, 0);
                                                                    ATerm d_33 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(b_33);
                                                                t = b_18;
                                                              }
                                                            else
                                                              {
                                                                t = a_33;
                                                                {
                                                                  ATerm e_33 = t;
                                                                  int f_33 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          ATerm g_33 = ATgetArgument(t, 0);
                                                                          ATerm h_33 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(f_33);
                                                                      t = b_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_33;
                                                                      {
                                                                        ATerm i_33 = t;
                                                                        int j_33 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RChoice_2))
                                                                              {
                                                                                ATerm k_33 = ATgetArgument(t, 0);
                                                                                ATerm l_33 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(j_33);
                                                                            t = b_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_33;
                                                                            {
                                                                              ATerm m_33 = t;
                                                                              int n_33 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      ATerm o_33 = ATgetArgument(t, 0);
                                                                                      ATerm p_33 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(n_33);
                                                                                  t = b_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = m_33;
                                                                                  {
                                                                                    ATerm q_33 = t;
                                                                                    int r_33 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LGChoice_2))
                                                                                          {
                                                                                            ATerm s_33 = ATgetArgument(t, 0);
                                                                                            ATerm t_33 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(r_33);
                                                                                        t = b_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_33;
                                                                                        {
                                                                                          ATerm u_33 = t;
                                                                                          int v_33 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                                {
                                                                                                  ATerm w_33 = ATgetArgument(t, 0);
                                                                                                  ATerm x_33 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(v_33);
                                                                                              t = b_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = u_33;
                                                                                              {
                                                                                                ATerm y_33 = t;
                                                                                                int z_33 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                      {
                                                                                                        ATerm a_34 = ATgetArgument(t, 0);
                                                                                                        ATerm b_34 = ATgetArgument(t, 1);
                                                                                                        ATerm c_34 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(z_33);
                                                                                                    t = b_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = y_33;
                                                                                                    {
                                                                                                      ATerm d_34 = t;
                                                                                                      int e_34 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm f_34 = ATgetArgument(t, 0);
                                                                                                              ATerm g_34 = ATgetArgument(t, 1);
                                                                                                              ATerm h_34 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(e_34);
                                                                                                          t = b_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = d_34;
                                                                                                          {
                                                                                                            ATerm i_34 = t;
                                                                                                            int j_34 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm k_34 = ATgetArgument(t, 0);
                                                                                                                    ATerm l_34 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(j_34);
                                                                                                                t = b_18;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = i_34;
                                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                  {
                                                                                                                    ATerm m_34 = ATgetArgument(t, 0);
                                                                                                                    ATerm n_34 = ATgetArgument(t, 1);
                                                                                                                    ATerm o_34 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = b_18;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, a_18, (ATerm)ATmakeAppl(sym_Parenthetical_1, b_18), c_18);
                                                          LocalPopChoice(z_32);
                                                        }
                                                      else
                                                        {
                                                          t = y_32;
                                                          t = c_18;
                                                          {
                                                            ATerm p_34 = t;
                                                            int q_34 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_Choice_2))
                                                                  {
                                                                    ATerm r_34 = ATgetArgument(t, 0);
                                                                    ATerm s_34 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(q_34);
                                                                t = c_18;
                                                              }
                                                            else
                                                              {
                                                                t = p_34;
                                                                {
                                                                  ATerm t_34 = t;
                                                                  int u_34 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          ATerm v_34 = ATgetArgument(t, 0);
                                                                          ATerm w_34 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(u_34);
                                                                      t = c_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = t_34;
                                                                      {
                                                                        ATerm x_34 = t;
                                                                        int y_34 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RChoice_2))
                                                                              {
                                                                                ATerm z_34 = ATgetArgument(t, 0);
                                                                                ATerm a_35 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(y_34);
                                                                            t = c_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = x_34;
                                                                            {
                                                                              ATerm b_35 = t;
                                                                              int c_35 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      ATerm d_35 = ATgetArgument(t, 0);
                                                                                      ATerm e_35 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(c_35);
                                                                                  t = c_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_35;
                                                                                  {
                                                                                    ATerm f_35 = t;
                                                                                    int g_35 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LGChoice_2))
                                                                                          {
                                                                                            ATerm h_35 = ATgetArgument(t, 0);
                                                                                            ATerm i_35 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(g_35);
                                                                                        t = c_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_35;
                                                                                        {
                                                                                          ATerm j_35 = t;
                                                                                          int k_35 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                                {
                                                                                                  ATerm l_35 = ATgetArgument(t, 0);
                                                                                                  ATerm m_35 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(k_35);
                                                                                              t = c_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = j_35;
                                                                                              {
                                                                                                ATerm n_35 = t;
                                                                                                int o_35 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                      {
                                                                                                        ATerm p_35 = ATgetArgument(t, 0);
                                                                                                        ATerm q_35 = ATgetArgument(t, 1);
                                                                                                        ATerm r_35 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(o_35);
                                                                                                    t = c_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_35;
                                                                                                    {
                                                                                                      ATerm s_35 = t;
                                                                                                      int t_35 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm u_35 = ATgetArgument(t, 0);
                                                                                                              ATerm v_35 = ATgetArgument(t, 1);
                                                                                                              ATerm w_35 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(t_35);
                                                                                                          t = c_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = s_35;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm x_35 = ATgetArgument(t, 0);
                                                                                                              ATerm y_35 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = c_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, a_18, b_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, c_18));
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                {
                                                  a_18 = ATgetArgument(t, 0);
                                                  b_18 = ATgetArgument(t, 1);
                                                  c_18 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm z_35 = t;
                                                    int a_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = a_18;
                                                        {
                                                          ATerm b_36 = t;
                                                          int c_36 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm d_36 = ATgetArgument(t, 0);
                                                                  ATerm e_36 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(c_36);
                                                              t = a_18;
                                                            }
                                                          else
                                                            {
                                                              t = b_36;
                                                              {
                                                                ATerm f_36 = t;
                                                                int g_36 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm h_36 = ATgetArgument(t, 0);
                                                                        ATerm i_36 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(g_36);
                                                                    t = a_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_36;
                                                                    {
                                                                      ATerm j_36 = t;
                                                                      int k_36 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm l_36 = ATgetArgument(t, 0);
                                                                              ATerm m_36 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(k_36);
                                                                          t = a_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = j_36;
                                                                          {
                                                                            ATerm n_36 = t;
                                                                            int o_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm p_36 = ATgetArgument(t, 0);
                                                                                    ATerm q_36 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(o_36);
                                                                                t = a_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_36;
                                                                                {
                                                                                  ATerm r_36 = t;
                                                                                  int s_36 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm t_36 = ATgetArgument(t, 0);
                                                                                          ATerm u_36 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(s_36);
                                                                                      t = a_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = r_36;
                                                                                      {
                                                                                        ATerm v_36 = t;
                                                                                        int w_36 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm x_36 = ATgetArgument(t, 0);
                                                                                                ATerm y_36 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(w_36);
                                                                                            t = a_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_36;
                                                                                            {
                                                                                              ATerm z_36 = t;
                                                                                              int a_37 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm b_37 = ATgetArgument(t, 0);
                                                                                                      ATerm c_37 = ATgetArgument(t, 1);
                                                                                                      ATerm d_37 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(a_37);
                                                                                                  t = a_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = z_36;
                                                                                                  {
                                                                                                    ATerm e_37 = t;
                                                                                                    int f_37 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm g_37 = ATgetArgument(t, 0);
                                                                                                            ATerm h_37 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(f_37);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = e_37;
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm i_37 = ATgetArgument(t, 0);
                                                                                                            ATerm j_37 = ATgetArgument(t, 1);
                                                                                                            ATerm k_37 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18, c_18);
                                                        LocalPopChoice(a_36);
                                                      }
                                                    else
                                                      {
                                                        t = z_35;
                                                        {
                                                          ATerm l_37 = t;
                                                          int m_37 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = b_18;
                                                              {
                                                                ATerm n_37 = t;
                                                                int o_37 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm p_37 = ATgetArgument(t, 0);
                                                                        ATerm q_37 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(o_37);
                                                                    t = b_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_37;
                                                                    {
                                                                      ATerm r_37 = t;
                                                                      int s_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm t_37 = ATgetArgument(t, 0);
                                                                              ATerm u_37 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(s_37);
                                                                          t = b_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_37;
                                                                          {
                                                                            ATerm v_37 = t;
                                                                            int w_37 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm x_37 = ATgetArgument(t, 0);
                                                                                    ATerm y_37 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(w_37);
                                                                                t = b_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_37;
                                                                                {
                                                                                  ATerm z_37 = t;
                                                                                  int a_38 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm b_38 = ATgetArgument(t, 0);
                                                                                          ATerm c_38 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(a_38);
                                                                                      t = b_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_37;
                                                                                      {
                                                                                        ATerm d_38 = t;
                                                                                        int e_38 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm f_38 = ATgetArgument(t, 0);
                                                                                                ATerm g_38 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(e_38);
                                                                                            t = b_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_38;
                                                                                            {
                                                                                              ATerm h_38 = t;
                                                                                              int i_38 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm j_38 = ATgetArgument(t, 0);
                                                                                                      ATerm k_38 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_38);
                                                                                                  t = b_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_38;
                                                                                                  {
                                                                                                    ATerm l_38 = t;
                                                                                                    int m_38 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm n_38 = ATgetArgument(t, 0);
                                                                                                            ATerm o_38 = ATgetArgument(t, 1);
                                                                                                            ATerm p_38 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(m_38);
                                                                                                        t = b_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_38;
                                                                                                        {
                                                                                                          ATerm q_38 = t;
                                                                                                          int r_38 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm s_38 = ATgetArgument(t, 0);
                                                                                                                  ATerm t_38 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(r_38);
                                                                                                              t = b_18;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_38;
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm u_38 = ATgetArgument(t, 0);
                                                                                                                  ATerm v_38 = ATgetArgument(t, 1);
                                                                                                                  ATerm w_38 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = b_18;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, a_18, (ATerm)ATmakeAppl(sym_Parenthetical_1, b_18), c_18);
                                                              LocalPopChoice(m_37);
                                                            }
                                                          else
                                                            {
                                                              t = l_37;
                                                              t = c_18;
                                                              {
                                                                ATerm x_38 = t;
                                                                int y_38 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm z_38 = ATgetArgument(t, 0);
                                                                        ATerm a_39 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(y_38);
                                                                    t = c_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_38;
                                                                    {
                                                                      ATerm b_39 = t;
                                                                      int c_39 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm d_39 = ATgetArgument(t, 0);
                                                                              ATerm e_39 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(c_39);
                                                                          t = c_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_39;
                                                                          {
                                                                            ATerm f_39 = t;
                                                                            int g_39 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm h_39 = ATgetArgument(t, 0);
                                                                                    ATerm i_39 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(g_39);
                                                                                t = c_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_39;
                                                                                {
                                                                                  ATerm j_39 = t;
                                                                                  int k_39 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm l_39 = ATgetArgument(t, 0);
                                                                                          ATerm m_39 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(k_39);
                                                                                      t = c_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_39;
                                                                                      {
                                                                                        ATerm n_39 = t;
                                                                                        int o_39 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm p_39 = ATgetArgument(t, 0);
                                                                                                ATerm q_39 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(o_39);
                                                                                            t = c_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_39;
                                                                                            {
                                                                                              ATerm r_39 = t;
                                                                                              int s_39 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm t_39 = ATgetArgument(t, 0);
                                                                                                      ATerm u_39 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(s_39);
                                                                                                  t = c_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = r_39;
                                                                                                  {
                                                                                                    ATerm v_39 = t;
                                                                                                    int w_39 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm x_39 = ATgetArgument(t, 0);
                                                                                                            ATerm y_39 = ATgetArgument(t, 1);
                                                                                                            ATerm z_39 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(w_39);
                                                                                                        t = c_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = v_39;
                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                          {
                                                                                                            ATerm a_40 = ATgetArgument(t, 0);
                                                                                                            ATerm b_40 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = c_18;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, a_18, b_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, c_18));
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Seq_2))
                                                    {
                                                      a_18 = ATgetArgument(t, 0);
                                                      b_18 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm c_40 = t;
                                                        int d_40 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = a_18;
                                                            {
                                                              ATerm e_40 = t;
                                                              int f_40 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm g_40 = ATgetArgument(t, 0);
                                                                      ATerm h_40 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(f_40);
                                                                  t = a_18;
                                                                }
                                                              else
                                                                {
                                                                  t = e_40;
                                                                  {
                                                                    ATerm i_40 = t;
                                                                    int j_40 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm k_40 = ATgetArgument(t, 0);
                                                                            ATerm l_40 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(j_40);
                                                                        t = a_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_40;
                                                                        {
                                                                          ATerm m_40 = t;
                                                                          int n_40 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm o_40 = ATgetArgument(t, 0);
                                                                                  ATerm p_40 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(n_40);
                                                                              t = a_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_40;
                                                                              {
                                                                                ATerm q_40 = t;
                                                                                int r_40 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm s_40 = ATgetArgument(t, 0);
                                                                                        ATerm t_40 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(r_40);
                                                                                    t = a_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_40;
                                                                                    {
                                                                                      ATerm u_40 = t;
                                                                                      int v_40 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm w_40 = ATgetArgument(t, 0);
                                                                                              ATerm x_40 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(v_40);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_40;
                                                                                          {
                                                                                            ATerm y_40 = t;
                                                                                            int z_40 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm a_41 = ATgetArgument(t, 0);
                                                                                                    ATerm b_41 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(z_40);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = y_40;
                                                                                                {
                                                                                                  ATerm c_41 = t;
                                                                                                  int d_41 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm e_41 = ATgetArgument(t, 0);
                                                                                                          ATerm f_41 = ATgetArgument(t, 1);
                                                                                                          ATerm g_41 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(d_41);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_41;
                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                        {
                                                                                                          ATerm h_41 = ATgetArgument(t, 0);
                                                                                                          ATerm i_41 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                            LocalPopChoice(d_40);
                                                          }
                                                        else
                                                          {
                                                            t = c_40;
                                                            t = b_18;
                                                            {
                                                              ATerm j_41 = t;
                                                              int k_41 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm l_41 = ATgetArgument(t, 0);
                                                                      ATerm m_41 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(k_41);
                                                                  t = b_18;
                                                                }
                                                              else
                                                                {
                                                                  t = j_41;
                                                                  {
                                                                    ATerm n_41 = t;
                                                                    int o_41 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm p_41 = ATgetArgument(t, 0);
                                                                            ATerm q_41 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(o_41);
                                                                        t = b_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_41;
                                                                        {
                                                                          ATerm r_41 = t;
                                                                          int s_41 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm t_41 = ATgetArgument(t, 0);
                                                                                  ATerm u_41 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(s_41);
                                                                              t = b_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_41;
                                                                              {
                                                                                ATerm v_41 = t;
                                                                                int w_41 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm x_41 = ATgetArgument(t, 0);
                                                                                        ATerm y_41 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(w_41);
                                                                                    t = b_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_41;
                                                                                    {
                                                                                      ATerm z_41 = t;
                                                                                      int a_42 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm b_42 = ATgetArgument(t, 0);
                                                                                              ATerm c_42 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(a_42);
                                                                                          t = b_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_41;
                                                                                          {
                                                                                            ATerm d_42 = t;
                                                                                            int e_42 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm f_42 = ATgetArgument(t, 0);
                                                                                                    ATerm g_42 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(e_42);
                                                                                                t = b_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_42;
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm h_42 = ATgetArgument(t, 0);
                                                                                                    ATerm i_42 = ATgetArgument(t, 1);
                                                                                                    ATerm j_42 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                t = b_18;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_18, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_18));
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          a_18 = ATgetArgument(t, 0);
                                                          b_18 = ATgetArgument(t, 1);
                                                          t = a_18;
                                                          {
                                                            ATerm k_42 = t;
                                                            int l_42 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm m_42 = ATgetArgument(t, 0);
                                                                    ATerm n_42 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(l_42);
                                                                t = a_18;
                                                              }
                                                            else
                                                              {
                                                                t = k_42;
                                                                {
                                                                  ATerm o_42 = t;
                                                                  int p_42 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm q_42 = ATgetArgument(t, 0);
                                                                          ATerm r_42 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(p_42);
                                                                      t = a_18;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_42;
                                                                      {
                                                                        ATerm s_42 = t;
                                                                        int t_42 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm u_42 = ATgetArgument(t, 0);
                                                                                ATerm v_42 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(t_42);
                                                                            t = a_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = s_42;
                                                                            {
                                                                              ATerm w_42 = t;
                                                                              int x_42 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm y_42 = ATgetArgument(t, 0);
                                                                                      ATerm z_42 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(x_42);
                                                                                  t = a_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = w_42;
                                                                                  {
                                                                                    ATerm a_43 = t;
                                                                                    int b_43 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm c_43 = ATgetArgument(t, 0);
                                                                                            ATerm d_43 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(b_43);
                                                                                        t = a_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = a_43;
                                                                                        {
                                                                                          ATerm e_43 = t;
                                                                                          int f_43 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm g_43 = ATgetArgument(t, 0);
                                                                                                  ATerm h_43 = ATgetArgument(t, 1);
                                                                                                  ATerm i_43 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(f_43);
                                                                                              t = a_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = e_43;
                                                                                              if(match_cons(t, sym_Choice_2))
                                                                                                {
                                                                                                  ATerm j_43 = ATgetArgument(t, 0);
                                                                                                  ATerm k_43 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              t = a_18;
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_LChoice_2))
                                                            {
                                                              a_18 = ATgetArgument(t, 0);
                                                              b_18 = ATgetArgument(t, 1);
                                                              t = a_18;
                                                              {
                                                                ATerm l_43 = t;
                                                                int m_43 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm n_43 = ATgetArgument(t, 0);
                                                                        ATerm o_43 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(m_43);
                                                                    t = a_18;
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_43;
                                                                    {
                                                                      ATerm p_43 = t;
                                                                      int q_43 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm r_43 = ATgetArgument(t, 0);
                                                                              ATerm s_43 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(q_43);
                                                                          t = a_18;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_43;
                                                                          {
                                                                            ATerm t_43 = t;
                                                                            int u_43 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm v_43 = ATgetArgument(t, 0);
                                                                                    ATerm w_43 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(u_43);
                                                                                t = a_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = t_43;
                                                                                {
                                                                                  ATerm x_43 = t;
                                                                                  int y_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm z_43 = ATgetArgument(t, 0);
                                                                                          ATerm a_44 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(y_43);
                                                                                      t = a_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_43;
                                                                                      {
                                                                                        ATerm b_44 = t;
                                                                                        int c_44 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm d_44 = ATgetArgument(t, 0);
                                                                                                ATerm e_44 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(c_44);
                                                                                            t = a_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_44;
                                                                                            {
                                                                                              ATerm f_44 = t;
                                                                                              int g_44 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm h_44 = ATgetArgument(t, 0);
                                                                                                      ATerm i_44 = ATgetArgument(t, 1);
                                                                                                      ATerm j_44 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(g_44);
                                                                                                  t = a_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = f_44;
                                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                                    {
                                                                                                      ATerm k_44 = ATgetArgument(t, 0);
                                                                                                      ATerm l_44 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = a_18;
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  a_18 = ATgetArgument(t, 0);
                                                                  b_18 = ATgetArgument(t, 1);
                                                                  t = a_18;
                                                                  {
                                                                    ATerm m_44 = t;
                                                                    int n_44 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm o_44 = ATgetArgument(t, 0);
                                                                            ATerm p_44 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(n_44);
                                                                        t = a_18;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_44;
                                                                        {
                                                                          ATerm q_44 = t;
                                                                          int r_44 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm s_44 = ATgetArgument(t, 0);
                                                                                  ATerm t_44 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(r_44);
                                                                              t = a_18;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_44;
                                                                              {
                                                                                ATerm u_44 = t;
                                                                                int v_44 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm w_44 = ATgetArgument(t, 0);
                                                                                        ATerm x_44 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(v_44);
                                                                                    t = a_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_44;
                                                                                    {
                                                                                      ATerm y_44 = t;
                                                                                      int z_44 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm a_45 = ATgetArgument(t, 0);
                                                                                              ATerm b_45 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(z_44);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_44;
                                                                                          {
                                                                                            ATerm c_45 = t;
                                                                                            int d_45 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm e_45 = ATgetArgument(t, 0);
                                                                                                    ATerm f_45 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(d_45);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = c_45;
                                                                                                {
                                                                                                  ATerm g_45 = t;
                                                                                                  int h_45 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm i_45 = ATgetArgument(t, 0);
                                                                                                          ATerm j_45 = ATgetArgument(t, 1);
                                                                                                          ATerm k_45 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(h_45);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = g_45;
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm l_45 = ATgetArgument(t, 0);
                                                                                                          ATerm m_45 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_GChoice_2))
                                                                    {
                                                                      a_18 = ATgetArgument(t, 0);
                                                                      b_18 = ATgetArgument(t, 1);
                                                                      t = a_18;
                                                                      {
                                                                        ATerm n_45 = t;
                                                                        int o_45 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_Choice_2))
                                                                              {
                                                                                ATerm p_45 = ATgetArgument(t, 0);
                                                                                ATerm q_45 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(o_45);
                                                                            t = a_18;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = n_45;
                                                                            {
                                                                              ATerm r_45 = t;
                                                                              int s_45 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                    {
                                                                                      ATerm t_45 = ATgetArgument(t, 0);
                                                                                      ATerm u_45 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(s_45);
                                                                                  t = a_18;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = r_45;
                                                                                  {
                                                                                    ATerm v_45 = t;
                                                                                    int w_45 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                          {
                                                                                            ATerm x_45 = ATgetArgument(t, 0);
                                                                                            ATerm y_45 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(w_45);
                                                                                        t = a_18;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_45;
                                                                                        {
                                                                                          ATerm z_45 = t;
                                                                                          int a_46 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm b_46 = ATgetArgument(t, 0);
                                                                                                  ATerm c_46 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(a_46);
                                                                                              t = a_18;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_45;
                                                                                              {
                                                                                                ATerm d_46 = t;
                                                                                                int e_46 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm f_46 = ATgetArgument(t, 0);
                                                                                                        ATerm g_46 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(e_46);
                                                                                                    t = a_18;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = d_46;
                                                                                                    {
                                                                                                      ATerm h_46 = t;
                                                                                                      int i_46 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm j_46 = ATgetArgument(t, 0);
                                                                                                              ATerm k_46 = ATgetArgument(t, 1);
                                                                                                              ATerm l_46 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(i_46);
                                                                                                          t = a_18;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = h_46;
                                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                                            {
                                                                                                              ATerm m_46 = ATgetArgument(t, 0);
                                                                                                              ATerm n_46 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = a_18;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                      t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          a_18 = ATgetArgument(t, 0);
                                                                          b_18 = ATgetArgument(t, 1);
                                                                          t = a_18;
                                                                          {
                                                                            ATerm o_46 = t;
                                                                            int p_46 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_Choice_2))
                                                                                  {
                                                                                    ATerm q_46 = ATgetArgument(t, 0);
                                                                                    ATerm r_46 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(p_46);
                                                                                t = a_18;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = o_46;
                                                                                {
                                                                                  ATerm s_46 = t;
                                                                                  int t_46 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          ATerm u_46 = ATgetArgument(t, 0);
                                                                                          ATerm v_46 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(t_46);
                                                                                      t = a_18;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_46;
                                                                                      {
                                                                                        ATerm w_46 = t;
                                                                                        int x_46 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RChoice_2))
                                                                                              {
                                                                                                ATerm y_46 = ATgetArgument(t, 0);
                                                                                                ATerm z_46 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(x_46);
                                                                                            t = a_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = w_46;
                                                                                            {
                                                                                              ATerm a_47 = t;
                                                                                              int b_47 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                                    {
                                                                                                      ATerm c_47 = ATgetArgument(t, 0);
                                                                                                      ATerm d_47 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(b_47);
                                                                                                  t = a_18;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = a_47;
                                                                                                  {
                                                                                                    ATerm e_47 = t;
                                                                                                    int f_47 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm g_47 = ATgetArgument(t, 0);
                                                                                                            ATerm h_47 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(f_47);
                                                                                                        t = a_18;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = e_47;
                                                                                                        {
                                                                                                          ATerm i_47 = t;
                                                                                                          int j_47 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm k_47 = ATgetArgument(t, 0);
                                                                                                                  ATerm l_47 = ATgetArgument(t, 1);
                                                                                                                  ATerm m_47 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(j_47);
                                                                                                              t = a_18;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_47;
                                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                                {
                                                                                                                  ATerm n_47 = ATgetArgument(t, 0);
                                                                                                                  ATerm o_47 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = a_18;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                          t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                            {
                                                                              a_18 = ATgetArgument(t, 0);
                                                                              b_18 = ATgetArgument(t, 1);
                                                                              t = a_18;
                                                                              {
                                                                                ATerm p_47 = t;
                                                                                int q_47 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                      {
                                                                                        ATerm r_47 = ATgetArgument(t, 0);
                                                                                        ATerm s_47 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(q_47);
                                                                                    t = a_18;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_47;
                                                                                    {
                                                                                      ATerm t_47 = t;
                                                                                      int u_47 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                            {
                                                                                              ATerm v_47 = ATgetArgument(t, 0);
                                                                                              ATerm w_47 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(u_47);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_47;
                                                                                          {
                                                                                            ATerm x_47 = t;
                                                                                            int y_47 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                  {
                                                                                                    ATerm z_47 = ATgetArgument(t, 0);
                                                                                                    ATerm a_48 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(y_47);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_47;
                                                                                                {
                                                                                                  ATerm b_48 = t;
                                                                                                  int c_48 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                                        {
                                                                                                          ATerm d_48 = ATgetArgument(t, 0);
                                                                                                          ATerm e_48 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(c_48);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_48;
                                                                                                      {
                                                                                                        ATerm f_48 = t;
                                                                                                        int g_48 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                                              {
                                                                                                                ATerm h_48 = ATgetArgument(t, 0);
                                                                                                                ATerm i_48 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(g_48);
                                                                                                            t = a_18;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_48;
                                                                                                            {
                                                                                                              ATerm j_48 = t;
                                                                                                              int k_48 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                    {
                                                                                                                      ATerm l_48 = ATgetArgument(t, 0);
                                                                                                                      ATerm m_48 = ATgetArgument(t, 1);
                                                                                                                      ATerm n_48 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(k_48);
                                                                                                                  t = a_18;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_48;
                                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm o_48 = ATgetArgument(t, 0);
                                                                                                                      ATerm p_48 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = a_18;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                              t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                {
                                                                                  a_18 = ATgetArgument(t, 0);
                                                                                  b_18 = ATgetArgument(t, 1);
                                                                                  c_18 = ATgetArgument(t, 2);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              {
                                                                                ATerm q_48 = t;
                                                                                int r_48 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = a_18;
                                                                                    {
                                                                                      ATerm s_48 = t;
                                                                                      int t_48 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_Choice_2))
                                                                                            {
                                                                                              ATerm u_48 = ATgetArgument(t, 0);
                                                                                              ATerm v_48 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(t_48);
                                                                                          t = a_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_48;
                                                                                          {
                                                                                            ATerm w_48 = t;
                                                                                            int x_48 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                                  {
                                                                                                    ATerm y_48 = ATgetArgument(t, 0);
                                                                                                    ATerm z_48 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(x_48);
                                                                                                t = a_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = w_48;
                                                                                                {
                                                                                                  ATerm a_49 = t;
                                                                                                  int b_49 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm c_49 = ATgetArgument(t, 0);
                                                                                                          ATerm d_49 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(b_49);
                                                                                                      t = a_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_49;
                                                                                                      {
                                                                                                        ATerm e_49 = t;
                                                                                                        int f_49 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                                              {
                                                                                                                ATerm g_49 = ATgetArgument(t, 0);
                                                                                                                ATerm h_49 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(f_49);
                                                                                                            t = a_18;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_49;
                                                                                                            {
                                                                                                              ATerm i_49 = t;
                                                                                                              int j_49 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm k_49 = ATgetArgument(t, 0);
                                                                                                                      ATerm l_49 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(j_49);
                                                                                                                  t = a_18;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_49;
                                                                                                                  {
                                                                                                                    ATerm m_49 = t;
                                                                                                                    int n_49 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                                          {
                                                                                                                            ATerm o_49 = ATgetArgument(t, 0);
                                                                                                                            ATerm p_49 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(n_49);
                                                                                                                        t = a_18;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = m_49;
                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                          {
                                                                                                                            ATerm q_49 = ATgetArgument(t, 0);
                                                                                                                            ATerm r_49 = ATgetArgument(t, 1);
                                                                                                                            ATerm s_49 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = a_18;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_18), b_18, c_18);
                                                                                    LocalPopChoice(r_48);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_48;
                                                                                    t = b_18;
                                                                                    {
                                                                                      ATerm t_49 = t;
                                                                                      int u_49 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_Choice_2))
                                                                                            {
                                                                                              ATerm v_49 = ATgetArgument(t, 0);
                                                                                              ATerm w_49 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(u_49);
                                                                                          t = b_18;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = t_49;
                                                                                          {
                                                                                            ATerm x_49 = t;
                                                                                            int y_49 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                                  {
                                                                                                    ATerm z_49 = ATgetArgument(t, 0);
                                                                                                    ATerm a_50 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(y_49);
                                                                                                t = b_18;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_49;
                                                                                                {
                                                                                                  ATerm b_50 = t;
                                                                                                  int c_50 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                                        {
                                                                                                          ATerm d_50 = ATgetArgument(t, 0);
                                                                                                          ATerm e_50 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(c_50);
                                                                                                      t = b_18;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_50;
                                                                                                      {
                                                                                                        ATerm f_50 = t;
                                                                                                        int g_50 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                                              {
                                                                                                                ATerm h_50 = ATgetArgument(t, 0);
                                                                                                                ATerm i_50 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(g_50);
                                                                                                            t = b_18;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_50;
                                                                                                            {
                                                                                                              ATerm j_50 = t;
                                                                                                              int k_50 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                                    {
                                                                                                                      ATerm l_50 = ATgetArgument(t, 0);
                                                                                                                      ATerm m_50 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(k_50);
                                                                                                                  t = b_18;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_50;
                                                                                                                  {
                                                                                                                    ATerm n_50 = t;
                                                                                                                    int o_50 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                                          {
                                                                                                                            ATerm p_50 = ATgetArgument(t, 0);
                                                                                                                            ATerm q_50 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(o_50);
                                                                                                                        t = b_18;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = n_50;
                                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                          {
                                                                                                                            ATerm r_50 = ATgetArgument(t, 0);
                                                                                                                            ATerm s_50 = ATgetArgument(t, 1);
                                                                                                                            ATerm t_50 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = b_18;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_18, (ATerm)ATmakeAppl(sym_Parenthetical_1, b_18), c_18);
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm n_19 = NULL;
  n_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_19), term_u_50);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_u_50;
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  if(match_string(t, "-a"))
    {
      t = q_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = q_19;
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = term_z_50;
  t = set_config_0_0(t);
  t = r_19;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_a_51;
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
  ATerm s_19 = NULL;
  s_19 = t;
  t = term_c_51;
  t = set_config_0_0(t);
  t = s_19;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_d_51;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  if(match_string(t, "-I"))
    {
      t = t_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = t_19;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_50, (ATerm) ATinsert(ATempty, u_19));
  t = extend_config_0_0(t);
  t = u_19;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_e_51;
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
  ATerm v_19 = NULL;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_51, v_19);
  t = set_config_0_0(t);
  t = v_19;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_g_51;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_0, c_0, d_0, t);
      LocalPopChoice(i_51);
    }
  else
    {
      t = h_51;
      {
        ATerm j_51 = t;
        int k_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_0, f_0, g_0, t);
            LocalPopChoice(k_51);
          }
        else
          {
            t = j_51;
            {
              ATerm l_51 = t;
              int m_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(h_0, i_0, j_0, t);
                  LocalPopChoice(m_51);
                }
              else
                {
                  t = l_51;
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
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
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
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_19 = NULL;
      w_19 = t;
      t = term_x_50;
      t = get_config_0_0(t);
      t = w_19;
      LocalPopChoice(q_51);
    }
  else
    {
      t = p_51;
      t = xtc_transform_2_0(q_0, pass_includes_0_0, t);
    }
  t = xtc_transform_1_0(r_0, t);
  {
    ATerm r_51 = t;
    int s_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_19 = NULL;
        y_19 = t;
        t = term_b_51;
        t = get_config_0_0(t);
        t = y_19;
        LocalPopChoice(s_51);
      }
    else
      {
        t = r_51;
        t = xtc_transform_1_0(s_0, t);
      }
  }
  t = xtc_io_transform_1_0(t_0, t);
  t = xtc_transform_2_0(w_0, x_0, t);
  t = xtc_transform_2_0(y_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_t_51;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_u_51;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_v_51;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = innermost_1_0(StrategoParenthesize_0_0, t);
  t = topdown_1_0(u_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = try_1_0(v_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm a_20 = NULL;
  if(match_cons(t, sym_Parenthetical_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, a_20);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_w_51;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = pass_verbose_0_0(t);
  b_20 = t;
  t = term_f_51;
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
        t = term_z_51;
      }
  }
  t = xtc_find_0_0(t);
  c_20 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(b_20), c_20), term_f_51);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_a_52;
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
