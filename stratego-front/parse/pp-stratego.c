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
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_94 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm StrategoParenthesize_0_0 (ATerm t);
ATerm innermost_1_0 (ATerm r_98 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_5 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm k_6 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
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
ATerm option_wrap_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
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
  d_24 = t;
  if(match_cons(t, sym_AnnoCong_2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
      {
        ATerm b_1 = t;
        int c_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_24;
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
                  t = e_24;
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
                        t = e_24;
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
                              t = e_24;
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
                                    t = e_24;
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
                                          t = e_24;
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
                                                t = e_24;
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
                                                      t = e_24;
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
                                                            t = e_24;
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
                                                                  t = e_24;
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
                                                                        t = e_24;
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
                                                                              t = e_24;
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
                                                                                    t = e_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_2;
                                                                                    {
                                                                                      ATerm y_2 = t;
                                                                                      int z_2 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                            {
                                                                                              ATerm a_3 = ATgetArgument(t, 0);
                                                                                              ATerm b_3 = ATgetArgument(t, 1);
                                                                                              ATerm c_3 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(z_2);
                                                                                          t = e_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_2;
                                                                                          {
                                                                                            ATerm d_3 = t;
                                                                                            int e_3 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                  {
                                                                                                    ATerm f_3 = ATgetArgument(t, 0);
                                                                                                    ATerm g_3 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(e_3);
                                                                                                t = e_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_3;
                                                                                                {
                                                                                                  ATerm h_3 = t;
                                                                                                  int i_3 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                        {
                                                                                                          ATerm j_3 = ATgetArgument(t, 0);
                                                                                                          ATerm k_3 = ATgetArgument(t, 1);
                                                                                                          ATerm l_3 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(i_3);
                                                                                                      t = e_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_3;
                                                                                                      {
                                                                                                        ATerm m_3 = t;
                                                                                                        int n_3 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                              {
                                                                                                                ATerm o_3 = ATgetArgument(t, 0);
                                                                                                                ATerm p_3 = ATgetArgument(t, 1);
                                                                                                                ATerm q_3 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(n_3);
                                                                                                            t = e_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_3;
                                                                                                            {
                                                                                                              ATerm r_3 = t;
                                                                                                              int s_3 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm t_3 = ATgetArgument(t, 0);
                                                                                                                      ATerm u_3 = ATgetArgument(t, 1);
                                                                                                                      ATerm v_3 = ATgetArgument(t, 2);
                                                                                                                      ATerm w_3 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(s_3);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_3;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm x_3 = ATgetArgument(t, 0);
                                                                                                                      ATerm y_3 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
            LocalPopChoice(c_1);
          }
        else
          {
            t = b_1;
            t = f_24;
            {
              ATerm z_3 = t;
              int a_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm h_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_4);
                  t = f_24;
                }
              else
                {
                  t = z_3;
                  {
                    ATerm i_4 = t;
                    int j_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            ATerm k_4 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_4);
                        t = f_24;
                      }
                    else
                      {
                        t = i_4;
                        {
                          ATerm l_4 = t;
                          int m_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_BA_2))
                                {
                                  ATerm n_4 = ATgetArgument(t, 0);
                                  ATerm o_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_4);
                              t = f_24;
                            }
                          else
                            {
                              t = l_4;
                              {
                                ATerm p_4 = t;
                                int q_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        ATerm r_4 = ATgetArgument(t, 0);
                                        ATerm s_4 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_4);
                                    t = f_24;
                                  }
                                else
                                  {
                                    t = p_4;
                                    {
                                      ATerm t_4 = t;
                                      int u_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              ATerm v_4 = ATgetArgument(t, 0);
                                              ATerm w_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(u_4);
                                          t = f_24;
                                        }
                                      else
                                        {
                                          t = t_4;
                                          {
                                            ATerm x_4 = t;
                                            int y_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_RChoice_2))
                                                  {
                                                    ATerm z_4 = ATgetArgument(t, 0);
                                                    ATerm a_5 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(y_4);
                                                t = f_24;
                                              }
                                            else
                                              {
                                                t = x_4;
                                                {
                                                  ATerm b_5 = t;
                                                  int d_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm e_5 = ATgetArgument(t, 0);
                                                          ATerm f_5 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(d_5);
                                                      t = f_24;
                                                    }
                                                  else
                                                    {
                                                      t = b_5;
                                                      {
                                                        ATerm g_5 = t;
                                                        int h_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LGChoice_2))
                                                              {
                                                                ATerm i_5 = ATgetArgument(t, 0);
                                                                ATerm j_5 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(h_5);
                                                            t = f_24;
                                                          }
                                                        else
                                                          {
                                                            t = g_5;
                                                            {
                                                              ATerm k_5 = t;
                                                              int l_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      ATerm m_5 = ATgetArgument(t, 0);
                                                                      ATerm n_5 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(l_5);
                                                                  t = f_24;
                                                                }
                                                              else
                                                                {
                                                                  t = k_5;
                                                                  {
                                                                    ATerm p_5 = t;
                                                                    int q_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                          {
                                                                            ATerm r_5 = ATgetArgument(t, 0);
                                                                            ATerm s_5 = ATgetArgument(t, 1);
                                                                            ATerm t_5 = ATgetArgument(t, 2);
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
                                                                          ATerm u_5 = t;
                                                                          int v_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                {
                                                                                  ATerm w_5 = ATgetArgument(t, 0);
                                                                                  ATerm x_5 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(v_5);
                                                                              t = f_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_5;
                                                                              {
                                                                                ATerm y_5 = t;
                                                                                int z_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                      {
                                                                                        ATerm a_6 = ATgetArgument(t, 0);
                                                                                        ATerm b_6 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(z_5);
                                                                                    t = f_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_5;
                                                                                    {
                                                                                      ATerm c_6 = t;
                                                                                      int d_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                            {
                                                                                              ATerm e_6 = ATgetArgument(t, 0);
                                                                                              ATerm f_6 = ATgetArgument(t, 1);
                                                                                              ATerm g_6 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(d_6);
                                                                                          t = f_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_6;
                                                                                          {
                                                                                            ATerm h_6 = t;
                                                                                            int i_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                  {
                                                                                                    ATerm j_6 = ATgetArgument(t, 0);
                                                                                                    ATerm n_6 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(i_6);
                                                                                                t = f_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_6;
                                                                                                {
                                                                                                  ATerm o_6 = t;
                                                                                                  int p_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                        {
                                                                                                          ATerm q_6 = ATgetArgument(t, 0);
                                                                                                          ATerm r_6 = ATgetArgument(t, 1);
                                                                                                          ATerm s_6 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(p_6);
                                                                                                      t = f_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_6;
                                                                                                      {
                                                                                                        ATerm t_6 = t;
                                                                                                        int u_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                              {
                                                                                                                ATerm v_6 = ATgetArgument(t, 0);
                                                                                                                ATerm w_6 = ATgetArgument(t, 1);
                                                                                                                ATerm x_6 = ATgetArgument(t, 2);
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
                                                                                                              ATerm y_6 = t;
                                                                                                              int z_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm a_7 = ATgetArgument(t, 0);
                                                                                                                      ATerm b_7 = ATgetArgument(t, 1);
                                                                                                                      ATerm c_7 = ATgetArgument(t, 2);
                                                                                                                      ATerm d_7 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(z_6);
                                                                                                                  t = f_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = y_6;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm e_7 = ATgetArgument(t, 0);
                                                                                                                      ATerm f_7 = ATgetArgument(t, 1);
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
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
          }
      }
    }
  else
    {
      if(match_cons(t, sym_ExplodeCong_2))
        {
          e_24 = ATgetArgument(t, 0);
          f_24 = ATgetArgument(t, 1);
          {
            ATerm g_7 = t;
            int h_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_24;
                {
                  ATerm i_7 = t;
                  int j_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm k_7 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(j_7);
                      t = e_24;
                    }
                  else
                    {
                      t = i_7;
                      {
                        ATerm l_7 = t;
                        int m_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm n_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_7);
                            t = e_24;
                          }
                        else
                          {
                            t = l_7;
                            {
                              ATerm o_7 = t;
                              int p_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm q_7 = ATgetArgument(t, 0);
                                      ATerm r_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(p_7);
                                  t = e_24;
                                }
                              else
                                {
                                  t = o_7;
                                  {
                                    ATerm s_7 = t;
                                    int t_7 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm u_7 = ATgetArgument(t, 0);
                                            ATerm v_7 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(t_7);
                                        t = e_24;
                                      }
                                    else
                                      {
                                        t = s_7;
                                        {
                                          ATerm w_7 = t;
                                          int x_7 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm y_7 = ATgetArgument(t, 0);
                                                  ATerm z_7 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(x_7);
                                              t = e_24;
                                            }
                                          else
                                            {
                                              t = w_7;
                                              {
                                                ATerm a_8 = t;
                                                int b_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm c_8 = ATgetArgument(t, 0);
                                                        ATerm d_8 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_8);
                                                    t = e_24;
                                                  }
                                                else
                                                  {
                                                    t = a_8;
                                                    {
                                                      ATerm e_8 = t;
                                                      int f_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm g_8 = ATgetArgument(t, 0);
                                                              ATerm h_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(f_8);
                                                          t = e_24;
                                                        }
                                                      else
                                                        {
                                                          t = e_8;
                                                          {
                                                            ATerm i_8 = t;
                                                            int j_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm k_8 = ATgetArgument(t, 0);
                                                                    ATerm l_8 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(j_8);
                                                                t = e_24;
                                                              }
                                                            else
                                                              {
                                                                t = i_8;
                                                                {
                                                                  ATerm m_8 = t;
                                                                  int n_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm o_8 = ATgetArgument(t, 0);
                                                                          ATerm p_8 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(n_8);
                                                                      t = e_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = m_8;
                                                                      {
                                                                        ATerm q_8 = t;
                                                                        int r_8 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm s_8 = ATgetArgument(t, 0);
                                                                                ATerm t_8 = ATgetArgument(t, 1);
                                                                                ATerm u_8 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(r_8);
                                                                            t = e_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_8;
                                                                            {
                                                                              ATerm v_8 = t;
                                                                              int w_8 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm x_8 = ATgetArgument(t, 0);
                                                                                      ATerm y_8 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(w_8);
                                                                                  t = e_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = v_8;
                                                                                  {
                                                                                    ATerm z_8 = t;
                                                                                    int a_9 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm b_9 = ATgetArgument(t, 0);
                                                                                            ATerm c_9 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(a_9);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_8;
                                                                                        {
                                                                                          ATerm d_9 = t;
                                                                                          int e_9 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                {
                                                                                                  ATerm f_9 = ATgetArgument(t, 0);
                                                                                                  ATerm g_9 = ATgetArgument(t, 1);
                                                                                                  ATerm h_9 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(e_9);
                                                                                              t = e_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_9;
                                                                                              {
                                                                                                ATerm i_9 = t;
                                                                                                int j_9 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_AM_2))
                                                                                                      {
                                                                                                        ATerm k_9 = ATgetArgument(t, 0);
                                                                                                        ATerm l_9 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(j_9);
                                                                                                    t = e_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_9;
                                                                                                    {
                                                                                                      ATerm m_9 = t;
                                                                                                      int n_9 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                            {
                                                                                                              ATerm o_9 = ATgetArgument(t, 0);
                                                                                                              ATerm p_9 = ATgetArgument(t, 1);
                                                                                                              ATerm q_9 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(n_9);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = m_9;
                                                                                                          {
                                                                                                            ATerm r_9 = t;
                                                                                                            int s_9 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                  {
                                                                                                                    ATerm t_9 = ATgetArgument(t, 0);
                                                                                                                    ATerm u_9 = ATgetArgument(t, 1);
                                                                                                                    ATerm v_9 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(s_9);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = r_9;
                                                                                                                {
                                                                                                                  ATerm w_9 = t;
                                                                                                                  int x_9 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                        {
                                                                                                                          ATerm y_9 = ATgetArgument(t, 0);
                                                                                                                          ATerm z_9 = ATgetArgument(t, 1);
                                                                                                                          ATerm a_10 = ATgetArgument(t, 2);
                                                                                                                          ATerm b_10 = ATgetArgument(t, 3);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(x_9);
                                                                                                                      t = e_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = w_9;
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm c_10 = ATgetArgument(t, 0);
                                                                                                                          ATerm d_10 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = e_24;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                LocalPopChoice(h_7);
              }
            else
              {
                t = g_7;
                t = f_24;
                {
                  ATerm e_10 = t;
                  int f_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm g_10 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(f_10);
                      t = f_24;
                    }
                  else
                    {
                      t = e_10;
                      {
                        ATerm h_10 = t;
                        int i_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm j_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(i_10);
                            t = f_24;
                          }
                        else
                          {
                            t = h_10;
                            {
                              ATerm k_10 = t;
                              int l_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm m_10 = ATgetArgument(t, 0);
                                      ATerm n_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(l_10);
                                  t = f_24;
                                }
                              else
                                {
                                  t = k_10;
                                  {
                                    ATerm o_10 = t;
                                    int p_10 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm q_10 = ATgetArgument(t, 0);
                                            ATerm r_10 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(p_10);
                                        t = f_24;
                                      }
                                    else
                                      {
                                        t = o_10;
                                        {
                                          ATerm s_10 = t;
                                          int t_10 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm u_10 = ATgetArgument(t, 0);
                                                  ATerm v_10 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(t_10);
                                              t = f_24;
                                            }
                                          else
                                            {
                                              t = s_10;
                                              {
                                                ATerm w_10 = t;
                                                int x_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm y_10 = ATgetArgument(t, 0);
                                                        ATerm z_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_10);
                                                    t = f_24;
                                                  }
                                                else
                                                  {
                                                    t = w_10;
                                                    {
                                                      ATerm a_11 = t;
                                                      int b_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm c_11 = ATgetArgument(t, 0);
                                                              ATerm d_11 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(b_11);
                                                          t = f_24;
                                                        }
                                                      else
                                                        {
                                                          t = a_11;
                                                          {
                                                            ATerm e_11 = t;
                                                            int f_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm g_11 = ATgetArgument(t, 0);
                                                                    ATerm h_11 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(f_11);
                                                                t = f_24;
                                                              }
                                                            else
                                                              {
                                                                t = e_11;
                                                                {
                                                                  ATerm i_11 = t;
                                                                  int j_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm k_11 = ATgetArgument(t, 0);
                                                                          ATerm l_11 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(j_11);
                                                                      t = f_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_11;
                                                                      {
                                                                        ATerm m_11 = t;
                                                                        int n_11 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm o_11 = ATgetArgument(t, 0);
                                                                                ATerm p_11 = ATgetArgument(t, 1);
                                                                                ATerm q_11 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(n_11);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = m_11;
                                                                            {
                                                                              ATerm r_11 = t;
                                                                              int s_11 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm t_11 = ATgetArgument(t, 0);
                                                                                      ATerm u_11 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(s_11);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = r_11;
                                                                                  {
                                                                                    ATerm v_11 = t;
                                                                                    int w_11 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm x_11 = ATgetArgument(t, 0);
                                                                                            ATerm y_11 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(w_11);
                                                                                        t = f_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_11;
                                                                                        {
                                                                                          ATerm z_11 = t;
                                                                                          int a_12 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                {
                                                                                                  ATerm b_12 = ATgetArgument(t, 0);
                                                                                                  ATerm c_12 = ATgetArgument(t, 1);
                                                                                                  ATerm d_12 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(a_12);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = z_11;
                                                                                              {
                                                                                                ATerm e_12 = t;
                                                                                                int f_12 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_AM_2))
                                                                                                      {
                                                                                                        ATerm g_12 = ATgetArgument(t, 0);
                                                                                                        ATerm h_12 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(f_12);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_12;
                                                                                                    {
                                                                                                      ATerm i_12 = t;
                                                                                                      int j_12 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                            {
                                                                                                              ATerm k_12 = ATgetArgument(t, 0);
                                                                                                              ATerm l_12 = ATgetArgument(t, 1);
                                                                                                              ATerm m_12 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(j_12);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = i_12;
                                                                                                          {
                                                                                                            ATerm n_12 = t;
                                                                                                            int o_12 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                  {
                                                                                                                    ATerm p_12 = ATgetArgument(t, 0);
                                                                                                                    ATerm q_12 = ATgetArgument(t, 1);
                                                                                                                    ATerm r_12 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(o_12);
                                                                                                                t = f_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = n_12;
                                                                                                                {
                                                                                                                  ATerm s_12 = t;
                                                                                                                  int t_12 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                        {
                                                                                                                          ATerm u_12 = ATgetArgument(t, 0);
                                                                                                                          ATerm v_12 = ATgetArgument(t, 1);
                                                                                                                          ATerm w_12 = ATgetArgument(t, 2);
                                                                                                                          ATerm x_12 = ATgetArgument(t, 3);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(t_12);
                                                                                                                      t = f_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = s_12;
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm y_12 = ATgetArgument(t, 0);
                                                                                                                          ATerm z_12 = ATgetArgument(t, 1);
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
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Explode_2))
            {
              e_24 = ATgetArgument(t, 0);
              f_24 = ATgetArgument(t, 1);
              {
                ATerm a_13 = t;
                int b_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_24;
                    {
                      ATerm c_13 = t;
                      int d_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm e_13 = ATgetArgument(t, 0);
                              ATerm f_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_13);
                          t = e_24;
                        }
                      else
                        {
                          t = c_13;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm g_13 = ATgetArgument(t, 0);
                              ATerm h_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = e_24;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                    LocalPopChoice(b_13);
                  }
                else
                  {
                    t = a_13;
                    t = f_24;
                    {
                      ATerm i_13 = t;
                      int j_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm k_13 = ATgetArgument(t, 0);
                              ATerm l_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_13);
                          t = f_24;
                        }
                      else
                        {
                          t = i_13;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm m_13 = ATgetArgument(t, 0);
                              ATerm n_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = f_24;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_Build_1))
                {
                  e_24 = ATgetArgument(t, 0);
                  t = e_24;
                  {
                    ATerm o_13 = t;
                    int p_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_BA_2))
                          {
                            ATerm q_13 = ATgetArgument(t, 0);
                            ATerm r_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_13);
                        t = e_24;
                      }
                    else
                      {
                        t = o_13;
                        {
                          ATerm s_13 = t;
                          int t_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Choice_2))
                                {
                                  ATerm u_13 = ATgetArgument(t, 0);
                                  ATerm v_13 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(t_13);
                              t = e_24;
                            }
                          else
                            {
                              t = s_13;
                              {
                                ATerm w_13 = t;
                                int x_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_LChoice_2))
                                      {
                                        ATerm y_13 = ATgetArgument(t, 0);
                                        ATerm z_13 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(x_13);
                                    t = e_24;
                                  }
                                else
                                  {
                                    t = w_13;
                                    {
                                      ATerm a_14 = t;
                                      int b_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_RChoice_2))
                                            {
                                              ATerm c_14 = ATgetArgument(t, 0);
                                              ATerm d_14 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(b_14);
                                          t = e_24;
                                        }
                                      else
                                        {
                                          t = a_14;
                                          {
                                            ATerm e_14 = t;
                                            int f_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_GChoice_2))
                                                  {
                                                    ATerm g_14 = ATgetArgument(t, 0);
                                                    ATerm h_14 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(f_14);
                                                t = e_24;
                                              }
                                            else
                                              {
                                                t = e_14;
                                                {
                                                  ATerm i_14 = t;
                                                  int j_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_LGChoice_2))
                                                        {
                                                          ATerm k_14 = ATgetArgument(t, 0);
                                                          ATerm l_14 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(j_14);
                                                      t = e_24;
                                                    }
                                                  else
                                                    {
                                                      t = i_14;
                                                      {
                                                        ATerm m_14 = t;
                                                        int n_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_RGChoice_2))
                                                              {
                                                                ATerm o_14 = ATgetArgument(t, 0);
                                                                ATerm p_14 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(n_14);
                                                            t = e_24;
                                                          }
                                                        else
                                                          {
                                                            t = m_14;
                                                            {
                                                              ATerm q_14 = t;
                                                              int r_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                    {
                                                                      ATerm s_14 = ATgetArgument(t, 0);
                                                                      ATerm t_14 = ATgetArgument(t, 1);
                                                                      ATerm u_14 = ATgetArgument(t, 2);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(r_14);
                                                                  t = e_24;
                                                                }
                                                              else
                                                                {
                                                                  t = q_14;
                                                                  {
                                                                    ATerm v_14 = t;
                                                                    int w_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                          {
                                                                            ATerm x_14 = ATgetArgument(t, 0);
                                                                            ATerm y_14 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(w_14);
                                                                        t = e_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_14;
                                                                        {
                                                                          ATerm z_14 = t;
                                                                          int a_15 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                {
                                                                                  ATerm b_15 = ATgetArgument(t, 0);
                                                                                  ATerm c_15 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(a_15);
                                                                              t = e_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_14;
                                                                              {
                                                                                ATerm d_15 = t;
                                                                                int e_15 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                      {
                                                                                        ATerm f_15 = ATgetArgument(t, 0);
                                                                                        ATerm g_15 = ATgetArgument(t, 1);
                                                                                        ATerm h_15 = ATgetArgument(t, 2);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(e_15);
                                                                                    t = e_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_15;
                                                                                    {
                                                                                      ATerm i_15 = t;
                                                                                      int j_15 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              ATerm k_15 = ATgetArgument(t, 0);
                                                                                              ATerm l_15 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(j_15);
                                                                                          t = e_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_15;
                                                                                          {
                                                                                            ATerm m_15 = t;
                                                                                            int n_15 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm o_15 = ATgetArgument(t, 0);
                                                                                                    ATerm p_15 = ATgetArgument(t, 1);
                                                                                                    ATerm q_15 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(n_15);
                                                                                                t = e_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_15;
                                                                                                {
                                                                                                  ATerm r_15 = t;
                                                                                                  int s_15 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm t_15 = ATgetArgument(t, 0);
                                                                                                          ATerm u_15 = ATgetArgument(t, 1);
                                                                                                          ATerm v_15 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(s_15);
                                                                                                      t = e_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_15;
                                                                                                      {
                                                                                                        ATerm w_15 = t;
                                                                                                        int x_15 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                              {
                                                                                                                ATerm y_15 = ATgetArgument(t, 0);
                                                                                                                ATerm z_15 = ATgetArgument(t, 1);
                                                                                                                ATerm a_16 = ATgetArgument(t, 2);
                                                                                                                ATerm b_16 = ATgetArgument(t, 3);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(x_15);
                                                                                                            t = e_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = w_15;
                                                                                                            if(match_cons(t, sym_Seq_2))
                                                                                                              {
                                                                                                                ATerm c_16 = ATgetArgument(t, 0);
                                                                                                                ATerm d_16 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            t = e_24;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, e_24));
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      e_24 = ATgetArgument(t, 0);
                      t = e_24;
                      {
                        ATerm e_16 = t;
                        int f_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_BA_2))
                              {
                                ATerm g_16 = ATgetArgument(t, 0);
                                ATerm h_16 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(f_16);
                            t = e_24;
                          }
                        else
                          {
                            t = e_16;
                            {
                              ATerm i_16 = t;
                              int j_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_Choice_2))
                                    {
                                      ATerm k_16 = ATgetArgument(t, 0);
                                      ATerm l_16 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(j_16);
                                  t = e_24;
                                }
                              else
                                {
                                  t = i_16;
                                  {
                                    ATerm m_16 = t;
                                    int n_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            ATerm o_16 = ATgetArgument(t, 0);
                                            ATerm p_16 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(n_16);
                                        t = e_24;
                                      }
                                    else
                                      {
                                        t = m_16;
                                        {
                                          ATerm q_16 = t;
                                          int r_16 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_RChoice_2))
                                                {
                                                  ATerm s_16 = ATgetArgument(t, 0);
                                                  ATerm t_16 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(r_16);
                                              t = e_24;
                                            }
                                          else
                                            {
                                              t = q_16;
                                              {
                                                ATerm u_16 = t;
                                                int v_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_GChoice_2))
                                                      {
                                                        ATerm w_16 = ATgetArgument(t, 0);
                                                        ATerm x_16 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_16);
                                                    t = e_24;
                                                  }
                                                else
                                                  {
                                                    t = u_16;
                                                    {
                                                      ATerm y_16 = t;
                                                      int z_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_LGChoice_2))
                                                            {
                                                              ATerm a_17 = ATgetArgument(t, 0);
                                                              ATerm b_17 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(z_16);
                                                          t = e_24;
                                                        }
                                                      else
                                                        {
                                                          t = y_16;
                                                          {
                                                            ATerm c_17 = t;
                                                            int d_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_RGChoice_2))
                                                                  {
                                                                    ATerm e_17 = ATgetArgument(t, 0);
                                                                    ATerm f_17 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(d_17);
                                                                t = e_24;
                                                              }
                                                            else
                                                              {
                                                                t = c_17;
                                                                {
                                                                  ATerm g_17 = t;
                                                                  int h_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                        {
                                                                          ATerm i_17 = ATgetArgument(t, 0);
                                                                          ATerm j_17 = ATgetArgument(t, 1);
                                                                          ATerm k_17 = ATgetArgument(t, 2);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(h_17);
                                                                      t = e_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_17;
                                                                      {
                                                                        ATerm l_17 = t;
                                                                        int m_17 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                              {
                                                                                ATerm n_17 = ATgetArgument(t, 0);
                                                                                ATerm o_17 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(m_17);
                                                                            t = e_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = l_17;
                                                                            {
                                                                              ATerm p_17 = t;
                                                                              int q_17 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                    {
                                                                                      ATerm r_17 = ATgetArgument(t, 0);
                                                                                      ATerm s_17 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(q_17);
                                                                                  t = e_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_17;
                                                                                  {
                                                                                    ATerm t_17 = t;
                                                                                    int u_17 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                          {
                                                                                            ATerm v_17 = ATgetArgument(t, 0);
                                                                                            ATerm w_17 = ATgetArgument(t, 1);
                                                                                            ATerm x_17 = ATgetArgument(t, 2);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(u_17);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_17;
                                                                                        {
                                                                                          ATerm y_17 = t;
                                                                                          int z_17 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                {
                                                                                                  ATerm a_18 = ATgetArgument(t, 0);
                                                                                                  ATerm b_18 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(z_17);
                                                                                              t = e_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_17;
                                                                                              {
                                                                                                ATerm c_18 = t;
                                                                                                int d_18 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm e_18 = ATgetArgument(t, 0);
                                                                                                        ATerm f_18 = ATgetArgument(t, 1);
                                                                                                        ATerm g_18 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(d_18);
                                                                                                    t = e_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = c_18;
                                                                                                    {
                                                                                                      ATerm h_18 = t;
                                                                                                      int i_18 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm j_18 = ATgetArgument(t, 0);
                                                                                                              ATerm k_18 = ATgetArgument(t, 1);
                                                                                                              ATerm l_18 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(i_18);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = h_18;
                                                                                                          {
                                                                                                            ATerm m_18 = t;
                                                                                                            int n_18 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm o_18 = ATgetArgument(t, 0);
                                                                                                                    ATerm p_18 = ATgetArgument(t, 1);
                                                                                                                    ATerm q_18 = ATgetArgument(t, 2);
                                                                                                                    ATerm r_18 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(n_18);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = m_18;
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm s_18 = ATgetArgument(t, 0);
                                                                                                                    ATerm t_18 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, e_24));
                    }
                  else
                    {
                      if(match_cons(t, sym_BA_2))
                        {
                          e_24 = ATgetArgument(t, 0);
                          f_24 = ATgetArgument(t, 1);
                          {
                            ATerm u_18 = t;
                            int v_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_24;
                                {
                                  ATerm w_18 = t;
                                  int x_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm y_18 = ATgetArgument(t, 0);
                                          ATerm z_18 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(x_18);
                                      t = e_24;
                                    }
                                  else
                                    {
                                      t = w_18;
                                      {
                                        ATerm a_19 = t;
                                        int b_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm c_19 = ATgetArgument(t, 0);
                                                ATerm d_19 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(b_19);
                                            t = e_24;
                                          }
                                        else
                                          {
                                            t = a_19;
                                            {
                                              ATerm e_19 = t;
                                              int f_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm g_19 = ATgetArgument(t, 0);
                                                      ATerm h_19 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(f_19);
                                                  t = e_24;
                                                }
                                              else
                                                {
                                                  t = e_19;
                                                  {
                                                    ATerm i_19 = t;
                                                    int j_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm k_19 = ATgetArgument(t, 0);
                                                            ATerm l_19 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(j_19);
                                                        t = e_24;
                                                      }
                                                    else
                                                      {
                                                        t = i_19;
                                                        {
                                                          ATerm m_19 = t;
                                                          int n_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm o_19 = ATgetArgument(t, 0);
                                                                  ATerm p_19 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(n_19);
                                                              t = e_24;
                                                            }
                                                          else
                                                            {
                                                              t = m_19;
                                                              {
                                                                ATerm q_19 = t;
                                                                int r_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm s_19 = ATgetArgument(t, 0);
                                                                        ATerm t_19 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(r_19);
                                                                    t = e_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_19;
                                                                    {
                                                                      ATerm u_19 = t;
                                                                      int v_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm w_19 = ATgetArgument(t, 0);
                                                                              ATerm x_19 = ATgetArgument(t, 1);
                                                                              ATerm y_19 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(v_19);
                                                                          t = e_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = u_19;
                                                                          {
                                                                            ATerm z_19 = t;
                                                                            int a_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm b_20 = ATgetArgument(t, 0);
                                                                                    ATerm c_20 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(a_20);
                                                                                t = e_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = z_19;
                                                                                {
                                                                                  ATerm d_20 = t;
                                                                                  int e_20 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm f_20 = ATgetArgument(t, 0);
                                                                                          ATerm g_20 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(e_20);
                                                                                      t = e_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_20;
                                                                                      {
                                                                                        ATerm h_20 = t;
                                                                                        int i_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                              {
                                                                                                ATerm j_20 = ATgetArgument(t, 0);
                                                                                                ATerm k_20 = ATgetArgument(t, 1);
                                                                                                ATerm l_20 = ATgetArgument(t, 2);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(i_20);
                                                                                            t = e_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = h_20;
                                                                                            {
                                                                                              ATerm m_20 = t;
                                                                                              int n_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      ATerm o_20 = ATgetArgument(t, 0);
                                                                                                      ATerm p_20 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(n_20);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = m_20;
                                                                                                  {
                                                                                                    ATerm q_20 = t;
                                                                                                    int r_20 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                          {
                                                                                                            ATerm s_20 = ATgetArgument(t, 0);
                                                                                                            ATerm t_20 = ATgetArgument(t, 1);
                                                                                                            ATerm u_20 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(r_20);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = q_20;
                                                                                                        {
                                                                                                          ATerm v_20 = t;
                                                                                                          int w_20 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm x_20 = ATgetArgument(t, 0);
                                                                                                                  ATerm y_20 = ATgetArgument(t, 1);
                                                                                                                  ATerm z_20 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(w_20);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = v_20;
                                                                                                              {
                                                                                                                ATerm a_21 = t;
                                                                                                                int b_21 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm c_21 = ATgetArgument(t, 0);
                                                                                                                        ATerm d_21 = ATgetArgument(t, 1);
                                                                                                                        ATerm e_21 = ATgetArgument(t, 2);
                                                                                                                        ATerm f_21 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(b_21);
                                                                                                                    t = e_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = a_21;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm g_21 = ATgetArgument(t, 0);
                                                                                                                        ATerm h_21 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = e_24;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                LocalPopChoice(v_18);
                              }
                            else
                              {
                                t = u_18;
                                t = f_24;
                                {
                                  ATerm i_21 = t;
                                  int j_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm k_21 = ATgetArgument(t, 0);
                                          ATerm l_21 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(j_21);
                                      t = f_24;
                                    }
                                  else
                                    {
                                      t = i_21;
                                      {
                                        ATerm m_21 = t;
                                        int n_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm o_21 = ATgetArgument(t, 0);
                                                ATerm p_21 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(n_21);
                                            t = f_24;
                                          }
                                        else
                                          {
                                            t = m_21;
                                            {
                                              ATerm q_21 = t;
                                              int r_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm s_21 = ATgetArgument(t, 0);
                                                      ATerm t_21 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(r_21);
                                                  t = f_24;
                                                }
                                              else
                                                {
                                                  t = q_21;
                                                  {
                                                    ATerm u_21 = t;
                                                    int v_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm w_21 = ATgetArgument(t, 0);
                                                            ATerm x_21 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(v_21);
                                                        t = f_24;
                                                      }
                                                    else
                                                      {
                                                        t = u_21;
                                                        {
                                                          ATerm y_21 = t;
                                                          int z_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm a_22 = ATgetArgument(t, 0);
                                                                  ATerm b_22 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(z_21);
                                                              t = f_24;
                                                            }
                                                          else
                                                            {
                                                              t = y_21;
                                                              {
                                                                ATerm c_22 = t;
                                                                int d_22 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm e_22 = ATgetArgument(t, 0);
                                                                        ATerm f_22 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(d_22);
                                                                    t = f_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_22;
                                                                    {
                                                                      ATerm g_22 = t;
                                                                      int h_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm i_22 = ATgetArgument(t, 0);
                                                                              ATerm j_22 = ATgetArgument(t, 1);
                                                                              ATerm k_22 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(h_22);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_22;
                                                                          {
                                                                            ATerm l_22 = t;
                                                                            int m_22 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm n_22 = ATgetArgument(t, 0);
                                                                                    ATerm o_22 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_22);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_22;
                                                                                {
                                                                                  ATerm p_22 = t;
                                                                                  int q_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm r_22 = ATgetArgument(t, 0);
                                                                                          ATerm s_22 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(q_22);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_22;
                                                                                      {
                                                                                        ATerm t_22 = t;
                                                                                        int u_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                              {
                                                                                                ATerm v_22 = ATgetArgument(t, 0);
                                                                                                ATerm w_22 = ATgetArgument(t, 1);
                                                                                                ATerm x_22 = ATgetArgument(t, 2);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(u_22);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_22;
                                                                                            {
                                                                                              ATerm y_22 = t;
                                                                                              int z_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      ATerm a_23 = ATgetArgument(t, 0);
                                                                                                      ATerm b_23 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(z_22);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = y_22;
                                                                                                  {
                                                                                                    ATerm c_23 = t;
                                                                                                    int d_23 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                          {
                                                                                                            ATerm e_23 = ATgetArgument(t, 0);
                                                                                                            ATerm f_23 = ATgetArgument(t, 1);
                                                                                                            ATerm g_23 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(d_23);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = c_23;
                                                                                                        {
                                                                                                          ATerm h_23 = t;
                                                                                                          int i_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm j_23 = ATgetArgument(t, 0);
                                                                                                                  ATerm k_23 = ATgetArgument(t, 1);
                                                                                                                  ATerm l_23 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(i_23);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = h_23;
                                                                                                              {
                                                                                                                ATerm m_23 = t;
                                                                                                                int n_23 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm o_23 = ATgetArgument(t, 0);
                                                                                                                        ATerm p_23 = ATgetArgument(t, 1);
                                                                                                                        ATerm q_23 = ATgetArgument(t, 2);
                                                                                                                        ATerm r_23 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(n_23);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = m_23;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm s_23 = ATgetArgument(t, 0);
                                                                                                                        ATerm t_23 = ATgetArgument(t, 1);
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
                                t = (ATerm) ATmakeAppl(sym_BA_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              e_24 = ATgetArgument(t, 0);
                              f_24 = ATgetArgument(t, 1);
                              {
                                ATerm u_23 = t;
                                int v_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = e_24;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm w_23 = ATgetArgument(t, 0);
                                        ATerm x_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                    LocalPopChoice(v_23);
                                  }
                                else
                                  {
                                    t = u_23;
                                    t = f_24;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm y_23 = ATgetArgument(t, 0);
                                        ATerm z_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                {
                                  e_24 = ATgetArgument(t, 0);
                                  f_24 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_24 = t;
                                    int b_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = e_24;
                                        {
                                          ATerm h_24 = t;
                                          int i_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm j_24 = ATgetArgument(t, 0);
                                                  ATerm k_24 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(i_24);
                                              t = e_24;
                                            }
                                          else
                                            {
                                              t = h_24;
                                              {
                                                ATerm l_24 = t;
                                                int m_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm n_24 = ATgetArgument(t, 0);
                                                        ATerm o_24 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_24);
                                                    t = e_24;
                                                  }
                                                else
                                                  {
                                                    t = l_24;
                                                    {
                                                      ATerm p_24 = t;
                                                      int q_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm r_24 = ATgetArgument(t, 0);
                                                              ATerm s_24 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_24);
                                                          t = e_24;
                                                        }
                                                      else
                                                        {
                                                          t = p_24;
                                                          {
                                                            ATerm t_24 = t;
                                                            int u_24 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm v_24 = ATgetArgument(t, 0);
                                                                    ATerm w_24 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(u_24);
                                                                t = e_24;
                                                              }
                                                            else
                                                              {
                                                                t = t_24;
                                                                {
                                                                  ATerm x_24 = t;
                                                                  int y_24 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm z_24 = ATgetArgument(t, 0);
                                                                          ATerm a_25 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(y_24);
                                                                      t = e_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = x_24;
                                                                      {
                                                                        ATerm b_25 = t;
                                                                        int c_25 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm d_25 = ATgetArgument(t, 0);
                                                                                ATerm e_25 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(c_25);
                                                                            t = e_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = b_25;
                                                                            {
                                                                              ATerm f_25 = t;
                                                                              int g_25 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm h_25 = ATgetArgument(t, 0);
                                                                                      ATerm i_25 = ATgetArgument(t, 1);
                                                                                      ATerm j_25 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(g_25);
                                                                                  t = e_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = f_25;
                                                                                  {
                                                                                    ATerm k_25 = t;
                                                                                    int l_25 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm m_25 = ATgetArgument(t, 0);
                                                                                            ATerm n_25 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(l_25);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_25;
                                                                                        {
                                                                                          ATerm o_25 = t;
                                                                                          int p_25 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm q_25 = ATgetArgument(t, 0);
                                                                                                  ATerm r_25 = ATgetArgument(t, 1);
                                                                                                  ATerm s_25 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(p_25);
                                                                                              t = e_24;
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
                                                                                                    t = e_24;
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
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = z_25;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm u_26 = ATgetArgument(t, 0);
                                                                                                              ATerm v_26 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                        LocalPopChoice(b_24);
                                      }
                                    else
                                      {
                                        t = a_24;
                                        t = f_24;
                                        {
                                          ATerm w_26 = t;
                                          int x_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm y_26 = ATgetArgument(t, 0);
                                                  ATerm z_26 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(x_26);
                                              t = f_24;
                                            }
                                          else
                                            {
                                              t = w_26;
                                              {
                                                ATerm a_27 = t;
                                                int b_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm c_27 = ATgetArgument(t, 0);
                                                        ATerm d_27 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_27);
                                                    t = f_24;
                                                  }
                                                else
                                                  {
                                                    t = a_27;
                                                    {
                                                      ATerm e_27 = t;
                                                      int f_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm g_27 = ATgetArgument(t, 0);
                                                              ATerm h_27 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(f_27);
                                                          t = f_24;
                                                        }
                                                      else
                                                        {
                                                          t = e_27;
                                                          {
                                                            ATerm i_27 = t;
                                                            int j_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm k_27 = ATgetArgument(t, 0);
                                                                    ATerm l_27 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(j_27);
                                                                t = f_24;
                                                              }
                                                            else
                                                              {
                                                                t = i_27;
                                                                {
                                                                  ATerm m_27 = t;
                                                                  int n_27 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm o_27 = ATgetArgument(t, 0);
                                                                          ATerm p_27 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(n_27);
                                                                      t = f_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = m_27;
                                                                      {
                                                                        ATerm q_27 = t;
                                                                        int r_27 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm s_27 = ATgetArgument(t, 0);
                                                                                ATerm t_27 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(r_27);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = q_27;
                                                                            {
                                                                              ATerm u_27 = t;
                                                                              int v_27 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm w_27 = ATgetArgument(t, 0);
                                                                                      ATerm x_27 = ATgetArgument(t, 1);
                                                                                      ATerm y_27 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(v_27);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_27;
                                                                                  {
                                                                                    ATerm z_27 = t;
                                                                                    int a_28 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm b_28 = ATgetArgument(t, 0);
                                                                                            ATerm c_28 = ATgetArgument(t, 1);
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
                                                                                          ATerm d_28 = t;
                                                                                          int e_28 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm f_28 = ATgetArgument(t, 0);
                                                                                                  ATerm g_28 = ATgetArgument(t, 1);
                                                                                                  ATerm h_28 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(e_28);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_28;
                                                                                              {
                                                                                                ATerm i_28 = t;
                                                                                                int j_28 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm k_28 = ATgetArgument(t, 0);
                                                                                                        ATerm l_28 = ATgetArgument(t, 1);
                                                                                                        ATerm m_28 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(j_28);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = i_28;
                                                                                                    {
                                                                                                      ATerm n_28 = t;
                                                                                                      int o_28 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                            {
                                                                                                              ATerm p_28 = ATgetArgument(t, 0);
                                                                                                              ATerm q_28 = ATgetArgument(t, 1);
                                                                                                              ATerm r_28 = ATgetArgument(t, 2);
                                                                                                              ATerm s_28 = ATgetArgument(t, 3);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(o_28);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = n_28;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm t_28 = ATgetArgument(t, 0);
                                                                                                              ATerm u_28 = ATgetArgument(t, 1);
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
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                    {
                                      e_24 = ATgetArgument(t, 0);
                                      f_24 = ATgetArgument(t, 1);
                                      {
                                        ATerm v_28 = t;
                                        int w_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = e_24;
                                            {
                                              ATerm x_28 = t;
                                              int y_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm z_28 = ATgetArgument(t, 0);
                                                      ATerm a_29 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(y_28);
                                                  t = e_24;
                                                }
                                              else
                                                {
                                                  t = x_28;
                                                  {
                                                    ATerm b_29 = t;
                                                    int c_29 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm d_29 = ATgetArgument(t, 0);
                                                            ATerm e_29 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(c_29);
                                                        t = e_24;
                                                      }
                                                    else
                                                      {
                                                        t = b_29;
                                                        {
                                                          ATerm f_29 = t;
                                                          int g_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm h_29 = ATgetArgument(t, 0);
                                                                  ATerm i_29 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(g_29);
                                                              t = e_24;
                                                            }
                                                          else
                                                            {
                                                              t = f_29;
                                                              {
                                                                ATerm j_29 = t;
                                                                int k_29 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm l_29 = ATgetArgument(t, 0);
                                                                        ATerm m_29 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(k_29);
                                                                    t = e_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_29;
                                                                    {
                                                                      ATerm n_29 = t;
                                                                      int o_29 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm p_29 = ATgetArgument(t, 0);
                                                                              ATerm q_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(o_29);
                                                                          t = e_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = n_29;
                                                                          {
                                                                            ATerm r_29 = t;
                                                                            int s_29 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm t_29 = ATgetArgument(t, 0);
                                                                                    ATerm u_29 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(s_29);
                                                                                t = e_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_29;
                                                                                {
                                                                                  ATerm v_29 = t;
                                                                                  int w_29 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm x_29 = ATgetArgument(t, 0);
                                                                                          ATerm y_29 = ATgetArgument(t, 1);
                                                                                          ATerm z_29 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(w_29);
                                                                                      t = e_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_29;
                                                                                      {
                                                                                        ATerm a_30 = t;
                                                                                        int b_30 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm c_30 = ATgetArgument(t, 0);
                                                                                                ATerm d_30 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(b_30);
                                                                                            t = e_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = a_30;
                                                                                            {
                                                                                              ATerm e_30 = t;
                                                                                              int f_30 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm g_30 = ATgetArgument(t, 0);
                                                                                                      ATerm h_30 = ATgetArgument(t, 1);
                                                                                                      ATerm i_30 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(f_30);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = e_30;
                                                                                                  {
                                                                                                    ATerm j_30 = t;
                                                                                                    int k_30 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm l_30 = ATgetArgument(t, 0);
                                                                                                            ATerm m_30 = ATgetArgument(t, 1);
                                                                                                            ATerm n_30 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(k_30);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = j_30;
                                                                                                        {
                                                                                                          ATerm o_30 = t;
                                                                                                          int p_30 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                {
                                                                                                                  ATerm q_30 = ATgetArgument(t, 0);
                                                                                                                  ATerm r_30 = ATgetArgument(t, 1);
                                                                                                                  ATerm s_30 = ATgetArgument(t, 2);
                                                                                                                  ATerm t_30 = ATgetArgument(t, 3);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(p_30);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = o_30;
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm u_30 = ATgetArgument(t, 0);
                                                                                                                  ATerm v_30 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                            LocalPopChoice(w_28);
                                          }
                                        else
                                          {
                                            t = v_28;
                                            t = f_24;
                                            {
                                              ATerm w_30 = t;
                                              int x_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm y_30 = ATgetArgument(t, 0);
                                                      ATerm z_30 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(x_30);
                                                  t = f_24;
                                                }
                                              else
                                                {
                                                  t = w_30;
                                                  {
                                                    ATerm a_31 = t;
                                                    int b_31 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm c_31 = ATgetArgument(t, 0);
                                                            ATerm d_31 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(b_31);
                                                        t = f_24;
                                                      }
                                                    else
                                                      {
                                                        t = a_31;
                                                        {
                                                          ATerm e_31 = t;
                                                          int f_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm g_31 = ATgetArgument(t, 0);
                                                                  ATerm h_31 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(f_31);
                                                              t = f_24;
                                                            }
                                                          else
                                                            {
                                                              t = e_31;
                                                              {
                                                                ATerm i_31 = t;
                                                                int j_31 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm k_31 = ATgetArgument(t, 0);
                                                                        ATerm l_31 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(j_31);
                                                                    t = f_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_31;
                                                                    {
                                                                      ATerm m_31 = t;
                                                                      int n_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm o_31 = ATgetArgument(t, 0);
                                                                              ATerm p_31 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(n_31);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_31;
                                                                          {
                                                                            ATerm q_31 = t;
                                                                            int r_31 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm s_31 = ATgetArgument(t, 0);
                                                                                    ATerm t_31 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(r_31);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_31;
                                                                                {
                                                                                  ATerm u_31 = t;
                                                                                  int v_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm w_31 = ATgetArgument(t, 0);
                                                                                          ATerm x_31 = ATgetArgument(t, 1);
                                                                                          ATerm y_31 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(v_31);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_31;
                                                                                      {
                                                                                        ATerm z_31 = t;
                                                                                        int a_32 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm b_32 = ATgetArgument(t, 0);
                                                                                                ATerm c_32 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(a_32);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_31;
                                                                                            {
                                                                                              ATerm d_32 = t;
                                                                                              int e_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm f_32 = ATgetArgument(t, 0);
                                                                                                      ATerm g_32 = ATgetArgument(t, 1);
                                                                                                      ATerm h_32 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(e_32);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_32;
                                                                                                  {
                                                                                                    ATerm i_32 = t;
                                                                                                    int j_32 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm k_32 = ATgetArgument(t, 0);
                                                                                                            ATerm l_32 = ATgetArgument(t, 1);
                                                                                                            ATerm m_32 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(j_32);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_32;
                                                                                                        {
                                                                                                          ATerm n_32 = t;
                                                                                                          int o_32 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                {
                                                                                                                  ATerm p_32 = ATgetArgument(t, 0);
                                                                                                                  ATerm q_32 = ATgetArgument(t, 1);
                                                                                                                  ATerm r_32 = ATgetArgument(t, 2);
                                                                                                                  ATerm s_32 = ATgetArgument(t, 3);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(o_32);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = n_32;
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm t_32 = ATgetArgument(t, 0);
                                                                                                                  ATerm u_32 = ATgetArgument(t, 1);
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
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                        {
                                          e_24 = ATgetArgument(t, 0);
                                          f_24 = ATgetArgument(t, 1);
                                          g_24 = ATgetArgument(t, 2);
                                          {
                                            ATerm v_32 = t;
                                            int w_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = e_24;
                                                {
                                                  ATerm x_32 = t;
                                                  int y_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm z_32 = ATgetArgument(t, 0);
                                                          ATerm a_33 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(y_32);
                                                      t = e_24;
                                                    }
                                                  else
                                                    {
                                                      t = x_32;
                                                      {
                                                        ATerm b_33 = t;
                                                        int c_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm d_33 = ATgetArgument(t, 0);
                                                                ATerm e_33 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(c_33);
                                                            t = e_24;
                                                          }
                                                        else
                                                          {
                                                            t = b_33;
                                                            {
                                                              ATerm f_33 = t;
                                                              int g_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm h_33 = ATgetArgument(t, 0);
                                                                      ATerm i_33 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(g_33);
                                                                  t = e_24;
                                                                }
                                                              else
                                                                {
                                                                  t = f_33;
                                                                  {
                                                                    ATerm j_33 = t;
                                                                    int k_33 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm l_33 = ATgetArgument(t, 0);
                                                                            ATerm m_33 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(k_33);
                                                                        t = e_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_33;
                                                                        {
                                                                          ATerm n_33 = t;
                                                                          int o_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm p_33 = ATgetArgument(t, 0);
                                                                                  ATerm q_33 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(o_33);
                                                                              t = e_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_33;
                                                                              {
                                                                                ATerm r_33 = t;
                                                                                int s_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm t_33 = ATgetArgument(t, 0);
                                                                                        ATerm u_33 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(s_33);
                                                                                    t = e_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_33;
                                                                                    {
                                                                                      ATerm v_33 = t;
                                                                                      int w_33 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm x_33 = ATgetArgument(t, 0);
                                                                                              ATerm y_33 = ATgetArgument(t, 1);
                                                                                              ATerm z_33 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(w_33);
                                                                                          t = e_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_33;
                                                                                          {
                                                                                            ATerm a_34 = t;
                                                                                            int b_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                  {
                                                                                                    ATerm c_34 = ATgetArgument(t, 0);
                                                                                                    ATerm d_34 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(b_34);
                                                                                                t = e_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_34;
                                                                                                {
                                                                                                  ATerm e_34 = t;
                                                                                                  int f_34 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                        {
                                                                                                          ATerm g_34 = ATgetArgument(t, 0);
                                                                                                          ATerm h_34 = ATgetArgument(t, 1);
                                                                                                          ATerm i_34 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(f_34);
                                                                                                      t = e_24;
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
                                                                                                            t = e_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_34;
                                                                                                            {
                                                                                                              ATerm o_34 = t;
                                                                                                              int p_34 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm q_34 = ATgetArgument(t, 0);
                                                                                                                      ATerm r_34 = ATgetArgument(t, 1);
                                                                                                                      ATerm s_34 = ATgetArgument(t, 2);
                                                                                                                      ATerm t_34 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(p_34);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = o_34;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm u_34 = ATgetArgument(t, 0);
                                                                                                                      ATerm v_34 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24, g_24);
                                                LocalPopChoice(w_32);
                                              }
                                            else
                                              {
                                                t = v_32;
                                                {
                                                  ATerm w_34 = t;
                                                  int x_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = f_24;
                                                      {
                                                        ATerm y_34 = t;
                                                        int z_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Choice_2))
                                                              {
                                                                ATerm a_35 = ATgetArgument(t, 0);
                                                                ATerm b_35 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(z_34);
                                                            t = f_24;
                                                          }
                                                        else
                                                          {
                                                            t = y_34;
                                                            {
                                                              ATerm c_35 = t;
                                                              int d_35 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      ATerm e_35 = ATgetArgument(t, 0);
                                                                      ATerm f_35 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(d_35);
                                                                  t = f_24;
                                                                }
                                                              else
                                                                {
                                                                  t = c_35;
                                                                  {
                                                                    ATerm g_35 = t;
                                                                    int h_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_RChoice_2))
                                                                          {
                                                                            ATerm i_35 = ATgetArgument(t, 0);
                                                                            ATerm j_35 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(h_35);
                                                                        t = f_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_35;
                                                                        {
                                                                          ATerm k_35 = t;
                                                                          int l_35 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  ATerm m_35 = ATgetArgument(t, 0);
                                                                                  ATerm n_35 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(l_35);
                                                                              t = f_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_35;
                                                                              {
                                                                                ATerm o_35 = t;
                                                                                int p_35 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                      {
                                                                                        ATerm q_35 = ATgetArgument(t, 0);
                                                                                        ATerm r_35 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(p_35);
                                                                                    t = f_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_35;
                                                                                    {
                                                                                      ATerm s_35 = t;
                                                                                      int t_35 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                            {
                                                                                              ATerm u_35 = ATgetArgument(t, 0);
                                                                                              ATerm v_35 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(t_35);
                                                                                          t = f_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_35;
                                                                                          {
                                                                                            ATerm w_35 = t;
                                                                                            int x_35 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm y_35 = ATgetArgument(t, 0);
                                                                                                    ATerm z_35 = ATgetArgument(t, 1);
                                                                                                    ATerm a_36 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(x_35);
                                                                                                t = f_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = w_35;
                                                                                                {
                                                                                                  ATerm b_36 = t;
                                                                                                  int c_36 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_AM_2))
                                                                                                        {
                                                                                                          ATerm d_36 = ATgetArgument(t, 0);
                                                                                                          ATerm e_36 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(c_36);
                                                                                                      t = f_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_36;
                                                                                                      {
                                                                                                        ATerm f_36 = t;
                                                                                                        int g_36 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                              {
                                                                                                                ATerm h_36 = ATgetArgument(t, 0);
                                                                                                                ATerm i_36 = ATgetArgument(t, 1);
                                                                                                                ATerm j_36 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(g_36);
                                                                                                            t = f_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_36;
                                                                                                            {
                                                                                                              ATerm k_36 = t;
                                                                                                              int l_36 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                    {
                                                                                                                      ATerm m_36 = ATgetArgument(t, 0);
                                                                                                                      ATerm n_36 = ATgetArgument(t, 1);
                                                                                                                      ATerm o_36 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(l_36);
                                                                                                                  t = f_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_36;
                                                                                                                  {
                                                                                                                    ATerm p_36 = t;
                                                                                                                    int q_36 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                          {
                                                                                                                            ATerm r_36 = ATgetArgument(t, 0);
                                                                                                                            ATerm s_36 = ATgetArgument(t, 1);
                                                                                                                            ATerm t_36 = ATgetArgument(t, 2);
                                                                                                                            ATerm u_36 = ATgetArgument(t, 3);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(q_36);
                                                                                                                        t = f_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_36;
                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                          {
                                                                                                                            ATerm v_36 = ATgetArgument(t, 0);
                                                                                                                            ATerm w_36 = ATgetArgument(t, 1);
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
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, e_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                      LocalPopChoice(x_34);
                                                    }
                                                  else
                                                    {
                                                      t = w_34;
                                                      t = g_24;
                                                      {
                                                        ATerm x_36 = t;
                                                        int y_36 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Choice_2))
                                                              {
                                                                ATerm z_36 = ATgetArgument(t, 0);
                                                                ATerm a_37 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(y_36);
                                                            t = g_24;
                                                          }
                                                        else
                                                          {
                                                            t = x_36;
                                                            {
                                                              ATerm b_37 = t;
                                                              int c_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      ATerm d_37 = ATgetArgument(t, 0);
                                                                      ATerm e_37 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(c_37);
                                                                  t = g_24;
                                                                }
                                                              else
                                                                {
                                                                  t = b_37;
                                                                  {
                                                                    ATerm f_37 = t;
                                                                    int g_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_RChoice_2))
                                                                          {
                                                                            ATerm h_37 = ATgetArgument(t, 0);
                                                                            ATerm i_37 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(g_37);
                                                                        t = g_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_37;
                                                                        {
                                                                          ATerm j_37 = t;
                                                                          int k_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  ATerm l_37 = ATgetArgument(t, 0);
                                                                                  ATerm m_37 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(k_37);
                                                                              t = g_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_37;
                                                                              {
                                                                                ATerm n_37 = t;
                                                                                int o_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                      {
                                                                                        ATerm p_37 = ATgetArgument(t, 0);
                                                                                        ATerm q_37 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(o_37);
                                                                                    t = g_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_37;
                                                                                    {
                                                                                      ATerm r_37 = t;
                                                                                      int s_37 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                            {
                                                                                              ATerm t_37 = ATgetArgument(t, 0);
                                                                                              ATerm u_37 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(s_37);
                                                                                          t = g_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_37;
                                                                                          {
                                                                                            ATerm v_37 = t;
                                                                                            int w_37 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm x_37 = ATgetArgument(t, 0);
                                                                                                    ATerm y_37 = ATgetArgument(t, 1);
                                                                                                    ATerm z_37 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(w_37);
                                                                                                t = g_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_37;
                                                                                                {
                                                                                                  ATerm a_38 = t;
                                                                                                  int b_38 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_AM_2))
                                                                                                        {
                                                                                                          ATerm c_38 = ATgetArgument(t, 0);
                                                                                                          ATerm d_38 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(b_38);
                                                                                                      t = g_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_38;
                                                                                                      {
                                                                                                        ATerm e_38 = t;
                                                                                                        int f_38 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                              {
                                                                                                                ATerm g_38 = ATgetArgument(t, 0);
                                                                                                                ATerm h_38 = ATgetArgument(t, 1);
                                                                                                                ATerm i_38 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(f_38);
                                                                                                            t = g_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_38;
                                                                                                            {
                                                                                                              ATerm j_38 = t;
                                                                                                              int k_38 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                    {
                                                                                                                      ATerm l_38 = ATgetArgument(t, 0);
                                                                                                                      ATerm m_38 = ATgetArgument(t, 1);
                                                                                                                      ATerm n_38 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(k_38);
                                                                                                                  t = g_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_38;
                                                                                                                  {
                                                                                                                    ATerm o_38 = t;
                                                                                                                    int p_38 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                          {
                                                                                                                            ATerm q_38 = ATgetArgument(t, 0);
                                                                                                                            ATerm r_38 = ATgetArgument(t, 1);
                                                                                                                            ATerm s_38 = ATgetArgument(t, 2);
                                                                                                                            ATerm t_38 = ATgetArgument(t, 3);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(p_38);
                                                                                                                        t = g_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_38;
                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                          {
                                                                                                                            ATerm u_38 = ATgetArgument(t, 0);
                                                                                                                            ATerm v_38 = ATgetArgument(t, 1);
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
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, e_24, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_AM_2))
                                            {
                                              e_24 = ATgetArgument(t, 0);
                                              f_24 = ATgetArgument(t, 1);
                                              {
                                                ATerm w_38 = t;
                                                int x_38 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = e_24;
                                                    {
                                                      ATerm y_38 = t;
                                                      int z_38 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm a_39 = ATgetArgument(t, 0);
                                                              ATerm b_39 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(z_38);
                                                          t = e_24;
                                                        }
                                                      else
                                                        {
                                                          t = y_38;
                                                          {
                                                            ATerm c_39 = t;
                                                            int d_39 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm e_39 = ATgetArgument(t, 0);
                                                                    ATerm f_39 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(d_39);
                                                                t = e_24;
                                                              }
                                                            else
                                                              {
                                                                t = c_39;
                                                                {
                                                                  ATerm g_39 = t;
                                                                  int h_39 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm i_39 = ATgetArgument(t, 0);
                                                                          ATerm j_39 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(h_39);
                                                                      t = e_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_39;
                                                                      {
                                                                        ATerm k_39 = t;
                                                                        int l_39 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm m_39 = ATgetArgument(t, 0);
                                                                                ATerm n_39 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(l_39);
                                                                            t = e_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = k_39;
                                                                            {
                                                                              ATerm o_39 = t;
                                                                              int p_39 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm q_39 = ATgetArgument(t, 0);
                                                                                      ATerm r_39 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(p_39);
                                                                                  t = e_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = o_39;
                                                                                  {
                                                                                    ATerm s_39 = t;
                                                                                    int t_39 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm u_39 = ATgetArgument(t, 0);
                                                                                            ATerm v_39 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(t_39);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_39;
                                                                                        {
                                                                                          ATerm w_39 = t;
                                                                                          int x_39 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm y_39 = ATgetArgument(t, 0);
                                                                                                  ATerm z_39 = ATgetArgument(t, 1);
                                                                                                  ATerm a_40 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(x_39);
                                                                                              t = e_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_39;
                                                                                              {
                                                                                                ATerm b_40 = t;
                                                                                                int c_40 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm d_40 = ATgetArgument(t, 0);
                                                                                                        ATerm e_40 = ATgetArgument(t, 1);
                                                                                                        ATerm f_40 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(c_40);
                                                                                                    t = e_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = b_40;
                                                                                                    {
                                                                                                      ATerm g_40 = t;
                                                                                                      int h_40 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm i_40 = ATgetArgument(t, 0);
                                                                                                              ATerm j_40 = ATgetArgument(t, 1);
                                                                                                              ATerm k_40 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(h_40);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = g_40;
                                                                                                          {
                                                                                                            ATerm l_40 = t;
                                                                                                            int m_40 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm n_40 = ATgetArgument(t, 0);
                                                                                                                    ATerm o_40 = ATgetArgument(t, 1);
                                                                                                                    ATerm p_40 = ATgetArgument(t, 2);
                                                                                                                    ATerm q_40 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(m_40);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = l_40;
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm r_40 = ATgetArgument(t, 0);
                                                                                                                    ATerm s_40 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                    LocalPopChoice(x_38);
                                                  }
                                                else
                                                  {
                                                    t = w_38;
                                                    t = f_24;
                                                    {
                                                      ATerm t_40 = t;
                                                      int u_40 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm v_40 = ATgetArgument(t, 0);
                                                              ATerm w_40 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(u_40);
                                                          t = f_24;
                                                        }
                                                      else
                                                        {
                                                          t = t_40;
                                                          {
                                                            ATerm x_40 = t;
                                                            int y_40 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm z_40 = ATgetArgument(t, 0);
                                                                    ATerm a_41 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(y_40);
                                                                t = f_24;
                                                              }
                                                            else
                                                              {
                                                                t = x_40;
                                                                {
                                                                  ATerm b_41 = t;
                                                                  int c_41 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm d_41 = ATgetArgument(t, 0);
                                                                          ATerm e_41 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(c_41);
                                                                      t = f_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_41;
                                                                      {
                                                                        ATerm f_41 = t;
                                                                        int g_41 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm h_41 = ATgetArgument(t, 0);
                                                                                ATerm i_41 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(g_41);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = f_41;
                                                                            {
                                                                              ATerm j_41 = t;
                                                                              int k_41 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm l_41 = ATgetArgument(t, 0);
                                                                                      ATerm m_41 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(k_41);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_41;
                                                                                  {
                                                                                    ATerm n_41 = t;
                                                                                    int o_41 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm p_41 = ATgetArgument(t, 0);
                                                                                            ATerm q_41 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(o_41);
                                                                                        t = f_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_41;
                                                                                        {
                                                                                          ATerm r_41 = t;
                                                                                          int s_41 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm t_41 = ATgetArgument(t, 0);
                                                                                                  ATerm u_41 = ATgetArgument(t, 1);
                                                                                                  ATerm v_41 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(s_41);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_41;
                                                                                              {
                                                                                                ATerm w_41 = t;
                                                                                                int x_41 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm y_41 = ATgetArgument(t, 0);
                                                                                                        ATerm z_41 = ATgetArgument(t, 1);
                                                                                                        ATerm a_42 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(x_41);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = w_41;
                                                                                                    {
                                                                                                      ATerm b_42 = t;
                                                                                                      int c_42 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm d_42 = ATgetArgument(t, 0);
                                                                                                              ATerm e_42 = ATgetArgument(t, 1);
                                                                                                              ATerm f_42 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(c_42);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = b_42;
                                                                                                          {
                                                                                                            ATerm g_42 = t;
                                                                                                            int h_42 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm i_42 = ATgetArgument(t, 0);
                                                                                                                    ATerm j_42 = ATgetArgument(t, 1);
                                                                                                                    ATerm k_42 = ATgetArgument(t, 2);
                                                                                                                    ATerm l_42 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(h_42);
                                                                                                                t = f_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = g_42;
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm m_42 = ATgetArgument(t, 0);
                                                                                                                    ATerm n_42 = ATgetArgument(t, 1);
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
                                                    t = (ATerm) ATmakeAppl(sym_AM_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                {
                                                  e_24 = ATgetArgument(t, 0);
                                                  f_24 = ATgetArgument(t, 1);
                                                  g_24 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm o_42 = t;
                                                    int p_42 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = e_24;
                                                        {
                                                          ATerm q_42 = t;
                                                          int r_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm s_42 = ATgetArgument(t, 0);
                                                                  ATerm t_42 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(r_42);
                                                              t = e_24;
                                                            }
                                                          else
                                                            {
                                                              t = q_42;
                                                              {
                                                                ATerm u_42 = t;
                                                                int v_42 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm w_42 = ATgetArgument(t, 0);
                                                                        ATerm x_42 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(v_42);
                                                                    t = e_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = u_42;
                                                                    {
                                                                      ATerm y_42 = t;
                                                                      int z_42 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm a_43 = ATgetArgument(t, 0);
                                                                              ATerm b_43 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(z_42);
                                                                          t = e_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = y_42;
                                                                          {
                                                                            ATerm c_43 = t;
                                                                            int d_43 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm e_43 = ATgetArgument(t, 0);
                                                                                    ATerm f_43 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(d_43);
                                                                                t = e_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = c_43;
                                                                                {
                                                                                  ATerm g_43 = t;
                                                                                  int h_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm i_43 = ATgetArgument(t, 0);
                                                                                          ATerm j_43 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(h_43);
                                                                                      t = e_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = g_43;
                                                                                      {
                                                                                        ATerm k_43 = t;
                                                                                        int l_43 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm m_43 = ATgetArgument(t, 0);
                                                                                                ATerm n_43 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(l_43);
                                                                                            t = e_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_43;
                                                                                            {
                                                                                              ATerm o_43 = t;
                                                                                              int p_43 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm q_43 = ATgetArgument(t, 0);
                                                                                                      ATerm r_43 = ATgetArgument(t, 1);
                                                                                                      ATerm s_43 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(p_43);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = o_43;
                                                                                                  {
                                                                                                    ATerm t_43 = t;
                                                                                                    int u_43 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm v_43 = ATgetArgument(t, 0);
                                                                                                            ATerm w_43 = ATgetArgument(t, 1);
                                                                                                            ATerm x_43 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(u_43);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = t_43;
                                                                                                        {
                                                                                                          ATerm y_43 = t;
                                                                                                          int z_43 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                {
                                                                                                                  ATerm a_44 = ATgetArgument(t, 0);
                                                                                                                  ATerm b_44 = ATgetArgument(t, 1);
                                                                                                                  ATerm c_44 = ATgetArgument(t, 2);
                                                                                                                  ATerm d_44 = ATgetArgument(t, 3);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(z_43);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = y_43;
                                                                                                              {
                                                                                                                ATerm e_44 = t;
                                                                                                                int f_44 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm g_44 = ATgetArgument(t, 0);
                                                                                                                        ATerm h_44 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(f_44);
                                                                                                                    t = e_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = e_44;
                                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                      {
                                                                                                                        ATerm i_44 = ATgetArgument(t, 0);
                                                                                                                        ATerm j_44 = ATgetArgument(t, 1);
                                                                                                                        ATerm k_44 = ATgetArgument(t, 2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = e_24;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24, g_24);
                                                        LocalPopChoice(p_42);
                                                      }
                                                    else
                                                      {
                                                        t = o_42;
                                                        {
                                                          ATerm l_44 = t;
                                                          int m_44 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = f_24;
                                                              {
                                                                ATerm n_44 = t;
                                                                int o_44 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm p_44 = ATgetArgument(t, 0);
                                                                        ATerm q_44 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(o_44);
                                                                    t = f_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = n_44;
                                                                    {
                                                                      ATerm r_44 = t;
                                                                      int s_44 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm t_44 = ATgetArgument(t, 0);
                                                                              ATerm u_44 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(s_44);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_44;
                                                                          {
                                                                            ATerm v_44 = t;
                                                                            int w_44 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm x_44 = ATgetArgument(t, 0);
                                                                                    ATerm y_44 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(w_44);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_44;
                                                                                {
                                                                                  ATerm z_44 = t;
                                                                                  int a_45 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm b_45 = ATgetArgument(t, 0);
                                                                                          ATerm c_45 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(a_45);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_44;
                                                                                      {
                                                                                        ATerm d_45 = t;
                                                                                        int e_45 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm f_45 = ATgetArgument(t, 0);
                                                                                                ATerm g_45 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(e_45);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_45;
                                                                                            {
                                                                                              ATerm h_45 = t;
                                                                                              int i_45 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm j_45 = ATgetArgument(t, 0);
                                                                                                      ATerm k_45 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_45);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_45;
                                                                                                  {
                                                                                                    ATerm l_45 = t;
                                                                                                    int m_45 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm n_45 = ATgetArgument(t, 0);
                                                                                                            ATerm o_45 = ATgetArgument(t, 1);
                                                                                                            ATerm p_45 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(m_45);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_45;
                                                                                                        {
                                                                                                          ATerm q_45 = t;
                                                                                                          int r_45 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm s_45 = ATgetArgument(t, 0);
                                                                                                                  ATerm t_45 = ATgetArgument(t, 1);
                                                                                                                  ATerm u_45 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(r_45);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_45;
                                                                                                              {
                                                                                                                ATerm v_45 = t;
                                                                                                                int w_45 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm x_45 = ATgetArgument(t, 0);
                                                                                                                        ATerm y_45 = ATgetArgument(t, 1);
                                                                                                                        ATerm z_45 = ATgetArgument(t, 2);
                                                                                                                        ATerm a_46 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(w_45);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = v_45;
                                                                                                                    {
                                                                                                                      ATerm b_46 = t;
                                                                                                                      int c_46 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                                            {
                                                                                                                              ATerm d_46 = ATgetArgument(t, 0);
                                                                                                                              ATerm e_46 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(c_46);
                                                                                                                          t = f_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_46;
                                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                            {
                                                                                                                              ATerm f_46 = ATgetArgument(t, 0);
                                                                                                                              ATerm g_46 = ATgetArgument(t, 1);
                                                                                                                              ATerm h_46 = ATgetArgument(t, 2);
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
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, e_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                              LocalPopChoice(m_44);
                                                            }
                                                          else
                                                            {
                                                              t = l_44;
                                                              t = g_24;
                                                              {
                                                                ATerm i_46 = t;
                                                                int j_46 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm k_46 = ATgetArgument(t, 0);
                                                                        ATerm l_46 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(j_46);
                                                                    t = g_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_46;
                                                                    {
                                                                      ATerm m_46 = t;
                                                                      int n_46 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm o_46 = ATgetArgument(t, 0);
                                                                              ATerm p_46 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(n_46);
                                                                          t = g_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_46;
                                                                          {
                                                                            ATerm q_46 = t;
                                                                            int r_46 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm s_46 = ATgetArgument(t, 0);
                                                                                    ATerm t_46 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(r_46);
                                                                                t = g_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_46;
                                                                                {
                                                                                  ATerm u_46 = t;
                                                                                  int v_46 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm w_46 = ATgetArgument(t, 0);
                                                                                          ATerm x_46 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(v_46);
                                                                                      t = g_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_46;
                                                                                      {
                                                                                        ATerm y_46 = t;
                                                                                        int z_46 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm a_47 = ATgetArgument(t, 0);
                                                                                                ATerm b_47 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(z_46);
                                                                                            t = g_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_46;
                                                                                            {
                                                                                              ATerm c_47 = t;
                                                                                              int d_47 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm e_47 = ATgetArgument(t, 0);
                                                                                                      ATerm f_47 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(d_47);
                                                                                                  t = g_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_47;
                                                                                                  {
                                                                                                    ATerm g_47 = t;
                                                                                                    int h_47 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm i_47 = ATgetArgument(t, 0);
                                                                                                            ATerm j_47 = ATgetArgument(t, 1);
                                                                                                            ATerm k_47 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(h_47);
                                                                                                        t = g_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_47;
                                                                                                        {
                                                                                                          ATerm l_47 = t;
                                                                                                          int m_47 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm n_47 = ATgetArgument(t, 0);
                                                                                                                  ATerm o_47 = ATgetArgument(t, 1);
                                                                                                                  ATerm p_47 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(m_47);
                                                                                                              t = g_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = l_47;
                                                                                                              {
                                                                                                                ATerm q_47 = t;
                                                                                                                int r_47 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm s_47 = ATgetArgument(t, 0);
                                                                                                                        ATerm t_47 = ATgetArgument(t, 1);
                                                                                                                        ATerm u_47 = ATgetArgument(t, 2);
                                                                                                                        ATerm v_47 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(r_47);
                                                                                                                    t = g_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = q_47;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm w_47 = ATgetArgument(t, 0);
                                                                                                                        ATerm x_47 = ATgetArgument(t, 1);
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
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, e_24, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                    {
                                                      e_24 = ATgetArgument(t, 0);
                                                      f_24 = ATgetArgument(t, 1);
                                                      g_24 = ATgetArgument(t, 2);
                                                      {
                                                        ATerm y_47 = t;
                                                        int z_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = e_24;
                                                            {
                                                              ATerm a_48 = t;
                                                              int b_48 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      ATerm c_48 = ATgetArgument(t, 0);
                                                                      ATerm d_48 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(b_48);
                                                                  t = e_24;
                                                                }
                                                              else
                                                                {
                                                                  t = a_48;
                                                                  {
                                                                    ATerm e_48 = t;
                                                                    int f_48 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm g_48 = ATgetArgument(t, 0);
                                                                            ATerm h_48 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_48);
                                                                        t = e_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_48;
                                                                        {
                                                                          ATerm i_48 = t;
                                                                          int j_48 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm k_48 = ATgetArgument(t, 0);
                                                                                  ATerm l_48 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(j_48);
                                                                              t = e_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_48;
                                                                              {
                                                                                ATerm m_48 = t;
                                                                                int n_48 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm o_48 = ATgetArgument(t, 0);
                                                                                        ATerm p_48 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(n_48);
                                                                                    t = e_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_48;
                                                                                    {
                                                                                      ATerm q_48 = t;
                                                                                      int r_48 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm s_48 = ATgetArgument(t, 0);
                                                                                              ATerm t_48 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(r_48);
                                                                                          t = e_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_48;
                                                                                          {
                                                                                            ATerm u_48 = t;
                                                                                            int v_48 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm w_48 = ATgetArgument(t, 0);
                                                                                                    ATerm x_48 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(v_48);
                                                                                                t = e_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_48;
                                                                                                {
                                                                                                  ATerm y_48 = t;
                                                                                                  int z_48 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm a_49 = ATgetArgument(t, 0);
                                                                                                          ATerm b_49 = ATgetArgument(t, 1);
                                                                                                          ATerm c_49 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(z_48);
                                                                                                      t = e_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_48;
                                                                                                      {
                                                                                                        ATerm d_49 = t;
                                                                                                        int e_49 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                              {
                                                                                                                ATerm f_49 = ATgetArgument(t, 0);
                                                                                                                ATerm g_49 = ATgetArgument(t, 1);
                                                                                                                ATerm h_49 = ATgetArgument(t, 2);
                                                                                                                ATerm i_49 = ATgetArgument(t, 3);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(e_49);
                                                                                                            t = e_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_49;
                                                                                                            {
                                                                                                              ATerm j_49 = t;
                                                                                                              int k_49 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm l_49 = ATgetArgument(t, 0);
                                                                                                                      ATerm m_49 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(k_49);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_49;
                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                    {
                                                                                                                      ATerm n_49 = ATgetArgument(t, 0);
                                                                                                                      ATerm o_49 = ATgetArgument(t, 1);
                                                                                                                      ATerm p_49 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24, g_24);
                                                            LocalPopChoice(z_47);
                                                          }
                                                        else
                                                          {
                                                            t = y_47;
                                                            {
                                                              ATerm q_49 = t;
                                                              int r_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = f_24;
                                                                  {
                                                                    ATerm s_49 = t;
                                                                    int t_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm u_49 = ATgetArgument(t, 0);
                                                                            ATerm v_49 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(t_49);
                                                                        t = f_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_49;
                                                                        {
                                                                          ATerm w_49 = t;
                                                                          int x_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm y_49 = ATgetArgument(t, 0);
                                                                                  ATerm z_49 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(x_49);
                                                                              t = f_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_49;
                                                                              {
                                                                                ATerm a_50 = t;
                                                                                int b_50 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                      {
                                                                                        ATerm c_50 = ATgetArgument(t, 0);
                                                                                        ATerm d_50 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(b_50);
                                                                                    t = f_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_50;
                                                                                    {
                                                                                      ATerm e_50 = t;
                                                                                      int f_50 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                            {
                                                                                              ATerm g_50 = ATgetArgument(t, 0);
                                                                                              ATerm h_50 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(f_50);
                                                                                          t = f_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_50;
                                                                                          {
                                                                                            ATerm i_50 = t;
                                                                                            int j_50 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                                  {
                                                                                                    ATerm k_50 = ATgetArgument(t, 0);
                                                                                                    ATerm l_50 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(j_50);
                                                                                                t = f_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = i_50;
                                                                                                {
                                                                                                  ATerm m_50 = t;
                                                                                                  int n_50 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RGChoice_2))
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
                                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                              {
                                                                                                                ATerm s_50 = ATgetArgument(t, 0);
                                                                                                                ATerm t_50 = ATgetArgument(t, 1);
                                                                                                                ATerm u_50 = ATgetArgument(t, 2);
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
                                                                                                              ATerm v_50 = t;
                                                                                                              int w_50 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm x_50 = ATgetArgument(t, 0);
                                                                                                                      ATerm y_50 = ATgetArgument(t, 1);
                                                                                                                      ATerm z_50 = ATgetArgument(t, 2);
                                                                                                                      ATerm a_51 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(w_50);
                                                                                                                  t = f_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = v_50;
                                                                                                                  {
                                                                                                                    ATerm b_51 = t;
                                                                                                                    int c_51 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                          {
                                                                                                                            ATerm d_51 = ATgetArgument(t, 0);
                                                                                                                            ATerm e_51 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(c_51);
                                                                                                                        t = f_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = b_51;
                                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                          {
                                                                                                                            ATerm f_51 = ATgetArgument(t, 0);
                                                                                                                            ATerm g_51 = ATgetArgument(t, 1);
                                                                                                                            ATerm h_51 = ATgetArgument(t, 2);
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
                                                                  t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, e_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                  LocalPopChoice(r_49);
                                                                }
                                                              else
                                                                {
                                                                  t = q_49;
                                                                  t = g_24;
                                                                  {
                                                                    ATerm i_51 = t;
                                                                    int j_51 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm k_51 = ATgetArgument(t, 0);
                                                                            ATerm l_51 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(j_51);
                                                                        t = g_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_51;
                                                                        {
                                                                          ATerm m_51 = t;
                                                                          int n_51 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm o_51 = ATgetArgument(t, 0);
                                                                                  ATerm p_51 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(n_51);
                                                                              t = g_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_51;
                                                                              {
                                                                                ATerm q_51 = t;
                                                                                int r_51 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                      {
                                                                                        ATerm s_51 = ATgetArgument(t, 0);
                                                                                        ATerm t_51 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(r_51);
                                                                                    t = g_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_51;
                                                                                    {
                                                                                      ATerm u_51 = t;
                                                                                      int v_51 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                            {
                                                                                              ATerm w_51 = ATgetArgument(t, 0);
                                                                                              ATerm x_51 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(v_51);
                                                                                          t = g_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_51;
                                                                                          {
                                                                                            ATerm y_51 = t;
                                                                                            int z_51 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                                  {
                                                                                                    ATerm a_52 = ATgetArgument(t, 0);
                                                                                                    ATerm b_52 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(z_51);
                                                                                                t = g_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = y_51;
                                                                                                {
                                                                                                  ATerm c_52 = t;
                                                                                                  int d_52 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                                                        {
                                                                                                          ATerm e_52 = ATgetArgument(t, 0);
                                                                                                          ATerm f_52 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(d_52);
                                                                                                      t = g_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_52;
                                                                                                      {
                                                                                                        ATerm g_52 = t;
                                                                                                        int h_52 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                              {
                                                                                                                ATerm i_52 = ATgetArgument(t, 0);
                                                                                                                ATerm j_52 = ATgetArgument(t, 1);
                                                                                                                ATerm k_52 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(h_52);
                                                                                                            t = g_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = g_52;
                                                                                                            {
                                                                                                              ATerm l_52 = t;
                                                                                                              int m_52 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm n_52 = ATgetArgument(t, 0);
                                                                                                                      ATerm o_52 = ATgetArgument(t, 1);
                                                                                                                      ATerm p_52 = ATgetArgument(t, 2);
                                                                                                                      ATerm q_52 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(m_52);
                                                                                                                  t = g_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_52;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm r_52 = ATgetArgument(t, 0);
                                                                                                                      ATerm s_52 = ATgetArgument(t, 1);
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
                                                                  t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, e_24, f_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, g_24));
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                        {
                                                          e_24 = ATgetArgument(t, 0);
                                                          f_24 = ATgetArgument(t, 1);
                                                          g_24 = ATgetArgument(t, 2);
                                                          c_24 = ATgetArgument(t, 3);
                                                          {
                                                            ATerm t_52 = t;
                                                            int u_52 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = e_24;
                                                                {
                                                                  ATerm v_52 = t;
                                                                  int w_52 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          ATerm x_52 = ATgetArgument(t, 0);
                                                                          ATerm y_52 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(w_52);
                                                                      t = e_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = v_52;
                                                                      {
                                                                        ATerm z_52 = t;
                                                                        int a_53 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_LChoice_2))
                                                                              {
                                                                                ATerm b_53 = ATgetArgument(t, 0);
                                                                                ATerm c_53 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(a_53);
                                                                            t = e_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = z_52;
                                                                            {
                                                                              ATerm d_53 = t;
                                                                              int e_53 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      ATerm f_53 = ATgetArgument(t, 0);
                                                                                      ATerm g_53 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(e_53);
                                                                                  t = e_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = d_53;
                                                                                  {
                                                                                    ATerm h_53 = t;
                                                                                    int i_53 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                          {
                                                                                            ATerm j_53 = ATgetArgument(t, 0);
                                                                                            ATerm k_53 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(i_53);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_53;
                                                                                        {
                                                                                          ATerm l_53 = t;
                                                                                          int m_53 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm n_53 = ATgetArgument(t, 0);
                                                                                                  ATerm o_53 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(m_53);
                                                                                              t = e_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = l_53;
                                                                                              {
                                                                                                ATerm p_53 = t;
                                                                                                int q_53 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm r_53 = ATgetArgument(t, 0);
                                                                                                        ATerm s_53 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(q_53);
                                                                                                    t = e_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = p_53;
                                                                                                    {
                                                                                                      ATerm t_53 = t;
                                                                                                      int u_53 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm v_53 = ATgetArgument(t, 0);
                                                                                                              ATerm w_53 = ATgetArgument(t, 1);
                                                                                                              ATerm x_53 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(u_53);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = t_53;
                                                                                                          {
                                                                                                            ATerm y_53 = t;
                                                                                                            int z_53 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm a_54 = ATgetArgument(t, 0);
                                                                                                                    ATerm b_54 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(z_53);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = y_53;
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm c_54 = ATgetArgument(t, 0);
                                                                                                                    ATerm d_54 = ATgetArgument(t, 1);
                                                                                                                    ATerm e_54 = ATgetArgument(t, 2);
                                                                                                                    ATerm f_54 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                                t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24, g_24, c_24);
                                                                LocalPopChoice(u_52);
                                                              }
                                                            else
                                                              {
                                                                t = t_52;
                                                                {
                                                                  ATerm g_54 = t;
                                                                  int h_54 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = f_24;
                                                                      {
                                                                        ATerm i_54 = t;
                                                                        int j_54 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_Choice_2))
                                                                              {
                                                                                ATerm k_54 = ATgetArgument(t, 0);
                                                                                ATerm l_54 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(j_54);
                                                                            t = f_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = i_54;
                                                                            {
                                                                              ATerm m_54 = t;
                                                                              int n_54 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                    {
                                                                                      ATerm o_54 = ATgetArgument(t, 0);
                                                                                      ATerm p_54 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(n_54);
                                                                                  t = f_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = m_54;
                                                                                  {
                                                                                    ATerm q_54 = t;
                                                                                    int r_54 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                          {
                                                                                            ATerm s_54 = ATgetArgument(t, 0);
                                                                                            ATerm t_54 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(r_54);
                                                                                        t = f_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_54;
                                                                                        {
                                                                                          ATerm u_54 = t;
                                                                                          int v_54 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                                {
                                                                                                  ATerm w_54 = ATgetArgument(t, 0);
                                                                                                  ATerm x_54 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(v_54);
                                                                                              t = f_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = u_54;
                                                                                              {
                                                                                                ATerm y_54 = t;
                                                                                                int z_54 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                                      {
                                                                                                        ATerm a_55 = ATgetArgument(t, 0);
                                                                                                        ATerm b_55 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(z_54);
                                                                                                    t = f_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = y_54;
                                                                                                    {
                                                                                                      ATerm c_55 = t;
                                                                                                      int d_55 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                                            {
                                                                                                              ATerm e_55 = ATgetArgument(t, 0);
                                                                                                              ATerm f_55 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(d_55);
                                                                                                          t = f_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = c_55;
                                                                                                          {
                                                                                                            ATerm g_55 = t;
                                                                                                            int h_55 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                  {
                                                                                                                    ATerm i_55 = ATgetArgument(t, 0);
                                                                                                                    ATerm j_55 = ATgetArgument(t, 1);
                                                                                                                    ATerm k_55 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(h_55);
                                                                                                                t = f_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = g_55;
                                                                                                                {
                                                                                                                  ATerm l_55 = t;
                                                                                                                  int m_55 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm n_55 = ATgetArgument(t, 0);
                                                                                                                          ATerm o_55 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(m_55);
                                                                                                                      t = f_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = l_55;
                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                        {
                                                                                                                          ATerm p_55 = ATgetArgument(t, 0);
                                                                                                                          ATerm q_55 = ATgetArgument(t, 1);
                                                                                                                          ATerm r_55 = ATgetArgument(t, 2);
                                                                                                                          ATerm s_55 = ATgetArgument(t, 3);
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
                                                                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, e_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24, c_24);
                                                                      LocalPopChoice(h_54);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_54;
                                                                      {
                                                                        ATerm t_55 = t;
                                                                        int u_55 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = g_24;
                                                                            {
                                                                              ATerm v_55 = t;
                                                                              int w_55 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      ATerm x_55 = ATgetArgument(t, 0);
                                                                                      ATerm y_55 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(w_55);
                                                                                  t = g_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = v_55;
                                                                                  {
                                                                                    ATerm z_55 = t;
                                                                                    int a_56 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                          {
                                                                                            ATerm b_56 = ATgetArgument(t, 0);
                                                                                            ATerm c_56 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(a_56);
                                                                                        t = g_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_55;
                                                                                        {
                                                                                          ATerm d_56 = t;
                                                                                          int e_56 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                {
                                                                                                  ATerm f_56 = ATgetArgument(t, 0);
                                                                                                  ATerm g_56 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(e_56);
                                                                                              t = g_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = d_56;
                                                                                              {
                                                                                                ATerm h_56 = t;
                                                                                                int i_56 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                      {
                                                                                                        ATerm j_56 = ATgetArgument(t, 0);
                                                                                                        ATerm k_56 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(i_56);
                                                                                                    t = g_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_56;
                                                                                                    {
                                                                                                      ATerm l_56 = t;
                                                                                                      int m_56 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                            {
                                                                                                              ATerm n_56 = ATgetArgument(t, 0);
                                                                                                              ATerm o_56 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(m_56);
                                                                                                          t = g_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = l_56;
                                                                                                          {
                                                                                                            ATerm p_56 = t;
                                                                                                            int q_56 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm r_56 = ATgetArgument(t, 0);
                                                                                                                    ATerm s_56 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(q_56);
                                                                                                                t = g_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = p_56;
                                                                                                                {
                                                                                                                  ATerm t_56 = t;
                                                                                                                  int u_56 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm v_56 = ATgetArgument(t, 0);
                                                                                                                          ATerm w_56 = ATgetArgument(t, 1);
                                                                                                                          ATerm x_56 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(u_56);
                                                                                                                      t = g_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = t_56;
                                                                                                                      {
                                                                                                                        ATerm y_56 = t;
                                                                                                                        int z_56 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_Seq_2))
                                                                                                                              {
                                                                                                                                ATerm a_57 = ATgetArgument(t, 0);
                                                                                                                                ATerm b_57 = ATgetArgument(t, 1);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            LocalPopChoice(z_56);
                                                                                                                            t = g_24;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = y_56;
                                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                              {
                                                                                                                                ATerm c_57 = ATgetArgument(t, 0);
                                                                                                                                ATerm d_57 = ATgetArgument(t, 1);
                                                                                                                                ATerm e_57 = ATgetArgument(t, 2);
                                                                                                                                ATerm f_57 = ATgetArgument(t, 3);
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
                                                                            t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, e_24, f_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, g_24), c_24);
                                                                            LocalPopChoice(u_55);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = t_55;
                                                                            t = c_24;
                                                                            {
                                                                              ATerm g_57 = t;
                                                                              int h_57 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      ATerm i_57 = ATgetArgument(t, 0);
                                                                                      ATerm j_57 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(h_57);
                                                                                  t = c_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = g_57;
                                                                                  {
                                                                                    ATerm k_57 = t;
                                                                                    int l_57 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                          {
                                                                                            ATerm m_57 = ATgetArgument(t, 0);
                                                                                            ATerm n_57 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(l_57);
                                                                                        t = c_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_57;
                                                                                        {
                                                                                          ATerm o_57 = t;
                                                                                          int p_57 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                {
                                                                                                  ATerm q_57 = ATgetArgument(t, 0);
                                                                                                  ATerm r_57 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(p_57);
                                                                                              t = c_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = o_57;
                                                                                              {
                                                                                                ATerm s_57 = t;
                                                                                                int t_57 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                      {
                                                                                                        ATerm u_57 = ATgetArgument(t, 0);
                                                                                                        ATerm v_57 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(t_57);
                                                                                                    t = c_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = s_57;
                                                                                                    {
                                                                                                      ATerm w_57 = t;
                                                                                                      int x_57 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                            {
                                                                                                              ATerm y_57 = ATgetArgument(t, 0);
                                                                                                              ATerm z_57 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(x_57);
                                                                                                          t = c_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = w_57;
                                                                                                          {
                                                                                                            ATerm a_58 = t;
                                                                                                            int b_58 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm c_58 = ATgetArgument(t, 0);
                                                                                                                    ATerm d_58 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(b_58);
                                                                                                                t = c_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = a_58;
                                                                                                                {
                                                                                                                  ATerm e_58 = t;
                                                                                                                  int f_58 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm g_58 = ATgetArgument(t, 0);
                                                                                                                          ATerm h_58 = ATgetArgument(t, 1);
                                                                                                                          ATerm i_58 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(f_58);
                                                                                                                      t = c_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = e_58;
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm j_58 = ATgetArgument(t, 0);
                                                                                                                          ATerm k_58 = ATgetArgument(t, 1);
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
                                                                            t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, e_24, f_24, g_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, c_24));
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Seq_2))
                                                            {
                                                              e_24 = ATgetArgument(t, 0);
                                                              f_24 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm l_58 = t;
                                                                int m_58 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = e_24;
                                                                    {
                                                                      ATerm n_58 = t;
                                                                      int o_58 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              ATerm p_58 = ATgetArgument(t, 0);
                                                                              ATerm q_58 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(o_58);
                                                                          t = e_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = n_58;
                                                                          {
                                                                            ATerm r_58 = t;
                                                                            int s_58 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                  {
                                                                                    ATerm t_58 = ATgetArgument(t, 0);
                                                                                    ATerm u_58 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(s_58);
                                                                                t = e_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_58;
                                                                                {
                                                                                  ATerm v_58 = t;
                                                                                  int w_58 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          ATerm x_58 = ATgetArgument(t, 0);
                                                                                          ATerm y_58 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(w_58);
                                                                                      t = e_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_58;
                                                                                      {
                                                                                        ATerm z_58 = t;
                                                                                        int a_59 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm b_59 = ATgetArgument(t, 0);
                                                                                                ATerm c_59 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(a_59);
                                                                                            t = e_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_58;
                                                                                            {
                                                                                              ATerm d_59 = t;
                                                                                              int e_59 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm f_59 = ATgetArgument(t, 0);
                                                                                                      ATerm g_59 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(e_59);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_59;
                                                                                                  {
                                                                                                    ATerm h_59 = t;
                                                                                                    int i_59 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm j_59 = ATgetArgument(t, 0);
                                                                                                            ATerm k_59 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(i_59);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_59;
                                                                                                        {
                                                                                                          ATerm l_59 = t;
                                                                                                          int m_59 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm n_59 = ATgetArgument(t, 0);
                                                                                                                  ATerm o_59 = ATgetArgument(t, 1);
                                                                                                                  ATerm p_59 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(m_59);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = l_59;
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm q_59 = ATgetArgument(t, 0);
                                                                                                                  ATerm r_59 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                    LocalPopChoice(m_58);
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_58;
                                                                    t = f_24;
                                                                    {
                                                                      ATerm s_59 = t;
                                                                      int t_59 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              ATerm u_59 = ATgetArgument(t, 0);
                                                                              ATerm v_59 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(t_59);
                                                                          t = f_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = s_59;
                                                                          {
                                                                            ATerm w_59 = t;
                                                                            int x_59 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                  {
                                                                                    ATerm y_59 = ATgetArgument(t, 0);
                                                                                    ATerm z_59 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(x_59);
                                                                                t = f_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = w_59;
                                                                                {
                                                                                  ATerm a_60 = t;
                                                                                  int b_60 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          ATerm c_60 = ATgetArgument(t, 0);
                                                                                          ATerm d_60 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(b_60);
                                                                                      t = f_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_60;
                                                                                      {
                                                                                        ATerm e_60 = t;
                                                                                        int f_60 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm g_60 = ATgetArgument(t, 0);
                                                                                                ATerm h_60 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(f_60);
                                                                                            t = f_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_60;
                                                                                            {
                                                                                              ATerm i_60 = t;
                                                                                              int j_60 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm k_60 = ATgetArgument(t, 0);
                                                                                                      ATerm l_60 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(j_60);
                                                                                                  t = f_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = i_60;
                                                                                                  {
                                                                                                    ATerm m_60 = t;
                                                                                                    int n_60 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm o_60 = ATgetArgument(t, 0);
                                                                                                            ATerm p_60 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(n_60);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = m_60;
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm q_60 = ATgetArgument(t, 0);
                                                                                                            ATerm r_60 = ATgetArgument(t, 1);
                                                                                                            ATerm s_60 = ATgetArgument(t, 2);
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
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, e_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, f_24));
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  e_24 = ATgetArgument(t, 0);
                                                                  f_24 = ATgetArgument(t, 1);
                                                                  t = e_24;
                                                                  {
                                                                    ATerm t_60 = t;
                                                                    int u_60 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm v_60 = ATgetArgument(t, 0);
                                                                            ATerm w_60 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(u_60);
                                                                        t = e_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_60;
                                                                        {
                                                                          ATerm x_60 = t;
                                                                          int y_60 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm z_60 = ATgetArgument(t, 0);
                                                                                  ATerm a_61 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(y_60);
                                                                              t = e_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_60;
                                                                              {
                                                                                ATerm b_61 = t;
                                                                                int c_61 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm d_61 = ATgetArgument(t, 0);
                                                                                        ATerm e_61 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(c_61);
                                                                                    t = e_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_61;
                                                                                    {
                                                                                      ATerm f_61 = t;
                                                                                      int g_61 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm h_61 = ATgetArgument(t, 0);
                                                                                              ATerm i_61 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(g_61);
                                                                                          t = e_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_61;
                                                                                          {
                                                                                            ATerm j_61 = t;
                                                                                            int k_61 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm l_61 = ATgetArgument(t, 0);
                                                                                                    ATerm m_61 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(k_61);
                                                                                                t = e_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_61;
                                                                                                {
                                                                                                  ATerm n_61 = t;
                                                                                                  int o_61 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm p_61 = ATgetArgument(t, 0);
                                                                                                          ATerm q_61 = ATgetArgument(t, 1);
                                                                                                          ATerm r_61 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(o_61);
                                                                                                      t = e_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = n_61;
                                                                                                      if(match_cons(t, sym_Choice_2))
                                                                                                        {
                                                                                                          ATerm s_61 = ATgetArgument(t, 0);
                                                                                                          ATerm t_61 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = e_24;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      e_24 = ATgetArgument(t, 0);
                                                                      f_24 = ATgetArgument(t, 1);
                                                                      t = e_24;
                                                                      {
                                                                        ATerm u_61 = t;
                                                                        int v_61 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_Choice_2))
                                                                              {
                                                                                ATerm w_61 = ATgetArgument(t, 0);
                                                                                ATerm x_61 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(v_61);
                                                                            t = e_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_61;
                                                                            {
                                                                              ATerm y_61 = t;
                                                                              int z_61 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      ATerm a_62 = ATgetArgument(t, 0);
                                                                                      ATerm b_62 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(z_61);
                                                                                  t = e_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_61;
                                                                                  {
                                                                                    ATerm c_62 = t;
                                                                                    int d_62 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                          {
                                                                                            ATerm e_62 = ATgetArgument(t, 0);
                                                                                            ATerm f_62 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(d_62);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_62;
                                                                                        {
                                                                                          ATerm g_62 = t;
                                                                                          int h_62 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm i_62 = ATgetArgument(t, 0);
                                                                                                  ATerm j_62 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(h_62);
                                                                                              t = e_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_62;
                                                                                              {
                                                                                                ATerm k_62 = t;
                                                                                                int l_62 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm m_62 = ATgetArgument(t, 0);
                                                                                                        ATerm n_62 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(l_62);
                                                                                                    t = e_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = k_62;
                                                                                                    {
                                                                                                      ATerm o_62 = t;
                                                                                                      int p_62 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm q_62 = ATgetArgument(t, 0);
                                                                                                              ATerm r_62 = ATgetArgument(t, 1);
                                                                                                              ATerm s_62 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(p_62);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_62;
                                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                                            {
                                                                                                              ATerm t_62 = ATgetArgument(t, 0);
                                                                                                              ATerm u_62 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          e_24 = ATgetArgument(t, 0);
                                                                          f_24 = ATgetArgument(t, 1);
                                                                          t = e_24;
                                                                          {
                                                                            ATerm v_62 = t;
                                                                            int w_62 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_Choice_2))
                                                                                  {
                                                                                    ATerm x_62 = ATgetArgument(t, 0);
                                                                                    ATerm y_62 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(w_62);
                                                                                t = e_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_62;
                                                                                {
                                                                                  ATerm z_62 = t;
                                                                                  int a_63 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          ATerm b_63 = ATgetArgument(t, 0);
                                                                                          ATerm c_63 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(a_63);
                                                                                      t = e_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = z_62;
                                                                                      {
                                                                                        ATerm d_63 = t;
                                                                                        int e_63 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm f_63 = ATgetArgument(t, 0);
                                                                                                ATerm g_63 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(e_63);
                                                                                            t = e_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_63;
                                                                                            {
                                                                                              ATerm h_63 = t;
                                                                                              int i_63 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm j_63 = ATgetArgument(t, 0);
                                                                                                      ATerm k_63 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_63);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_63;
                                                                                                  {
                                                                                                    ATerm l_63 = t;
                                                                                                    int m_63 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm n_63 = ATgetArgument(t, 0);
                                                                                                            ATerm o_63 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(m_63);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_63;
                                                                                                        {
                                                                                                          ATerm p_63 = t;
                                                                                                          int q_63 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm r_63 = ATgetArgument(t, 0);
                                                                                                                  ATerm s_63 = ATgetArgument(t, 1);
                                                                                                                  ATerm t_63 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(q_63);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = p_63;
                                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                                {
                                                                                                                  ATerm u_63 = ATgetArgument(t, 0);
                                                                                                                  ATerm v_63 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                          t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_GChoice_2))
                                                                            {
                                                                              e_24 = ATgetArgument(t, 0);
                                                                              f_24 = ATgetArgument(t, 1);
                                                                              t = e_24;
                                                                              {
                                                                                ATerm w_63 = t;
                                                                                int x_63 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                      {
                                                                                        ATerm y_63 = ATgetArgument(t, 0);
                                                                                        ATerm z_63 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(x_63);
                                                                                    t = e_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_63;
                                                                                    {
                                                                                      ATerm a_64 = t;
                                                                                      int b_64 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                            {
                                                                                              ATerm c_64 = ATgetArgument(t, 0);
                                                                                              ATerm d_64 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(b_64);
                                                                                          t = e_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_64;
                                                                                          {
                                                                                            ATerm e_64 = t;
                                                                                            int f_64 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                  {
                                                                                                    ATerm g_64 = ATgetArgument(t, 0);
                                                                                                    ATerm h_64 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(f_64);
                                                                                                t = e_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_64;
                                                                                                {
                                                                                                  ATerm i_64 = t;
                                                                                                  int j_64 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                                        {
                                                                                                          ATerm k_64 = ATgetArgument(t, 0);
                                                                                                          ATerm l_64 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(j_64);
                                                                                                      t = e_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_64;
                                                                                                      {
                                                                                                        ATerm m_64 = t;
                                                                                                        int n_64 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                                              {
                                                                                                                ATerm o_64 = ATgetArgument(t, 0);
                                                                                                                ATerm p_64 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(n_64);
                                                                                                            t = e_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_64;
                                                                                                            {
                                                                                                              ATerm q_64 = t;
                                                                                                              int r_64 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                    {
                                                                                                                      ATerm s_64 = ATgetArgument(t, 0);
                                                                                                                      ATerm t_64 = ATgetArgument(t, 1);
                                                                                                                      ATerm u_64 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(r_64);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_64;
                                                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                                                    {
                                                                                                                      ATerm v_64 = ATgetArgument(t, 0);
                                                                                                                      ATerm w_64 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = e_24;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                              t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  e_24 = ATgetArgument(t, 0);
                                                                                  f_24 = ATgetArgument(t, 1);
                                                                                  t = e_24;
                                                                                  {
                                                                                    ATerm x_64 = t;
                                                                                    int y_64 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_Choice_2))
                                                                                          {
                                                                                            ATerm z_64 = ATgetArgument(t, 0);
                                                                                            ATerm a_65 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(y_64);
                                                                                        t = e_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_64;
                                                                                        {
                                                                                          ATerm b_65 = t;
                                                                                          int c_65 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                                {
                                                                                                  ATerm d_65 = ATgetArgument(t, 0);
                                                                                                  ATerm e_65 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(c_65);
                                                                                              t = e_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_65;
                                                                                              {
                                                                                                ATerm f_65 = t;
                                                                                                int g_65 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                      {
                                                                                                        ATerm h_65 = ATgetArgument(t, 0);
                                                                                                        ATerm i_65 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(g_65);
                                                                                                    t = e_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_65;
                                                                                                    {
                                                                                                      ATerm j_65 = t;
                                                                                                      int k_65 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                                            {
                                                                                                              ATerm l_65 = ATgetArgument(t, 0);
                                                                                                              ATerm m_65 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(k_65);
                                                                                                          t = e_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = j_65;
                                                                                                          {
                                                                                                            ATerm n_65 = t;
                                                                                                            int o_65 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm p_65 = ATgetArgument(t, 0);
                                                                                                                    ATerm q_65 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(o_65);
                                                                                                                t = e_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = n_65;
                                                                                                                {
                                                                                                                  ATerm r_65 = t;
                                                                                                                  int s_65 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm t_65 = ATgetArgument(t, 0);
                                                                                                                          ATerm u_65 = ATgetArgument(t, 1);
                                                                                                                          ATerm v_65 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(s_65);
                                                                                                                      t = e_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = r_65;
                                                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                                                        {
                                                                                                                          ATerm w_65 = ATgetArgument(t, 0);
                                                                                                                          ATerm x_65 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = e_24;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                    {
                                                                                      e_24 = ATgetArgument(t, 0);
                                                                                      f_24 = ATgetArgument(t, 1);
                                                                                      t = e_24;
                                                                                      {
                                                                                        ATerm y_65 = t;
                                                                                        int z_65 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_Choice_2))
                                                                                              {
                                                                                                ATerm a_66 = ATgetArgument(t, 0);
                                                                                                ATerm b_66 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(z_65);
                                                                                            t = e_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_65;
                                                                                            {
                                                                                              ATerm c_66 = t;
                                                                                              int d_66 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                                    {
                                                                                                      ATerm e_66 = ATgetArgument(t, 0);
                                                                                                      ATerm f_66 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(d_66);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_66;
                                                                                                  {
                                                                                                    ATerm g_66 = t;
                                                                                                    int h_66 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            ATerm i_66 = ATgetArgument(t, 0);
                                                                                                            ATerm j_66 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(h_66);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_66;
                                                                                                        {
                                                                                                          ATerm k_66 = t;
                                                                                                          int l_66 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                                                {
                                                                                                                  ATerm m_66 = ATgetArgument(t, 0);
                                                                                                                  ATerm n_66 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(l_66);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_66;
                                                                                                              {
                                                                                                                ATerm o_66 = t;
                                                                                                                int p_66 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                                                      {
                                                                                                                        ATerm q_66 = ATgetArgument(t, 0);
                                                                                                                        ATerm r_66 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(p_66);
                                                                                                                    t = e_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = o_66;
                                                                                                                    {
                                                                                                                      ATerm s_66 = t;
                                                                                                                      int t_66 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                            {
                                                                                                                              ATerm u_66 = ATgetArgument(t, 0);
                                                                                                                              ATerm v_66 = ATgetArgument(t, 1);
                                                                                                                              ATerm w_66 = ATgetArgument(t, 2);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(t_66);
                                                                                                                          t = e_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = s_66;
                                                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                                                            {
                                                                                                                              ATerm x_66 = ATgetArgument(t, 0);
                                                                                                                              ATerm y_66 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = e_24;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          e_24 = ATgetArgument(t, 0);
                                                                                          f_24 = ATgetArgument(t, 1);
                                                                                          g_24 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      {
                                                                                        ATerm z_66 = t;
                                                                                        int a_67 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = e_24;
                                                                                            {
                                                                                              ATerm b_67 = t;
                                                                                              int c_67 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                                    {
                                                                                                      ATerm d_67 = ATgetArgument(t, 0);
                                                                                                      ATerm e_67 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(c_67);
                                                                                                  t = e_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = b_67;
                                                                                                  {
                                                                                                    ATerm f_67 = t;
                                                                                                    int g_67 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                                          {
                                                                                                            ATerm h_67 = ATgetArgument(t, 0);
                                                                                                            ATerm i_67 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(g_67);
                                                                                                        t = e_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = f_67;
                                                                                                        {
                                                                                                          ATerm j_67 = t;
                                                                                                          int k_67 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                                {
                                                                                                                  ATerm l_67 = ATgetArgument(t, 0);
                                                                                                                  ATerm m_67 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(k_67);
                                                                                                              t = e_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_67;
                                                                                                              {
                                                                                                                ATerm n_67 = t;
                                                                                                                int o_67 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                                      {
                                                                                                                        ATerm p_67 = ATgetArgument(t, 0);
                                                                                                                        ATerm q_67 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(o_67);
                                                                                                                    t = e_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = n_67;
                                                                                                                    {
                                                                                                                      ATerm r_67 = t;
                                                                                                                      int s_67 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                                            {
                                                                                                                              ATerm t_67 = ATgetArgument(t, 0);
                                                                                                                              ATerm u_67 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(s_67);
                                                                                                                          t = e_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = r_67;
                                                                                                                          {
                                                                                                                            ATerm v_67 = t;
                                                                                                                            int w_67 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm x_67 = ATgetArgument(t, 0);
                                                                                                                                    ATerm y_67 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(w_67);
                                                                                                                                t = e_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = v_67;
                                                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                  {
                                                                                                                                    ATerm z_67 = ATgetArgument(t, 0);
                                                                                                                                    ATerm a_68 = ATgetArgument(t, 1);
                                                                                                                                    ATerm b_68 = ATgetArgument(t, 2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                t = e_24;
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, e_24), f_24, g_24);
                                                                                            LocalPopChoice(a_67);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_66;
                                                                                            t = f_24;
                                                                                            {
                                                                                              ATerm c_68 = t;
                                                                                              int d_68 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                                    {
                                                                                                      ATerm e_68 = ATgetArgument(t, 0);
                                                                                                      ATerm f_68 = ATgetArgument(t, 1);
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
                                                                                                    ATerm g_68 = t;
                                                                                                    int h_68 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                                          {
                                                                                                            ATerm i_68 = ATgetArgument(t, 0);
                                                                                                            ATerm j_68 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(h_68);
                                                                                                        t = f_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_68;
                                                                                                        {
                                                                                                          ATerm k_68 = t;
                                                                                                          int l_68 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                                {
                                                                                                                  ATerm m_68 = ATgetArgument(t, 0);
                                                                                                                  ATerm n_68 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(l_68);
                                                                                                              t = f_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_68;
                                                                                                              {
                                                                                                                ATerm o_68 = t;
                                                                                                                int p_68 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                                      {
                                                                                                                        ATerm q_68 = ATgetArgument(t, 0);
                                                                                                                        ATerm r_68 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(p_68);
                                                                                                                    t = f_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = o_68;
                                                                                                                    {
                                                                                                                      ATerm s_68 = t;
                                                                                                                      int t_68 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                                            {
                                                                                                                              ATerm u_68 = ATgetArgument(t, 0);
                                                                                                                              ATerm v_68 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(t_68);
                                                                                                                          t = f_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = s_68;
                                                                                                                          {
                                                                                                                            ATerm w_68 = t;
                                                                                                                            int x_68 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm y_68 = ATgetArgument(t, 0);
                                                                                                                                    ATerm z_68 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(x_68);
                                                                                                                                t = f_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = w_68;
                                                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                  {
                                                                                                                                    ATerm a_69 = ATgetArgument(t, 0);
                                                                                                                                    ATerm b_69 = ATgetArgument(t, 1);
                                                                                                                                    ATerm c_69 = ATgetArgument(t, 2);
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
                                                                                            t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, f_24), g_24);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
