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
ATerm term_f_2;
ATerm term_e_2;
ATerm term_b_2;
ATerm term_a_2;
ATerm term_z_1;
ATerm term_y_1;
ATerm term_l_1;
ATerm term_k_1;
ATerm term_j_1;
ATerm term_i_1;
ATerm term_h_1;
ATerm term_g_1;
ATerm term_f_1;
ATerm term_e_1;
ATerm term_d_1;
ATerm term_c_1;
ATerm term_z_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_0));
  term_z_0 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_c_1));
  term_c_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_d_1));
  term_d_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_1));
  term_e_1 = (ATerm) ATmakeAppl(sym__2, term_c_1, term_d_1);
  ATprotect(&(term_f_1));
  term_f_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_g_1));
  term_g_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_h_1));
  term_h_1 = (ATerm) ATmakeAppl(sym__2, term_g_1, term_d_1);
  ATprotect(&(term_i_1));
  term_i_1 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_j_1));
  term_j_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_k_1));
  term_k_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_1));
  term_l_1 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   use pptable in file instead of Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_1));
  term_y_1 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
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
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym_DynRuleUnion_3))
    {
      y_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
      t_3 = ATgetArgument(t, 2);
      t = t_3;
      if(match_cons(t, sym_Seq_2))
        {
          o_3 = ATgetArgument(t, 0);
          p_3 = ATgetArgument(t, 1);
          t = a_4;
          if(match_cons(t, sym_DynRuleUnion_3))
            {
              w_3 = ATgetArgument(t, 0);
              u_3 = ATgetArgument(t, 1);
              r_3 = ATgetArgument(t, 2);
              t = y_3;
              if(match_cons(t, sym_DynRuleUnion_3))
                {
                  z_3 = ATgetArgument(t, 0);
                  v_3 = ATgetArgument(t, 1);
                  s_3 = ATgetArgument(t, 2);
                  t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  w_3 = ATgetArgument(t, 0);
                  u_3 = ATgetArgument(t, 1);
                  t = y_3;
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_3, v_3, s_3)), a_4, t_3);
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, o_3, p_3)));
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, o_3, p_3)));
                        }
                    }
                }
              else
                {
                  t = y_3;
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_3, v_3, s_3)), a_4, t_3);
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, o_3, p_3)));
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, o_3, p_3)));
                        }
                    }
                }
            }
        }
      else
        {
          t = a_4;
          if(match_cons(t, sym_DynRuleUnion_3))
            {
              w_3 = ATgetArgument(t, 0);
              u_3 = ATgetArgument(t, 1);
              r_3 = ATgetArgument(t, 2);
              t = y_3;
              if(match_cons(t, sym_DynRuleUnion_3))
                {
                  z_3 = ATgetArgument(t, 0);
                  v_3 = ATgetArgument(t, 1);
                  s_3 = ATgetArgument(t, 2);
                  t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                    }
                  else
                    {
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  w_3 = ATgetArgument(t, 0);
                  u_3 = ATgetArgument(t, 1);
                  t = y_3;
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_3, v_3, s_3)), a_4, t_3);
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, w_3, u_3)), t_3);
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, w_3, u_3)), t_3);
                        }
                    }
                }
              else
                {
                  t = y_3;
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_3, v_3, s_3)), a_4, t_3);
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_DynRuleUnion_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4, t_3);
                    }
                }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_DynRuleIntersect_3))
        {
          y_3 = ATgetArgument(t, 0);
          a_4 = ATgetArgument(t, 1);
          t_3 = ATgetArgument(t, 2);
          t = t_3;
          if(match_cons(t, sym_DynRuleUnion_3))
            {
              o_3 = ATgetArgument(t, 0);
              p_3 = ATgetArgument(t, 1);
              q_3 = ATgetArgument(t, 2);
              t = a_4;
              if(match_cons(t, sym_DynRuleIntersect_3))
                {
                  w_3 = ATgetArgument(t, 0);
                  u_3 = ATgetArgument(t, 1);
                  r_3 = ATgetArgument(t, 2);
                  t = y_3;
                  if(match_cons(t, sym_DynRuleIntersect_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)), t_3);
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleUnion_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)), t_3);
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)), t_3);
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      w_3 = ATgetArgument(t, 0);
                      u_3 = ATgetArgument(t, 1);
                      r_3 = ATgetArgument(t, 2);
                      t = y_3;
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_3, v_3, s_3)), a_4, t_3);
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleUnion_3))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              s_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, o_3, p_3, q_3)));
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, o_3, p_3, q_3)));
                            }
                        }
                    }
                  else
                    {
                      t = y_3;
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_3, v_3, s_3)), a_4, t_3);
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleUnion_3))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              s_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, o_3, p_3, q_3)));
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, a_4, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, o_3, p_3, q_3)));
                            }
                        }
                    }
                }
            }
          else
            {
              t = a_4;
              if(match_cons(t, sym_DynRuleIntersect_3))
                {
                  w_3 = ATgetArgument(t, 0);
                  u_3 = ATgetArgument(t, 1);
                  r_3 = ATgetArgument(t, 2);
                  t = y_3;
                  if(match_cons(t, sym_DynRuleIntersect_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)), t_3);
                    }
                  else
                    {
                      if(match_cons(t, sym_DynRuleUnion_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)), t_3);
                        }
                      else
                        {
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)), t_3);
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleUnion_3))
                    {
                      w_3 = ATgetArgument(t, 0);
                      u_3 = ATgetArgument(t, 1);
                      r_3 = ATgetArgument(t, 2);
                      t = y_3;
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_3, v_3, s_3)), a_4, t_3);
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleUnion_3))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              s_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                            }
                          else
                            {
                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, w_3, u_3, r_3)), t_3);
                            }
                        }
                    }
                  else
                    {
                      t = y_3;
                      if(match_cons(t, sym_DynRuleIntersect_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_3, v_3, s_3)), a_4, t_3);
                        }
                      else
                        {
                          if(match_cons(t, sym_DynRuleUnion_3))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              s_3 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnion_3, z_3, v_3, s_3)), a_4, t_3);
                        }
                    }
                }
            }
        }
      else
        {
          if(match_cons(t, sym_RGChoice_2))
            {
              y_3 = ATgetArgument(t, 0);
              a_4 = ATgetArgument(t, 1);
              t = y_3;
              if(match_cons(t, sym_RGChoice_2))
                {
                  z_3 = ATgetArgument(t, 0);
                  v_3 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                }
              else
                {
                  if(match_cons(t, sym_GuardedLChoice_3))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      s_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_LGChoice_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_GChoice_2))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_RChoice_2))
                                {
                                  z_3 = ATgetArgument(t, 0);
                                  v_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LChoice_2))
                                    {
                                      z_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_RGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
                                    }
                                }
                            }
                        }
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  y_3 = ATgetArgument(t, 0);
                  a_4 = ATgetArgument(t, 1);
                  t = y_3;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      z_3 = ATgetArgument(t, 0);
                      v_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          s_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_RGChoice_2))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_LGChoice_2))
                                {
                                  z_3 = ATgetArgument(t, 0);
                                  v_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_RChoice_2))
                                    {
                                      z_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Choice_2))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_GChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              else
                {
                  if(match_cons(t, sym_RChoice_2))
                    {
                      y_3 = ATgetArgument(t, 0);
                      a_4 = ATgetArgument(t, 1);
                      t = y_3;
                      if(match_cons(t, sym_RChoice_2))
                        {
                          z_3 = ATgetArgument(t, 0);
                          v_3 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              s_3 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_RGChoice_2))
                                {
                                  z_3 = ATgetArgument(t, 0);
                                  v_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LGChoice_2))
                                    {
                                      z_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Choice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym_RChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          y_3 = ATgetArgument(t, 0);
                          a_4 = ATgetArgument(t, 1);
                          t = y_3;
                          if(match_cons(t, sym_Choice_2))
                            {
                              z_3 = ATgetArgument(t, 0);
                              v_3 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  z_3 = ATgetArgument(t, 0);
                                  v_3 = ATgetArgument(t, 1);
                                  s_3 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_RGChoice_2))
                                    {
                                      z_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_GChoice_2))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_RChoice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_LChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              y_3 = ATgetArgument(t, 0);
                              a_4 = ATgetArgument(t, 1);
                              t_3 = ATgetArgument(t, 2);
                              t = a_4;
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  w_3 = ATgetArgument(t, 0);
                                  u_3 = ATgetArgument(t, 1);
                                  r_3 = ATgetArgument(t, 2);
                                  t = y_3;
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      z_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      s_3 = ATgetArgument(t, 2);
                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_RGChoice_2))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_GChoice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_LChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                                            }
                                                          else
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)), t_3);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RGChoice_2))
                                    {
                                      w_3 = ATgetArgument(t, 0);
                                      u_3 = ATgetArgument(t, 1);
                                      t = y_3;
                                      if(match_cons(t, sym_GuardedLChoice_3))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          s_3 = ATgetArgument(t, 2);
                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_RGChoice_2))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LGChoice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_RChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_LChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                                                }
                                                              else
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)), t_3);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          w_3 = ATgetArgument(t, 0);
                                          u_3 = ATgetArgument(t, 1);
                                          t = y_3;
                                          if(match_cons(t, sym_GuardedLChoice_3))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              s_3 = ATgetArgument(t, 2);
                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_RGChoice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4, t_3);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_LGChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)), t_3);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)), t_3);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)), t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_LChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)), t_3);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)), t_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)), t_3);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_GChoice_2))
                                            {
                                              w_3 = ATgetArgument(t, 0);
                                              u_3 = ATgetArgument(t, 1);
                                              t = y_3;
                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  s_3 = ATgetArgument(t, 2);
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_RGChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4, t_3);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_LGChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4, t_3);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_GChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)), t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)), t_3);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_LChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)), t_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)), t_3);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)), t_3);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_RChoice_2))
                                                {
                                                  w_3 = ATgetArgument(t, 0);
                                                  u_3 = ATgetArgument(t, 1);
                                                  t = y_3;
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      s_3 = ATgetArgument(t, 2);
                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_RGChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4, t_3);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_LGChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4, t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4, t_3);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)), t_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)), t_3);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)), t_3);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)), t_3);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_LChoice_2))
                                                    {
                                                      w_3 = ATgetArgument(t, 0);
                                                      u_3 = ATgetArgument(t, 1);
                                                      t = y_3;
                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          s_3 = ATgetArgument(t, 2);
                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_RGChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4, t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4, t_3);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_GChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4, t_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4, t_3);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, w_3, u_3)), t_3);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Choice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, w_3, u_3)), t_3);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, w_3, u_3)), t_3);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Choice_2))
                                                        {
                                                          w_3 = ATgetArgument(t, 0);
                                                          u_3 = ATgetArgument(t, 1);
                                                          t = y_3;
                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              s_3 = ATgetArgument(t, 2);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RGChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4, t_3);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4, t_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_GChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4, t_3);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4, t_3);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4, t_3);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, w_3, u_3)), t_3);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, w_3, u_3)), t_3);
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = y_3;
                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              s_3 = ATgetArgument(t, 2);
                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4, t_3);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RGChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4, t_3);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4, t_3);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_GChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4, t_3);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4, t_3);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4, t_3);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  else
                                                                                    _fail(t);
                                                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4, t_3);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_LGChoice_2))
                                {
                                  y_3 = ATgetArgument(t, 0);
                                  a_4 = ATgetArgument(t, 1);
                                  t = y_3;
                                  if(match_cons(t, sym_LGChoice_2))
                                    {
                                      z_3 = ATgetArgument(t, 0);
                                      v_3 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GuardedLChoice_3))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          s_3 = ATgetArgument(t, 2);
                                          t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_RGChoice_2))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_GChoice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_RChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_LChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_LGChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_LChoice_2))
                                    {
                                      y_3 = ATgetArgument(t, 0);
                                      a_4 = ATgetArgument(t, 1);
                                      t = y_3;
                                      if(match_cons(t, sym_LChoice_2))
                                        {
                                          z_3 = ATgetArgument(t, 0);
                                          v_3 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_GuardedLChoice_3))
                                            {
                                              z_3 = ATgetArgument(t, 0);
                                              v_3 = ATgetArgument(t, 1);
                                              s_3 = ATgetArgument(t, 2);
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_RGChoice_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_LGChoice_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Choice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
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
                                          y_3 = ATgetArgument(t, 0);
                                          a_4 = ATgetArgument(t, 1);
                                          t = a_4;
                                          if(match_cons(t, sym_GuardedLChoice_3))
                                            {
                                              w_3 = ATgetArgument(t, 0);
                                              u_3 = ATgetArgument(t, 1);
                                              r_3 = ATgetArgument(t, 2);
                                              t = y_3;
                                              if(match_cons(t, sym_Seq_2))
                                                {
                                                  z_3 = ATgetArgument(t, 0);
                                                  v_3 = ATgetArgument(t, 1);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      s_3 = ATgetArgument(t, 2);
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_RGChoice_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_LGChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_RChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                                            }
                                                                          else
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_3, u_3, r_3)));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_RGChoice_2))
                                                {
                                                  w_3 = ATgetArgument(t, 0);
                                                  u_3 = ATgetArgument(t, 1);
                                                  t = y_3;
                                                  if(match_cons(t, sym_Seq_2))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          s_3 = ATgetArgument(t, 2);
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_RGChoice_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_LGChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_GChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_LChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Choice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, w_3, u_3)));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_LGChoice_2))
                                                    {
                                                      w_3 = ATgetArgument(t, 0);
                                                      u_3 = ATgetArgument(t, 1);
                                                      t = y_3;
                                                      if(match_cons(t, sym_Seq_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              s_3 = ATgetArgument(t, 2);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RGChoice_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_GChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_RChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, w_3, u_3)));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_GChoice_2))
                                                        {
                                                          w_3 = ATgetArgument(t, 0);
                                                          u_3 = ATgetArgument(t, 1);
                                                          t = y_3;
                                                          if(match_cons(t, sym_Seq_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  s_3 = ATgetArgument(t, 2);
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_RGChoice_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LGChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_GChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)));
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_RChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)));
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_LChoice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Choice_2))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          v_3 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, w_3, u_3)));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_RChoice_2))
                                                            {
                                                              w_3 = ATgetArgument(t, 0);
                                                              u_3 = ATgetArgument(t, 1);
                                                              t = y_3;
                                                              if(match_cons(t, sym_Seq_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      s_3 = ATgetArgument(t, 2);
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RGChoice_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_LGChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_GChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RChoice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          v_3 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Choice_2))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                              v_3 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)));
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, w_3, u_3)));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_LChoice_2))
                                                                {
                                                                  w_3 = ATgetArgument(t, 0);
                                                                  u_3 = ATgetArgument(t, 1);
                                                                  t = y_3;
                                                                  if(match_cons(t, sym_Seq_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_GuardedLChoice_3))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          s_3 = ATgetArgument(t, 2);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_RGChoice_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_LGChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_GChoice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_RChoice_2))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          v_3 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_LChoice_2))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                              v_3 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, w_3, u_3)));
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_Choice_2))
                                                                                                {
                                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, w_3, u_3)));
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, w_3, u_3)));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Choice_2))
                                                                    {
                                                                      w_3 = ATgetArgument(t, 0);
                                                                      u_3 = ATgetArgument(t, 1);
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_Seq_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              s_3 = ATgetArgument(t, 2);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          v_3 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_RChoice_2))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                              v_3 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                                {
                                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                                    {
                                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, w_3, u_3)));
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, w_3, u_3)));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_Seq_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_GuardedLChoice_3))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              s_3 = ATgetArgument(t, 2);
                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_3, v_3, s_3)), a_4);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_RGChoice_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RGChoice_2, z_3, v_3)), a_4);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_LGChoice_2))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LGChoice_2, z_3, v_3)), a_4);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_GChoice_2))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          v_3 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_GChoice_2, z_3, v_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_RChoice_2))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                              v_3 = ATgetArgument(t, 1);
                                                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_RChoice_2, z_3, v_3)), a_4);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_LChoice_2))
                                                                                                {
                                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_LChoice_2, z_3, v_3)), a_4);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_Choice_2))
                                                                                                    {
                                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                                      v_3 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Choice_2, z_3, v_3)), a_4);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_AM_2))
                                            {
                                              y_3 = ATgetArgument(t, 0);
                                              a_4 = ATgetArgument(t, 1);
                                              t = a_4;
                                              if(match_cons(t, sym_DynRuleIntersect_3))
                                                {
                                                  w_3 = ATgetArgument(t, 0);
                                                  u_3 = ATgetArgument(t, 1);
                                                  r_3 = ATgetArgument(t, 2);
                                                  t = y_3;
                                                  if(match_cons(t, sym_DynRuleIntersect_3))
                                                    {
                                                      z_3 = ATgetArgument(t, 0);
                                                      v_3 = ATgetArgument(t, 1);
                                                      s_3 = ATgetArgument(t, 2);
                                                      t = (ATerm) ATmakeAppl(sym_AM_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Seq_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_AM_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)));
                                                        }
                                                      else
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_AM_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, w_3, u_3, r_3)));
                                                        }
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Seq_2))
                                                    {
                                                      w_3 = ATgetArgument(t, 0);
                                                      u_3 = ATgetArgument(t, 1);
                                                      t = y_3;
                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          s_3 = ATgetArgument(t, 2);
                                                          t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_3, v_3, s_3)), a_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Seq_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_AM_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, w_3, u_3)));
                                                            }
                                                          else
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym_AM_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, w_3, u_3)));
                                                            }
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = y_3;
                                                      if(match_cons(t, sym_DynRuleIntersect_3))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          s_3 = ATgetArgument(t, 2);
                                                          t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersect_3, z_3, v_3, s_3)), a_4);
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Seq_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Seq_2, z_3, v_3)), a_4);
                                                        }
                                                    }
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                                {
                                                  y_3 = ATgetArgument(t, 0);
                                                  a_4 = ATgetArgument(t, 1);
                                                  t = a_4;
                                                  if(match_cons(t, sym_AM_2))
                                                    {
                                                      w_3 = ATgetArgument(t, 0);
                                                      u_3 = ATgetArgument(t, 1);
                                                      t = y_3;
                                                      if(match_cons(t, sym_AM_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, w_3, u_3)));
                                                        }
                                                      else
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, w_3, u_3)));
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = y_3;
                                                      if(match_cons(t, sym_AM_2))
                                                        {
                                                          z_3 = ATgetArgument(t, 0);
                                                          v_3 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, z_3, v_3)), a_4);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                    {
                                                      y_3 = ATgetArgument(t, 0);
                                                      a_4 = ATgetArgument(t, 1);
                                                      t = a_4;
                                                      if(match_cons(t, sym_AM_2))
                                                        {
                                                          w_3 = ATgetArgument(t, 0);
                                                          u_3 = ATgetArgument(t, 1);
                                                          t = y_3;
                                                          if(match_cons(t, sym_AM_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, w_3, u_3)));
                                                            }
                                                          else
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, w_3, u_3)));
                                                            }
                                                        }
                                                      else
                                                        {
                                                          t = y_3;
                                                          if(match_cons(t, sym_AM_2))
                                                            {
                                                              z_3 = ATgetArgument(t, 0);
                                                              v_3 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, z_3, v_3)), a_4);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_BA_2))
                                                        {
                                                          y_3 = ATgetArgument(t, 0);
                                                          a_4 = ATgetArgument(t, 1);
                                                          t = a_4;
                                                          if(match_cons(t, sym_DynRuleUnionFix_2))
                                                            {
                                                              w_3 = ATgetArgument(t, 0);
                                                              u_3 = ATgetArgument(t, 1);
                                                              t = y_3;
                                                              if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                {
                                                                  z_3 = ATgetArgument(t, 0);
                                                                  v_3 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, w_3, u_3)));
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, w_3, u_3)));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_AM_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, w_3, u_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, w_3, u_3)));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                {
                                                                  w_3 = ATgetArgument(t, 0);
                                                                  u_3 = ATgetArgument(t, 1);
                                                                  t = y_3;
                                                                  if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, z_3, v_3)), a_4);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, w_3, u_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_AM_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, w_3, u_3)));
                                                                            }
                                                                          else
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, w_3, u_3)));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_AM_2))
                                                                    {
                                                                      w_3 = ATgetArgument(t, 0);
                                                                      u_3 = ATgetArgument(t, 1);
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, z_3, v_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, z_3, v_3)), a_4);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_AM_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                  t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, w_3, u_3)));
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym_BA_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, w_3, u_3)));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_DynRuleUnionFix_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleUnionFix_2, z_3, v_3)), a_4);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_DynRuleIntersectFix_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_DynRuleIntersectFix_2, z_3, v_3)), a_4);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_AM_2))
                                                                                {
                                                                                  z_3 = ATgetArgument(t, 0);
                                                                                  v_3 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_AM_2, z_3, v_3)), a_4);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Anno_2))
                                                            {
                                                              y_3 = ATgetArgument(t, 0);
                                                              a_4 = ATgetArgument(t, 1);
                                                              t = a_4;
                                                              if(match_cons(t, sym_As_2))
                                                                {
                                                                  w_3 = ATgetArgument(t, 0);
                                                                  u_3 = ATgetArgument(t, 1);
                                                                  t = y_3;
                                                                  if(match_cons(t, sym_As_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Anno_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_As_2, w_3, u_3)));
                                                                    }
                                                                  else
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym_Anno_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_As_2, w_3, u_3)));
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = y_3;
                                                                  if(match_cons(t, sym_As_2))
                                                                    {
                                                                      z_3 = ATgetArgument(t, 0);
                                                                      v_3 = ATgetArgument(t, 1);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_As_2, z_3, v_3)), a_4);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Explode_2))
                                                                {
                                                                  y_3 = ATgetArgument(t, 0);
                                                                  a_4 = ATgetArgument(t, 1);
                                                                  t = a_4;
                                                                  if(match_cons(t, sym_Anno_2))
                                                                    {
                                                                      w_3 = ATgetArgument(t, 0);
                                                                      u_3 = ATgetArgument(t, 1);
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_Anno_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_Explode_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Anno_2, w_3, u_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Explode_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Anno_2, w_3, u_3)));
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_Anno_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Anno_2, z_3, v_3)), a_4);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Match_1))
                                                                    {
                                                                      y_3 = ATgetArgument(t, 0);
                                                                      t = y_3;
                                                                      if(match_cons(t, sym_BA_2))
                                                                        {
                                                                          z_3 = ATgetArgument(t, 0);
                                                                          v_3 = ATgetArgument(t, 1);
                                                                        }
                                                                      else
                                                                        _fail(t);
                                                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_BA_2, z_3, v_3)));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Build_1))
                                                                        {
                                                                          y_3 = ATgetArgument(t, 0);
                                                                          t = y_3;
                                                                          if(match_cons(t, sym_BA_2))
                                                                            {
                                                                              z_3 = ATgetArgument(t, 0);
                                                                              v_3 = ATgetArgument(t, 1);
                                                                            }
                                                                          else
                                                                            _fail(t);
                                                                          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_BA_2, z_3, v_3)));
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_ExplodeCong_2))
                                                                            {
                                                                              y_3 = ATgetArgument(t, 0);
                                                                              a_4 = ATgetArgument(t, 1);
                                                                              t = a_4;
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  w_3 = ATgetArgument(t, 0);
                                                                                  t = y_3;
                                                                                  if(match_cons(t, sym_Match_1))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, w_3)));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Build_1))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, w_3)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, w_3)));
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      w_3 = ATgetArgument(t, 0);
                                                                                      t = y_3;
                                                                                      if(match_cons(t, sym_Match_1))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, z_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                              t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Build_1, w_3)));
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Build_1, w_3)));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_3;
                                                                                      if(match_cons(t, sym_Match_1))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, z_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_ExplodeCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Build_1, z_3)), a_4);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_AnnoCong_2))
                                                                                {
                                                                                  y_3 = ATgetArgument(t, 0);
                                                                                  a_4 = ATgetArgument(t, 1);
                                                                                }
                                                                              else
                                                                                _fail(t);
                                                                              t = a_4;
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  w_3 = ATgetArgument(t, 0);
                                                                                  t = y_3;
                                                                                  if(match_cons(t, sym_Match_1))
                                                                                    {
                                                                                      z_3 = ATgetArgument(t, 0);
                                                                                      t = (ATerm) ATmakeAppl(sym_AnnoCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, w_3)));
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Build_1))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          t = (ATerm) ATmakeAppl(sym_AnnoCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, w_3)));
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym_AnnoCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, w_3)));
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      w_3 = ATgetArgument(t, 0);
                                                                                      t = y_3;
                                                                                      if(match_cons(t, sym_Match_1))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, z_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                              t = (ATerm) ATmakeAppl(sym_AnnoCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Build_1, w_3)));
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym_AnnoCong_2, y_3, (ATerm) ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Build_1, w_3)));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_3;
                                                                                      if(match_cons(t, sym_Match_1))
                                                                                        {
                                                                                          z_3 = ATgetArgument(t, 0);
                                                                                          t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Match_1, z_3)), a_4);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              z_3 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = (ATerm) ATmakeAppl(sym_AnnoCong_2, (ATerm)ATmakeAppl(sym_Parenthetical_1, (ATerm) ATmakeAppl(sym_Build_1, z_3)), a_4);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm m_178 = NULL;
  m_178 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_178), term_z_0);
  return(t);
}
ATerm pass_includes_0_0 (ATerm t)
{
  t = term_z_0;
  {
    ATerm a_1 = t;
    int b_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_1);
      }
    else
      {
        t = a_1;
        t = (ATerm) ATempty;
      }
  }
  t = foldr_3_0(_id, conc_0_0, a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm p_178 = NULL;
  p_178 = t;
  if(match_string(t, "-a"))
    {
      t = p_178;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = p_178;
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm q_178 = NULL;
  q_178 = t;
  t = term_e_1;
  t = set_config_0_0(t);
  t = q_178;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_f_1;
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
  ATerm r_178 = NULL;
  r_178 = t;
  t = term_h_1;
  t = set_config_0_0(t);
  t = r_178;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_i_1;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm s_178 = NULL;
  s_178 = t;
  if(match_string(t, "-I"))
    {
      t = s_178;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = s_178;
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm t_178 = NULL;
  t_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_0, (ATerm) ATinsert(ATempty, t_178));
  t = extend_config_0_0(t);
  t = t_178;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_j_1;
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
  ATerm u_178 = NULL;
  u_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_1, u_178);
  t = set_config_0_0(t);
  t = u_178;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_l_1;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm m_1 = t;
  int n_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_0, c_0, d_0, t);
      LocalPopChoice(n_1);
    }
  else
    {
      t = m_1;
      {
        ATerm o_1 = t;
        int p_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_0, f_0, g_0, t);
            LocalPopChoice(p_1);
          }
        else
          {
            t = o_1;
            {
              ATerm q_1 = t;
              int r_1 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(h_0, i_0, j_0, t);
                  LocalPopChoice(r_1);
                }
              else
                {
                  t = q_1;
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
  ATerm s_1 = t;
  int t_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      LocalPopChoice(t_1);
    }
  else
    {
      t = s_1;
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
  ATerm u_1 = t;
  int v_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_178 = NULL;
      v_178 = t;
      t = term_c_1;
      t = get_config_0_0(t);
      t = v_178;
      LocalPopChoice(v_1);
    }
  else
    {
      t = u_1;
      t = xtc_transform_2_0(q_0, pass_includes_0_0, t);
    }
  t = xtc_transform_1_0(r_0, t);
  {
    ATerm w_1 = t;
    int x_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_178 = NULL;
        x_178 = t;
        t = term_g_1;
        t = get_config_0_0(t);
        t = x_178;
        LocalPopChoice(x_1);
      }
    else
      {
        t = w_1;
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
  t = term_y_1;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_z_1;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_a_2;
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
  ATerm z_178 = NULL;
  if(match_cons(t, sym_Parenthetical_1))
    {
      z_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ParenStrat_1, z_178);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_b_2;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm a_179 = NULL,b_179 = NULL;
  t = pass_verbose_0_0(t);
  a_179 = t;
  t = term_k_1;
  {
    ATerm c_2 = t;
    int d_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(d_2);
      }
    else
      {
        t = c_2;
        t = term_e_2;
      }
  }
  t = xtc_find_0_0(t);
  b_179 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(a_179), b_179), term_k_1);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_f_2;
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
