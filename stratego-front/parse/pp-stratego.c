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
Symbol sym_DynRuleIntersectUnion_4;
Symbol sym_DynRuleUnion_3;
Symbol sym_DynRuleIntersect_3;
Symbol sym_DynRuleIntersectUnionFix_3;
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
ATerm term_b_70;
ATerm term_a_70;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_v_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_y_68;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(sym__2, term_b_69, term_c_69);
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_f_69, term_c_69);
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   use pptable in file instead of Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm c_93 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm StrategoParenthesize_0_0 (ATerm t);
ATerm innermost_1_0 (ATerm l_122 (ATerm), ATerm t);
ATerm xtc_io_transform_1_0 (ATerm b_117 (ATerm), ATerm t);
ATerm xtc_transform_1_0 (ATerm j_118 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm pass_includes_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm n_117 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm z_3 (ATerm), ATerm a_4 (ATerm), ATerm b_4 (ATerm), ATerm t);
ATerm extend_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm w_3 (ATerm), ATerm x_3 (ATerm), ATerm y_3 (ATerm), ATerm t);
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
ATerm option_wrap_2_0 (ATerm m_119 (ATerm), ATerm n_119 (ATerm), ATerm t);
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
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  y_23 = t;
  if(match_cons(t, sym_AnnoCong_2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
      {
        ATerm b_1 = t;
        int c_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_23;
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
                  t = z_23;
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
                        t = z_23;
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
                              t = z_23;
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
                                    t = z_23;
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
                                          t = z_23;
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
                                                t = z_23;
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
                                                      t = z_23;
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
                                                            t = z_23;
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
                                                                  t = z_23;
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
                                                                        t = z_23;
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
                                                                              t = z_23;
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
                                                                                    t = z_23;
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
                                                                                          t = z_23;
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
                                                                                                t = z_23;
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
                                                                                                      t = z_23;
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
                                                                                                            t = z_23;
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
                                                                                                                      ATerm c_4 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(s_3);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = r_3;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm d_4 = ATgetArgument(t, 0);
                                                                                                                      ATerm e_4 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
            LocalPopChoice(c_1);
          }
        else
          {
            t = b_1;
            t = a_24;
            {
              ATerm f_4 = t;
              int g_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm h_4 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_4);
                  t = a_24;
                }
              else
                {
                  t = f_4;
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
                        t = a_24;
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
                              t = a_24;
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
                                    t = a_24;
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
                                          t = a_24;
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
                                                t = a_24;
                                              }
                                            else
                                              {
                                                t = x_4;
                                                {
                                                  ATerm b_5 = t;
                                                  int c_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          ATerm d_5 = ATgetArgument(t, 0);
                                                          ATerm e_5 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(c_5);
                                                      t = a_24;
                                                    }
                                                  else
                                                    {
                                                      t = b_5;
                                                      {
                                                        ATerm f_5 = t;
                                                        int g_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LGChoice_2))
                                                              {
                                                                ATerm h_5 = ATgetArgument(t, 0);
                                                                ATerm i_5 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(g_5);
                                                            t = a_24;
                                                          }
                                                        else
                                                          {
                                                            t = f_5;
                                                            {
                                                              ATerm j_5 = t;
                                                              int k_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      ATerm l_5 = ATgetArgument(t, 0);
                                                                      ATerm m_5 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(k_5);
                                                                  t = a_24;
                                                                }
                                                              else
                                                                {
                                                                  t = j_5;
                                                                  {
                                                                    ATerm n_5 = t;
                                                                    int o_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                          {
                                                                            ATerm p_5 = ATgetArgument(t, 0);
                                                                            ATerm q_5 = ATgetArgument(t, 1);
                                                                            ATerm r_5 = ATgetArgument(t, 2);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(o_5);
                                                                        t = a_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_5;
                                                                        {
                                                                          ATerm s_5 = t;
                                                                          int t_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                {
                                                                                  ATerm u_5 = ATgetArgument(t, 0);
                                                                                  ATerm v_5 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(t_5);
                                                                              t = a_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_5;
                                                                              {
                                                                                ATerm w_5 = t;
                                                                                int x_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                      {
                                                                                        ATerm y_5 = ATgetArgument(t, 0);
                                                                                        ATerm z_5 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(x_5);
                                                                                    t = a_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_5;
                                                                                    {
                                                                                      ATerm a_6 = t;
                                                                                      int b_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                            {
                                                                                              ATerm c_6 = ATgetArgument(t, 0);
                                                                                              ATerm d_6 = ATgetArgument(t, 1);
                                                                                              ATerm e_6 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(b_6);
                                                                                          t = a_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_6;
                                                                                          {
                                                                                            ATerm f_6 = t;
                                                                                            int g_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                  {
                                                                                                    ATerm h_6 = ATgetArgument(t, 0);
                                                                                                    ATerm i_6 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(g_6);
                                                                                                t = a_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_6;
                                                                                                {
                                                                                                  ATerm j_6 = t;
                                                                                                  int k_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                        {
                                                                                                          ATerm l_6 = ATgetArgument(t, 0);
                                                                                                          ATerm m_6 = ATgetArgument(t, 1);
                                                                                                          ATerm n_6 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(k_6);
                                                                                                      t = a_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_6;
                                                                                                      {
                                                                                                        ATerm o_6 = t;
                                                                                                        int p_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                              {
                                                                                                                ATerm q_6 = ATgetArgument(t, 0);
                                                                                                                ATerm r_6 = ATgetArgument(t, 1);
                                                                                                                ATerm s_6 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(p_6);
                                                                                                            t = a_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_6;
                                                                                                            {
                                                                                                              ATerm t_6 = t;
                                                                                                              int u_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm v_6 = ATgetArgument(t, 0);
                                                                                                                      ATerm w_6 = ATgetArgument(t, 1);
                                                                                                                      ATerm x_6 = ATgetArgument(t, 2);
                                                                                                                      ATerm y_6 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(u_6);
                                                                                                                  t = a_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_6;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm z_6 = ATgetArgument(t, 0);
                                                                                                                      ATerm a_7 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = a_24;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_AnnoCong_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
          }
      }
    }
  else
    {
      if(match_cons(t, sym_ExplodeCong_2))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          {
            ATerm b_7 = t;
            int c_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_23;
                {
                  ATerm d_7 = t;
                  int e_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm f_7 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(e_7);
                      t = z_23;
                    }
                  else
                    {
                      t = d_7;
                      {
                        ATerm g_7 = t;
                        int h_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm i_7 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_7);
                            t = z_23;
                          }
                        else
                          {
                            t = g_7;
                            {
                              ATerm j_7 = t;
                              int k_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm l_7 = ATgetArgument(t, 0);
                                      ATerm m_7 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(k_7);
                                  t = z_23;
                                }
                              else
                                {
                                  t = j_7;
                                  {
                                    ATerm n_7 = t;
                                    int o_7 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm p_7 = ATgetArgument(t, 0);
                                            ATerm q_7 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(o_7);
                                        t = z_23;
                                      }
                                    else
                                      {
                                        t = n_7;
                                        {
                                          ATerm r_7 = t;
                                          int s_7 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm t_7 = ATgetArgument(t, 0);
                                                  ATerm u_7 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(s_7);
                                              t = z_23;
                                            }
                                          else
                                            {
                                              t = r_7;
                                              {
                                                ATerm v_7 = t;
                                                int w_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm x_7 = ATgetArgument(t, 0);
                                                        ATerm y_7 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_7);
                                                    t = z_23;
                                                  }
                                                else
                                                  {
                                                    t = v_7;
                                                    {
                                                      ATerm z_7 = t;
                                                      int a_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm b_8 = ATgetArgument(t, 0);
                                                              ATerm c_8 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(a_8);
                                                          t = z_23;
                                                        }
                                                      else
                                                        {
                                                          t = z_7;
                                                          {
                                                            ATerm d_8 = t;
                                                            int e_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm f_8 = ATgetArgument(t, 0);
                                                                    ATerm g_8 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(e_8);
                                                                t = z_23;
                                                              }
                                                            else
                                                              {
                                                                t = d_8;
                                                                {
                                                                  ATerm h_8 = t;
                                                                  int i_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm j_8 = ATgetArgument(t, 0);
                                                                          ATerm k_8 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(i_8);
                                                                      t = z_23;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_8;
                                                                      {
                                                                        ATerm l_8 = t;
                                                                        int m_8 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm n_8 = ATgetArgument(t, 0);
                                                                                ATerm o_8 = ATgetArgument(t, 1);
                                                                                ATerm p_8 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(m_8);
                                                                            t = z_23;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = l_8;
                                                                            {
                                                                              ATerm q_8 = t;
                                                                              int r_8 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm s_8 = ATgetArgument(t, 0);
                                                                                      ATerm t_8 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(r_8);
                                                                                  t = z_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_8;
                                                                                  {
                                                                                    ATerm u_8 = t;
                                                                                    int v_8 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm w_8 = ATgetArgument(t, 0);
                                                                                            ATerm x_8 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(v_8);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_8;
                                                                                        {
                                                                                          ATerm y_8 = t;
                                                                                          int z_8 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                {
                                                                                                  ATerm a_9 = ATgetArgument(t, 0);
                                                                                                  ATerm b_9 = ATgetArgument(t, 1);
                                                                                                  ATerm c_9 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(z_8);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_8;
                                                                                              {
                                                                                                ATerm d_9 = t;
                                                                                                int e_9 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_AM_2))
                                                                                                      {
                                                                                                        ATerm f_9 = ATgetArgument(t, 0);
                                                                                                        ATerm g_9 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(e_9);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = d_9;
                                                                                                    {
                                                                                                      ATerm h_9 = t;
                                                                                                      int i_9 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                            {
                                                                                                              ATerm j_9 = ATgetArgument(t, 0);
                                                                                                              ATerm k_9 = ATgetArgument(t, 1);
                                                                                                              ATerm l_9 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(i_9);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = h_9;
                                                                                                          {
                                                                                                            ATerm m_9 = t;
                                                                                                            int n_9 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                  {
                                                                                                                    ATerm o_9 = ATgetArgument(t, 0);
                                                                                                                    ATerm p_9 = ATgetArgument(t, 1);
                                                                                                                    ATerm q_9 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(n_9);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = m_9;
                                                                                                                {
                                                                                                                  ATerm r_9 = t;
                                                                                                                  int s_9 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                        {
                                                                                                                          ATerm t_9 = ATgetArgument(t, 0);
                                                                                                                          ATerm u_9 = ATgetArgument(t, 1);
                                                                                                                          ATerm v_9 = ATgetArgument(t, 2);
                                                                                                                          ATerm w_9 = ATgetArgument(t, 3);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(s_9);
                                                                                                                      t = z_23;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = r_9;
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm x_9 = ATgetArgument(t, 0);
                                                                                                                          ATerm y_9 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = z_23;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                LocalPopChoice(c_7);
              }
            else
              {
                t = b_7;
                t = a_24;
                {
                  ATerm z_9 = t;
                  int a_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm b_10 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(a_10);
                      t = a_24;
                    }
                  else
                    {
                      t = z_9;
                      {
                        ATerm c_10 = t;
                        int d_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                ATerm e_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_10);
                            t = a_24;
                          }
                        else
                          {
                            t = c_10;
                            {
                              ATerm f_10 = t;
                              int g_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      ATerm h_10 = ATgetArgument(t, 0);
                                      ATerm i_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(g_10);
                                  t = a_24;
                                }
                              else
                                {
                                  t = f_10;
                                  {
                                    ATerm j_10 = t;
                                    int k_10 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_Choice_2))
                                          {
                                            ATerm l_10 = ATgetArgument(t, 0);
                                            ATerm m_10 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(k_10);
                                        t = a_24;
                                      }
                                    else
                                      {
                                        t = j_10;
                                        {
                                          ATerm n_10 = t;
                                          int o_10 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_LChoice_2))
                                                {
                                                  ATerm p_10 = ATgetArgument(t, 0);
                                                  ATerm q_10 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(o_10);
                                              t = a_24;
                                            }
                                          else
                                            {
                                              t = n_10;
                                              {
                                                ATerm r_10 = t;
                                                int s_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_RChoice_2))
                                                      {
                                                        ATerm t_10 = ATgetArgument(t, 0);
                                                        ATerm u_10 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_10);
                                                    t = a_24;
                                                  }
                                                else
                                                  {
                                                    t = r_10;
                                                    {
                                                      ATerm v_10 = t;
                                                      int w_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              ATerm x_10 = ATgetArgument(t, 0);
                                                              ATerm y_10 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(w_10);
                                                          t = a_24;
                                                        }
                                                      else
                                                        {
                                                          t = v_10;
                                                          {
                                                            ATerm z_10 = t;
                                                            int a_11 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LGChoice_2))
                                                                  {
                                                                    ATerm b_11 = ATgetArgument(t, 0);
                                                                    ATerm c_11 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(a_11);
                                                                t = a_24;
                                                              }
                                                            else
                                                              {
                                                                t = z_10;
                                                                {
                                                                  ATerm d_11 = t;
                                                                  int e_11 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          ATerm f_11 = ATgetArgument(t, 0);
                                                                          ATerm g_11 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(e_11);
                                                                      t = a_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = d_11;
                                                                      {
                                                                        ATerm h_11 = t;
                                                                        int i_11 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                              {
                                                                                ATerm j_11 = ATgetArgument(t, 0);
                                                                                ATerm k_11 = ATgetArgument(t, 1);
                                                                                ATerm l_11 = ATgetArgument(t, 2);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(i_11);
                                                                            t = a_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_11;
                                                                            {
                                                                              ATerm m_11 = t;
                                                                              int n_11 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                    {
                                                                                      ATerm o_11 = ATgetArgument(t, 0);
                                                                                      ATerm p_11 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(n_11);
                                                                                  t = a_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = m_11;
                                                                                  {
                                                                                    ATerm q_11 = t;
                                                                                    int r_11 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                          {
                                                                                            ATerm s_11 = ATgetArgument(t, 0);
                                                                                            ATerm t_11 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(r_11);
                                                                                        t = a_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_11;
                                                                                        {
                                                                                          ATerm u_11 = t;
                                                                                          int v_11 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                                {
                                                                                                  ATerm w_11 = ATgetArgument(t, 0);
                                                                                                  ATerm x_11 = ATgetArgument(t, 1);
                                                                                                  ATerm y_11 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(v_11);
                                                                                              t = a_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = u_11;
                                                                                              {
                                                                                                ATerm z_11 = t;
                                                                                                int a_12 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_AM_2))
                                                                                                      {
                                                                                                        ATerm b_12 = ATgetArgument(t, 0);
                                                                                                        ATerm c_12 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(a_12);
                                                                                                    t = a_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = z_11;
                                                                                                    {
                                                                                                      ATerm d_12 = t;
                                                                                                      int e_12 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                            {
                                                                                                              ATerm f_12 = ATgetArgument(t, 0);
                                                                                                              ATerm g_12 = ATgetArgument(t, 1);
                                                                                                              ATerm h_12 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(e_12);
                                                                                                          t = a_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = d_12;
                                                                                                          {
                                                                                                            ATerm i_12 = t;
                                                                                                            int j_12 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                  {
                                                                                                                    ATerm k_12 = ATgetArgument(t, 0);
                                                                                                                    ATerm l_12 = ATgetArgument(t, 1);
                                                                                                                    ATerm m_12 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(j_12);
                                                                                                                t = a_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = i_12;
                                                                                                                {
                                                                                                                  ATerm n_12 = t;
                                                                                                                  int o_12 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                        {
                                                                                                                          ATerm p_12 = ATgetArgument(t, 0);
                                                                                                                          ATerm q_12 = ATgetArgument(t, 1);
                                                                                                                          ATerm r_12 = ATgetArgument(t, 2);
                                                                                                                          ATerm s_12 = ATgetArgument(t, 3);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(o_12);
                                                                                                                      t = a_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_12;
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm t_12 = ATgetArgument(t, 0);
                                                                                                                          ATerm u_12 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = a_24;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Explode_2))
            {
              z_23 = ATgetArgument(t, 0);
              a_24 = ATgetArgument(t, 1);
              {
                ATerm v_12 = t;
                int w_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_23;
                    {
                      ATerm x_12 = t;
                      int y_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm z_12 = ATgetArgument(t, 0);
                              ATerm a_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(y_12);
                          t = z_23;
                        }
                      else
                        {
                          t = x_12;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm b_13 = ATgetArgument(t, 0);
                              ATerm c_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = z_23;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                    LocalPopChoice(w_12);
                  }
                else
                  {
                    t = v_12;
                    t = a_24;
                    {
                      ATerm d_13 = t;
                      int e_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              ATerm f_13 = ATgetArgument(t, 0);
                              ATerm g_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_13);
                          t = a_24;
                        }
                      else
                        {
                          t = d_13;
                          if(match_cons(t, sym_As_2))
                            {
                              ATerm h_13 = ATgetArgument(t, 0);
                              ATerm i_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = a_24;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Explode_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_Build_1))
                {
                  z_23 = ATgetArgument(t, 0);
                  t = z_23;
                  {
                    ATerm j_13 = t;
                    int k_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_BA_2))
                          {
                            ATerm l_13 = ATgetArgument(t, 0);
                            ATerm m_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_13);
                        t = z_23;
                      }
                    else
                      {
                        t = j_13;
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
                              t = z_23;
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
                                    t = z_23;
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
                                          t = z_23;
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
                                                t = z_23;
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
                                                      t = z_23;
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
                                                            t = z_23;
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
                                                                  t = z_23;
                                                                }
                                                              else
                                                                {
                                                                  t = l_14;
                                                                  {
                                                                    ATerm q_14 = t;
                                                                    int r_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                          {
                                                                            ATerm s_14 = ATgetArgument(t, 0);
                                                                            ATerm t_14 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(r_14);
                                                                        t = z_23;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_14;
                                                                        {
                                                                          ATerm u_14 = t;
                                                                          int v_14 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                {
                                                                                  ATerm w_14 = ATgetArgument(t, 0);
                                                                                  ATerm x_14 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(v_14);
                                                                              t = z_23;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_14;
                                                                              {
                                                                                ATerm y_14 = t;
                                                                                int z_14 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                      {
                                                                                        ATerm a_15 = ATgetArgument(t, 0);
                                                                                        ATerm b_15 = ATgetArgument(t, 1);
                                                                                        ATerm c_15 = ATgetArgument(t, 2);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(z_14);
                                                                                    t = z_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_14;
                                                                                    {
                                                                                      ATerm d_15 = t;
                                                                                      int e_15 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              ATerm f_15 = ATgetArgument(t, 0);
                                                                                              ATerm g_15 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(e_15);
                                                                                          t = z_23;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_15;
                                                                                          {
                                                                                            ATerm h_15 = t;
                                                                                            int i_15 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                  {
                                                                                                    ATerm j_15 = ATgetArgument(t, 0);
                                                                                                    ATerm k_15 = ATgetArgument(t, 1);
                                                                                                    ATerm l_15 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(i_15);
                                                                                                t = z_23;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_15;
                                                                                                {
                                                                                                  ATerm m_15 = t;
                                                                                                  int n_15 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                        {
                                                                                                          ATerm o_15 = ATgetArgument(t, 0);
                                                                                                          ATerm p_15 = ATgetArgument(t, 1);
                                                                                                          ATerm q_15 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(n_15);
                                                                                                      t = z_23;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_15;
                                                                                                      {
                                                                                                        ATerm r_15 = t;
                                                                                                        int s_15 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                              {
                                                                                                                ATerm t_15 = ATgetArgument(t, 0);
                                                                                                                ATerm u_15 = ATgetArgument(t, 1);
                                                                                                                ATerm v_15 = ATgetArgument(t, 2);
                                                                                                                ATerm w_15 = ATgetArgument(t, 3);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(s_15);
                                                                                                            t = z_23;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_15;
                                                                                                            if(match_cons(t, sym_Seq_2))
                                                                                                              {
                                                                                                                ATerm x_15 = ATgetArgument(t, 0);
                                                                                                                ATerm y_15 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            t = z_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, z_23));
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      z_23 = ATgetArgument(t, 0);
                      t = z_23;
                      {
                        ATerm z_15 = t;
                        int a_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_BA_2))
                              {
                                ATerm b_16 = ATgetArgument(t, 0);
                                ATerm c_16 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(a_16);
                            t = z_23;
                          }
                        else
                          {
                            t = z_15;
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
                                  t = z_23;
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
                                        t = z_23;
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
                                              t = z_23;
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
                                                    t = z_23;
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
                                                          t = z_23;
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
                                                                t = z_23;
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
                                                                      t = z_23;
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
                                                                            t = z_23;
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
                                                                                  t = z_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = k_17;
                                                                                  {
                                                                                    ATerm o_17 = t;
                                                                                    int p_17 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                          {
                                                                                            ATerm q_17 = ATgetArgument(t, 0);
                                                                                            ATerm r_17 = ATgetArgument(t, 1);
                                                                                            ATerm s_17 = ATgetArgument(t, 2);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(p_17);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_17;
                                                                                        {
                                                                                          ATerm t_17 = t;
                                                                                          int u_17 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_AM_2))
                                                                                                {
                                                                                                  ATerm v_17 = ATgetArgument(t, 0);
                                                                                                  ATerm w_17 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(u_17);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = t_17;
                                                                                              {
                                                                                                ATerm x_17 = t;
                                                                                                int y_17 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm z_17 = ATgetArgument(t, 0);
                                                                                                        ATerm a_18 = ATgetArgument(t, 1);
                                                                                                        ATerm b_18 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(y_17);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = x_17;
                                                                                                    {
                                                                                                      ATerm c_18 = t;
                                                                                                      int d_18 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm e_18 = ATgetArgument(t, 0);
                                                                                                              ATerm f_18 = ATgetArgument(t, 1);
                                                                                                              ATerm g_18 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(d_18);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = c_18;
                                                                                                          {
                                                                                                            ATerm h_18 = t;
                                                                                                            int i_18 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm j_18 = ATgetArgument(t, 0);
                                                                                                                    ATerm k_18 = ATgetArgument(t, 1);
                                                                                                                    ATerm l_18 = ATgetArgument(t, 2);
                                                                                                                    ATerm m_18 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(i_18);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = h_18;
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm n_18 = ATgetArgument(t, 0);
                                                                                                                    ATerm o_18 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, z_23));
                    }
                  else
                    {
                      if(match_cons(t, sym_BA_2))
                        {
                          z_23 = ATgetArgument(t, 0);
                          a_24 = ATgetArgument(t, 1);
                          {
                            ATerm p_18 = t;
                            int q_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_23;
                                {
                                  ATerm r_18 = t;
                                  int s_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm t_18 = ATgetArgument(t, 0);
                                          ATerm u_18 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(s_18);
                                      t = z_23;
                                    }
                                  else
                                    {
                                      t = r_18;
                                      {
                                        ATerm v_18 = t;
                                        int w_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm x_18 = ATgetArgument(t, 0);
                                                ATerm y_18 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(w_18);
                                            t = z_23;
                                          }
                                        else
                                          {
                                            t = v_18;
                                            {
                                              ATerm z_18 = t;
                                              int a_19 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm b_19 = ATgetArgument(t, 0);
                                                      ATerm c_19 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(a_19);
                                                  t = z_23;
                                                }
                                              else
                                                {
                                                  t = z_18;
                                                  {
                                                    ATerm d_19 = t;
                                                    int e_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm f_19 = ATgetArgument(t, 0);
                                                            ATerm g_19 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(e_19);
                                                        t = z_23;
                                                      }
                                                    else
                                                      {
                                                        t = d_19;
                                                        {
                                                          ATerm h_19 = t;
                                                          int i_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm j_19 = ATgetArgument(t, 0);
                                                                  ATerm k_19 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(i_19);
                                                              t = z_23;
                                                            }
                                                          else
                                                            {
                                                              t = h_19;
                                                              {
                                                                ATerm l_19 = t;
                                                                int m_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm n_19 = ATgetArgument(t, 0);
                                                                        ATerm o_19 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(m_19);
                                                                    t = z_23;
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_19;
                                                                    {
                                                                      ATerm p_19 = t;
                                                                      int q_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm r_19 = ATgetArgument(t, 0);
                                                                              ATerm s_19 = ATgetArgument(t, 1);
                                                                              ATerm t_19 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(q_19);
                                                                          t = z_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_19;
                                                                          {
                                                                            ATerm u_19 = t;
                                                                            int v_19 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm w_19 = ATgetArgument(t, 0);
                                                                                    ATerm x_19 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(v_19);
                                                                                t = z_23;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_19;
                                                                                {
                                                                                  ATerm y_19 = t;
                                                                                  int z_19 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm a_20 = ATgetArgument(t, 0);
                                                                                          ATerm b_20 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(z_19);
                                                                                      t = z_23;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_19;
                                                                                      {
                                                                                        ATerm c_20 = t;
                                                                                        int d_20 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                              {
                                                                                                ATerm e_20 = ATgetArgument(t, 0);
                                                                                                ATerm f_20 = ATgetArgument(t, 1);
                                                                                                ATerm g_20 = ATgetArgument(t, 2);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(d_20);
                                                                                            t = z_23;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_20;
                                                                                            {
                                                                                              ATerm h_20 = t;
                                                                                              int i_20 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      ATerm j_20 = ATgetArgument(t, 0);
                                                                                                      ATerm k_20 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(i_20);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = h_20;
                                                                                                  {
                                                                                                    ATerm l_20 = t;
                                                                                                    int m_20 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                          {
                                                                                                            ATerm n_20 = ATgetArgument(t, 0);
                                                                                                            ATerm o_20 = ATgetArgument(t, 1);
                                                                                                            ATerm p_20 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(m_20);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = l_20;
                                                                                                        {
                                                                                                          ATerm q_20 = t;
                                                                                                          int r_20 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm s_20 = ATgetArgument(t, 0);
                                                                                                                  ATerm t_20 = ATgetArgument(t, 1);
                                                                                                                  ATerm u_20 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(r_20);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = q_20;
                                                                                                              {
                                                                                                                ATerm v_20 = t;
                                                                                                                int w_20 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm x_20 = ATgetArgument(t, 0);
                                                                                                                        ATerm y_20 = ATgetArgument(t, 1);
                                                                                                                        ATerm z_20 = ATgetArgument(t, 2);
                                                                                                                        ATerm a_21 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(w_20);
                                                                                                                    t = z_23;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = v_20;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm b_21 = ATgetArgument(t, 0);
                                                                                                                        ATerm c_21 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = z_23;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                LocalPopChoice(q_18);
                              }
                            else
                              {
                                t = p_18;
                                t = a_24;
                                {
                                  ATerm d_21 = t;
                                  int e_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          ATerm f_21 = ATgetArgument(t, 0);
                                          ATerm g_21 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(e_21);
                                      t = a_24;
                                    }
                                  else
                                    {
                                      t = d_21;
                                      {
                                        ATerm h_21 = t;
                                        int i_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_LChoice_2))
                                              {
                                                ATerm j_21 = ATgetArgument(t, 0);
                                                ATerm k_21 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(i_21);
                                            t = a_24;
                                          }
                                        else
                                          {
                                            t = h_21;
                                            {
                                              ATerm l_21 = t;
                                              int m_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      ATerm n_21 = ATgetArgument(t, 0);
                                                      ATerm o_21 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(m_21);
                                                  t = a_24;
                                                }
                                              else
                                                {
                                                  t = l_21;
                                                  {
                                                    ATerm p_21 = t;
                                                    int q_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_GChoice_2))
                                                          {
                                                            ATerm r_21 = ATgetArgument(t, 0);
                                                            ATerm s_21 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(q_21);
                                                        t = a_24;
                                                      }
                                                    else
                                                      {
                                                        t = p_21;
                                                        {
                                                          ATerm t_21 = t;
                                                          int u_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  ATerm v_21 = ATgetArgument(t, 0);
                                                                  ATerm w_21 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(u_21);
                                                              t = a_24;
                                                            }
                                                          else
                                                            {
                                                              t = t_21;
                                                              {
                                                                ATerm x_21 = t;
                                                                int y_21 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                      {
                                                                        ATerm z_21 = ATgetArgument(t, 0);
                                                                        ATerm a_22 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(y_21);
                                                                    t = a_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = x_21;
                                                                    {
                                                                      ATerm b_22 = t;
                                                                      int c_22 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              ATerm d_22 = ATgetArgument(t, 0);
                                                                              ATerm e_22 = ATgetArgument(t, 1);
                                                                              ATerm f_22 = ATgetArgument(t, 2);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(c_22);
                                                                          t = a_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_22;
                                                                          {
                                                                            ATerm g_22 = t;
                                                                            int h_22 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                                  {
                                                                                    ATerm i_22 = ATgetArgument(t, 0);
                                                                                    ATerm j_22 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(h_22);
                                                                                t = a_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_22;
                                                                                {
                                                                                  ATerm k_22 = t;
                                                                                  int l_22 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                                        {
                                                                                          ATerm m_22 = ATgetArgument(t, 0);
                                                                                          ATerm n_22 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(l_22);
                                                                                      t = a_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_22;
                                                                                      {
                                                                                        ATerm o_22 = t;
                                                                                        int p_22 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                                                                              {
                                                                                                ATerm q_22 = ATgetArgument(t, 0);
                                                                                                ATerm r_22 = ATgetArgument(t, 1);
                                                                                                ATerm s_22 = ATgetArgument(t, 2);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(p_22);
                                                                                            t = a_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = o_22;
                                                                                            {
                                                                                              ATerm t_22 = t;
                                                                                              int u_22 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      ATerm v_22 = ATgetArgument(t, 0);
                                                                                                      ATerm w_22 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(u_22);
                                                                                                  t = a_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_22;
                                                                                                  {
                                                                                                    ATerm x_22 = t;
                                                                                                    int y_22 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                          {
                                                                                                            ATerm z_22 = ATgetArgument(t, 0);
                                                                                                            ATerm a_23 = ATgetArgument(t, 1);
                                                                                                            ATerm b_23 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(y_22);
                                                                                                        t = a_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = x_22;
                                                                                                        {
                                                                                                          ATerm c_23 = t;
                                                                                                          int d_23 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm e_23 = ATgetArgument(t, 0);
                                                                                                                  ATerm f_23 = ATgetArgument(t, 1);
                                                                                                                  ATerm g_23 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(d_23);
                                                                                                              t = a_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = c_23;
                                                                                                              {
                                                                                                                ATerm h_23 = t;
                                                                                                                int i_23 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm j_23 = ATgetArgument(t, 0);
                                                                                                                        ATerm k_23 = ATgetArgument(t, 1);
                                                                                                                        ATerm l_23 = ATgetArgument(t, 2);
                                                                                                                        ATerm m_23 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(i_23);
                                                                                                                    t = a_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = h_23;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm n_23 = ATgetArgument(t, 0);
                                                                                                                        ATerm o_23 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = a_24;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
                                t = (ATerm) ATmakeAppl(sym_BA_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Anno_2))
                            {
                              z_23 = ATgetArgument(t, 0);
                              a_24 = ATgetArgument(t, 1);
                              {
                                ATerm p_23 = t;
                                int q_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = z_23;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm r_23 = ATgetArgument(t, 0);
                                        ATerm s_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                    LocalPopChoice(q_23);
                                  }
                                else
                                  {
                                    t = p_23;
                                    t = a_24;
                                    if(match_cons(t, sym_As_2))
                                      {
                                        ATerm t_23 = ATgetArgument(t, 0);
                                        ATerm u_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_Anno_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                {
                                  z_23 = ATgetArgument(t, 0);
                                  a_24 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_23 = t;
                                    int w_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = z_23;
                                        {
                                          ATerm c_24 = t;
                                          int d_24 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm e_24 = ATgetArgument(t, 0);
                                                  ATerm f_24 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(d_24);
                                              t = z_23;
                                            }
                                          else
                                            {
                                              t = c_24;
                                              {
                                                ATerm g_24 = t;
                                                int h_24 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm i_24 = ATgetArgument(t, 0);
                                                        ATerm j_24 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(h_24);
                                                    t = z_23;
                                                  }
                                                else
                                                  {
                                                    t = g_24;
                                                    {
                                                      ATerm k_24 = t;
                                                      int l_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm m_24 = ATgetArgument(t, 0);
                                                              ATerm n_24 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(l_24);
                                                          t = z_23;
                                                        }
                                                      else
                                                        {
                                                          t = k_24;
                                                          {
                                                            ATerm o_24 = t;
                                                            int p_24 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm q_24 = ATgetArgument(t, 0);
                                                                    ATerm r_24 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(p_24);
                                                                t = z_23;
                                                              }
                                                            else
                                                              {
                                                                t = o_24;
                                                                {
                                                                  ATerm s_24 = t;
                                                                  int t_24 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm u_24 = ATgetArgument(t, 0);
                                                                          ATerm v_24 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(t_24);
                                                                      t = z_23;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = s_24;
                                                                      {
                                                                        ATerm w_24 = t;
                                                                        int x_24 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm y_24 = ATgetArgument(t, 0);
                                                                                ATerm z_24 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(x_24);
                                                                            t = z_23;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = w_24;
                                                                            {
                                                                              ATerm a_25 = t;
                                                                              int b_25 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm c_25 = ATgetArgument(t, 0);
                                                                                      ATerm d_25 = ATgetArgument(t, 1);
                                                                                      ATerm e_25 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(b_25);
                                                                                  t = z_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_25;
                                                                                  {
                                                                                    ATerm f_25 = t;
                                                                                    int g_25 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm h_25 = ATgetArgument(t, 0);
                                                                                            ATerm i_25 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(g_25);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_25;
                                                                                        {
                                                                                          ATerm j_25 = t;
                                                                                          int k_25 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm l_25 = ATgetArgument(t, 0);
                                                                                                  ATerm m_25 = ATgetArgument(t, 1);
                                                                                                  ATerm n_25 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(k_25);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = j_25;
                                                                                              {
                                                                                                ATerm o_25 = t;
                                                                                                int p_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm q_25 = ATgetArgument(t, 0);
                                                                                                        ATerm r_25 = ATgetArgument(t, 1);
                                                                                                        ATerm s_25 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(p_25);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = o_25;
                                                                                                    {
                                                                                                      ATerm u_25 = t;
                                                                                                      int v_25 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                            {
                                                                                                              ATerm d_26 = ATgetArgument(t, 0);
                                                                                                              ATerm m_26 = ATgetArgument(t, 1);
                                                                                                              ATerm n_26 = ATgetArgument(t, 2);
                                                                                                              ATerm o_26 = ATgetArgument(t, 3);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(v_25);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = u_25;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm p_26 = ATgetArgument(t, 0);
                                                                                                              ATerm q_26 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                        LocalPopChoice(w_23);
                                      }
                                    else
                                      {
                                        t = v_23;
                                        t = a_24;
                                        {
                                          ATerm r_26 = t;
                                          int s_26 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  ATerm t_26 = ATgetArgument(t, 0);
                                                  ATerm u_26 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(s_26);
                                              t = a_24;
                                            }
                                          else
                                            {
                                              t = r_26;
                                              {
                                                ATerm v_26 = t;
                                                int w_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_LChoice_2))
                                                      {
                                                        ATerm x_26 = ATgetArgument(t, 0);
                                                        ATerm y_26 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_26);
                                                    t = a_24;
                                                  }
                                                else
                                                  {
                                                    t = v_26;
                                                    {
                                                      ATerm z_26 = t;
                                                      int a_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              ATerm b_27 = ATgetArgument(t, 0);
                                                              ATerm c_27 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(a_27);
                                                          t = a_24;
                                                        }
                                                      else
                                                        {
                                                          t = z_26;
                                                          {
                                                            ATerm d_27 = t;
                                                            int e_27 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_GChoice_2))
                                                                  {
                                                                    ATerm f_27 = ATgetArgument(t, 0);
                                                                    ATerm g_27 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(e_27);
                                                                t = a_24;
                                                              }
                                                            else
                                                              {
                                                                t = d_27;
                                                                {
                                                                  ATerm h_27 = t;
                                                                  int i_27 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          ATerm j_27 = ATgetArgument(t, 0);
                                                                          ATerm k_27 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(i_27);
                                                                      t = a_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_27;
                                                                      {
                                                                        ATerm l_27 = t;
                                                                        int m_27 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                              {
                                                                                ATerm n_27 = ATgetArgument(t, 0);
                                                                                ATerm o_27 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(m_27);
                                                                            t = a_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = l_27;
                                                                            {
                                                                              ATerm p_27 = t;
                                                                              int q_27 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                    {
                                                                                      ATerm r_27 = ATgetArgument(t, 0);
                                                                                      ATerm s_27 = ATgetArgument(t, 1);
                                                                                      ATerm t_27 = ATgetArgument(t, 2);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(q_27);
                                                                                  t = a_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = p_27;
                                                                                  {
                                                                                    ATerm u_27 = t;
                                                                                    int v_27 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_AM_2))
                                                                                          {
                                                                                            ATerm w_27 = ATgetArgument(t, 0);
                                                                                            ATerm x_27 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(v_27);
                                                                                        t = a_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_27;
                                                                                        {
                                                                                          ATerm y_27 = t;
                                                                                          int z_27 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                {
                                                                                                  ATerm a_28 = ATgetArgument(t, 0);
                                                                                                  ATerm b_28 = ATgetArgument(t, 1);
                                                                                                  ATerm c_28 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(z_27);
                                                                                              t = a_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_27;
                                                                                              {
                                                                                                ATerm d_28 = t;
                                                                                                int e_28 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                      {
                                                                                                        ATerm f_28 = ATgetArgument(t, 0);
                                                                                                        ATerm g_28 = ATgetArgument(t, 1);
                                                                                                        ATerm h_28 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(e_28);
                                                                                                    t = a_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = d_28;
                                                                                                    {
                                                                                                      ATerm i_28 = t;
                                                                                                      int j_28 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                            {
                                                                                                              ATerm k_28 = ATgetArgument(t, 0);
                                                                                                              ATerm l_28 = ATgetArgument(t, 1);
                                                                                                              ATerm m_28 = ATgetArgument(t, 2);
                                                                                                              ATerm n_28 = ATgetArgument(t, 3);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(j_28);
                                                                                                          t = a_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = i_28;
                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                            {
                                                                                                              ATerm o_28 = ATgetArgument(t, 0);
                                                                                                              ATerm p_28 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = a_24;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                              }
                                            }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                    {
                                      z_23 = ATgetArgument(t, 0);
                                      a_24 = ATgetArgument(t, 1);
                                      {
                                        ATerm q_28 = t;
                                        int r_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_23;
                                            {
                                              ATerm s_28 = t;
                                              int t_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm u_28 = ATgetArgument(t, 0);
                                                      ATerm v_28 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(t_28);
                                                  t = z_23;
                                                }
                                              else
                                                {
                                                  t = s_28;
                                                  {
                                                    ATerm w_28 = t;
                                                    int x_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm y_28 = ATgetArgument(t, 0);
                                                            ATerm z_28 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(x_28);
                                                        t = z_23;
                                                      }
                                                    else
                                                      {
                                                        t = w_28;
                                                        {
                                                          ATerm a_29 = t;
                                                          int b_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm c_29 = ATgetArgument(t, 0);
                                                                  ATerm d_29 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(b_29);
                                                              t = z_23;
                                                            }
                                                          else
                                                            {
                                                              t = a_29;
                                                              {
                                                                ATerm e_29 = t;
                                                                int f_29 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm g_29 = ATgetArgument(t, 0);
                                                                        ATerm h_29 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(f_29);
                                                                    t = z_23;
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_29;
                                                                    {
                                                                      ATerm i_29 = t;
                                                                      int j_29 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm k_29 = ATgetArgument(t, 0);
                                                                              ATerm l_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(j_29);
                                                                          t = z_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_29;
                                                                          {
                                                                            ATerm m_29 = t;
                                                                            int n_29 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm o_29 = ATgetArgument(t, 0);
                                                                                    ATerm p_29 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(n_29);
                                                                                t = z_23;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_29;
                                                                                {
                                                                                  ATerm q_29 = t;
                                                                                  int r_29 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm s_29 = ATgetArgument(t, 0);
                                                                                          ATerm t_29 = ATgetArgument(t, 1);
                                                                                          ATerm u_29 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(r_29);
                                                                                      t = z_23;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_29;
                                                                                      {
                                                                                        ATerm v_29 = t;
                                                                                        int w_29 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm x_29 = ATgetArgument(t, 0);
                                                                                                ATerm y_29 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(w_29);
                                                                                            t = z_23;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_29;
                                                                                            {
                                                                                              ATerm z_29 = t;
                                                                                              int a_30 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm b_30 = ATgetArgument(t, 0);
                                                                                                      ATerm c_30 = ATgetArgument(t, 1);
                                                                                                      ATerm d_30 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(a_30);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = z_29;
                                                                                                  {
                                                                                                    ATerm e_30 = t;
                                                                                                    int f_30 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm g_30 = ATgetArgument(t, 0);
                                                                                                            ATerm h_30 = ATgetArgument(t, 1);
                                                                                                            ATerm i_30 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(f_30);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = e_30;
                                                                                                        {
                                                                                                          ATerm j_30 = t;
                                                                                                          int k_30 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                {
                                                                                                                  ATerm l_30 = ATgetArgument(t, 0);
                                                                                                                  ATerm m_30 = ATgetArgument(t, 1);
                                                                                                                  ATerm n_30 = ATgetArgument(t, 2);
                                                                                                                  ATerm o_30 = ATgetArgument(t, 3);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(k_30);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_30;
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm p_30 = ATgetArgument(t, 0);
                                                                                                                  ATerm q_30 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                            LocalPopChoice(r_28);
                                          }
                                        else
                                          {
                                            t = q_28;
                                            t = a_24;
                                            {
                                              ATerm r_30 = t;
                                              int s_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  if(match_cons(t, sym_Choice_2))
                                                    {
                                                      ATerm t_30 = ATgetArgument(t, 0);
                                                      ATerm u_30 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  LocalPopChoice(s_30);
                                                  t = a_24;
                                                }
                                              else
                                                {
                                                  t = r_30;
                                                  {
                                                    ATerm v_30 = t;
                                                    int w_30 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        if(match_cons(t, sym_LChoice_2))
                                                          {
                                                            ATerm x_30 = ATgetArgument(t, 0);
                                                            ATerm y_30 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        LocalPopChoice(w_30);
                                                        t = a_24;
                                                      }
                                                    else
                                                      {
                                                        t = v_30;
                                                        {
                                                          ATerm z_30 = t;
                                                          int a_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  ATerm b_31 = ATgetArgument(t, 0);
                                                                  ATerm c_31 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(a_31);
                                                              t = a_24;
                                                            }
                                                          else
                                                            {
                                                              t = z_30;
                                                              {
                                                                ATerm d_31 = t;
                                                                int e_31 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_GChoice_2))
                                                                      {
                                                                        ATerm f_31 = ATgetArgument(t, 0);
                                                                        ATerm g_31 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(e_31);
                                                                    t = a_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_31;
                                                                    {
                                                                      ATerm h_31 = t;
                                                                      int i_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              ATerm j_31 = ATgetArgument(t, 0);
                                                                              ATerm k_31 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(i_31);
                                                                          t = a_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_31;
                                                                          {
                                                                            ATerm l_31 = t;
                                                                            int m_31 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                  {
                                                                                    ATerm n_31 = ATgetArgument(t, 0);
                                                                                    ATerm o_31 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_31);
                                                                                t = a_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_31;
                                                                                {
                                                                                  ATerm p_31 = t;
                                                                                  int q_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          ATerm r_31 = ATgetArgument(t, 0);
                                                                                          ATerm s_31 = ATgetArgument(t, 1);
                                                                                          ATerm t_31 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(q_31);
                                                                                      t = a_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_31;
                                                                                      {
                                                                                        ATerm u_31 = t;
                                                                                        int v_31 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_AM_2))
                                                                                              {
                                                                                                ATerm w_31 = ATgetArgument(t, 0);
                                                                                                ATerm x_31 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(v_31);
                                                                                            t = a_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_31;
                                                                                            {
                                                                                              ATerm y_31 = t;
                                                                                              int z_31 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                    {
                                                                                                      ATerm a_32 = ATgetArgument(t, 0);
                                                                                                      ATerm b_32 = ATgetArgument(t, 1);
                                                                                                      ATerm c_32 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(z_31);
                                                                                                  t = a_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = y_31;
                                                                                                  {
                                                                                                    ATerm d_32 = t;
                                                                                                    int e_32 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm f_32 = ATgetArgument(t, 0);
                                                                                                            ATerm g_32 = ATgetArgument(t, 1);
                                                                                                            ATerm h_32 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(e_32);
                                                                                                        t = a_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = d_32;
                                                                                                        {
                                                                                                          ATerm i_32 = t;
                                                                                                          int j_32 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                {
                                                                                                                  ATerm k_32 = ATgetArgument(t, 0);
                                                                                                                  ATerm l_32 = ATgetArgument(t, 1);
                                                                                                                  ATerm m_32 = ATgetArgument(t, 2);
                                                                                                                  ATerm n_32 = ATgetArgument(t, 3);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(j_32);
                                                                                                              t = a_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = i_32;
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm o_32 = ATgetArgument(t, 0);
                                                                                                                  ATerm p_32 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = a_24;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynRuleIntersectUnionFix_3))
                                        {
                                          z_23 = ATgetArgument(t, 0);
                                          a_24 = ATgetArgument(t, 1);
                                          b_24 = ATgetArgument(t, 2);
                                          {
                                            ATerm q_32 = t;
                                            int r_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_23;
                                                {
                                                  ATerm s_32 = t;
                                                  int t_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          ATerm u_32 = ATgetArgument(t, 0);
                                                          ATerm v_32 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(t_32);
                                                      t = z_23;
                                                    }
                                                  else
                                                    {
                                                      t = s_32;
                                                      {
                                                        ATerm w_32 = t;
                                                        int x_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_LChoice_2))
                                                              {
                                                                ATerm y_32 = ATgetArgument(t, 0);
                                                                ATerm z_32 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(x_32);
                                                            t = z_23;
                                                          }
                                                        else
                                                          {
                                                            t = w_32;
                                                            {
                                                              ATerm a_33 = t;
                                                              int b_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      ATerm c_33 = ATgetArgument(t, 0);
                                                                      ATerm d_33 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(b_33);
                                                                  t = z_23;
                                                                }
                                                              else
                                                                {
                                                                  t = a_33;
                                                                  {
                                                                    ATerm e_33 = t;
                                                                    int f_33 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_GChoice_2))
                                                                          {
                                                                            ATerm g_33 = ATgetArgument(t, 0);
                                                                            ATerm h_33 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_33);
                                                                        t = z_23;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_33;
                                                                        {
                                                                          ATerm i_33 = t;
                                                                          int j_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  ATerm k_33 = ATgetArgument(t, 0);
                                                                                  ATerm l_33 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(j_33);
                                                                              t = z_23;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_33;
                                                                              {
                                                                                ATerm m_33 = t;
                                                                                int n_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                      {
                                                                                        ATerm o_33 = ATgetArgument(t, 0);
                                                                                        ATerm p_33 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(n_33);
                                                                                    t = z_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_33;
                                                                                    {
                                                                                      ATerm q_33 = t;
                                                                                      int r_33 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                            {
                                                                                              ATerm s_33 = ATgetArgument(t, 0);
                                                                                              ATerm t_33 = ATgetArgument(t, 1);
                                                                                              ATerm u_33 = ATgetArgument(t, 2);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(r_33);
                                                                                          t = z_23;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_33;
                                                                                          {
                                                                                            ATerm v_33 = t;
                                                                                            int w_33 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_AM_2))
                                                                                                  {
                                                                                                    ATerm x_33 = ATgetArgument(t, 0);
                                                                                                    ATerm y_33 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(w_33);
                                                                                                t = z_23;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = v_33;
                                                                                                {
                                                                                                  ATerm z_33 = t;
                                                                                                  int a_34 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                        {
                                                                                                          ATerm b_34 = ATgetArgument(t, 0);
                                                                                                          ATerm c_34 = ATgetArgument(t, 1);
                                                                                                          ATerm d_34 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(a_34);
                                                                                                      t = z_23;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_33;
                                                                                                      {
                                                                                                        ATerm e_34 = t;
                                                                                                        int f_34 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                              {
                                                                                                                ATerm g_34 = ATgetArgument(t, 0);
                                                                                                                ATerm h_34 = ATgetArgument(t, 1);
                                                                                                                ATerm i_34 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(f_34);
                                                                                                            t = z_23;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_34;
                                                                                                            {
                                                                                                              ATerm j_34 = t;
                                                                                                              int k_34 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm l_34 = ATgetArgument(t, 0);
                                                                                                                      ATerm m_34 = ATgetArgument(t, 1);
                                                                                                                      ATerm n_34 = ATgetArgument(t, 2);
                                                                                                                      ATerm o_34 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(k_34);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_34;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm p_34 = ATgetArgument(t, 0);
                                                                                                                      ATerm q_34 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24, b_24);
                                                LocalPopChoice(r_32);
                                              }
                                            else
                                              {
                                                t = q_32;
                                                {
                                                  ATerm r_34 = t;
                                                  int s_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = a_24;
                                                      {
                                                        ATerm t_34 = t;
                                                        int u_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Choice_2))
                                                              {
                                                                ATerm v_34 = ATgetArgument(t, 0);
                                                                ATerm w_34 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(u_34);
                                                            t = a_24;
                                                          }
                                                        else
                                                          {
                                                            t = t_34;
                                                            {
                                                              ATerm x_34 = t;
                                                              int y_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      ATerm z_34 = ATgetArgument(t, 0);
                                                                      ATerm a_35 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(y_34);
                                                                  t = a_24;
                                                                }
                                                              else
                                                                {
                                                                  t = x_34;
                                                                  {
                                                                    ATerm b_35 = t;
                                                                    int c_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_RChoice_2))
                                                                          {
                                                                            ATerm d_35 = ATgetArgument(t, 0);
                                                                            ATerm e_35 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(c_35);
                                                                        t = a_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_35;
                                                                        {
                                                                          ATerm f_35 = t;
                                                                          int g_35 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  ATerm h_35 = ATgetArgument(t, 0);
                                                                                  ATerm i_35 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(g_35);
                                                                              t = a_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_35;
                                                                              {
                                                                                ATerm j_35 = t;
                                                                                int k_35 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                      {
                                                                                        ATerm l_35 = ATgetArgument(t, 0);
                                                                                        ATerm m_35 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(k_35);
                                                                                    t = a_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_35;
                                                                                    {
                                                                                      ATerm n_35 = t;
                                                                                      int o_35 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                            {
                                                                                              ATerm p_35 = ATgetArgument(t, 0);
                                                                                              ATerm q_35 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(o_35);
                                                                                          t = a_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_35;
                                                                                          {
                                                                                            ATerm r_35 = t;
                                                                                            int s_35 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm t_35 = ATgetArgument(t, 0);
                                                                                                    ATerm u_35 = ATgetArgument(t, 1);
                                                                                                    ATerm v_35 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(s_35);
                                                                                                t = a_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_35;
                                                                                                {
                                                                                                  ATerm w_35 = t;
                                                                                                  int x_35 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_AM_2))
                                                                                                        {
                                                                                                          ATerm y_35 = ATgetArgument(t, 0);
                                                                                                          ATerm z_35 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(x_35);
                                                                                                      t = a_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = w_35;
                                                                                                      {
                                                                                                        ATerm a_36 = t;
                                                                                                        int b_36 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                              {
                                                                                                                ATerm c_36 = ATgetArgument(t, 0);
                                                                                                                ATerm d_36 = ATgetArgument(t, 1);
                                                                                                                ATerm e_36 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(b_36);
                                                                                                            t = a_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = a_36;
                                                                                                            {
                                                                                                              ATerm f_36 = t;
                                                                                                              int g_36 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                    {
                                                                                                                      ATerm h_36 = ATgetArgument(t, 0);
                                                                                                                      ATerm i_36 = ATgetArgument(t, 1);
                                                                                                                      ATerm j_36 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(g_36);
                                                                                                                  t = a_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_36;
                                                                                                                  {
                                                                                                                    ATerm k_36 = t;
                                                                                                                    int l_36 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                          {
                                                                                                                            ATerm m_36 = ATgetArgument(t, 0);
                                                                                                                            ATerm n_36 = ATgetArgument(t, 1);
                                                                                                                            ATerm o_36 = ATgetArgument(t, 2);
                                                                                                                            ATerm p_36 = ATgetArgument(t, 3);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(l_36);
                                                                                                                        t = a_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = k_36;
                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                          {
                                                                                                                            ATerm q_36 = ATgetArgument(t, 0);
                                                                                                                            ATerm r_36 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = a_24;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, z_23, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_24), b_24);
                                                      LocalPopChoice(s_34);
                                                    }
                                                  else
                                                    {
                                                      t = r_34;
                                                      t = b_24;
                                                      {
                                                        ATerm s_36 = t;
                                                        int t_36 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Choice_2))
                                                              {
                                                                ATerm u_36 = ATgetArgument(t, 0);
                                                                ATerm v_36 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(t_36);
                                                            t = b_24;
                                                          }
                                                        else
                                                          {
                                                            t = s_36;
                                                            {
                                                              ATerm w_36 = t;
                                                              int x_36 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      ATerm y_36 = ATgetArgument(t, 0);
                                                                      ATerm z_36 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(x_36);
                                                                  t = b_24;
                                                                }
                                                              else
                                                                {
                                                                  t = w_36;
                                                                  {
                                                                    ATerm a_37 = t;
                                                                    int b_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_RChoice_2))
                                                                          {
                                                                            ATerm c_37 = ATgetArgument(t, 0);
                                                                            ATerm d_37 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(b_37);
                                                                        t = b_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_37;
                                                                        {
                                                                          ATerm e_37 = t;
                                                                          int f_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  ATerm g_37 = ATgetArgument(t, 0);
                                                                                  ATerm h_37 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(f_37);
                                                                              t = b_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_37;
                                                                              {
                                                                                ATerm i_37 = t;
                                                                                int j_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                      {
                                                                                        ATerm k_37 = ATgetArgument(t, 0);
                                                                                        ATerm l_37 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(j_37);
                                                                                    t = b_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_37;
                                                                                    {
                                                                                      ATerm m_37 = t;
                                                                                      int n_37 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                            {
                                                                                              ATerm o_37 = ATgetArgument(t, 0);
                                                                                              ATerm p_37 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(n_37);
                                                                                          t = b_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_37;
                                                                                          {
                                                                                            ATerm q_37 = t;
                                                                                            int r_37 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                  {
                                                                                                    ATerm s_37 = ATgetArgument(t, 0);
                                                                                                    ATerm t_37 = ATgetArgument(t, 1);
                                                                                                    ATerm u_37 = ATgetArgument(t, 2);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(r_37);
                                                                                                t = b_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_37;
                                                                                                {
                                                                                                  ATerm v_37 = t;
                                                                                                  int w_37 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_AM_2))
                                                                                                        {
                                                                                                          ATerm x_37 = ATgetArgument(t, 0);
                                                                                                          ATerm y_37 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(w_37);
                                                                                                      t = b_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_37;
                                                                                                      {
                                                                                                        ATerm z_37 = t;
                                                                                                        int a_38 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                              {
                                                                                                                ATerm b_38 = ATgetArgument(t, 0);
                                                                                                                ATerm c_38 = ATgetArgument(t, 1);
                                                                                                                ATerm d_38 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(a_38);
                                                                                                            t = b_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = z_37;
                                                                                                            {
                                                                                                              ATerm e_38 = t;
                                                                                                              int f_38 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                    {
                                                                                                                      ATerm g_38 = ATgetArgument(t, 0);
                                                                                                                      ATerm h_38 = ATgetArgument(t, 1);
                                                                                                                      ATerm i_38 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(f_38);
                                                                                                                  t = b_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_38;
                                                                                                                  {
                                                                                                                    ATerm j_38 = t;
                                                                                                                    int k_38 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                          {
                                                                                                                            ATerm l_38 = ATgetArgument(t, 0);
                                                                                                                            ATerm m_38 = ATgetArgument(t, 1);
                                                                                                                            ATerm n_38 = ATgetArgument(t, 2);
                                                                                                                            ATerm o_38 = ATgetArgument(t, 3);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(k_38);
                                                                                                                        t = b_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_38;
                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                          {
                                                                                                                            ATerm p_38 = ATgetArgument(t, 0);
                                                                                                                            ATerm q_38 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = b_24;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnionFix_3, z_23, a_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_24));
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_AM_2))
                                            {
                                              z_23 = ATgetArgument(t, 0);
                                              a_24 = ATgetArgument(t, 1);
                                              {
                                                ATerm r_38 = t;
                                                int s_38 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_23;
                                                    {
                                                      ATerm t_38 = t;
                                                      int u_38 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm v_38 = ATgetArgument(t, 0);
                                                              ATerm w_38 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(u_38);
                                                          t = z_23;
                                                        }
                                                      else
                                                        {
                                                          t = t_38;
                                                          {
                                                            ATerm x_38 = t;
                                                            int y_38 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm z_38 = ATgetArgument(t, 0);
                                                                    ATerm a_39 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(y_38);
                                                                t = z_23;
                                                              }
                                                            else
                                                              {
                                                                t = x_38;
                                                                {
                                                                  ATerm b_39 = t;
                                                                  int c_39 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm d_39 = ATgetArgument(t, 0);
                                                                          ATerm e_39 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(c_39);
                                                                      t = z_23;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_39;
                                                                      {
                                                                        ATerm f_39 = t;
                                                                        int g_39 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm h_39 = ATgetArgument(t, 0);
                                                                                ATerm i_39 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(g_39);
                                                                            t = z_23;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = f_39;
                                                                            {
                                                                              ATerm j_39 = t;
                                                                              int k_39 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm l_39 = ATgetArgument(t, 0);
                                                                                      ATerm m_39 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(k_39);
                                                                                  t = z_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = j_39;
                                                                                  {
                                                                                    ATerm n_39 = t;
                                                                                    int o_39 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm p_39 = ATgetArgument(t, 0);
                                                                                            ATerm q_39 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(o_39);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_39;
                                                                                        {
                                                                                          ATerm r_39 = t;
                                                                                          int s_39 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm t_39 = ATgetArgument(t, 0);
                                                                                                  ATerm u_39 = ATgetArgument(t, 1);
                                                                                                  ATerm v_39 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(s_39);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_39;
                                                                                              {
                                                                                                ATerm w_39 = t;
                                                                                                int x_39 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm y_39 = ATgetArgument(t, 0);
                                                                                                        ATerm z_39 = ATgetArgument(t, 1);
                                                                                                        ATerm a_40 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(x_39);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = w_39;
                                                                                                    {
                                                                                                      ATerm b_40 = t;
                                                                                                      int c_40 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm d_40 = ATgetArgument(t, 0);
                                                                                                              ATerm e_40 = ATgetArgument(t, 1);
                                                                                                              ATerm f_40 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(c_40);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = b_40;
                                                                                                          {
                                                                                                            ATerm g_40 = t;
                                                                                                            int h_40 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm i_40 = ATgetArgument(t, 0);
                                                                                                                    ATerm j_40 = ATgetArgument(t, 1);
                                                                                                                    ATerm k_40 = ATgetArgument(t, 2);
                                                                                                                    ATerm l_40 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(h_40);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = g_40;
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm m_40 = ATgetArgument(t, 0);
                                                                                                                    ATerm n_40 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                    LocalPopChoice(s_38);
                                                  }
                                                else
                                                  {
                                                    t = r_38;
                                                    t = a_24;
                                                    {
                                                      ATerm o_40 = t;
                                                      int p_40 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              ATerm q_40 = ATgetArgument(t, 0);
                                                              ATerm r_40 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(p_40);
                                                          t = a_24;
                                                        }
                                                      else
                                                        {
                                                          t = o_40;
                                                          {
                                                            ATerm s_40 = t;
                                                            int t_40 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(match_cons(t, sym_LChoice_2))
                                                                  {
                                                                    ATerm u_40 = ATgetArgument(t, 0);
                                                                    ATerm v_40 = ATgetArgument(t, 1);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                LocalPopChoice(t_40);
                                                                t = a_24;
                                                              }
                                                            else
                                                              {
                                                                t = s_40;
                                                                {
                                                                  ATerm w_40 = t;
                                                                  int x_40 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          ATerm y_40 = ATgetArgument(t, 0);
                                                                          ATerm z_40 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(x_40);
                                                                      t = a_24;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = w_40;
                                                                      {
                                                                        ATerm a_41 = t;
                                                                        int b_41 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_GChoice_2))
                                                                              {
                                                                                ATerm c_41 = ATgetArgument(t, 0);
                                                                                ATerm d_41 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(b_41);
                                                                            t = a_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = a_41;
                                                                            {
                                                                              ATerm e_41 = t;
                                                                              int f_41 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      ATerm g_41 = ATgetArgument(t, 0);
                                                                                      ATerm h_41 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(f_41);
                                                                                  t = a_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = e_41;
                                                                                  {
                                                                                    ATerm i_41 = t;
                                                                                    int j_41 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                          {
                                                                                            ATerm k_41 = ATgetArgument(t, 0);
                                                                                            ATerm l_41 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(j_41);
                                                                                        t = a_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_41;
                                                                                        {
                                                                                          ATerm m_41 = t;
                                                                                          int n_41 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                {
                                                                                                  ATerm o_41 = ATgetArgument(t, 0);
                                                                                                  ATerm p_41 = ATgetArgument(t, 1);
                                                                                                  ATerm q_41 = ATgetArgument(t, 2);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(n_41);
                                                                                              t = a_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = m_41;
                                                                                              {
                                                                                                ATerm r_41 = t;
                                                                                                int s_41 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                      {
                                                                                                        ATerm t_41 = ATgetArgument(t, 0);
                                                                                                        ATerm u_41 = ATgetArgument(t, 1);
                                                                                                        ATerm v_41 = ATgetArgument(t, 2);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(s_41);
                                                                                                    t = a_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = r_41;
                                                                                                    {
                                                                                                      ATerm w_41 = t;
                                                                                                      int x_41 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                            {
                                                                                                              ATerm y_41 = ATgetArgument(t, 0);
                                                                                                              ATerm z_41 = ATgetArgument(t, 1);
                                                                                                              ATerm a_42 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(x_41);
                                                                                                          t = a_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = w_41;
                                                                                                          {
                                                                                                            ATerm b_42 = t;
                                                                                                            int c_42 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm d_42 = ATgetArgument(t, 0);
                                                                                                                    ATerm e_42 = ATgetArgument(t, 1);
                                                                                                                    ATerm f_42 = ATgetArgument(t, 2);
                                                                                                                    ATerm g_42 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(c_42);
                                                                                                                t = a_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = b_42;
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm h_42 = ATgetArgument(t, 0);
                                                                                                                    ATerm i_42 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = a_24;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_AM_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                {
                                                  z_23 = ATgetArgument(t, 0);
                                                  a_24 = ATgetArgument(t, 1);
                                                  b_24 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm j_42 = t;
                                                    int k_42 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = z_23;
                                                        {
                                                          ATerm l_42 = t;
                                                          int m_42 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  ATerm n_42 = ATgetArgument(t, 0);
                                                                  ATerm o_42 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              LocalPopChoice(m_42);
                                                              t = z_23;
                                                            }
                                                          else
                                                            {
                                                              t = l_42;
                                                              {
                                                                ATerm p_42 = t;
                                                                int q_42 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_LChoice_2))
                                                                      {
                                                                        ATerm r_42 = ATgetArgument(t, 0);
                                                                        ATerm s_42 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(q_42);
                                                                    t = z_23;
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_42;
                                                                    {
                                                                      ATerm t_42 = t;
                                                                      int u_42 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              ATerm v_42 = ATgetArgument(t, 0);
                                                                              ATerm w_42 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(u_42);
                                                                          t = z_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = t_42;
                                                                          {
                                                                            ATerm x_42 = t;
                                                                            int y_42 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_GChoice_2))
                                                                                  {
                                                                                    ATerm z_42 = ATgetArgument(t, 0);
                                                                                    ATerm a_43 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(y_42);
                                                                                t = z_23;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = x_42;
                                                                                {
                                                                                  ATerm b_43 = t;
                                                                                  int c_43 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                        {
                                                                                          ATerm d_43 = ATgetArgument(t, 0);
                                                                                          ATerm e_43 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(c_43);
                                                                                      t = z_23;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_43;
                                                                                      {
                                                                                        ATerm f_43 = t;
                                                                                        int g_43 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                              {
                                                                                                ATerm h_43 = ATgetArgument(t, 0);
                                                                                                ATerm i_43 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(g_43);
                                                                                            t = z_23;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_43;
                                                                                            {
                                                                                              ATerm j_43 = t;
                                                                                              int k_43 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                    {
                                                                                                      ATerm l_43 = ATgetArgument(t, 0);
                                                                                                      ATerm m_43 = ATgetArgument(t, 1);
                                                                                                      ATerm n_43 = ATgetArgument(t, 2);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(k_43);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = j_43;
                                                                                                  {
                                                                                                    ATerm o_43 = t;
                                                                                                    int p_43 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                          {
                                                                                                            ATerm q_43 = ATgetArgument(t, 0);
                                                                                                            ATerm r_43 = ATgetArgument(t, 1);
                                                                                                            ATerm s_43 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(p_43);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = o_43;
                                                                                                        {
                                                                                                          ATerm t_43 = t;
                                                                                                          int u_43 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                {
                                                                                                                  ATerm v_43 = ATgetArgument(t, 0);
                                                                                                                  ATerm w_43 = ATgetArgument(t, 1);
                                                                                                                  ATerm x_43 = ATgetArgument(t, 2);
                                                                                                                  ATerm y_43 = ATgetArgument(t, 3);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(u_43);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = t_43;
                                                                                                              {
                                                                                                                ATerm z_43 = t;
                                                                                                                int a_44 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm b_44 = ATgetArgument(t, 0);
                                                                                                                        ATerm c_44 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(a_44);
                                                                                                                    t = z_23;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = z_43;
                                                                                                                    if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                      {
                                                                                                                        ATerm d_44 = ATgetArgument(t, 0);
                                                                                                                        ATerm e_44 = ATgetArgument(t, 1);
                                                                                                                        ATerm f_44 = ATgetArgument(t, 2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = z_23;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24, b_24);
                                                        LocalPopChoice(k_42);
                                                      }
                                                    else
                                                      {
                                                        t = j_42;
                                                        {
                                                          ATerm g_44 = t;
                                                          int h_44 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = a_24;
                                                              {
                                                                ATerm i_44 = t;
                                                                int j_44 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm k_44 = ATgetArgument(t, 0);
                                                                        ATerm l_44 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(j_44);
                                                                    t = a_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = i_44;
                                                                    {
                                                                      ATerm m_44 = t;
                                                                      int n_44 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm o_44 = ATgetArgument(t, 0);
                                                                              ATerm p_44 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(n_44);
                                                                          t = a_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_44;
                                                                          {
                                                                            ATerm q_44 = t;
                                                                            int r_44 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm s_44 = ATgetArgument(t, 0);
                                                                                    ATerm t_44 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(r_44);
                                                                                t = a_24;
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
                                                                                      t = a_24;
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
                                                                                            t = a_24;
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
                                                                                                  t = a_24;
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
                                                                                                        t = a_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_45;
                                                                                                        {
                                                                                                          ATerm l_45 = t;
                                                                                                          int m_45 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm n_45 = ATgetArgument(t, 0);
                                                                                                                  ATerm o_45 = ATgetArgument(t, 1);
                                                                                                                  ATerm p_45 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(m_45);
                                                                                                              t = a_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = l_45;
                                                                                                              {
                                                                                                                ATerm q_45 = t;
                                                                                                                int r_45 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm s_45 = ATgetArgument(t, 0);
                                                                                                                        ATerm t_45 = ATgetArgument(t, 1);
                                                                                                                        ATerm u_45 = ATgetArgument(t, 2);
                                                                                                                        ATerm v_45 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(r_45);
                                                                                                                    t = a_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = q_45;
                                                                                                                    {
                                                                                                                      ATerm w_45 = t;
                                                                                                                      int x_45 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Seq_2))
                                                                                                                            {
                                                                                                                              ATerm y_45 = ATgetArgument(t, 0);
                                                                                                                              ATerm z_45 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(x_45);
                                                                                                                          t = a_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = w_45;
                                                                                                                          if(match_cons(t, sym_DynRuleIntersect_3))
                                                                                                                            {
                                                                                                                              ATerm a_46 = ATgetArgument(t, 0);
                                                                                                                              ATerm b_46 = ATgetArgument(t, 1);
                                                                                                                              ATerm c_46 = ATgetArgument(t, 2);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = a_24;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_23, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_24), b_24);
                                                              LocalPopChoice(h_44);
                                                            }
                                                          else
                                                            {
                                                              t = g_44;
                                                              t = b_24;
                                                              {
                                                                ATerm d_46 = t;
                                                                int e_46 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    if(match_cons(t, sym_Choice_2))
                                                                      {
                                                                        ATerm f_46 = ATgetArgument(t, 0);
                                                                        ATerm g_46 = ATgetArgument(t, 1);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    LocalPopChoice(e_46);
                                                                    t = b_24;
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_46;
                                                                    {
                                                                      ATerm h_46 = t;
                                                                      int i_46 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              ATerm j_46 = ATgetArgument(t, 0);
                                                                              ATerm k_46 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(i_46);
                                                                          t = b_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_46;
                                                                          {
                                                                            ATerm l_46 = t;
                                                                            int m_46 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                  {
                                                                                    ATerm n_46 = ATgetArgument(t, 0);
                                                                                    ATerm o_46 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(m_46);
                                                                                t = b_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = l_46;
                                                                                {
                                                                                  ATerm p_46 = t;
                                                                                  int q_46 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          ATerm r_46 = ATgetArgument(t, 0);
                                                                                          ATerm s_46 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(q_46);
                                                                                      t = b_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = p_46;
                                                                                      {
                                                                                        ATerm t_46 = t;
                                                                                        int u_46 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_LGChoice_2))
                                                                                              {
                                                                                                ATerm v_46 = ATgetArgument(t, 0);
                                                                                                ATerm w_46 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(u_46);
                                                                                            t = b_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_46;
                                                                                            {
                                                                                              ATerm x_46 = t;
                                                                                              int y_46 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                                    {
                                                                                                      ATerm z_46 = ATgetArgument(t, 0);
                                                                                                      ATerm a_47 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(y_46);
                                                                                                  t = b_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = x_46;
                                                                                                  {
                                                                                                    ATerm b_47 = t;
                                                                                                    int c_47 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm d_47 = ATgetArgument(t, 0);
                                                                                                            ATerm e_47 = ATgetArgument(t, 1);
                                                                                                            ATerm f_47 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(c_47);
                                                                                                        t = b_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_47;
                                                                                                        {
                                                                                                          ATerm g_47 = t;
                                                                                                          int h_47 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                {
                                                                                                                  ATerm i_47 = ATgetArgument(t, 0);
                                                                                                                  ATerm j_47 = ATgetArgument(t, 1);
                                                                                                                  ATerm k_47 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(h_47);
                                                                                                              t = b_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = g_47;
                                                                                                              {
                                                                                                                ATerm l_47 = t;
                                                                                                                int m_47 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                      {
                                                                                                                        ATerm n_47 = ATgetArgument(t, 0);
                                                                                                                        ATerm o_47 = ATgetArgument(t, 1);
                                                                                                                        ATerm p_47 = ATgetArgument(t, 2);
                                                                                                                        ATerm q_47 = ATgetArgument(t, 3);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(m_47);
                                                                                                                    t = b_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = l_47;
                                                                                                                    if(match_cons(t, sym_Seq_2))
                                                                                                                      {
                                                                                                                        ATerm r_47 = ATgetArgument(t, 0);
                                                                                                                        ATerm s_47 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    t = b_24;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_23, a_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_24));
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                    {
                                                      z_23 = ATgetArgument(t, 0);
                                                      a_24 = ATgetArgument(t, 1);
                                                      b_24 = ATgetArgument(t, 2);
                                                      {
                                                        ATerm t_47 = t;
                                                        int u_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = z_23;
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
                                                                  t = z_23;
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
                                                                        t = z_23;
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
                                                                              t = z_23;
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
                                                                                    t = z_23;
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
                                                                                          t = z_23;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_48;
                                                                                          {
                                                                                            ATerm p_48 = t;
                                                                                            int q_48 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm r_48 = ATgetArgument(t, 0);
                                                                                                    ATerm s_48 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(q_48);
                                                                                                t = z_23;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_48;
                                                                                                {
                                                                                                  ATerm t_48 = t;
                                                                                                  int u_48 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm v_48 = ATgetArgument(t, 0);
                                                                                                          ATerm w_48 = ATgetArgument(t, 1);
                                                                                                          ATerm x_48 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(u_48);
                                                                                                      t = z_23;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_48;
                                                                                                      {
                                                                                                        ATerm y_48 = t;
                                                                                                        int z_48 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                              {
                                                                                                                ATerm a_49 = ATgetArgument(t, 0);
                                                                                                                ATerm b_49 = ATgetArgument(t, 1);
                                                                                                                ATerm c_49 = ATgetArgument(t, 2);
                                                                                                                ATerm d_49 = ATgetArgument(t, 3);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(z_48);
                                                                                                            t = z_23;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = y_48;
                                                                                                            {
                                                                                                              ATerm e_49 = t;
                                                                                                              int f_49 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm g_49 = ATgetArgument(t, 0);
                                                                                                                      ATerm h_49 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(f_49);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_49;
                                                                                                                  if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                    {
                                                                                                                      ATerm i_49 = ATgetArgument(t, 0);
                                                                                                                      ATerm j_49 = ATgetArgument(t, 1);
                                                                                                                      ATerm k_49 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                            t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24, b_24);
                                                            LocalPopChoice(u_47);
                                                          }
                                                        else
                                                          {
                                                            t = t_47;
                                                            {
                                                              ATerm l_49 = t;
                                                              int m_49 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = a_24;
                                                                  {
                                                                    ATerm n_49 = t;
                                                                    int o_49 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm p_49 = ATgetArgument(t, 0);
                                                                            ATerm q_49 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(o_49);
                                                                        t = a_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_49;
                                                                        {
                                                                          ATerm r_49 = t;
                                                                          int s_49 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm t_49 = ATgetArgument(t, 0);
                                                                                  ATerm u_49 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(s_49);
                                                                              t = a_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_49;
                                                                              {
                                                                                ATerm v_49 = t;
                                                                                int w_49 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                      {
                                                                                        ATerm x_49 = ATgetArgument(t, 0);
                                                                                        ATerm y_49 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(w_49);
                                                                                    t = a_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_49;
                                                                                    {
                                                                                      ATerm z_49 = t;
                                                                                      int a_50 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                            {
                                                                                              ATerm b_50 = ATgetArgument(t, 0);
                                                                                              ATerm c_50 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(a_50);
                                                                                          t = a_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_49;
                                                                                          {
                                                                                            ATerm d_50 = t;
                                                                                            int e_50 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                                  {
                                                                                                    ATerm f_50 = ATgetArgument(t, 0);
                                                                                                    ATerm g_50 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(e_50);
                                                                                                t = a_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = d_50;
                                                                                                {
                                                                                                  ATerm h_50 = t;
                                                                                                  int i_50 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                                                        {
                                                                                                          ATerm j_50 = ATgetArgument(t, 0);
                                                                                                          ATerm k_50 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(i_50);
                                                                                                      t = a_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_50;
                                                                                                      {
                                                                                                        ATerm l_50 = t;
                                                                                                        int m_50 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                              {
                                                                                                                ATerm n_50 = ATgetArgument(t, 0);
                                                                                                                ATerm o_50 = ATgetArgument(t, 1);
                                                                                                                ATerm p_50 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(m_50);
                                                                                                            t = a_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_50;
                                                                                                            {
                                                                                                              ATerm q_50 = t;
                                                                                                              int r_50 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm s_50 = ATgetArgument(t, 0);
                                                                                                                      ATerm t_50 = ATgetArgument(t, 1);
                                                                                                                      ATerm u_50 = ATgetArgument(t, 2);
                                                                                                                      ATerm v_50 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(r_50);
                                                                                                                  t = a_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_50;
                                                                                                                  {
                                                                                                                    ATerm w_50 = t;
                                                                                                                    int x_50 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_Seq_2))
                                                                                                                          {
                                                                                                                            ATerm y_50 = ATgetArgument(t, 0);
                                                                                                                            ATerm z_50 = ATgetArgument(t, 1);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        LocalPopChoice(x_50);
                                                                                                                        t = a_24;
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = w_50;
                                                                                                                        if(match_cons(t, sym_DynRuleUnion_3))
                                                                                                                          {
                                                                                                                            ATerm a_51 = ATgetArgument(t, 0);
                                                                                                                            ATerm b_51 = ATgetArgument(t, 1);
                                                                                                                            ATerm c_51 = ATgetArgument(t, 2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          _fail(t);
                                                                                                                        t = a_24;
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_23, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_24), b_24);
                                                                  LocalPopChoice(m_49);
                                                                }
                                                              else
                                                                {
                                                                  t = l_49;
                                                                  t = b_24;
                                                                  {
                                                                    ATerm d_51 = t;
                                                                    int e_51 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_Choice_2))
                                                                          {
                                                                            ATerm f_51 = ATgetArgument(t, 0);
                                                                            ATerm g_51 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(e_51);
                                                                        t = b_24;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_51;
                                                                        {
                                                                          ATerm h_51 = t;
                                                                          int i_51 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  ATerm j_51 = ATgetArgument(t, 0);
                                                                                  ATerm k_51 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(i_51);
                                                                              t = b_24;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_51;
                                                                              {
                                                                                ATerm l_51 = t;
                                                                                int m_51 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                      {
                                                                                        ATerm n_51 = ATgetArgument(t, 0);
                                                                                        ATerm o_51 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(m_51);
                                                                                    t = b_24;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_51;
                                                                                    {
                                                                                      ATerm p_51 = t;
                                                                                      int q_51 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                            {
                                                                                              ATerm r_51 = ATgetArgument(t, 0);
                                                                                              ATerm s_51 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(q_51);
                                                                                          t = b_24;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_51;
                                                                                          {
                                                                                            ATerm t_51 = t;
                                                                                            int u_51 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_LGChoice_2))
                                                                                                  {
                                                                                                    ATerm v_51 = ATgetArgument(t, 0);
                                                                                                    ATerm w_51 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(u_51);
                                                                                                t = b_24;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_51;
                                                                                                {
                                                                                                  ATerm x_51 = t;
                                                                                                  int y_51 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                                                        {
                                                                                                          ATerm z_51 = ATgetArgument(t, 0);
                                                                                                          ATerm a_52 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(y_51);
                                                                                                      t = b_24;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = x_51;
                                                                                                      {
                                                                                                        ATerm b_52 = t;
                                                                                                        int c_52 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                              {
                                                                                                                ATerm d_52 = ATgetArgument(t, 0);
                                                                                                                ATerm e_52 = ATgetArgument(t, 1);
                                                                                                                ATerm f_52 = ATgetArgument(t, 2);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(c_52);
                                                                                                            t = b_24;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = b_52;
                                                                                                            {
                                                                                                              ATerm g_52 = t;
                                                                                                              int h_52 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                    {
                                                                                                                      ATerm i_52 = ATgetArgument(t, 0);
                                                                                                                      ATerm j_52 = ATgetArgument(t, 1);
                                                                                                                      ATerm k_52 = ATgetArgument(t, 2);
                                                                                                                      ATerm l_52 = ATgetArgument(t, 3);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(h_52);
                                                                                                                  t = b_24;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_52;
                                                                                                                  if(match_cons(t, sym_Seq_2))
                                                                                                                    {
                                                                                                                      ATerm m_52 = ATgetArgument(t, 0);
                                                                                                                      ATerm n_52 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = b_24;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_23, a_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, b_24));
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                        {
                                                          z_23 = ATgetArgument(t, 0);
                                                          a_24 = ATgetArgument(t, 1);
                                                          b_24 = ATgetArgument(t, 2);
                                                          x_23 = ATgetArgument(t, 3);
                                                          {
                                                            ATerm o_52 = t;
                                                            int p_52 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_23;
                                                                {
                                                                  ATerm q_52 = t;
                                                                  int r_52 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          ATerm s_52 = ATgetArgument(t, 0);
                                                                          ATerm t_52 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      LocalPopChoice(r_52);
                                                                      t = z_23;
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_52;
                                                                      {
                                                                        ATerm u_52 = t;
                                                                        int v_52 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_LChoice_2))
                                                                              {
                                                                                ATerm w_52 = ATgetArgument(t, 0);
                                                                                ATerm x_52 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(v_52);
                                                                            t = z_23;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = u_52;
                                                                            {
                                                                              ATerm y_52 = t;
                                                                              int z_52 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      ATerm a_53 = ATgetArgument(t, 0);
                                                                                      ATerm b_53 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(z_52);
                                                                                  t = z_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = y_52;
                                                                                  {
                                                                                    ATerm c_53 = t;
                                                                                    int d_53 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                          {
                                                                                            ATerm e_53 = ATgetArgument(t, 0);
                                                                                            ATerm f_53 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(d_53);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_53;
                                                                                        {
                                                                                          ATerm g_53 = t;
                                                                                          int h_53 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm i_53 = ATgetArgument(t, 0);
                                                                                                  ATerm j_53 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(h_53);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = g_53;
                                                                                              {
                                                                                                ATerm k_53 = t;
                                                                                                int l_53 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm m_53 = ATgetArgument(t, 0);
                                                                                                        ATerm n_53 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(l_53);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = k_53;
                                                                                                    {
                                                                                                      ATerm o_53 = t;
                                                                                                      int p_53 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm q_53 = ATgetArgument(t, 0);
                                                                                                              ATerm r_53 = ATgetArgument(t, 1);
                                                                                                              ATerm s_53 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(p_53);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = o_53;
                                                                                                          {
                                                                                                            ATerm t_53 = t;
                                                                                                            int u_53 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_Seq_2))
                                                                                                                  {
                                                                                                                    ATerm v_53 = ATgetArgument(t, 0);
                                                                                                                    ATerm w_53 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(u_53);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = t_53;
                                                                                                                if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                  {
                                                                                                                    ATerm x_53 = ATgetArgument(t, 0);
                                                                                                                    ATerm y_53 = ATgetArgument(t, 1);
                                                                                                                    ATerm z_53 = ATgetArgument(t, 2);
                                                                                                                    ATerm a_54 = ATgetArgument(t, 3);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                    }
                                                                }
                                                                t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24, b_24, x_23);
                                                                LocalPopChoice(p_52);
                                                              }
                                                            else
                                                              {
                                                                t = o_52;
                                                                {
                                                                  ATerm b_54 = t;
                                                                  int c_54 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = a_24;
                                                                      {
                                                                        ATerm d_54 = t;
                                                                        int e_54 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_Choice_2))
                                                                              {
                                                                                ATerm f_54 = ATgetArgument(t, 0);
                                                                                ATerm g_54 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(e_54);
                                                                            t = a_24;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_54;
                                                                            {
                                                                              ATerm h_54 = t;
                                                                              int i_54 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                    {
                                                                                      ATerm j_54 = ATgetArgument(t, 0);
                                                                                      ATerm k_54 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(i_54);
                                                                                  t = a_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_54;
                                                                                  {
                                                                                    ATerm l_54 = t;
                                                                                    int m_54 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                          {
                                                                                            ATerm n_54 = ATgetArgument(t, 0);
                                                                                            ATerm o_54 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(m_54);
                                                                                        t = a_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_54;
                                                                                        {
                                                                                          ATerm p_54 = t;
                                                                                          int q_54 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                                {
                                                                                                  ATerm r_54 = ATgetArgument(t, 0);
                                                                                                  ATerm s_54 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(q_54);
                                                                                              t = a_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = p_54;
                                                                                              {
                                                                                                ATerm t_54 = t;
                                                                                                int u_54 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                                      {
                                                                                                        ATerm v_54 = ATgetArgument(t, 0);
                                                                                                        ATerm w_54 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(u_54);
                                                                                                    t = a_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = t_54;
                                                                                                    {
                                                                                                      ATerm x_54 = t;
                                                                                                      int y_54 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                                            {
                                                                                                              ATerm z_54 = ATgetArgument(t, 0);
                                                                                                              ATerm a_55 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(y_54);
                                                                                                          t = a_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = x_54;
                                                                                                          {
                                                                                                            ATerm b_55 = t;
                                                                                                            int c_55 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                  {
                                                                                                                    ATerm d_55 = ATgetArgument(t, 0);
                                                                                                                    ATerm e_55 = ATgetArgument(t, 1);
                                                                                                                    ATerm f_55 = ATgetArgument(t, 2);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(c_55);
                                                                                                                t = a_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = b_55;
                                                                                                                {
                                                                                                                  ATerm g_55 = t;
                                                                                                                  int h_55 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm i_55 = ATgetArgument(t, 0);
                                                                                                                          ATerm j_55 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(h_55);
                                                                                                                      t = a_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = g_55;
                                                                                                                      if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                        {
                                                                                                                          ATerm k_55 = ATgetArgument(t, 0);
                                                                                                                          ATerm l_55 = ATgetArgument(t, 1);
                                                                                                                          ATerm m_55 = ATgetArgument(t, 2);
                                                                                                                          ATerm n_55 = ATgetArgument(t, 3);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = a_24;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, z_23, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_24), b_24, x_23);
                                                                      LocalPopChoice(c_54);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_54;
                                                                      {
                                                                        ATerm o_55 = t;
                                                                        int p_55 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = b_24;
                                                                            {
                                                                              ATerm q_55 = t;
                                                                              int r_55 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      ATerm s_55 = ATgetArgument(t, 0);
                                                                                      ATerm t_55 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(r_55);
                                                                                  t = b_24;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_55;
                                                                                  {
                                                                                    ATerm u_55 = t;
                                                                                    int v_55 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                          {
                                                                                            ATerm w_55 = ATgetArgument(t, 0);
                                                                                            ATerm x_55 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(v_55);
                                                                                        t = b_24;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_55;
                                                                                        {
                                                                                          ATerm y_55 = t;
                                                                                          int z_55 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                {
                                                                                                  ATerm a_56 = ATgetArgument(t, 0);
                                                                                                  ATerm b_56 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(z_55);
                                                                                              t = b_24;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_55;
                                                                                              {
                                                                                                ATerm c_56 = t;
                                                                                                int d_56 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                      {
                                                                                                        ATerm e_56 = ATgetArgument(t, 0);
                                                                                                        ATerm f_56 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(d_56);
                                                                                                    t = b_24;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = c_56;
                                                                                                    {
                                                                                                      ATerm g_56 = t;
                                                                                                      int h_56 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                            {
                                                                                                              ATerm i_56 = ATgetArgument(t, 0);
                                                                                                              ATerm j_56 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(h_56);
                                                                                                          t = b_24;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = g_56;
                                                                                                          {
                                                                                                            ATerm k_56 = t;
                                                                                                            int l_56 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm m_56 = ATgetArgument(t, 0);
                                                                                                                    ATerm n_56 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(l_56);
                                                                                                                t = b_24;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = k_56;
                                                                                                                {
                                                                                                                  ATerm o_56 = t;
                                                                                                                  int p_56 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm q_56 = ATgetArgument(t, 0);
                                                                                                                          ATerm r_56 = ATgetArgument(t, 1);
                                                                                                                          ATerm s_56 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(p_56);
                                                                                                                      t = b_24;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = o_56;
                                                                                                                      {
                                                                                                                        ATerm t_56 = t;
                                                                                                                        int u_56 = stack_ptr;
                                                                                                                        if((PushChoice() == 0))
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_Seq_2))
                                                                                                                              {
                                                                                                                                ATerm v_56 = ATgetArgument(t, 0);
                                                                                                                                ATerm w_56 = ATgetArgument(t, 1);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            LocalPopChoice(u_56);
                                                                                                                            t = b_24;
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            t = t_56;
                                                                                                                            if(match_cons(t, sym_DynRuleIntersectUnion_4))
                                                                                                                              {
                                                                                                                                ATerm x_56 = ATgetArgument(t, 0);
                                                                                                                                ATerm y_56 = ATgetArgument(t, 1);
                                                                                                                                ATerm z_56 = ATgetArgument(t, 2);
                                                                                                                                ATerm a_57 = ATgetArgument(t, 3);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              _fail(t);
                                                                                                                            t = b_24;
                                                                                                                          }
                                                                                                                      }
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, z_23, a_24, (ATerm)ATmakeAppl(sym_Parenthetical_1, b_24), x_23);
                                                                            LocalPopChoice(p_55);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = o_55;
                                                                            t = x_23;
                                                                            {
                                                                              ATerm b_57 = t;
                                                                              int c_57 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      ATerm d_57 = ATgetArgument(t, 0);
                                                                                      ATerm e_57 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(c_57);
                                                                                  t = x_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_57;
                                                                                  {
                                                                                    ATerm f_57 = t;
                                                                                    int g_57 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                          {
                                                                                            ATerm h_57 = ATgetArgument(t, 0);
                                                                                            ATerm i_57 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(g_57);
                                                                                        t = x_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_57;
                                                                                        {
                                                                                          ATerm j_57 = t;
                                                                                          int k_57 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                {
                                                                                                  ATerm l_57 = ATgetArgument(t, 0);
                                                                                                  ATerm m_57 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(k_57);
                                                                                              t = x_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = j_57;
                                                                                              {
                                                                                                ATerm n_57 = t;
                                                                                                int o_57 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                      {
                                                                                                        ATerm p_57 = ATgetArgument(t, 0);
                                                                                                        ATerm q_57 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(o_57);
                                                                                                    t = x_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_57;
                                                                                                    {
                                                                                                      ATerm r_57 = t;
                                                                                                      int s_57 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                            {
                                                                                                              ATerm t_57 = ATgetArgument(t, 0);
                                                                                                              ATerm u_57 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(s_57);
                                                                                                          t = x_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = r_57;
                                                                                                          {
                                                                                                            ATerm v_57 = t;
                                                                                                            int w_57 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm x_57 = ATgetArgument(t, 0);
                                                                                                                    ATerm y_57 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(w_57);
                                                                                                                t = x_23;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = v_57;
                                                                                                                {
                                                                                                                  ATerm z_57 = t;
                                                                                                                  int a_58 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm b_58 = ATgetArgument(t, 0);
                                                                                                                          ATerm c_58 = ATgetArgument(t, 1);
                                                                                                                          ATerm d_58 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(a_58);
                                                                                                                      t = x_23;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = z_57;
                                                                                                                      if(match_cons(t, sym_Seq_2))
                                                                                                                        {
                                                                                                                          ATerm e_58 = ATgetArgument(t, 0);
                                                                                                                          ATerm f_58 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = x_23;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                            t = (ATerm) ATmakeAppl(sym_DynRuleIntersectUnion_4, z_23, a_24, b_24, (ATerm) ATmakeAppl(sym_Parenthetical_1, x_23));
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
                                                              z_23 = ATgetArgument(t, 0);
                                                              a_24 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm g_58 = t;
                                                                int h_58 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = z_23;
                                                                    {
                                                                      ATerm i_58 = t;
                                                                      int j_58 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              ATerm k_58 = ATgetArgument(t, 0);
                                                                              ATerm l_58 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(j_58);
                                                                          t = z_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = i_58;
                                                                          {
                                                                            ATerm m_58 = t;
                                                                            int n_58 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                  {
                                                                                    ATerm o_58 = ATgetArgument(t, 0);
                                                                                    ATerm p_58 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(n_58);
                                                                                t = z_23;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_58;
                                                                                {
                                                                                  ATerm q_58 = t;
                                                                                  int r_58 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          ATerm s_58 = ATgetArgument(t, 0);
                                                                                          ATerm t_58 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(r_58);
                                                                                      t = z_23;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_58;
                                                                                      {
                                                                                        ATerm u_58 = t;
                                                                                        int v_58 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm w_58 = ATgetArgument(t, 0);
                                                                                                ATerm x_58 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(v_58);
                                                                                            t = z_23;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_58;
                                                                                            {
                                                                                              ATerm y_58 = t;
                                                                                              int z_58 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm a_59 = ATgetArgument(t, 0);
                                                                                                      ATerm b_59 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(z_58);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = y_58;
                                                                                                  {
                                                                                                    ATerm c_59 = t;
                                                                                                    int d_59 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm e_59 = ATgetArgument(t, 0);
                                                                                                            ATerm f_59 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(d_59);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = c_59;
                                                                                                        {
                                                                                                          ATerm g_59 = t;
                                                                                                          int h_59 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm i_59 = ATgetArgument(t, 0);
                                                                                                                  ATerm j_59 = ATgetArgument(t, 1);
                                                                                                                  ATerm k_59 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(h_59);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = g_59;
                                                                                                              if(match_cons(t, sym_Seq_2))
                                                                                                                {
                                                                                                                  ATerm l_59 = ATgetArgument(t, 0);
                                                                                                                  ATerm m_59 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                    LocalPopChoice(h_58);
                                                                  }
                                                                else
                                                                  {
                                                                    t = g_58;
                                                                    t = a_24;
                                                                    {
                                                                      ATerm n_59 = t;
                                                                      int o_59 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              ATerm p_59 = ATgetArgument(t, 0);
                                                                              ATerm q_59 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          LocalPopChoice(o_59);
                                                                          t = a_24;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = n_59;
                                                                          {
                                                                            ATerm r_59 = t;
                                                                            int s_59 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_LChoice_2))
                                                                                  {
                                                                                    ATerm t_59 = ATgetArgument(t, 0);
                                                                                    ATerm u_59 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(s_59);
                                                                                t = a_24;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_59;
                                                                                {
                                                                                  ATerm v_59 = t;
                                                                                  int w_59 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          ATerm x_59 = ATgetArgument(t, 0);
                                                                                          ATerm y_59 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(w_59);
                                                                                      t = a_24;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_59;
                                                                                      {
                                                                                        ATerm z_59 = t;
                                                                                        int a_60 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm b_60 = ATgetArgument(t, 0);
                                                                                                ATerm c_60 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(a_60);
                                                                                            t = a_24;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_59;
                                                                                            {
                                                                                              ATerm d_60 = t;
                                                                                              int e_60 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm f_60 = ATgetArgument(t, 0);
                                                                                                      ATerm g_60 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(e_60);
                                                                                                  t = a_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_60;
                                                                                                  {
                                                                                                    ATerm h_60 = t;
                                                                                                    int i_60 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm j_60 = ATgetArgument(t, 0);
                                                                                                            ATerm k_60 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(i_60);
                                                                                                        t = a_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = h_60;
                                                                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                          {
                                                                                                            ATerm l_60 = ATgetArgument(t, 0);
                                                                                                            ATerm m_60 = ATgetArgument(t, 1);
                                                                                                            ATerm n_60 = ATgetArgument(t, 2);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        t = a_24;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_23, (ATerm) ATmakeAppl(sym_Parenthetical_1, a_24));
                                                                  }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  z_23 = ATgetArgument(t, 0);
                                                                  a_24 = ATgetArgument(t, 1);
                                                                  t = z_23;
                                                                  {
                                                                    ATerm o_60 = t;
                                                                    int p_60 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_LChoice_2))
                                                                          {
                                                                            ATerm q_60 = ATgetArgument(t, 0);
                                                                            ATerm r_60 = ATgetArgument(t, 1);
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(p_60);
                                                                        t = z_23;
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_60;
                                                                        {
                                                                          ATerm s_60 = t;
                                                                          int t_60 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  ATerm u_60 = ATgetArgument(t, 0);
                                                                                  ATerm v_60 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              LocalPopChoice(t_60);
                                                                              t = z_23;
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_60;
                                                                              {
                                                                                ATerm w_60 = t;
                                                                                int x_60 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                      {
                                                                                        ATerm y_60 = ATgetArgument(t, 0);
                                                                                        ATerm z_60 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(x_60);
                                                                                    t = z_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_60;
                                                                                    {
                                                                                      ATerm a_61 = t;
                                                                                      int b_61 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                            {
                                                                                              ATerm c_61 = ATgetArgument(t, 0);
                                                                                              ATerm d_61 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(b_61);
                                                                                          t = z_23;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_61;
                                                                                          {
                                                                                            ATerm e_61 = t;
                                                                                            int f_61 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                  {
                                                                                                    ATerm g_61 = ATgetArgument(t, 0);
                                                                                                    ATerm h_61 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(f_61);
                                                                                                t = z_23;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_61;
                                                                                                {
                                                                                                  ATerm i_61 = t;
                                                                                                  int j_61 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                        {
                                                                                                          ATerm k_61 = ATgetArgument(t, 0);
                                                                                                          ATerm l_61 = ATgetArgument(t, 1);
                                                                                                          ATerm m_61 = ATgetArgument(t, 2);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(j_61);
                                                                                                      t = z_23;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_61;
                                                                                                      if(match_cons(t, sym_Choice_2))
                                                                                                        {
                                                                                                          ATerm n_61 = ATgetArgument(t, 0);
                                                                                                          ATerm o_61 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      t = z_23;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      z_23 = ATgetArgument(t, 0);
                                                                      a_24 = ATgetArgument(t, 1);
                                                                      t = z_23;
                                                                      {
                                                                        ATerm p_61 = t;
                                                                        int q_61 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            if(match_cons(t, sym_Choice_2))
                                                                              {
                                                                                ATerm r_61 = ATgetArgument(t, 0);
                                                                                ATerm s_61 = ATgetArgument(t, 1);
                                                                              }
                                                                            else
                                                                              _fail(t);
                                                                            LocalPopChoice(q_61);
                                                                            t = z_23;
                                                                          }
                                                                        else
                                                                          {
                                                                            t = p_61;
                                                                            {
                                                                              ATerm t_61 = t;
                                                                              int u_61 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      ATerm v_61 = ATgetArgument(t, 0);
                                                                                      ATerm w_61 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  LocalPopChoice(u_61);
                                                                                  t = z_23;
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = t_61;
                                                                                  {
                                                                                    ATerm x_61 = t;
                                                                                    int y_61 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_GChoice_2))
                                                                                          {
                                                                                            ATerm z_61 = ATgetArgument(t, 0);
                                                                                            ATerm a_62 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(y_61);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_61;
                                                                                        {
                                                                                          ATerm b_62 = t;
                                                                                          int c_62 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                                {
                                                                                                  ATerm d_62 = ATgetArgument(t, 0);
                                                                                                  ATerm e_62 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(c_62);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = b_62;
                                                                                              {
                                                                                                ATerm f_62 = t;
                                                                                                int g_62 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RGChoice_2))
                                                                                                      {
                                                                                                        ATerm h_62 = ATgetArgument(t, 0);
                                                                                                        ATerm i_62 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(g_62);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_62;
                                                                                                    {
                                                                                                      ATerm j_62 = t;
                                                                                                      int k_62 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                            {
                                                                                                              ATerm l_62 = ATgetArgument(t, 0);
                                                                                                              ATerm m_62 = ATgetArgument(t, 1);
                                                                                                              ATerm n_62 = ATgetArgument(t, 2);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(k_62);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = j_62;
                                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                                            {
                                                                                                              ATerm o_62 = ATgetArgument(t, 0);
                                                                                                              ATerm p_62 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                }
                                                                            }
                                                                          }
                                                                      }
                                                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          z_23 = ATgetArgument(t, 0);
                                                                          a_24 = ATgetArgument(t, 1);
                                                                          t = z_23;
                                                                          {
                                                                            ATerm q_62 = t;
                                                                            int r_62 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_Choice_2))
                                                                                  {
                                                                                    ATerm s_62 = ATgetArgument(t, 0);
                                                                                    ATerm t_62 = ATgetArgument(t, 1);
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(r_62);
                                                                                t = z_23;
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_62;
                                                                                {
                                                                                  ATerm u_62 = t;
                                                                                  int v_62 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          ATerm w_62 = ATgetArgument(t, 0);
                                                                                          ATerm x_62 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      LocalPopChoice(v_62);
                                                                                      t = z_23;
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = u_62;
                                                                                      {
                                                                                        ATerm y_62 = t;
                                                                                        int z_62 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_GChoice_2))
                                                                                              {
                                                                                                ATerm a_63 = ATgetArgument(t, 0);
                                                                                                ATerm b_63 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(z_62);
                                                                                            t = z_23;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_62;
                                                                                            {
                                                                                              ATerm c_63 = t;
                                                                                              int d_63 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                                    {
                                                                                                      ATerm e_63 = ATgetArgument(t, 0);
                                                                                                      ATerm f_63 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(d_63);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_63;
                                                                                                  {
                                                                                                    ATerm g_63 = t;
                                                                                                    int h_63 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RGChoice_2))
                                                                                                          {
                                                                                                            ATerm i_63 = ATgetArgument(t, 0);
                                                                                                            ATerm j_63 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(h_63);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = g_63;
                                                                                                        {
                                                                                                          ATerm k_63 = t;
                                                                                                          int l_63 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                {
                                                                                                                  ATerm m_63 = ATgetArgument(t, 0);
                                                                                                                  ATerm n_63 = ATgetArgument(t, 1);
                                                                                                                  ATerm o_63 = ATgetArgument(t, 2);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(l_63);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = k_63;
                                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                                {
                                                                                                                  ATerm p_63 = ATgetArgument(t, 0);
                                                                                                                  ATerm q_63 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                          t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_GChoice_2))
                                                                            {
                                                                              z_23 = ATgetArgument(t, 0);
                                                                              a_24 = ATgetArgument(t, 1);
                                                                              t = z_23;
                                                                              {
                                                                                ATerm r_63 = t;
                                                                                int s_63 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    if(match_cons(t, sym_Choice_2))
                                                                                      {
                                                                                        ATerm t_63 = ATgetArgument(t, 0);
                                                                                        ATerm u_63 = ATgetArgument(t, 1);
                                                                                      }
                                                                                    else
                                                                                      _fail(t);
                                                                                    LocalPopChoice(s_63);
                                                                                    t = z_23;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_63;
                                                                                    {
                                                                                      ATerm v_63 = t;
                                                                                      int w_63 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                            {
                                                                                              ATerm x_63 = ATgetArgument(t, 0);
                                                                                              ATerm y_63 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          LocalPopChoice(w_63);
                                                                                          t = z_23;
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_63;
                                                                                          {
                                                                                            ATerm z_63 = t;
                                                                                            int a_64 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                if(match_cons(t, sym_RChoice_2))
                                                                                                  {
                                                                                                    ATerm b_64 = ATgetArgument(t, 0);
                                                                                                    ATerm c_64 = ATgetArgument(t, 1);
                                                                                                  }
                                                                                                else
                                                                                                  _fail(t);
                                                                                                LocalPopChoice(a_64);
                                                                                                t = z_23;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_63;
                                                                                                {
                                                                                                  ATerm d_64 = t;
                                                                                                  int e_64 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                                        {
                                                                                                          ATerm f_64 = ATgetArgument(t, 0);
                                                                                                          ATerm g_64 = ATgetArgument(t, 1);
                                                                                                        }
                                                                                                      else
                                                                                                        _fail(t);
                                                                                                      LocalPopChoice(e_64);
                                                                                                      t = z_23;
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_64;
                                                                                                      {
                                                                                                        ATerm h_64 = t;
                                                                                                        int i_64 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RGChoice_2))
                                                                                                              {
                                                                                                                ATerm j_64 = ATgetArgument(t, 0);
                                                                                                                ATerm k_64 = ATgetArgument(t, 1);
                                                                                                              }
                                                                                                            else
                                                                                                              _fail(t);
                                                                                                            LocalPopChoice(i_64);
                                                                                                            t = z_23;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_64;
                                                                                                            {
                                                                                                              ATerm l_64 = t;
                                                                                                              int m_64 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                    {
                                                                                                                      ATerm n_64 = ATgetArgument(t, 0);
                                                                                                                      ATerm o_64 = ATgetArgument(t, 1);
                                                                                                                      ATerm p_64 = ATgetArgument(t, 2);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  LocalPopChoice(m_64);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_64;
                                                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                                                    {
                                                                                                                      ATerm q_64 = ATgetArgument(t, 0);
                                                                                                                      ATerm r_64 = ATgetArgument(t, 1);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    _fail(t);
                                                                                                                  t = z_23;
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                              t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  z_23 = ATgetArgument(t, 0);
                                                                                  a_24 = ATgetArgument(t, 1);
                                                                                  t = z_23;
                                                                                  {
                                                                                    ATerm s_64 = t;
                                                                                    int t_64 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        if(match_cons(t, sym_Choice_2))
                                                                                          {
                                                                                            ATerm u_64 = ATgetArgument(t, 0);
                                                                                            ATerm v_64 = ATgetArgument(t, 1);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        LocalPopChoice(t_64);
                                                                                        t = z_23;
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_64;
                                                                                        {
                                                                                          ATerm w_64 = t;
                                                                                          int x_64 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                                {
                                                                                                  ATerm y_64 = ATgetArgument(t, 0);
                                                                                                  ATerm z_64 = ATgetArgument(t, 1);
                                                                                                }
                                                                                              else
                                                                                                _fail(t);
                                                                                              LocalPopChoice(x_64);
                                                                                              t = z_23;
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_64;
                                                                                              {
                                                                                                ATerm a_65 = t;
                                                                                                int b_65 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                      {
                                                                                                        ATerm c_65 = ATgetArgument(t, 0);
                                                                                                        ATerm d_65 = ATgetArgument(t, 1);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    LocalPopChoice(b_65);
                                                                                                    t = z_23;
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = a_65;
                                                                                                    {
                                                                                                      ATerm e_65 = t;
                                                                                                      int f_65 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          if(match_cons(t, sym_GChoice_2))
                                                                                                            {
                                                                                                              ATerm g_65 = ATgetArgument(t, 0);
                                                                                                              ATerm h_65 = ATgetArgument(t, 1);
                                                                                                            }
                                                                                                          else
                                                                                                            _fail(t);
                                                                                                          LocalPopChoice(f_65);
                                                                                                          t = z_23;
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = e_65;
                                                                                                          {
                                                                                                            ATerm i_65 = t;
                                                                                                            int j_65 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                  {
                                                                                                                    ATerm k_65 = ATgetArgument(t, 0);
                                                                                                                    ATerm l_65 = ATgetArgument(t, 1);
                                                                                                                  }
                                                                                                                else
                                                                                                                  _fail(t);
                                                                                                                LocalPopChoice(j_65);
                                                                                                                t = z_23;
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = i_65;
                                                                                                                {
                                                                                                                  ATerm m_65 = t;
                                                                                                                  int n_65 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                        {
                                                                                                                          ATerm o_65 = ATgetArgument(t, 0);
                                                                                                                          ATerm p_65 = ATgetArgument(t, 1);
                                                                                                                          ATerm q_65 = ATgetArgument(t, 2);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      LocalPopChoice(n_65);
                                                                                                                      t = z_23;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = m_65;
                                                                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                                                                        {
                                                                                                                          ATerm r_65 = ATgetArgument(t, 0);
                                                                                                                          ATerm s_65 = ATgetArgument(t, 1);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        _fail(t);
                                                                                                                      t = z_23;
                                                                                                                    }
                                                                                                                }
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                    }
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                        }
                                                                                      }
                                                                                  }
                                                                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                                    {
                                                                                      z_23 = ATgetArgument(t, 0);
                                                                                      a_24 = ATgetArgument(t, 1);
                                                                                      t = z_23;
                                                                                      {
                                                                                        ATerm t_65 = t;
                                                                                        int u_65 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            if(match_cons(t, sym_Choice_2))
                                                                                              {
                                                                                                ATerm v_65 = ATgetArgument(t, 0);
                                                                                                ATerm w_65 = ATgetArgument(t, 1);
                                                                                              }
                                                                                            else
                                                                                              _fail(t);
                                                                                            LocalPopChoice(u_65);
                                                                                            t = z_23;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_65;
                                                                                            {
                                                                                              ATerm x_65 = t;
                                                                                              int y_65 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                                    {
                                                                                                      ATerm z_65 = ATgetArgument(t, 0);
                                                                                                      ATerm a_66 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(y_65);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = x_65;
                                                                                                  {
                                                                                                    ATerm b_66 = t;
                                                                                                    int c_66 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            ATerm d_66 = ATgetArgument(t, 0);
                                                                                                            ATerm e_66 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(c_66);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_66;
                                                                                                        {
                                                                                                          ATerm f_66 = t;
                                                                                                          int g_66 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                                                {
                                                                                                                  ATerm h_66 = ATgetArgument(t, 0);
                                                                                                                  ATerm i_66 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(g_66);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = f_66;
                                                                                                              {
                                                                                                                ATerm j_66 = t;
                                                                                                                int k_66 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_LGChoice_2))
                                                                                                                      {
                                                                                                                        ATerm l_66 = ATgetArgument(t, 0);
                                                                                                                        ATerm m_66 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(k_66);
                                                                                                                    t = z_23;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = j_66;
                                                                                                                    {
                                                                                                                      ATerm n_66 = t;
                                                                                                                      int o_66 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                            {
                                                                                                                              ATerm p_66 = ATgetArgument(t, 0);
                                                                                                                              ATerm q_66 = ATgetArgument(t, 1);
                                                                                                                              ATerm r_66 = ATgetArgument(t, 2);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(o_66);
                                                                                                                          t = z_23;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = n_66;
                                                                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                                                                            {
                                                                                                                              ATerm s_66 = ATgetArgument(t, 0);
                                                                                                                              ATerm t_66 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          t = z_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                          }
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                                        {
                                                                                          z_23 = ATgetArgument(t, 0);
                                                                                          a_24 = ATgetArgument(t, 1);
                                                                                          b_24 = ATgetArgument(t, 2);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      {
                                                                                        ATerm u_66 = t;
                                                                                        int v_66 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = z_23;
                                                                                            {
                                                                                              ATerm w_66 = t;
                                                                                              int x_66 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                                    {
                                                                                                      ATerm y_66 = ATgetArgument(t, 0);
                                                                                                      ATerm z_66 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(x_66);
                                                                                                  t = z_23;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = w_66;
                                                                                                  {
                                                                                                    ATerm a_67 = t;
                                                                                                    int b_67 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                                          {
                                                                                                            ATerm c_67 = ATgetArgument(t, 0);
                                                                                                            ATerm d_67 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(b_67);
                                                                                                        t = z_23;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = a_67;
                                                                                                        {
                                                                                                          ATerm e_67 = t;
                                                                                                          int f_67 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                                {
                                                                                                                  ATerm g_67 = ATgetArgument(t, 0);
                                                                                                                  ATerm h_67 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(f_67);
                                                                                                              t = z_23;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_67;
                                                                                                              {
                                                                                                                ATerm i_67 = t;
                                                                                                                int j_67 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                                      {
                                                                                                                        ATerm k_67 = ATgetArgument(t, 0);
                                                                                                                        ATerm l_67 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(j_67);
                                                                                                                    t = z_23;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = i_67;
                                                                                                                    {
                                                                                                                      ATerm m_67 = t;
                                                                                                                      int n_67 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                                            {
                                                                                                                              ATerm o_67 = ATgetArgument(t, 0);
                                                                                                                              ATerm p_67 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(n_67);
                                                                                                                          t = z_23;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = m_67;
                                                                                                                          {
                                                                                                                            ATerm q_67 = t;
                                                                                                                            int r_67 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm s_67 = ATgetArgument(t, 0);
                                                                                                                                    ATerm t_67 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(r_67);
                                                                                                                                t = z_23;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = q_67;
                                                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                  {
                                                                                                                                    ATerm u_67 = ATgetArgument(t, 0);
                                                                                                                                    ATerm v_67 = ATgetArgument(t, 1);
                                                                                                                                    ATerm w_67 = ATgetArgument(t, 2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                t = z_23;
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, z_23), a_24, b_24);
                                                                                            LocalPopChoice(v_66);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_66;
                                                                                            t = a_24;
                                                                                            {
                                                                                              ATerm x_67 = t;
                                                                                              int y_67 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                                    {
                                                                                                      ATerm z_67 = ATgetArgument(t, 0);
                                                                                                      ATerm a_68 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  LocalPopChoice(y_67);
                                                                                                  t = a_24;
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = x_67;
                                                                                                  {
                                                                                                    ATerm b_68 = t;
                                                                                                    int c_68 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        if(match_cons(t, sym_LChoice_2))
                                                                                                          {
                                                                                                            ATerm d_68 = ATgetArgument(t, 0);
                                                                                                            ATerm e_68 = ATgetArgument(t, 1);
                                                                                                          }
                                                                                                        else
                                                                                                          _fail(t);
                                                                                                        LocalPopChoice(c_68);
                                                                                                        t = a_24;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_68;
                                                                                                        {
                                                                                                          ATerm f_68 = t;
                                                                                                          int g_68 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                                                {
                                                                                                                  ATerm h_68 = ATgetArgument(t, 0);
                                                                                                                  ATerm i_68 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(g_68);
                                                                                                              t = a_24;
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = f_68;
                                                                                                              {
                                                                                                                ATerm j_68 = t;
                                                                                                                int k_68 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_GChoice_2))
                                                                                                                      {
                                                                                                                        ATerm l_68 = ATgetArgument(t, 0);
                                                                                                                        ATerm m_68 = ATgetArgument(t, 1);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      _fail(t);
                                                                                                                    LocalPopChoice(k_68);
                                                                                                                    t = a_24;
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = j_68;
                                                                                                                    {
                                                                                                                      ATerm n_68 = t;
                                                                                                                      int o_68 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                                                                            {
                                                                                                                              ATerm p_68 = ATgetArgument(t, 0);
                                                                                                                              ATerm q_68 = ATgetArgument(t, 1);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            _fail(t);
                                                                                                                          LocalPopChoice(o_68);
                                                                                                                          t = a_24;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = n_68;
                                                                                                                          {
                                                                                                                            ATerm r_68 = t;
                                                                                                                            int s_68 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_RGChoice_2))
                                                                                                                                  {
                                                                                                                                    ATerm t_68 = ATgetArgument(t, 0);
                                                                                                                                    ATerm u_68 = ATgetArgument(t, 1);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                LocalPopChoice(s_68);
                                                                                                                                t = a_24;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = r_68;
                                                                                                                                if(match_cons(t, sym_GuardedLChoice_3))
                                                                                                                                  {
                                                                                                                                    ATerm v_68 = ATgetArgument(t, 0);
                                                                                                                                    ATerm w_68 = ATgetArgument(t, 1);
                                                                                                                                    ATerm x_68 = ATgetArgument(t, 2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  _fail(t);
                                                                                                                                t = a_24;
                                                                                                                              }
                                                                                                                          }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                        }
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_23, (ATerm)ATmakeAppl(sym_Parenthetical_1, a_24), b_24);
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm t_25 = NULL;
  t_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_25), term_y_68);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_y_68;
  {
    ATerm z_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_69);
      }
    else
      {
        t = z_68;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  if(match_string(t, "-a"))
    {
      t = w_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = w_25;
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  t = term_d_69;
  t = set_config_0_0(t);
  t = x_25;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_e_69;
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
  ATerm y_25 = NULL;
  y_25 = t;
  t = term_g_69;
  t = set_config_0_0(t);
  t = y_25;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_h_69;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  if(match_string(t, "-I"))
    {
      t = z_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_25;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_68, (ATerm) ATinsert(ATempty, a_26));
  t = extend_config_0_0(t);
  t = a_26;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_i_69;
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
  ATerm b_26 = NULL;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_69, b_26);
  t = set_config_0_0(t);
  t = b_26;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_k_69;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm l_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_0, c_0, d_0, t);
      LocalPopChoice(m_69);
    }
  else
    {
      t = l_69;
      {
        ATerm n_69 = t;
        int o_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_0, f_0, g_0, t);
            LocalPopChoice(o_69);
          }
        else
          {
            t = n_69;
            {
              ATerm p_69 = t;
              int q_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(h_0, i_0, j_0, t);
                  LocalPopChoice(q_69);
                }
              else
                {
                  t = p_69;
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
  ATerm r_69 = t;
  int s_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(s_69);
    }
  else
    {
      t = r_69;
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
  ATerm t_69 = t;
  int u_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_26 = NULL;
      c_26 = t;
      t = term_b_69;
      t = get_config_0_0(t);
      t = c_26;
      LocalPopChoice(u_69);
    }
  else
    {
      t = t_69;
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
  t = term_v_69;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_w_69;
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
  ATerm e_26 = NULL;
  if(match_cons(t, sym_Parenthetical_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, e_26);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = term_f_69;
  t = get_config_0_0(t);
  t = f_26;
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
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  j_26 = t;
  g_26 = t;
  t = SSLgetAnnotations(j_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_26 = ATgetFirst((ATermList) t);
      i_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Comment_2, g_26, (ATerm) ATinsert(CheckATermList(i_26), h_26));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_x_69;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  t = pass_verbose_0_0(t);
  k_26 = t;
  t = term_j_69;
  {
    ATerm y_69 = t;
    int z_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(z_69);
      }
    else
      {
        t = y_69;
        t = term_a_70;
      }
  }
  t = xtc_find_0_0(t);
  l_26 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_26), l_26), term_j_69);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_b_70;
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
