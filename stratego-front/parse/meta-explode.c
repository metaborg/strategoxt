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
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_g_3;
ATerm term_j_2;
ATerm term_z_1;
ATerm term_w_1;
ATerm term_r_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_1));
  term_r_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(sym_Cong_2, term_r_1, (ATerm) ATempty);
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(sym_Op_2, term_r_1, (ATerm) ATempty);
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm str_explode_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm d_1 (ATerm c_13, ATerm d_13, ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm g_0 (ATerm t);
static ATerm g_1 (ATerm f_13, ATerm e_13, ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm h_1 (ATerm z_12, ATerm a_13, ATerm t);
static ATerm i_1 (ATerm r_10, ATerm t);
static ATerm j_1 (ATerm c_11, ATerm t);
ATerm TrmFromTerm_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm TrmStr_0_0 (ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm try_1_0 (ATerm a_113 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm b_93 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
ATerm ImplodeLayout_1_0 (ATerm f_24 (ATerm), ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Option_3_0 (ATerm w_3 (ATerm), ATerm x_3 (ATerm), ATerm y_3 (ATerm), ATerm t);
ATerm io_wrap_2_0 (ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm meta_explode_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm f_1 = t;
  int k_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_0 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          h_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_0), (ATerm) ATempty);
      LocalPopChoice(k_1);
    }
  else
    {
      t = f_1;
      {
        ATerm m_1 = t;
        int n_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = TrmFromTerm_0_0(t);
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
                  ATerm m_0 = NULL,p_0 = NULL,r_0 = NULL;
                  m_0 = t;
                  if(match_cons(t, sym_FromStrategy_1))
                    {
                      p_0 = ATgetArgument(t, 0);
                      t = m_0;
                      t = i_1(p_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_FromApp_1))
                        {
                          p_0 = ATgetArgument(t, 0);
                          t = p_0;
                          t = MetaExplode_0_0(t);
                        }
                      else
                        {
                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                            {
                              t = term_w_1;
                            }
                          else
                            {
                              ATerm z_0 = NULL,a_1 = NULL;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  p_0 = ATgetFirst((ATermList) t);
                                  r_0 = (ATerm) ATgetNext((ATermList) t);
                                }
                              else
                                _fail(t);
                              t = p_0;
                              t = str_explode_0_0(t);
                              z_0 = t;
                              t = r_0;
                              t = str_explode_0_0(t);
                              a_1 = t;
                              t = (ATerm) ATmakeAppl(sym_Cong_2, term_z_1, (ATerm) ATinsert(ATinsert(ATempty, a_1), z_0));
                            }
                        }
                    }
                  LocalPopChoice(p_1);
                }
              else
                {
                  t = o_1;
                  {
                    ATerm a_2 = t;
                    int c_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 = NULL;
                        t = is_string_0_0(t);
                        b_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_1));
                        LocalPopChoice(c_2);
                      }
                    else
                      {
                        t = a_2;
                        {
                          ATerm y_1 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
                          y_1 = t;
                          t = SSL_explode_term(y_1);
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
  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,i_2 = NULL;
  i_2 = t;
  t = SSL_explode_term(i_2);
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  t = map_1_0(trm_explode_0_0, t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, d_2, g_2);
  return(t);
}
static ATerm d_1 (ATerm c_13, ATerm d_13, ATerm t)
{
  ATerm x_2 = NULL,e_3 = NULL;
  t = c_13;
  t = trm_explode_0_0(t);
  x_2 = t;
  t = d_13;
  t = trm_explode_0_0(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATinsert(ATinsert(ATempty, e_3), x_2));
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm p_3 = NULL;
  if(match_cons(t, sym_meta_listvar_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, p_3)));
  return(t);
}
static ATerm g_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = Fst_0_0(t);
  b_4 = t;
  t = i_4;
  t = Snd_0_0(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATinsert(ATinsert(ATempty, c_4), b_4));
  return(t);
}
static ATerm g_1 (ATerm f_13, ATerm e_13, ATerm t)
{
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    t = e_13;
    {
      ATerm e_2 = t;
      int h_2 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              t_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATinsert(ATinsert(ATempty, term_j_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, t_3))));
          LocalPopChoice(h_2);
        }
      else
        {
          t = e_2;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = f_13;
  t = try_1_0(a_0, t);
  t = foldr_3_0(f_0, g_0, trm_explode_0_0, t);
  return(t);
}
static ATerm h_1 (ATerm z_12, ATerm a_13, ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  ATerm k_2 = t;
  int m_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_13;
      t = is_list_0_0(t);
      LocalPopChoice(m_2);
    }
  else
    {
      t = k_2;
      t = (ATerm) ATinsert(ATempty, a_13);
    }
  j_4 = t;
  t = z_12;
  t = trm_explode_0_0(t);
  k_4 = t;
  t = j_4;
  t = MetaExplode_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, k_4, l_4);
  return(t);
}
static ATerm i_1 (ATerm r_10, ATerm t)
{
  t = r_10;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm c_11, ATerm t)
{
  ATerm r_4 = NULL;
  t = c_11;
  t = MetaExplode_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, r_4);
  return(t);
}
ATerm TrmFromTerm_0_0 (ATerm t)
{
  ATerm x_4 = NULL;
  if(match_cons(t, sym_FromMetaListExpr_1))
    {
      x_4 = ATgetArgument(t, 0);
      t = x_4;
      t = MetaExplode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FromMetaExpr_1))
        {
          x_4 = ATgetArgument(t, 0);
          t = x_4;
          t = MetaExplode_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_FromTerm_1))
            {
              x_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_4;
          t = MetaExplode_0_0(t);
        }
    }
  return(t);
}
ATerm TrmStr_0_0 (ATerm t)
{
  ATerm f_5 = NULL;
  t = is_string_0_0(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, f_5);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm n_2 = t;
  int q_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          p_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, p_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              p_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATinsert(ATinsert(ATempty, term_j_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, p_5))));
        }
      LocalPopChoice(q_2);
    }
  else
    {
      t = n_2;
      {
        ATerm r_2 = t;
        int s_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL;
            t = is_int_0_0(t);
            y_5 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, y_5);
            LocalPopChoice(s_2);
          }
        else
          {
            t = r_2;
            {
              ATerm t_2 = t;
              int u_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0_0(t);
                  LocalPopChoice(u_2);
                }
              else
                {
                  t = t_2;
                  {
                    ATerm v_2 = t;
                    int w_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromTerm_0_0(t);
                        LocalPopChoice(w_2);
                      }
                    else
                      {
                        t = v_2;
                        {
                          ATerm y_2 = t;
                          int a_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_5 = NULL,c_6 = NULL,g_6 = NULL;
                              z_5 = t;
                              if(match_cons(t, sym_FromApp_1))
                                {
                                  c_6 = ATgetArgument(t, 0);
                                  t = z_5;
                                  t = j_1(c_6, t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_FromStrategy_1))
                                    {
                                      c_6 = ATgetArgument(t, 0);
                                      t = z_5;
                                      t = i_1(c_6, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_WithAnno_2))
                                        {
                                          c_6 = ATgetArgument(t, 0);
                                          g_6 = ATgetArgument(t, 1);
                                          t = z_5;
                                          t = h_1(c_6, g_6, t);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Conc_2))
                                            {
                                              c_6 = ATgetArgument(t, 0);
                                              g_6 = ATgetArgument(t, 1);
                                              t = z_5;
                                              t = g_1(c_6, g_6, t);
                                            }
                                          else
                                            {
                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                {
                                                  t = term_j_2;
                                                }
                                              else
                                                {
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      c_6 = ATgetFirst((ATermList) t);
                                                      g_6 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_5;
                                                  t = d_1(c_6, g_6, t);
                                                }
                                            }
                                        }
                                    }
                                }
                              LocalPopChoice(a_3);
                            }
                          else
                            {
                              t = y_2;
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
  ATerm s_6 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      s_6 = ATgetArgument(t, 0);
      t = s_6;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToMetaExpr_1))
        {
          s_6 = ATgetArgument(t, 0);
          t = s_6;
          t = trm_explode_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_ToMetaListExpr_1))
            {
              s_6 = ATgetArgument(t, 0);
              t = s_6;
              t = trm_explode_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_ToBuild_1))
                {
                  s_6 = ATgetArgument(t, 0);
                  {
                    ATerm x_6 = NULL;
                    t = s_6;
                    t = trm_explode_0_0(t);
                    x_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Build_1, x_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_ToStrategy_1))
                    {
                      s_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = s_6;
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
ATerm Clean_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  if(match_cons(t, sym_Op_2))
    {
      e_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_7;
  if(match_string(t, "Wld"))
    {
      ATerm b_3 = t;
      int f_3 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 = NULL;
          t = e_7;
          t = is_int_0_0(t);
          t = e_7;
          t = int_to_string_0_0(t);
          h_7 = t;
          t = (ATerm) ATmakeAppl(sym_Int_1, h_7);
          LocalPopChoice(f_3);
        }
      else
        {
          t = b_3;
          t = term_g_3;
        }
    }
  else
    {
      ATerm j_7 = NULL;
      t = e_7;
      t = is_int_0_0(t);
      t = e_7;
      t = int_to_string_0_0(t);
      j_7 = t;
      t = (ATerm) ATmakeAppl(sym_Int_1, j_7);
    }
  return(t);
}
static ATerm k_0 (ATerm t)
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
  static ATerm r_11 (ATerm t);
  static ATerm r_11 (ATerm t)
  {
    static ATerm j_0 (ATerm t);
    static ATerm j_0 (ATerm t)
    {
      ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
      o_11 = t;
      if(match_cons(t, sym_BA_2))
        {
          p_11 = ATgetArgument(t, 0);
          q_11 = ATgetArgument(t, 1);
          {
            ATerm t_0 = NULL,c_1 = NULL,e_1 = NULL,d_0 = NULL;
            t = SSLgetAnnotations(o_11);
            t_0 = t;
            t = p_11;
            t = ImplodeLayout_1_0(_fail, t);
            c_1 = t;
            t = q_11;
            t = ImplodeLayout_1_0(_id, t);
            e_1 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, c_1, e_1);
            d_0 = t;
            t = SSLsetAnnotations(d_0, t_0);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              p_11 = ATgetArgument(t, 0);
              {
                ATerm t_1 = NULL,x_1 = NULL,l_0 = NULL;
                t = SSLgetAnnotations(o_11);
                t_1 = t;
                t = p_11;
                t = ImplodeLayout_1_0(_id, t);
                x_1 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, x_1);
                l_0 = t;
                t = SSLsetAnnotations(l_0, t_1);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  p_11 = ATgetArgument(t, 0);
                  q_11 = ATgetArgument(t, 1);
                  {
                    ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(o_11);
                    l_2 = t;
                    t = p_11;
                    t = r_11(t);
                    o_2 = t;
                    t = q_11;
                    t = ImplodeLayout_1_0(_id, t);
                    p_2 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, o_2, p_2);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, l_2);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      p_11 = ATgetArgument(t, 0);
                      q_11 = ATgetArgument(t, 1);
                      {
                        ATerm z_2 = NULL,c_3 = NULL,d_3 = NULL,l_1 = NULL;
                        t = SSLgetAnnotations(o_11);
                        z_2 = t;
                        t = p_11;
                        t = r_11(t);
                        c_3 = t;
                        t = q_11;
                        t = ImplodeLayout_1_0(_id, t);
                        d_3 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, c_3, d_3);
                        l_1 = t;
                        t = SSLsetAnnotations(l_1, z_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          p_11 = ATgetArgument(t, 0);
                          q_11 = ATgetArgument(t, 1);
                          m_11 = ATgetArgument(t, 2);
                          {
                            ATerm r_3 = NULL,a_4 = NULL,d_4 = NULL,e_4 = NULL,q_1 = NULL;
                            t = SSLgetAnnotations(o_11);
                            r_3 = t;
                            t = p_11;
                            t = r_11(t);
                            a_4 = t;
                            t = q_11;
                            t = ImplodeLayout_1_0(_id, t);
                            d_4 = t;
                            t = m_11;
                            t = r_11(t);
                            e_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, a_4, d_4, e_4);
                            q_1 = t;
                            t = SSLsetAnnotations(q_1, r_3);
                          }
                        }
                      else
                        {
                          ATerm u_4 = NULL,v_4 = NULL,b_5 = NULL,d_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,r_5 = NULL,s_5 = NULL,b_2 = NULL,v_1 = NULL,u_1 = NULL,s_1 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              p_11 = ATgetArgument(t, 0);
                              q_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_11);
                          v_4 = t;
                          t = p_11;
                          if(match_cons(t, sym_prod_3))
                            {
                              g_5 = ATgetArgument(t, 0);
                              h_5 = ATgetArgument(t, 1);
                              i_5 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(p_11);
                          d_5 = t;
                          t = h_5;
                          if(match_cons(t, sym_cf_1))
                            {
                              m_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(h_5);
                          l_5 = t;
                          t = m_5;
                          if(match_cons(t, sym_opt_1))
                            {
                              r_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(m_5);
                          o_5 = t;
                          t = r_5;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, r_5);
                          s_1 = t;
                          t = SSLsetAnnotations(s_1, o_5);
                          s_5 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, s_5);
                          u_1 = t;
                          t = SSLsetAnnotations(u_1, l_5);
                          n_5 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, g_5, n_5, i_5);
                          v_1 = t;
                          t = SSLsetAnnotations(v_1, d_5);
                          j_5 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, j_5, q_11);
                          b_2 = t;
                          t = SSLsetAnnotations(b_2, v_4);
                          b_5 = t;
                          {
                            ATerm h_3 = t;
                            int i_3 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,h_6 = NULL,q_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,k_7 = NULL,l_7 = NULL,w_7 = NULL,v_7 = NULL,u_7 = NULL,t_7 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    v_5 = ATgetArgument(t, 0);
                                    w_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_5);
                                u_5 = t;
                                t = v_5;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    d_6 = ATgetArgument(t, 0);
                                    e_6 = ATgetArgument(t, 1);
                                    f_6 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(v_5);
                                b_6 = t;
                                t = d_6;
                                t = Cons_2_0(k_0, Nil_0_0, t);
                                h_6 = t;
                                t = e_6;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    a_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(e_6);
                                y_6 = t;
                                t = a_7;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    k_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_7);
                                c_7 = t;
                                t = k_7;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, k_7);
                                t_7 = t;
                                t = SSLsetAnnotations(t_7, c_7);
                                l_7 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, l_7);
                                u_7 = t;
                                t = SSLsetAnnotations(u_7, y_6);
                                b_7 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, h_6, b_7, f_6);
                                v_7 = t;
                                t = SSLsetAnnotations(v_7, b_6);
                                q_6 = t;
                                t = w_5;
                                {
                                  static ATerm n_0 (ATerm t);
                                  static ATerm n_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((u_4 != NULL) && (u_4 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          u_4 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(n_0, t);
                                }
                                a_6 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, q_6, a_6);
                                w_7 = t;
                                t = SSLsetAnnotations(w_7, u_5);
                                LocalPopChoice(i_3);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(u_4));
                              }
                            else
                              {
                                t = h_3;
                                {
                                  static ATerm q_0 (ATerm t);
                                  static ATerm q_0 (ATerm t)
                                  {
                                    ATerm j_3 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_24(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = j_3;
                                      }
                                    t = term_g_3;
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
    t = alltd_1_0(j_0, t);
    return(t);
  }
  t = r_11(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = Option_3_0(v_0, w_0, x_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm k_3 = t;
  int l_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL;
      y_11 = t;
      t = term_m_3;
      t = get_config_0_0(t);
      t = y_11;
      LocalPopChoice(l_3);
      t = ImplodeLayout_1_0(_fail, t);
      t = MetaExplode_0_0(t);
      t = topdown_1_0(y_0, t);
    }
  else
    {
      t = k_3;
      t = MetaExplode_0_0(t);
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_n_3;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_o_3;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = try_1_0(Clean_0_0, t);
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = io_wrap_2_0(s_0, u_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
