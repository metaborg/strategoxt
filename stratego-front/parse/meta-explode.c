#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Conc_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
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
ATerm term_g_3;
ATerm term_d_3;
ATerm term_n_2;
ATerm term_e_2;
ATerm term_a_2;
ATerm term_z_1;
ATerm term_w_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_2));
  term_a_2 = (ATerm) ATmakeAppl(sym_Cong_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm h_3 (ATerm), ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm m_111 (ATerm), ATerm t);
ATerm _2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm b_1 (ATerm s_11, ATerm t_11, ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm e_1 (ATerm v_11, ATerm u_11, ATerm t);
static ATerm g_1 (ATerm f_8, ATerm t);
static ATerm h_1 (ATerm q_8, ATerm t);
static ATerm i_1 (ATerm u_7, ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm TrmStr_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm v_86 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
ATerm ImplodeLayout_1_0 (ATerm c_22 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
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
      ATerm w_0 = NULL,x_0 = NULL,a_1 = NULL;
      w_0 = t;
      if(match_cons(t, sym_meta_var_1))
        {
          x_0 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_0), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_FromTerm_1))
            {
              x_0 = ATgetArgument(t, 0);
              t = w_0;
              t = i_1(x_0, t);
            }
          else
            {
              if(match_cons(t, sym_FromStrategy_1))
                {
                  x_0 = ATgetArgument(t, 0);
                  t = w_0;
                  t = g_1(x_0, t);
                }
              else
                {
                  if(match_cons(t, sym_FromApp_1))
                    {
                      x_0 = ATgetArgument(t, 0);
                      t = x_0;
                      t = MetaExplode_0_0(t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = term_a_2;
                        }
                      else
                        {
                          ATerm c_2 = NULL,d_2 = NULL;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              x_0 = ATgetFirst((ATermList) t);
                              a_1 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = x_0;
                          t = str_explode_0_0(t);
                          c_2 = t;
                          t = a_1;
                          t = str_explode_0_0(t);
                          d_2 = t;
                          t = (ATerm) ATmakeAppl(sym_Cong_2, term_e_2, (ATerm) ATinsert(ATinsert(ATempty, d_2), c_2));
                        }
                    }
                }
            }
        }
      LocalPopChoice(y_1);
    }
  else
    {
      t = x_1;
      {
        ATerm j_2 = t;
        int k_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 = NULL;
            t = is_string_0_0(t);
            f_2 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, f_2));
            LocalPopChoice(k_2);
          }
        else
          {
            t = j_2;
            {
              ATerm s_3 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
              s_3 = t;
              t = SSL_explode_term(s_3);
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
  return(t);
}
ATerm TrmOp_0_0 (ATerm t)
{
  ATerm u_3 = NULL,x_3 = NULL,z_3 = NULL,d_4 = NULL;
  d_4 = t;
  t = SSL_explode_term(d_4);
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  t = map_1_0(trm_explode_0_0, t);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, u_3, z_3);
  return(t);
}
static ATerm b_1 (ATerm s_11, ATerm t_11, ATerm t)
{
  ATerm e_4 = NULL,k_4 = NULL;
  t = s_11;
  t = trm_explode_0_0(t);
  e_4 = t;
  t = t_11;
  t = trm_explode_0_0(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_2, (ATerm) ATinsert(ATinsert(ATempty, k_4), e_4));
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm o_4 = NULL;
  if(match_cons(t, sym_meta_listvar_1))
    {
      o_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, o_4)));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  t = Fst_0_0(t);
  y_4 = t;
  t = a_5;
  t = Snd_0_0(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_2, (ATerm) ATinsert(ATinsert(ATempty, z_4), y_4));
  return(t);
}
static ATerm e_1 (ATerm v_11, ATerm u_11, ATerm t)
{
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    t = u_11;
    {
      ATerm l_2 = t;
      int m_2 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              u_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_e_2, (ATerm) ATinsert(ATinsert(ATempty, term_n_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, u_4))));
          LocalPopChoice(m_2);
        }
      else
        {
          t = l_2;
          t = trm_explode_0_0(t);
        }
    }
    return(t);
  }
  t = v_11;
  t = try_1_0(a_0, t);
  t = foldr_3_0(f_0, h_0, trm_explode_0_0, t);
  return(t);
}
static ATerm g_1 (ATerm f_8, ATerm t)
{
  t = f_8;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm h_1 (ATerm q_8, ATerm t)
{
  ATerm h_5 = NULL;
  t = q_8;
  t = MetaExplode_0_0(t);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, h_5);
  return(t);
}
static ATerm i_1 (ATerm u_7, ATerm t)
{
  t = u_7;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm TrmStr_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  t = is_string_0_0(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, j_5);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm o_2 = t;
  int p_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          s_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, s_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              s_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_e_2, (ATerm) ATinsert(ATinsert(ATempty, term_n_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, s_5))));
        }
      LocalPopChoice(p_2);
    }
  else
    {
      t = o_2;
      {
        ATerm r_2 = t;
        int s_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = is_int_0_0(t);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, b_6);
            LocalPopChoice(s_2);
          }
        else
          {
            t = r_2;
            {
              ATerm v_2 = t;
              int w_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0_0(t);
                  LocalPopChoice(w_2);
                }
              else
                {
                  t = v_2;
                  {
                    ATerm x_2 = t;
                    int z_2 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_6 = NULL,i_6 = NULL,j_6 = NULL;
                        g_6 = t;
                        if(match_cons(t, sym_FromTerm_1))
                          {
                            i_6 = ATgetArgument(t, 0);
                            t = g_6;
                            t = i_1(i_6, t);
                          }
                        else
                          {
                            if(match_cons(t, sym_FromApp_1))
                              {
                                i_6 = ATgetArgument(t, 0);
                                t = g_6;
                                t = h_1(i_6, t);
                              }
                            else
                              {
                                if(match_cons(t, sym_FromStrategy_1))
                                  {
                                    i_6 = ATgetArgument(t, 0);
                                    t = g_6;
                                    t = g_1(i_6, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_WithAnno_2))
                                      {
                                        i_6 = ATgetArgument(t, 0);
                                        j_6 = ATgetArgument(t, 1);
                                        {
                                          ATerm s_0 = NULL,t_0 = NULL;
                                          t = i_6;
                                          t = trm_explode_0_0(t);
                                          s_0 = t;
                                          t = j_6;
                                          t = MetaExplode_0_0(t);
                                          t_0 = t;
                                          t = (ATerm) ATmakeAppl(sym_Anno_2, s_0, t_0);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Conc_2))
                                          {
                                            i_6 = ATgetArgument(t, 0);
                                            j_6 = ATgetArgument(t, 1);
                                            t = g_6;
                                            t = e_1(i_6, j_6, t);
                                          }
                                        else
                                          {
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = term_n_2;
                                              }
                                            else
                                              {
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    i_6 = ATgetFirst((ATermList) t);
                                                    j_6 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = g_6;
                                                t = b_1(i_6, j_6, t);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        LocalPopChoice(z_2);
                      }
                    else
                      {
                        t = x_2;
                        t = TrmOp_0_0(t);
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
  ATerm v_6 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      v_6 = ATgetArgument(t, 0);
      t = v_6;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          v_6 = ATgetArgument(t, 0);
          {
            ATerm y_6 = NULL;
            t = v_6;
            t = trm_explode_0_0(t);
            y_6 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, y_6);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              v_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_6;
          t = str_explode_0_0(t);
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
  ATerm b_9 = NULL,s_9 = NULL,e_10 = NULL,t_3 = NULL;
  e_10 = t;
  if(match_cons(t, sym_cf_1))
    {
      s_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_10);
  b_9 = t;
  t = s_9;
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cf_1, s_9);
  t_3 = t;
  t = SSLsetAnnotations(t_3, b_9);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm c_22 (ATerm), ATerm t)
{
  static ATerm h_11 (ATerm t);
  static ATerm h_11 (ATerm t)
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
      e_11 = t;
      if(match_cons(t, sym_BA_2))
        {
          f_11 = ATgetArgument(t, 0);
          g_11 = ATgetArgument(t, 1);
          {
            ATerm j_1 = NULL,n_1 = NULL,o_1 = NULL,d_0 = NULL;
            t = SSLgetAnnotations(e_11);
            j_1 = t;
            t = f_11;
            t = ImplodeLayout_1_0(_fail, t);
            n_1 = t;
            t = g_11;
            t = ImplodeLayout_1_0(_id, t);
            o_1 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, n_1, o_1);
            d_0 = t;
            t = SSLsetAnnotations(d_0, j_1);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              f_11 = ATgetArgument(t, 0);
              {
                ATerm b_2 = NULL,h_2 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(e_11);
                b_2 = t;
                t = f_11;
                t = ImplodeLayout_1_0(_id, t);
                h_2 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, h_2);
                g_0 = t;
                t = SSLsetAnnotations(g_0, b_2);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  f_11 = ATgetArgument(t, 0);
                  g_11 = ATgetArgument(t, 1);
                  {
                    ATerm q_2 = NULL,t_2 = NULL,u_2 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(e_11);
                    q_2 = t;
                    t = f_11;
                    t = h_11(t);
                    t_2 = t;
                    t = g_11;
                    t = ImplodeLayout_1_0(_id, t);
                    u_2 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, t_2, u_2);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, q_2);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      f_11 = ATgetArgument(t, 0);
                      g_11 = ATgetArgument(t, 1);
                      {
                        ATerm e_3 = NULL,l_3 = NULL,m_3 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(e_11);
                        e_3 = t;
                        t = f_11;
                        t = h_11(t);
                        l_3 = t;
                        t = g_11;
                        t = ImplodeLayout_1_0(_id, t);
                        m_3 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, l_3, m_3);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, e_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          f_11 = ATgetArgument(t, 0);
                          g_11 = ATgetArgument(t, 1);
                          d_11 = ATgetArgument(t, 2);
                          {
                            ATerm c_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,g_2 = NULL;
                            t = SSLgetAnnotations(e_11);
                            c_4 = t;
                            t = f_11;
                            t = h_11(t);
                            i_4 = t;
                            t = g_11;
                            t = ImplodeLayout_1_0(_id, t);
                            j_4 = t;
                            t = d_11;
                            t = h_11(t);
                            l_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, i_4, j_4, l_4);
                            g_2 = t;
                            t = SSLsetAnnotations(g_2, c_4);
                          }
                        }
                      else
                        {
                          ATerm e_5 = NULL,i_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,c_6 = NULL,r_3 = NULL,f_3 = NULL,y_2 = NULL,i_2 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              f_11 = ATgetArgument(t, 0);
                              g_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(e_11);
                          i_5 = t;
                          t = f_11;
                          if(match_cons(t, sym_prod_3))
                            {
                              o_5 = ATgetArgument(t, 0);
                              p_5 = ATgetArgument(t, 1);
                              q_5 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_11);
                          n_5 = t;
                          t = p_5;
                          if(match_cons(t, sym_cf_1))
                            {
                              v_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(p_5);
                          u_5 = t;
                          t = v_5;
                          if(match_cons(t, sym_opt_1))
                            {
                              y_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(v_5);
                          x_5 = t;
                          t = y_5;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, y_5);
                          i_2 = t;
                          t = SSLsetAnnotations(i_2, x_5);
                          c_6 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, c_6);
                          y_2 = t;
                          t = SSLsetAnnotations(y_2, u_5);
                          w_5 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, o_5, w_5, q_5);
                          f_3 = t;
                          t = SSLsetAnnotations(f_3, n_5);
                          t_5 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, t_5, g_11);
                          r_3 = t;
                          t = SSLsetAnnotations(r_3, i_5);
                          m_5 = t;
                          {
                            ATerm a_3 = t;
                            int b_3 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_6 = NULL,f_6 = NULL,h_6 = NULL,t_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,g_5 = NULL,f_5 = NULL,d_5 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    f_6 = ATgetArgument(t, 0);
                                    h_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(m_5);
                                e_6 = t;
                                t = f_6;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    b_7 = ATgetArgument(t, 0);
                                    c_7 = ATgetArgument(t, 1);
                                    d_7 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(f_6);
                                a_7 = t;
                                t = b_7;
                                t = Cons_2_0(m_0, Nil_0_0, t);
                                e_7 = t;
                                t = c_7;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    h_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(c_7);
                                g_7 = t;
                                t = h_7;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    k_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(h_7);
                                j_7 = t;
                                t = k_7;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, k_7);
                                d_5 = t;
                                t = SSLsetAnnotations(d_5, j_7);
                                l_7 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, l_7);
                                f_5 = t;
                                t = SSLsetAnnotations(f_5, g_7);
                                i_7 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, e_7, i_7, d_7);
                                g_5 = t;
                                t = SSLsetAnnotations(g_5, a_7);
                                f_7 = t;
                                t = h_6;
                                {
                                  static ATerm n_0 (ATerm t);
                                  static ATerm n_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((e_5 != NULL) && (e_5 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          e_5 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(n_0, t);
                                }
                                t_6 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, f_7, t_6);
                                m_7 = t;
                                t = SSLsetAnnotations(m_7, e_6);
                                LocalPopChoice(b_3);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(e_5));
                              }
                            else
                              {
                                t = a_3;
                                {
                                  static ATerm q_0 (ATerm t);
                                  static ATerm q_0 (ATerm t)
                                  {
                                    ATerm c_3 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = c_22(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = c_3;
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
  t = h_11(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = try_1_0(y_0, t);
  t = _2_0(_id, MetaExplode_0_0, t);
  t = try_1_0(k_1, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = Option_3_0(r_1, s_1, t_1, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = _2_0(z_0, c_1, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = option_defined_1_0(d_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = ImplodeLayout_1_0(_fail, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = _2_0(l_1, m_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = option_defined_1_0(p_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = topdown_1_0(q_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = try_1_0(Clean_0_0, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_d_3;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_g_3;
  return(t);
}
ATerm meta_explode_0_0 (ATerm t)
{
  t = iowrap_2_0(u_0, v_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = meta_explode_0_0(t);
  return(t);
}
