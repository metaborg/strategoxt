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
ATerm term_m_3;
ATerm term_l_3;
ATerm term_p_2;
ATerm term_c_2;
ATerm term_b_2;
ATerm term_z_1;
ATerm term_w_1;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_1));
  term_w_1 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_z_1));
  term_z_1 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_2));
  term_b_2 = (ATerm) ATmakeAppl(sym_Cong_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_c_2));
  term_c_2 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(sym_Op_2, term_z_1, (ATerm) ATempty);
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeAppl(sym_AsFix_0);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix          treat concrete syntax parts as AsFix trees", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm Option_3_0 (ATerm i_3 (ATerm), ATerm j_3 (ATerm), ATerm k_3 (ATerm), ATerm t);
ATerm int_to_string_0_0 (ATerm t);
ATerm Clean_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_106 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm n_87 (ATerm), ATerm t);
ATerm option_defined_1_0 (ATerm c_114 (ATerm), ATerm t);
ATerm _2_0 (ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm t);
ATerm str_explode_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_92 (ATerm), ATerm t);
ATerm TrmOp_0_0 (ATerm t);
static ATerm c_1 (ATerm z_11, ATerm a_12, ATerm t);
ATerm Snd_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm f_1 (ATerm c_12, ATerm b_12, ATerm t);
ATerm is_list_0_0 (ATerm t);
static ATerm g_1 (ATerm w_11, ATerm x_11, ATerm t);
static ATerm h_1 (ATerm i_8, ATerm t);
static ATerm i_1 (ATerm t_8, ATerm t);
static ATerm j_1 (ATerm x_7, ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm TrmStr_0_0 (ATerm t);
ATerm is_int_0_0 (ATerm t);
ATerm trm_explode_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm MetaExplode_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm r_88 (ATerm), ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t);
ATerm alltd_1_0 (ATerm f_89 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
ATerm ImplodeLayout_1_0 (ATerm m_22 (ATerm), ATerm t);
ATerm iowrap_2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
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
      ATerm t_1 = t;
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
          t = t_1;
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
      ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
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
              t = j_1(x_0, t);
            }
          else
            {
              if(match_cons(t, sym_FromStrategy_1))
                {
                  x_0 = ATgetArgument(t, 0);
                  t = w_0;
                  t = h_1(x_0, t);
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
                          t = term_b_2;
                        }
                      else
                        {
                          ATerm a_2 = NULL,d_2 = NULL;
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              x_0 = ATgetFirst((ATermList) t);
                              y_0 = (ATerm) ATgetNext((ATermList) t);
                            }
                          else
                            _fail(t);
                          t = x_0;
                          t = str_explode_0_0(t);
                          a_2 = t;
                          t = y_0;
                          t = str_explode_0_0(t);
                          d_2 = t;
                          t = (ATerm) ATmakeAppl(sym_Cong_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, d_2), a_2));
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
        ATerm f_2 = t;
        int i_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 = NULL;
            t = is_string_0_0(t);
            e_2 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, e_2));
            LocalPopChoice(i_2);
          }
        else
          {
            t = f_2;
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
  ATerm u_3 = NULL,v_3 = NULL,y_3 = NULL,z_3 = NULL;
  z_3 = t;
  t = SSL_explode_term(z_3);
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  t = map_1_0(trm_explode_0_0, t);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, u_3, y_3);
  return(t);
}
static ATerm c_1 (ATerm z_11, ATerm a_12, ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  t = z_11;
  t = trm_explode_0_0(t);
  e_4 = t;
  t = a_12;
  t = trm_explode_0_0(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, f_4), e_4));
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_4 = NULL;
  if(match_cons(t, sym_meta_listvar_1))
    {
      n_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, n_4)));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm w_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  t = Fst_0_0(t);
  w_4 = t;
  t = a_5;
  t = Snd_0_0(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, z_4), w_4));
  return(t);
}
static ATerm f_1 (ATerm c_12, ATerm b_12, ATerm t)
{
  static ATerm f_0 (ATerm t);
  static ATerm f_0 (ATerm t)
  {
    t = b_12;
    {
      ATerm l_2 = t;
      int m_2 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 = NULL;
          if(match_cons(t, sym_meta_listvar_1))
            {
              q_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, term_p_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, q_4))));
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
  t = c_12;
  t = try_1_0(a_0, t);
  t = foldr_3_0(f_0, h_0, trm_explode_0_0, t);
  return(t);
}
static ATerm g_1 (ATerm w_11, ATerm x_11, ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL,g_5 = NULL;
  ATerm q_2 = t;
  int r_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_11;
      t = is_list_0_0(t);
      LocalPopChoice(r_2);
    }
  else
    {
      t = q_2;
      t = (ATerm) ATinsert(ATempty, x_11);
    }
  b_5 = t;
  t = w_11;
  t = trm_explode_0_0(t);
  e_5 = t;
  t = b_5;
  t = MetaExplode_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, e_5, g_5);
  return(t);
}
static ATerm h_1 (ATerm i_8, ATerm t)
{
  t = i_8;
  t = MetaExplode_0_0(t);
  return(t);
}
static ATerm i_1 (ATerm t_8, ATerm t)
{
  ATerm i_5 = NULL;
  t = t_8;
  t = MetaExplode_0_0(t);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, i_5);
  return(t);
}
static ATerm j_1 (ATerm x_7, ATerm t)
{
  t = x_7;
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
  ATerm s_2 = t;
  int t_2 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          t_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, t_5);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              t_5 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_c_2, (ATerm) ATinsert(ATinsert(ATempty, term_p_2), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, t_5))));
        }
      LocalPopChoice(t_2);
    }
  else
    {
      t = s_2;
      {
        ATerm u_2 = t;
        int v_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_6 = NULL;
            t = is_int_0_0(t);
            c_6 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, c_6);
            LocalPopChoice(v_2);
          }
        else
          {
            t = u_2;
            {
              ATerm w_2 = t;
              int y_2 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmStr_0_0(t);
                  LocalPopChoice(y_2);
                }
              else
                {
                  t = w_2;
                  {
                    ATerm a_3 = t;
                    int d_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_6 = NULL,j_6 = NULL,k_6 = NULL;
                        h_6 = t;
                        if(match_cons(t, sym_FromTerm_1))
                          {
                            j_6 = ATgetArgument(t, 0);
                            t = h_6;
                            t = j_1(j_6, t);
                          }
                        else
                          {
                            if(match_cons(t, sym_FromApp_1))
                              {
                                j_6 = ATgetArgument(t, 0);
                                t = h_6;
                                t = i_1(j_6, t);
                              }
                            else
                              {
                                if(match_cons(t, sym_FromStrategy_1))
                                  {
                                    j_6 = ATgetArgument(t, 0);
                                    t = h_6;
                                    t = h_1(j_6, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_WithAnno_2))
                                      {
                                        j_6 = ATgetArgument(t, 0);
                                        k_6 = ATgetArgument(t, 1);
                                        t = h_6;
                                        t = g_1(j_6, k_6, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Conc_2))
                                          {
                                            j_6 = ATgetArgument(t, 0);
                                            k_6 = ATgetArgument(t, 1);
                                            t = h_6;
                                            t = f_1(j_6, k_6, t);
                                          }
                                        else
                                          {
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                t = term_p_2;
                                              }
                                            else
                                              {
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    j_6 = ATgetFirst((ATermList) t);
                                                    k_6 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = h_6;
                                                t = c_1(j_6, k_6, t);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        LocalPopChoice(d_3);
                      }
                    else
                      {
                        t = a_3;
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
  ATerm w_6 = NULL;
  if(match_cons(t, sym_ToTerm_1))
    {
      w_6 = ATgetArgument(t, 0);
      t = w_6;
      t = trm_explode_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_ToBuild_1))
        {
          w_6 = ATgetArgument(t, 0);
          {
            ATerm z_6 = NULL;
            t = w_6;
            t = trm_explode_0_0(t);
            z_6 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, z_6);
          }
        }
      else
        {
          if(match_cons(t, sym_ToStrategy_1))
            {
              w_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_6;
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
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,m_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym_cf_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_7);
  g_7 = t;
  t = h_7;
  if(!(match_cons(t, sym_layout_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_cf_1, h_7);
  m_7 = t;
  t = SSLsetAnnotations(m_7, g_7);
  return(t);
}
ATerm ImplodeLayout_1_0 (ATerm m_22 (ATerm), ATerm t)
{
  static ATerm i_11 (ATerm t);
  static ATerm i_11 (ATerm t)
  {
    static ATerm k_0 (ATerm t);
    static ATerm k_0 (ATerm t)
    {
      ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
      f_11 = t;
      if(match_cons(t, sym_BA_2))
        {
          g_11 = ATgetArgument(t, 0);
          h_11 = ATgetArgument(t, 1);
          {
            ATerm t_0 = NULL,z_0 = NULL,a_1 = NULL,d_0 = NULL;
            t = SSLgetAnnotations(f_11);
            t_0 = t;
            t = g_11;
            t = ImplodeLayout_1_0(_fail, t);
            z_0 = t;
            t = h_11;
            t = ImplodeLayout_1_0(_id, t);
            a_1 = t;
            t = (ATerm) ATmakeAppl(sym_BA_2, z_0, a_1);
            d_0 = t;
            t = SSLsetAnnotations(d_0, t_0);
          }
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              g_11 = ATgetArgument(t, 0);
              {
                ATerm q_1 = NULL,u_1 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(f_11);
                q_1 = t;
                t = g_11;
                t = ImplodeLayout_1_0(_id, t);
                u_1 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, u_1);
                g_0 = t;
                t = SSLsetAnnotations(g_0, q_1);
              }
            }
          else
            {
              if(match_cons(t, sym_AM_2))
                {
                  g_11 = ATgetArgument(t, 0);
                  h_11 = ATgetArgument(t, 1);
                  {
                    ATerm j_2 = NULL,n_2 = NULL,o_2 = NULL,o_0 = NULL;
                    t = SSLgetAnnotations(f_11);
                    j_2 = t;
                    t = g_11;
                    t = i_11(t);
                    n_2 = t;
                    t = h_11;
                    t = ImplodeLayout_1_0(_id, t);
                    o_2 = t;
                    t = (ATerm) ATmakeAppl(sym_AM_2, n_2, o_2);
                    o_0 = t;
                    t = SSLsetAnnotations(o_0, j_2);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RuleNoCond_2))
                    {
                      g_11 = ATgetArgument(t, 0);
                      h_11 = ATgetArgument(t, 1);
                      {
                        ATerm x_2 = NULL,b_3 = NULL,c_3 = NULL,g_2 = NULL;
                        t = SSLgetAnnotations(f_11);
                        x_2 = t;
                        t = g_11;
                        t = i_11(t);
                        b_3 = t;
                        t = h_11;
                        t = ImplodeLayout_1_0(_id, t);
                        c_3 = t;
                        t = (ATerm) ATmakeAppl(sym_RuleNoCond_2, b_3, c_3);
                        g_2 = t;
                        t = SSLsetAnnotations(g_2, x_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Rule_3))
                        {
                          g_11 = ATgetArgument(t, 0);
                          h_11 = ATgetArgument(t, 1);
                          e_11 = ATgetArgument(t, 2);
                          {
                            ATerm q_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,h_2 = NULL;
                            t = SSLgetAnnotations(f_11);
                            q_3 = t;
                            t = g_11;
                            t = i_11(t);
                            a_4 = t;
                            t = h_11;
                            t = ImplodeLayout_1_0(_id, t);
                            b_4 = t;
                            t = e_11;
                            t = i_11(t);
                            c_4 = t;
                            t = (ATerm) ATmakeAppl(sym_Rule_3, a_4, b_4, c_4);
                            h_2 = t;
                            t = SSLsetAnnotations(h_2, q_3);
                          }
                        }
                      else
                        {
                          ATerm s_4 = NULL,t_4 = NULL,y_4 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,t_3 = NULL,g_3 = NULL,z_2 = NULL,k_2 = NULL;
                          if(match_cons(t, sym_appl_2))
                            {
                              g_11 = ATgetArgument(t, 0);
                              h_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_11);
                          t_4 = t;
                          t = g_11;
                          if(match_cons(t, sym_prod_3))
                            {
                              d_5 = ATgetArgument(t, 0);
                              f_5 = ATgetArgument(t, 1);
                              k_5 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_11);
                          c_5 = t;
                          t = f_5;
                          if(match_cons(t, sym_cf_1))
                            {
                              n_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_5);
                          m_5 = t;
                          t = n_5;
                          if(match_cons(t, sym_opt_1))
                            {
                              q_5 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_5);
                          p_5 = t;
                          t = q_5;
                          if(!(match_cons(t, sym_layout_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_opt_1, q_5);
                          k_2 = t;
                          t = SSLsetAnnotations(k_2, p_5);
                          r_5 = t;
                          t = (ATerm) ATmakeAppl(sym_cf_1, r_5);
                          z_2 = t;
                          t = SSLsetAnnotations(z_2, m_5);
                          o_5 = t;
                          t = (ATerm) ATmakeAppl(sym_prod_3, d_5, o_5, k_5);
                          g_3 = t;
                          t = SSLsetAnnotations(g_3, c_5);
                          l_5 = t;
                          t = (ATerm) ATmakeAppl(sym_appl_2, l_5, h_11);
                          t_3 = t;
                          t = SSLsetAnnotations(t_3, t_4);
                          y_4 = t;
                          {
                            ATerm e_3 = t;
                            int f_3 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL,u_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,q_7 = NULL,p_7 = NULL,o_7 = NULL,n_7 = NULL;
                                if(match_cons(t, sym_appl_2))
                                  {
                                    w_5 = ATgetArgument(t, 0);
                                    x_5 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(y_4);
                                v_5 = t;
                                t = w_5;
                                if(match_cons(t, sym_prod_3))
                                  {
                                    d_6 = ATgetArgument(t, 0);
                                    e_6 = ATgetArgument(t, 1);
                                    f_6 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(w_5);
                                z_5 = t;
                                t = d_6;
                                t = Cons_2_0(m_0, Nil_0_0, t);
                                g_6 = t;
                                t = e_6;
                                if(match_cons(t, sym_cf_1))
                                  {
                                    b_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(e_6);
                                u_6 = t;
                                t = b_7;
                                if(match_cons(t, sym_opt_1))
                                  {
                                    e_7 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(b_7);
                                d_7 = t;
                                t = e_7;
                                if(!(match_cons(t, sym_layout_0)))
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_opt_1, e_7);
                                n_7 = t;
                                t = SSLsetAnnotations(n_7, d_7);
                                f_7 = t;
                                t = (ATerm) ATmakeAppl(sym_cf_1, f_7);
                                o_7 = t;
                                t = SSLsetAnnotations(o_7, u_6);
                                c_7 = t;
                                t = (ATerm) ATmakeAppl(sym_prod_3, g_6, c_7, f_6);
                                p_7 = t;
                                t = SSLsetAnnotations(p_7, z_5);
                                i_6 = t;
                                t = x_5;
                                {
                                  static ATerm n_0 (ATerm t);
                                  static ATerm n_0 (ATerm t)
                                  {
                                    if(match_cons(t, sym_meta_var_1))
                                      {
                                        if(((s_4 != NULL) && (s_4 != ATgetArgument(t, 0))))
                                          _fail(ATgetArgument(t, 0));
                                        else
                                          s_4 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    return(t);
                                  }
                                  t = oncetd_1_0(n_0, t);
                                }
                                y_5 = t;
                                t = (ATerm) ATmakeAppl(sym_appl_2, i_6, y_5);
                                q_7 = t;
                                t = SSLsetAnnotations(q_7, v_5);
                                LocalPopChoice(f_3);
                                t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(s_4));
                              }
                            else
                              {
                                t = e_3;
                                {
                                  static ATerm q_0 (ATerm t);
                                  static ATerm q_0 (ATerm t)
                                  {
                                    ATerm h_3 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = m_22(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = h_3;
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
  t = i_11(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = try_1_0(v_0, t);
  t = _2_0(_id, MetaExplode_0_0, t);
  t = try_1_0(k_1, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = Option_3_0(p_1, r_1, s_1, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = _2_0(b_1, d_1, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = option_defined_1_0(e_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = ImplodeLayout_1_0(_fail, t);
  return(t);
}
static ATerm e_1 (ATerm t)
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
  t = option_defined_1_0(n_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = topdown_1_0(o_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_AsFix_0)))
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = try_1_0(Clean_0_0, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_l_3;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_m_3;
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
