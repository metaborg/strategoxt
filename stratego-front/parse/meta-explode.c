#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ToMetaExpr_1;
Symbol sym_ToMetaListExpr_1;
Symbol sym_FromMetaExpr_1;
Symbol sym_FromMetaListExpr_1;
Symbol sym_AsFix_0;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_opt_1;
Symbol sym_layout_0;
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
Symbol sym_Conc_2;
Symbol sym_Var_1;
Symbol sym_Anno_2;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Conc_2;
Symbol sym_RootApp_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_Call_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_ToTerm_1;
Symbol sym_FromTerm_1;
Symbol sym_ToBuild_1;
Symbol sym_FromApp_1;
Symbol sym_ToStrategy_1;
Symbol sym_FromStrategy_1;
Symbol sym_WithAnno_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_Cong_2;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Conc_2;
Symbol sym_RootApp_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_Call_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
static void init_module_constructors (void)
{
  sym_ToMetaExpr_1 = ATmakeSymbol("ToMetaExpr", 1, ATfalse);
  ATprotectSymbol(sym_ToMetaExpr_1);
  sym_ToMetaListExpr_1 = ATmakeSymbol("ToMetaListExpr", 1, ATfalse);
  ATprotectSymbol(sym_ToMetaListExpr_1);
  sym_FromMetaExpr_1 = ATmakeSymbol("FromMetaExpr", 1, ATfalse);
  ATprotectSymbol(sym_FromMetaExpr_1);
  sym_FromMetaListExpr_1 = ATmakeSymbol("FromMetaListExpr", 1, ATfalse);
  ATprotectSymbol(sym_FromMetaListExpr_1);
  sym_AsFix_0 = ATmakeSymbol("AsFix", 0, ATfalse);
  ATprotectSymbol(sym_AsFix_0);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
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
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_ToTerm_1 = ATmakeSymbol("ToTerm", 1, ATfalse);
  ATprotectSymbol(sym_ToTerm_1);
  sym_FromTerm_1 = ATmakeSymbol("FromTerm", 1, ATfalse);
  ATprotectSymbol(sym_FromTerm_1);
  sym_ToBuild_1 = ATmakeSymbol("ToBuild", 1, ATfalse);
  ATprotectSymbol(sym_ToBuild_1);
  sym_FromApp_1 = ATmakeSymbol("FromApp", 1, ATfalse);
  ATprotectSymbol(sym_FromApp_1);
  sym_ToStrategy_1 = ATmakeSymbol("ToStrategy", 1, ATfalse);
  ATprotectSymbol(sym_ToStrategy_1);
  sym_FromStrategy_1 = ATmakeSymbol("FromStrategy", 1, ATfalse);
  ATprotectSymbol(sym_FromStrategy_1);
  sym_WithAnno_2 = ATmakeSymbol("WithAnno", 2, ATfalse);
  ATprotectSymbol(sym_WithAnno_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
}
ATerm term_u_3;
ATerm term_r_3;
ATerm term_r_2;
ATerm term_k_2;
ATerm term_j_2;
ATerm term_g_2;
ATerm term_w_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_Cong_2, term_g_2, (ATerm) ATempty);
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_2));
  term_r_2 = (ATerm) ATmakeAppl(sym_Op_2, term_g_2, (ATerm) ATempty);
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm w_3 (ATerm), ATerm x_3 (ATerm), ATerm y_3 (ATerm), ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm o_120 (ATerm), ATerm t);
ATerm _2_0 (ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm c_1 (ATerm c_13, ATerm d_13, ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm f_1 (ATerm f_13, ATerm e_13, ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm g_1 (ATerm z_12, ATerm a_13, ATerm t);
static ATerm h_1 (ATerm n_10, ATerm t);
static ATerm i_1 (ATerm y_10, ATerm t);
ATerm TrmFromTerm_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm TrmStr_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
ATerm ImplodeLayout_1_0 (ATerm f_24 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm meta_explode_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm Clean_0_0 (ATerm t)
{
  ATerm j_0 = NULL,l_0 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      j_0 = ATgetArgument(t, 0);
      l_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_0;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_0;
  if(match_string(t, "Wld"))
    {
      ATerm u_1 = t;
      int v_1 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_0 = NULL;
          t = j_0;
          t = is_int_0_0(t);
          t = j_0;
          t = int_to_string_0_0(t);
          p_0 = t;
          t = (ATerm) ATmakeAppl(sym_Int_1, p_0);
          LocalPopChoice(v_1);
        }
      else
        {
          t = u_1;
          t = term_w_1;
        }
    }
  else
    {
      ATerm r_0 = NULL;
      t = j_0;
      t = is_int_0_0(t);
      t = j_0;
      t = int_to_string_0_0(t);
      r_0 = t;
      t = (ATerm) ATmakeAppl(sym_Int_1, r_0);
    }
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm x_1 = t;
  int y_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          y_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_0), (ATerm) ATempty);
      LocalPopChoice(y_1);
    }
  else
    {
      t = x_1;
      {
        ATerm z_1 = t;
        int a_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0_0(t);
            LocalPopChoice(a_2);
          }
        else
          {
            t = z_1;
            {
              ATerm b_2 = t;
              int d_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_1 = NULL,q_1 = NULL,r_1 = NULL;
                  k_1 = t;
                  if(match_cons(t, sym_FromStrategy_1))
                    {
                      q_1 = ATgetArgument(t, 0);
                      t = k_1;
                      t = h_1(q_1, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          q_1 = ATgetArgument(t, 0);
                          t = q_1;
                          t = MetaExplode_0_0(t);
                        }
                      else
                        {
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = term_j_2;
                            }
                          else
                            {
                              ATerm c_2 = NULL,e_2 = NULL;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  q_1 = ATgetFirst((ATermList) t);
                                  r_1 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = q_1;
                              t = str_explode_0_0(t);
                              c_2 = t;
                              t = r_1;
                              t = str_explode_0_0(t);
                              e_2 = t;
                              t = (ATerm) ATmakeAppl(sym_Cong_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, e_2), c_2));
                            }
                        }
                    }
                  LocalPopChoice(d_2);
                }
              else
                {
                  t = b_2;
                  {
                    ATerm n_2 = t;
                    int o_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_2 = NULL;
                        t = is_string_0_0(t);
                        f_2 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, f_2));
                        LocalPopChoice(o_2);
                      }
                    else
                      {
                        t = n_2;
                        {
                          ATerm o_3 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
                          o_3 = t;
                          t = SSL_explode_term(o_3);
                          if(match_cons(t, sym__2))
                            {
                              b_0 = ATgetArgument(t, 0);
                              c_0 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_0;
                          t = map_1_0(str_explode_0_0, t);
                          e_0 = t;
                          t = (ATerm) ATmakeAppl(sym_Cong_2, b_0, e_0);
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
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,a_4 = NULL,b_4 = NULL;
  b_4 = t;
  t = SSL_explode_term(b_4);
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  t = map_1_0(trm_explode_0_0, t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, s_3, a_4);
  return(t);
}
static ATerm c_1 (ATerm c_13, ATerm d_13, ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  t = c_13;
  t = trm_explode_0_0(t);
  h_4 = t;
  t = d_13;
  t = trm_explode_0_0(t);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, i_4), h_4));
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm q_4 = NULL;
  if(match_cons(t, sym_meta_listvar_1))
    {
      q_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, q_4)));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm w_4 = NULL,a_5 = NULL,c_5 = NULL;
  c_5 = t;
  t = Fst_0_0(t);
  w_4 = t;
  t = c_5;
  t = Snd_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, a_5), w_4));
  return(t);
}
static ATerm f_1 (ATerm f_13, ATerm e_13, ATerm t)
{
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    t = e_13;
    {
      ATerm p_2 = t;
      int q_2 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              u_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, term_r_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, u_4))));
          LocalPopChoice(q_2);
        }
      else
        {
          t = p_2;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = f_13;
  t = try_1_0(a_0, t);
  t = foldr_3_0(f_0, h_0, trm_explode_0_0, t);
  return(t);
}
static ATerm g_1 (ATerm z_12, ATerm a_13, ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  ATerm s_2 = t;
  int t_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_13;
      t = is_list_0_0(t);
      LocalPopChoice(t_2);
    }
  else
    {
      t = s_2;
      t = (ATerm) ATinsert(ATempty, a_13);
    }
  d_5 = t;
  t = z_12;
  t = trm_explode_0_0(t);
  e_5 = t;
  t = d_5;
  t = MetaExplode_0_0(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, e_5, f_5);
  return(t);
}
static ATerm h_1 (ATerm n_10, ATerm t)
{
  t = n_10;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm i_1 (ATerm y_10, ATerm t)
{
  ATerm j_5 = NULL;
  t = y_10;
  t = MetaExplode_0_0(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, j_5);
  return(t);
}
ATerm TrmFromTerm_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  if(match_cons(t, sym_FromMetaListExpr_1))
    {
      w_5 = ATgetArgument(t, 0);
      t = w_5;
      t = MetaExplode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FromMetaExpr_1))
        {
          w_5 = ATgetArgument(t, 0);
          t = w_5;
          t = MetaExplode_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_FromTerm_1))
            {
              w_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_5;
          t = MetaExplode_0_0(t);
        }
    }
  return(t);
}
ATerm TrmStr_0_0 (ATerm t)
{
  ATerm f_6 = NULL;
  t = is_string_0_0(t);
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, f_6);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm u_2 = t;
  int x_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          k_6 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, k_6);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              k_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, term_r_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, k_6))));
        }
      LocalPopChoice(x_2);
    }
  else
    {
      t = u_2;
      {
        ATerm y_2 = t;
        int b_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_6 = NULL;
            t = is_int_0_0(t);
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, n_6);
            LocalPopChoice(b_3);
          }
        else
          {
            t = y_2;
            {
              ATerm c_3 = t;
              int e_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0_0(t);
                  LocalPopChoice(e_3);
                }
              else
                {
                  t = c_3;
                  {
                    ATerm f_3 = t;
                    int g_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0_0(t);
                        LocalPopChoice(g_3);
                      }
                    else
                      {
                        t = f_3;
                        {
                          ATerm h_3 = t;
                          int i_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
                              o_6 = t;
                              if(match_cons(t, sym_FromApp_1))
                                {
                                  p_6 = ATgetArgument(t, 0);
                                  t = o_6;
                                  t = i_1(p_6, t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_FromStrategy_1))
                                    {
                                      p_6 = ATgetArgument(t, 0);
                                      t = o_6;
                                      t = h_1(p_6, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_WithAnno_2))
                                        {
                                          p_6 = ATgetArgument(t, 0);
                                          q_6 = ATgetArgument(t, 1);
                                          t = o_6;
                                          t = g_1(p_6, q_6, t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Conc_2))
                                            {
                                              p_6 = ATgetArgument(t, 0);
                                              q_6 = ATgetArgument(t, 1);
                                              t = o_6;
                                              t = f_1(p_6, q_6, t);
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = term_r_2;
                                                }
                                              else
                                                {
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      p_6 = ATgetFirst((ATermList) t);
                                                      q_6 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = o_6;
                                                  t = c_1(p_6, q_6, t);
                                                }
                                            }
                                        }
                                    }
                                }
                              LocalPopChoice(i_3);
                            }
                          else
                            {
                              t = h_3;
                              t = TrmOp_0_0(t);
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
static ATerm i_0 (ATerm t)
{
  ATerm c_7 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      c_7 = ATgetArgument(t, 0);
      t = c_7;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToMetaExpr_1))
        {
          c_7 = ATgetArgument(t, 0);
          t = c_7;
          t = trm_explode_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_ToMetaListExpr_1))
            {
              c_7 = ATgetArgument(t, 0);
              t = c_7;
              t = trm_explode_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_ToBuild_1))
                {
                  c_7 = ATgetArgument(t, 0);
                  {
                    ATerm h_7 = NULL;
                    t = c_7;
                    t = trm_explode_0_0(t);
                    h_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Build_1, h_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_ToStrategy_1))
                    {
                      c_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_7;
                  t = str_explode_0_0(t);
                }
            }
        }
    }
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  t = alltd_1_0(i_0, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,s_7 = NULL;
  o_7 = t;
  if(match_cons(t, sym_cf_1))
    {
      n_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_7);
  m_7 = t;
  t = n_7;
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cf_1, n_7);
  s_7 = t;
  t = SSLsetAnnotations(s_7, m_7);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm f_24 (ATerm), ATerm t)
{
  static ATerm q_11 (ATerm t);
  static ATerm q_11 (ATerm t)
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
      n_11 = t;
      if(match_cons(t, sym_BA_2))
        {
          o_11 = ATgetArgument(t, 0);
          p_11 = ATgetArgument(t, 1);
          {
            ATerm t_0 = NULL,w_0 = NULL,z_0 = NULL,d_0 = NULL;
            t = SSLgetAnnotations(n_11);
            t_0 = t;
            t = o_11;
            t = ImplodeLayout_1_0(_fail, t);
            w_0 = t;
            t = p_11;
            t = ImplodeLayout_1_0(_id, t);
            z_0 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, w_0, z_0);
            d_0 = t;
            t = SSLsetAnnotations(d_0, t_0);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              o_11 = ATgetArgument(t, 0);
              {
                ATerm o_1 = NULL,s_1 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(n_11);
                o_1 = t;
                t = o_11;
                t = ImplodeLayout_1_0(_id, t);
                s_1 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, s_1);
                g_0 = t;
                t = SSLsetAnnotations(g_0, o_1);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  o_11 = ATgetArgument(t, 0);
                  p_11 = ATgetArgument(t, 1);
                  {
                    ATerm i_2 = NULL,l_2 = NULL,m_2 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(n_11);
                    i_2 = t;
                    t = o_11;
                    t = q_11(t);
                    l_2 = t;
                    t = p_11;
                    t = ImplodeLayout_1_0(_id, t);
                    m_2 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, l_2, m_2);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, i_2);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      o_11 = ATgetArgument(t, 0);
                      p_11 = ATgetArgument(t, 1);
                      {
                        ATerm v_2 = NULL,z_2 = NULL,a_3 = NULL,h_2 = NULL;
                        t = SSLgetAnnotations(n_11);
                        v_2 = t;
                        t = o_11;
                        t = q_11(t);
                        z_2 = t;
                        t = p_11;
                        t = ImplodeLayout_1_0(_id, t);
                        a_3 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, z_2, a_3);
                        h_2 = t;
                        t = SSLsetAnnotations(h_2, v_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          o_11 = ATgetArgument(t, 0);
                          p_11 = ATgetArgument(t, 1);
                          m_11 = ATgetArgument(t, 2);
                          {
                            ATerm l_3 = NULL,v_3 = NULL,z_3 = NULL,c_4 = NULL,w_2 = NULL;
                            t = SSLgetAnnotations(n_11);
                            l_3 = t;
                            t = o_11;
                            t = q_11(t);
                            v_3 = t;
                            t = p_11;
                            t = ImplodeLayout_1_0(_id, t);
                            z_3 = t;
                            t = m_11;
                            t = q_11(t);
                            c_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, v_3, z_3, c_4);
                            w_2 = t;
                            t = SSLsetAnnotations(w_2, l_3);
                          }
                        }
                      else
                        {
                          ATerm p_4 = NULL,s_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL,g_5 = NULL,h_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL,p_3 = NULL,n_3 = NULL,m_3 = NULL,d_3 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              o_11 = ATgetArgument(t, 0);
                              p_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_11);
                          s_4 = t;
                          t = o_11;
                          if(match_cons(t, sym_prod_3))
                            {
                              b_5 = ATgetArgument(t, 0);
                              g_5 = ATgetArgument(t, 1);
                              h_5 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_11);
                          z_4 = t;
                          t = g_5;
                          if(match_cons(t, sym_cf_1))
                            {
                              m_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_5);
                          l_5 = t;
                          t = m_5;
                          if(match_cons(t, sym_opt_1))
                            {
                              q_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(m_5);
                          o_5 = t;
                          t = q_5;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, q_5);
                          d_3 = t;
                          t = SSLsetAnnotations(d_3, o_5);
                          r_5 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, r_5);
                          m_3 = t;
                          t = SSLsetAnnotations(m_3, l_5);
                          n_5 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, b_5, n_5, h_5);
                          n_3 = t;
                          t = SSLsetAnnotations(n_3, z_4);
                          k_5 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, k_5, p_11);
                          p_3 = t;
                          t = SSLsetAnnotations(p_3, s_4);
                          y_4 = t;
                          {
                            ATerm j_3 = t;
                            int k_3 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,x_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,u_6 = NULL,a_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,w_7 = NULL,v_7 = NULL,u_7 = NULL,t_7 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    u_5 = ATgetArgument(t, 0);
                                    v_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(y_4);
                                t_5 = t;
                                t = u_5;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    c_6 = ATgetArgument(t, 0);
                                    d_6 = ATgetArgument(t, 1);
                                    e_6 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(u_5);
                                b_6 = t;
                                t = c_6;
                                t = Cons_2_0(m_0, Nil_0_0, t);
                                g_6 = t;
                                t = d_6;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    u_6 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(d_6);
                                i_6 = t;
                                t = u_6;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    k_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(u_6);
                                j_7 = t;
                                t = k_7;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, k_7);
                                t_7 = t;
                                t = SSLsetAnnotations(t_7, j_7);
                                l_7 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, l_7);
                                u_7 = t;
                                t = SSLsetAnnotations(u_7, i_6);
                                a_7 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, g_6, a_7, e_6);
                                v_7 = t;
                                t = SSLsetAnnotations(v_7, b_6);
                                h_6 = t;
                                t = v_5;
                                {
                                  static ATerm n_0 (ATerm t);
                                  static ATerm n_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((p_4 != NULL) && (p_4 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          p_4 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(n_0, t);
                                }
                                x_5 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, h_6, x_5);
                                w_7 = t;
                                t = SSLsetAnnotations(w_7, t_5);
                                LocalPopChoice(k_3);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(p_4));
                              }
                            else
                              {
                                t = j_3;
                                {
                                  static ATerm q_0 (ATerm t);
                                  static ATerm q_0 (ATerm t)
                                  {
                                    ATerm q_3 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_24(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = q_3;
                                      }
                                    t = term_w_1;
                                    return(t);
                                  }
                                  t = try_1_0(q_0, t);
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
    t = alltd_1_0(k_0, t);
    return(t);
  }
  t = q_11(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = try_1_0(v_0, t);
  t = _2_0(_id, MetaExplode_0_0, t);
  t = try_1_0(d_1, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = Option_3_0(n_1, p_1, t_1, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = _2_0(x_0, a_1, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = option_defined_1_0(b_1, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = ImplodeLayout_1_0(_fail, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = _2_0(e_1, j_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = option_defined_1_0(l_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = topdown_1_0(m_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = try_1_0(Clean_0_0, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_r_3;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_u_3;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_2_0(s_0, u_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
