#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Hashtable_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_c_45;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_i_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_w_43;
ATerm term_m_43;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_i_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_t_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_x_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_n_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_u_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_m_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_s_34;
ATerm term_v_31;
ATerm term_t_31;
ATerm term_x_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_p_23;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_g_29, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_o_37);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_o_37, term_p_29);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_29);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_b_17);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_l_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_f_40);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_n_38, term_p_38);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_g_41, term_b_17);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_b_17);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_b_17);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__3, term_n_38, term_p_38, (ATerm) ATempty);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_g_41);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym__2, term_i_44, term_b_17);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm spaste_1_0 (ATerm b_110 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm m_8 (ATerm s_32, ATerm r_32, ATerm t);
ATerm SVar_1_0 (ATerm v_91 (ATerm), ATerm t);
static ATerm n_8 (ATerm v_130 (ATerm), ATerm w_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_59, ATerm k_59, ATerm j_59, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm o_8 (ATerm p_130 (ATerm), ATerm q_130 (ATerm (ATerm), ATerm), ATerm d_59, ATerm g_59, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm d_131 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm k_130 (ATerm (ATerm), ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_130 (ATerm (ATerm), ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm tpaste_1_0 (ATerm x_109 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm k_88 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm s_9 (ATerm x_82, ATerm w_82, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm t_8 (ATerm s_125 (ATerm), ATerm a_56, ATerm z_55, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm y_8 (ATerm u_125 (ATerm), ATerm c_56, ATerm b_56, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm a_9 (ATerm i_712, ATerm n_712, ATerm t_71, ATerm t);
ATerm while_not_2_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm e_92 (ATerm p_90, ATerm q_90, ATerm r_90, ATerm t);
static ATerm k_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm free_vars_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_9 (ATerm t_86, ATerm s_86, ATerm t);
static ATerm d_9 (ATerm q_122 (ATerm), ATerm p_48, ATerm n_48, ATerm t);
static ATerm d_8 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm f_9 (ATerm o_142 (ATerm), ATerm g_85, ATerm d_85, ATerm e_85, ATerm f_85, ATerm t);
static ATerm g_9 (ATerm z_84, ATerm a_85, ATerm b_85, ATerm t);
ATerm filter_1_0 (ATerm y_129 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm p_124 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm z_104 (ATerm g_103, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm k_9 (ATerm m_86, ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_9 (ATerm c_86, ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_9 (ATerm a_86, ATerm t);
ATerm repeat_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t);
static ATerm q_9 (ATerm y_49, ATerm z_49, ATerm t);
ATerm end_scope_1_0 (ATerm n_122 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_122 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm w_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_111 (ATerm p_111, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm x_10 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm i_56, ATerm h_56, ATerm t);
static ATerm y_10 (ATerm z_125 (ATerm), ATerm e_56, ATerm d_56, ATerm t);
ATerm foldr_3_0 (ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
ATerm collect_om_2_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm CollectSplit_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm nzip0_1_0 (ATerm u_115 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm x_110 (ATerm), ATerm t);
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t);
static ATerm j_11 (ATerm l_40, ATerm m_40, ATerm t);
static ATerm k_11 (ATerm d_39, ATerm e_39, ATerm t);
static ATerm m_11 (ATerm h_118 (ATerm), ATerm h_275, ATerm j_39, ATerm t);
static ATerm l_11 (ATerm z_38, ATerm a_39, ATerm t);
static ATerm r_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm u_137 (ATerm), ATerm t);
static ATerm h_131 (ATerm z_130, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm f_39, ATerm t);
static ATerm o_11 (ATerm h_65, ATerm i_65, ATerm t);
static ATerm p_11 (ATerm n_40, ATerm o_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_132 (ATerm r_131, ATerm t);
static ATerm x_132 (ATerm v_131, ATerm w_131, ATerm x_131, ATerm t);
static ATerm y_132 (ATerm f_132, ATerm g_132, ATerm h_132, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_123 (ATerm), ATerm t);
static ATerm v_11 (ATerm m_51, ATerm n_51, ATerm t);
ATerm if_verbose2_1_0 (ATerm y_119 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_11 (ATerm j_44, ATerm k_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm t_49, ATerm u_49, ATerm s_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm b_47, ATerm c_47, ATerm t);
ATerm foldr_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_119 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm need_help_1_0 (ATerm s_138 (ATerm), ATerm t);
static ATerm z_11 (ATerm a_53, ATerm b_53, ATerm c_53, ATerm t);
static ATerm a_12 (ATerm d_53, ATerm e_53, ATerm t);
ATerm lookup_table_0_1 (ATerm f_51, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_53, ATerm j_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm f_53, ATerm g_53, ATerm t);
static ATerm u_11 (ATerm k_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_140 (ATerm), ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm parse_options_1_0 (ATerm u_140 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm q_16 (ATerm t);
ATerm iowrap_3_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_0 = NULL,m_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL;
  j_0 = t;
  t = term_b_17;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_e_17;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_17), m_0), term_f_17);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_m_17;
  q_0 = t;
  t = SSL_exit(q_0);
  t = j_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if(((ATgetType(n_17) != AT_LIST) || !(ATisEmpty(n_17))))
        _fail(t);
      {
        ATerm o_17 = ATgetArgument(t, 1);
        if(((ATgetType(o_17) != AT_LIST) || !(ATisEmpty(o_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
        {
          a_1 = ATgetFirst((ATermList) p_17);
          b_1 = (ATerm) ATgetNext((ATermList) p_17);
        }
      else
        _fail(t);
      {
        ATerm r_17 = ATgetArgument(t, 1);
        if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
          {
            c_1 = ATgetFirst((ATermList) r_17);
            d_1 = (ATerm) ATgetNext((ATermList) r_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_1, c_1), (ATerm) ATmakeAppl(sym__2, b_1, d_1));
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_1), e_1);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      h_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_1;
  {
    ATerm s_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(y_17);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = s_17;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
            l_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_1, j_1, k_1, l_1);
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
        _fail(t);
      {
        ATerm e_18 = ATgetArgument(t, 1);
        if(((ATgetType(e_18) != AT_LIST) || !(ATisEmpty(e_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
        {
          v_4 = ATgetFirst((ATermList) f_18);
          w_4 = (ATerm) ATgetNext((ATermList) f_18);
        }
      else
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
          {
            x_4 = ATgetFirst((ATermList) g_18);
            z_4 = (ATerm) ATgetNext((ATermList) g_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_4, x_4), (ATerm) ATmakeAppl(sym__2, w_4, z_4));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_5), a_5);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm e_5 = NULL,g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5;
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_5);
      }
    else
      {
        t = i_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            g_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_5, g_5);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_18 = ATgetArgument(t, 0);
      if(((ATgetType(n_18) != AT_LIST) || !(ATisEmpty(n_18))))
        _fail(t);
      {
        ATerm p_18 = ATgetArgument(t, 1);
        if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm w_6 = NULL,d_7 = NULL,h_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
        {
          w_6 = ATgetFirst((ATermList) q_18);
          d_7 = (ATerm) ATgetNext((ATermList) q_18);
        }
      else
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
          {
            h_7 = ATgetFirst((ATermList) r_18);
            k_7 = (ATerm) ATgetNext((ATermList) r_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_6, h_7), (ATerm) ATmakeAppl(sym__2, d_7, k_7));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_7), l_7);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm s_7 = NULL,v_7 = NULL,y_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_7);
      }
    else
      {
        t = s_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_7, v_7);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if(((ATgetType(w_18) != AT_LIST) || !(ATisEmpty(w_18))))
        _fail(t);
      {
        ATerm x_18 = ATgetArgument(t, 1);
        if(((ATgetType(x_18) != AT_LIST) || !(ATisEmpty(x_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
        {
          y_9 = ATgetFirst((ATermList) y_18);
          z_9 = (ATerm) ATgetNext((ATermList) y_18);
        }
      else
        _fail(t);
      {
        ATerm z_18 = ATgetArgument(t, 1);
        if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
          {
            a_10 = ATgetFirst((ATermList) z_18);
            b_10 = (ATerm) ATgetNext((ATermList) z_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_9, a_10), (ATerm) ATmakeAppl(sym__2, z_9, b_10));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_10), c_10);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm f_10 = NULL,i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_10);
      }
    else
      {
        t = a_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            i_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_10, i_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,i_9 = NULL,w_9 = NULL,h_10 = NULL;
  i_9 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_9 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      {
        ATerm u_0 = NULL,x_0 = NULL,y_0 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(i_9);
        u_0 = t;
        t = w_9;
        t = b_110(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_9, y_0);
        t = genzip_4_0(a_0, b_0, f_0, v_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, h_10);
        s_1 = t;
        t = SSLsetAnnotations(s_1, u_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_9 = ATgetArgument(t, 0);
          h_10 = ATgetArgument(t, 1);
          u_8 = ATgetArgument(t, 2);
          {
            ATerm d_4 = NULL,r_4 = NULL,s_4 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(i_9);
            d_4 = t;
            t = h_10;
            t = b_110(t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_10, s_4);
            t = genzip_4_0(w_0, z_0, g_1, i_1, t);
            r_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_9, r_4, u_8);
            t_1 = t;
            t = SSLsetAnnotations(t_1, d_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_9 = ATgetArgument(t, 0);
              h_10 = ATgetArgument(t, 1);
              u_8 = ATgetArgument(t, 2);
              v_8 = ATgetArgument(t, 3);
              {
                ATerm h_6 = NULL,t_6 = NULL,u_6 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(i_9);
                h_6 = t;
                t = h_10;
                t = b_110(t);
                u_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_10, u_6);
                t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                t_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_9, t_6, u_8, v_8);
                u_1 = t;
                t = SSLsetAnnotations(u_1, h_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  w_9 = ATgetArgument(t, 0);
                  h_10 = ATgetArgument(t, 1);
                  u_8 = ATgetArgument(t, 2);
                  v_8 = ATgetArgument(t, 3);
                  {
                    ATerm l_9 = NULL,u_9 = NULL,v_9 = NULL,w_1 = NULL;
                    t = SSLgetAnnotations(i_9);
                    l_9 = t;
                    t = h_10;
                    t = b_110(t);
                    v_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_10, v_9);
                    t = genzip_4_0(r_1, v_1, y_1, z_1, t);
                    u_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_9, u_9, u_8, v_8);
                    w_1 = t;
                    t = SSLsetAnnotations(w_1, l_9);
                  }
                }
              else
                {
                  ATerm c_11 = NULL,h_11 = NULL,x_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      w_9 = ATgetArgument(t, 0);
                      h_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_9);
                  c_11 = t;
                  t = w_9;
                  t = b_110(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm f_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, h_11, h_10);
                  x_1 = t;
                  t = SSLsetAnnotations(x_1, c_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      {
        ATerm h_12 = NULL,q_12 = NULL,s_12 = NULL,e_2 = NULL;
        t = SSLgetAnnotations(h_15);
        h_12 = t;
        t = i_15;
        t = c_110(t);
        q_12 = t;
        t = j_15;
        t = c_110(t);
        s_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_12, s_12);
        e_2 = t;
        t = SSLsetAnnotations(e_2, h_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          f_15 = ATgetArgument(t, 2);
          {
            ATerm b_13 = NULL,n_13 = NULL,s_13 = NULL,t_13 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(h_15);
            b_13 = t;
            t = i_15;
            t = e_110(t);
            n_13 = t;
            t = j_15;
            t = e_110(t);
            s_13 = t;
            t = f_15;
            t = c_110(t);
            t_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_13, s_13, t_13);
            h_2 = t;
            t = SSLsetAnnotations(h_2, b_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_15 = ATgetArgument(t, 0);
              j_15 = ATgetArgument(t, 1);
              f_15 = ATgetArgument(t, 2);
              g_15 = ATgetArgument(t, 3);
              {
                ATerm x_14 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(h_15);
                x_14 = t;
                t = i_15;
                t = e_110(t);
                k_15 = t;
                t = j_15;
                t = e_110(t);
                l_15 = t;
                t = f_15;
                t = e_110(t);
                m_15 = t;
                t = g_15;
                t = c_110(t);
                n_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, k_15, l_15, m_15, n_15);
                i_2 = t;
                t = SSLsetAnnotations(i_2, x_14);
              }
            }
          else
            {
              ATerm p_16 = NULL,s_16 = NULL,t_16 = NULL,j_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  i_15 = ATgetArgument(t, 0);
                  j_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_15);
              p_16 = t;
              t = i_15;
              t = e_110(t);
              s_16 = t;
              t = j_15;
              t = c_110(t);
              t_16 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, s_16, t_16);
              j_2 = t;
              t = SSLsetAnnotations(j_2, p_16);
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_15 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_15 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
          {
            ATerm k_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = u_15;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_SDefT_4))
        {
          u_15 = ATgetArgument(t, 0);
          {
            ATerm l_19 = ATgetArgument(t, 1);
          }
          {
            ATerm m_19 = ATgetArgument(t, 2);
          }
          {
            ATerm q_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_15;
    }
  return(t);
}
static ATerm m_8 (ATerm s_32, ATerm r_32, ATerm t)
{
  t = s_32;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,e_16 = NULL,h_16 = NULL,i_16 = NULL,r_2 = NULL;
  i_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  c_16 = t;
  t = e_16;
  t = v_91(t);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, h_16);
  r_2 = t;
  t = SSLsetAnnotations(r_2, c_16);
  return(t);
}
static ATerm n_8 (ATerm v_130 (ATerm), ATerm w_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_59, ATerm k_59, ATerm j_59, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm l_16 = NULL;
    l_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_16, j_59);
    t = v_130(t);
    return(t);
  }
  static ATerm c_2 (ATerm t)
  {
    ATerm n_16 = NULL;
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_16, k_59);
    t = v_130(t);
    return(t);
  }
  t = l_59;
  t = w_130(b_2, c_2, _id, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(((ATgetType(r_19) != AT_LIST) || !(ATisEmpty(r_19))))
        _fail(t);
      {
        ATerm t_19 = ATgetArgument(t, 1);
        if(((ATgetType(t_19) != AT_LIST) || !(ATisEmpty(t_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm d_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
        {
          d_17 = ATgetFirst((ATermList) u_19);
          g_17 = (ATerm) ATgetNext((ATermList) u_19);
        }
      else
        _fail(t);
      {
        ATerm v_19 = ATgetArgument(t, 1);
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            h_17 = ATgetFirst((ATermList) v_19);
            i_17 = (ATerm) ATgetNext((ATermList) v_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_17, h_17), (ATerm) ATmakeAppl(sym__2, g_17, i_17));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_17), j_17);
  return(t);
}
static ATerm o_8 (ATerm p_130 (ATerm), ATerm q_130 (ATerm (ATerm), ATerm), ATerm d_59, ATerm g_59, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL;
  t = d_59;
  t = p_130(t);
  x_16 = t;
  t = map_1_0(new_0_0, t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_16, y_16);
  t = genzip_4_0(d_2, f_2, g_2, _id, t);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_17, g_59);
  t = conc_0_0(t);
  z_16 = t;
  t = d_59;
  {
    static ATerm k_2 (ATerm t)
    {
      t = y_16;
      return(t);
    }
    t = q_130(k_2, t);
  }
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_17, g_59, z_16);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,a_18 = NULL,c_18 = NULL;
  v_17 = t;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_18 = ATgetFirst((ATermList) t);
      c_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_18;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      {
        ATerm w_19 = t;
        int z_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_17;
            if((w_17 != t))
              {
                _fail(t);
              }
            t = u_17;
            LocalPopChoice(z_19);
          }
        else
          {
            t = w_19;
            t = (ATerm) ATmakeAppl(sym__2, w_17, c_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, w_17, c_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm d_131 (ATerm), ATerm t)
{
  static ATerm s_19 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_131(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
          static ATerm l_2 (ATerm t)
          {
            ATerm q_17 = NULL;
            q_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_17, not_null(p_19));
            t = s_19(t);
            return(t);
          }
          n_19 = t;
          if(match_cons(t, sym__2))
            {
              o_19 = ATgetArgument(t, 0);
              if(((p_19 != NULL) && (p_19 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                p_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_19;
          t = SRTS_all(l_2, t);
        }
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm k_130 (ATerm (ATerm), ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_130 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_19 = NULL;
  static ATerm a_21 (ATerm t)
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm q_20 = NULL,r_20 = NULL,v_20 = NULL;
      q_20 = t;
      if(match_cons(t, sym__2))
        {
          r_20 = ATgetArgument(t, 0);
          v_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              ATerm z_20 = NULL;
              z_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_20, v_20);
              t = lookup_0_0(t);
              return(t);
            }
            t = r_20;
            t = k_130(n_2, t);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm h_18 = NULL,j_18 = NULL,o_18 = NULL;
              t = q_20;
              t = o_8(l_130, n_130, r_20, v_20, t);
              if(match_cons(t, sym__3))
                {
                  h_18 = ATgetArgument(t, 0);
                  j_18 = ATgetArgument(t, 1);
                  o_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_8(a_21, m_130, h_18, j_18, o_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(m_2, t);
    return(t);
  }
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_19, (ATerm) ATempty);
  t = a_21(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      if(((ATgetType(e_20) != AT_LIST) || !(ATisEmpty(e_20))))
        _fail(t);
      {
        ATerm g_20 = ATgetArgument(t, 1);
        if(((ATgetType(g_20) != AT_LIST) || !(ATisEmpty(g_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,s_20 = NULL,t_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
        {
          o_20 = ATgetFirst((ATermList) h_20);
          p_20 = (ATerm) ATgetNext((ATermList) h_20);
        }
      else
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
          {
            s_20 = ATgetFirst((ATermList) j_20);
            t_20 = (ATerm) ATgetNext((ATermList) j_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_20, s_20), (ATerm) ATmakeAppl(sym__2, p_20, t_20));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm u_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_20), u_20);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm c_21 = NULL,f_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      c_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_21;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_21);
      }
    else
      {
        t = k_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_20 = ATgetArgument(t, 0);
            f_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_21, f_21);
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if(((ATgetType(x_20) != AT_LIST) || !(ATisEmpty(x_20))))
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) != AT_LIST) || !(ATisEmpty(y_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
        {
          e_22 = ATgetFirst((ATermList) b_21);
          f_22 = (ATerm) ATgetNext((ATermList) b_21);
        }
      else
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            g_22 = ATgetFirst((ATermList) d_21);
            h_22 = (ATerm) ATgetNext((ATermList) d_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_22, g_22), (ATerm) ATmakeAppl(sym__2, f_22, h_22));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_22), i_22);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm l_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_22;
  {
    ATerm e_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_22);
      }
    else
      {
        t = e_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            n_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_22, n_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
      {
        ATerm c_19 = NULL,g_19 = NULL,v_2 = NULL;
        t = SSLgetAnnotations(x_27);
        c_19 = t;
        t = y_27;
        t = x_109(t);
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_19, z_27);
        v_2 = t;
        t = SSLsetAnnotations(v_2, c_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_27 = ATgetArgument(t, 0);
          z_27 = ATgetArgument(t, 1);
          a_28 = ATgetArgument(t, 2);
          b_28 = ATgetArgument(t, 3);
          {
            ATerm y_19 = NULL,f_20 = NULL,i_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(x_27);
            y_19 = t;
            t = a_28;
            t = x_109(t);
            i_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_28, i_20);
            t = genzip_4_0(o_2, p_2, q_2, s_2, t);
            f_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_27, z_27, f_20, b_28);
            w_2 = t;
            t = SSLsetAnnotations(w_2, y_19);
          }
        }
      else
        {
          ATerm v_21 = NULL,a_22 = NULL,c_22 = NULL,x_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              y_27 = ATgetArgument(t, 0);
              z_27 = ATgetArgument(t, 1);
              a_28 = ATgetArgument(t, 2);
              b_28 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_27);
          v_21 = t;
          t = a_28;
          t = x_109(t);
          c_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_28, c_22);
          t = genzip_4_0(t_2, u_2, y_2, z_2, t);
          a_22 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, y_27, z_27, a_22, b_28);
          x_2 = t;
          t = SSLsetAnnotations(x_2, v_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,b_3 = NULL;
  i_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_28);
  f_28 = t;
  t = g_28;
  t = k_88(t);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_28);
  b_3 = t;
  t = SSLsetAnnotations(b_3, f_28);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            x_28 = ATgetArgument(t, 0);
            y_28 = ATgetArgument(t, 1);
            z_28 = ATgetArgument(t, 2);
            a_29 = ATgetArgument(t, 3);
            t = z_28;
            t = map_1_0(c_3, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                x_28 = ATgetArgument(t, 0);
                y_28 = ATgetArgument(t, 1);
                z_28 = ATgetArgument(t, 2);
                a_29 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = z_28;
            t = map_1_0(t_3, t);
          }
      }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm h_29 = NULL;
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_29 = ATgetArgument(t, 0);
          {
            ATerm o_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_21);
      t = h_29;
    }
  else
    {
      t = m_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_29;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm c_30 = NULL;
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_30 = ATgetArgument(t, 0);
          {
            ATerm r_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_21);
      t = c_30;
    }
  else
    {
      t = p_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_30;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  g_30 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      t = g_30;
      t = m_8(h_30, i_30, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_30 = ATgetArgument(t, 0);
          i_30 = ATgetArgument(t, 1);
          j_30 = ATgetArgument(t, 2);
          t = i_30;
          t = map_1_0(v_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              h_30 = ATgetArgument(t, 0);
              i_30 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, h_30);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_30 = ATgetArgument(t, 0);
                  i_30 = ATgetArgument(t, 1);
                  j_30 = ATgetArgument(t, 2);
                  k_30 = ATgetArgument(t, 3);
                  t = i_30;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_30 = ATgetArgument(t, 0);
                      i_30 = ATgetArgument(t, 1);
                      j_30 = ATgetArgument(t, 2);
                      k_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_30;
                  t = map_1_0(x_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_31 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_31 = ATgetArgument(t, 0);
          {
            ATerm u_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_21);
      t = h_31;
    }
  else
    {
      t = s_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm z_33 = NULL;
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_33 = ATgetArgument(t, 0);
          {
            ATerm y_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_21);
      t = z_33;
    }
  else
    {
      t = w_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_33;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_34 = NULL;
  ATerm z_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_34 = ATgetArgument(t, 0);
          {
            ATerm d_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_22);
      t = m_34;
    }
  else
    {
      t = z_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_34;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, a_3, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, u_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm p_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(m_22);
      {
        ATerm q_34 = NULL,r_34 = NULL;
        q_34 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm q_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        r_34 = t;
        t = SSLgetAnnotations(q_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) r_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_34;
      }
    }
  else
    {
      t = k_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm v_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_22);
            _fail(t);
          }
        else
          {
            t = t_22;
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm x_82, ATerm w_82, ATerm t)
{
  t = x_82;
  t = topdown_1_0(y_3, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, x_82);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_35 = ATgetArgument(t, 0);
      s_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_35;
  if(match_cons(t, sym_Match_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_35;
  if(match_cons(t, sym_Var_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_35;
  if(match_cons(t, sym_Seq_2))
    {
      t_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
      t = t_35;
      if(match_cons(t, sym_Build_1))
        {
          u_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_35;
      if(match_cons(t, sym_Var_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
      if((r_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_35)), n_35);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          t_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_35;
      if(match_cons(t, sym_Var_1))
        {
          u_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_35;
      if((r_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_35));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,l_36 = NULL,o_36 = NULL,u_36 = NULL,v_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_36;
  if(match_cons(t, sym_Build_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_36;
  if(match_cons(t, sym_Seq_2))
    {
      v_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
      t = v_36;
      if(match_cons(t, sym_Match_1))
        {
          i_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_36;
      if((o_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_36), j_36);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          v_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_36;
      if((o_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, o_36);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,l_37 = NULL,n_37 = NULL,s_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_37;
  if(match_cons(t, sym_Match_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_37;
  if(match_cons(t, sym_Seq_2))
    {
      v_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
      t = v_37;
      if(match_cons(t, sym_Match_1))
        {
          h_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_37;
      if((n_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_37), i_37);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          v_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_37;
      if((n_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, n_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,o_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_38;
  if(match_cons(t, sym_Seq_2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
      t = t_38;
      if(match_cons(t, sym_PrimT_3))
        {
          k_38 = ATgetArgument(t, 0);
          l_38 = ATgetArgument(t, 1);
          m_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, k_38, l_38, m_38), u_38);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          t_38 = ATgetArgument(t, 0);
          u_38 = ATgetArgument(t, 1);
          v_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, t_38, u_38, v_38);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,h_40 = NULL,r_40 = NULL,s_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_40;
  if(match_cons(t, sym_Build_1))
    {
      ATerm y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_40;
  if(match_cons(t, sym_Seq_2))
    {
      s_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
      t = s_40;
      if(match_cons(t, sym_Build_1))
        {
          b_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_40), c_40);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          s_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, s_40);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(((ATgetType(a_23) != AT_LIST) || !(ATisEmpty(a_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
        {
          u_42 = ATgetFirst((ATermList) b_23);
          v_42 = (ATerm) ATgetNext((ATermList) b_23);
        }
      else
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            a_43 = ATgetFirst((ATermList) d_23);
            b_43 = (ATerm) ATgetNext((ATermList) d_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_42, a_43), (ATerm) ATmakeAppl(sym__2, v_42, b_43));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_43), c_43);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_43), (ATerm) ATmakeAppl(sym_Match_1, f_43));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(((ATgetType(e_23) != AT_LIST) || !(ATisEmpty(e_23))))
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(((ATgetType(f_23) != AT_LIST) || !(ATisEmpty(f_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
        {
          q_43 = ATgetFirst((ATermList) g_23);
          r_43 = (ATerm) ATgetNext((ATermList) g_23);
        }
      else
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
          {
            s_43 = ATgetFirst((ATermList) h_23);
            t_43 = (ATerm) ATgetNext((ATermList) h_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_43, s_43), (ATerm) ATmakeAppl(sym__2, r_43, t_43));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_43), u_43);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  if(match_cons(t, sym__2))
    {
      y_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_43), (ATerm) ATmakeAppl(sym_Match_1, z_43));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm s_41 = NULL,x_41 = NULL,y_41 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_42;
  if(match_cons(t, sym_Build_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_42;
  if(match_cons(t, sym_Op_2))
    {
      h_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_42;
  if(match_cons(t, sym_Seq_2))
    {
      l_42 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      {
        ATerm s_42 = NULL;
        t = l_42;
        if(match_cons(t, sym_Match_1))
          {
            m_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_42;
        if(match_cons(t, sym_Op_2))
          {
            s_41 = ATgetArgument(t, 0);
            x_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_41;
        if((h_42 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, j_42, x_41);
        t = genzip_4_0(z_3, a_4, b_4, c_4, t);
        s_42 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_42, j_42)), y_41));
      }
    }
  else
    {
      ATerm l_43 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          l_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_42;
      if(match_cons(t, sym_Op_2))
        {
          m_42 = ATgetArgument(t, 0);
          n_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_42;
      if((h_42 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, j_42, n_42);
      t = genzip_4_0(e_4, f_4, g_4, h_4, t);
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_43), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_42, j_42)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm l_45 = NULL,p_45 = NULL,q_45 = NULL,v_45 = NULL,w_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  p_45 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_45;
  if(match_cons(t, sym_Build_1))
    {
      v_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_45;
  if(match_cons(t, sym_Op_2))
    {
      w_45 = ATgetArgument(t, 0);
      {
        ATerm i_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_45;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            z_45 = ATgetArgument(t, 0);
            {
              ATerm m_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_23);
        t = z_45;
        if(match_cons(t, sym_Match_1))
          {
            a_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_46;
        if(match_cons(t, sym_Op_2))
          {
            l_45 = ATgetArgument(t, 0);
            {
              ATerm n_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_45, l_45);
        {
          ATerm o_23 = t;
          if((PushChoice() == 0))
            {
              ATerm c_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  c_23 = ATgetArgument(t, 0);
                  if((c_23 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_23;
            }
        }
        t = term_p_23;
      }
    else
      {
        t = j_23;
        if(match_cons(t, sym_Match_1))
          {
            z_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_45;
        if(match_cons(t, sym_Op_2))
          {
            a_46 = ATgetArgument(t, 0);
            {
              ATerm q_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_45, a_46);
        {
          ATerm r_23 = t;
          if((PushChoice() == 0))
            {
              ATerm l_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_23 = ATgetArgument(t, 0);
                  if((l_23 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_23;
            }
        }
        t = term_p_23;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  static ATerm g_46 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_112(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = SRTS_one(g_46, t);
      }
    return(t);
  }
  t = g_46(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,s_48 = NULL,t_48 = NULL;
  p_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_47 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_48;
  if(match_cons(t, sym_Let_2))
    {
      d_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
      {
        ATerm x_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, q_47, d_48);
        t = conc_0_0(t);
        x_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_48, s_48);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          d_48 = ATgetArgument(t, 0);
          s_48 = ATgetArgument(t, 1);
          t_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_47 = ATgetFirst((ATermList) t);
          a_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_47;
      if(match_cons(t, sym_SDefT_4))
        {
          s_47 = ATgetArgument(t, 0);
          x_47 = ATgetArgument(t, 1);
          y_47 = ATgetArgument(t, 2);
          z_47 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_48;
      if(match_cons(t, sym_SVar_1))
        {
          e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_48;
      if((s_47 != t))
        {
          _fail(t);
        }
      t = z_47;
      {
        ATerm u_23 = t;
        if((PushChoice() == 0))
          {
            static ATerm i_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm v_23 = ATgetArgument(t, 0);
                  if(match_cons(v_23, sym_SVar_1))
                    {
                      if((s_47 != ATgetArgument(v_23, 0)))
                        {
                          _fail(ATgetArgument(v_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_23 = ATgetArgument(t, 1);
                    if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
                      _fail(t);
                  }
                  {
                    ATerm x_23 = ATgetArgument(t, 2);
                    if(((ATgetType(x_23) != AT_LIST) || !(ATisEmpty(x_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(i_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_23;
          }
      }
      t = z_47;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,v_49 = NULL,w_49 = NULL,a_50 = NULL,h_50 = NULL,i_50 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_50 = ATgetArgument(t, 0);
      t = h_50;
      if(match_cons(t, sym_Seq_2))
        {
          a_50 = ATgetArgument(t, 0);
          q_49 = ATgetArgument(t, 1);
          t = a_50;
          if(match_cons(t, sym_Where_1))
            {
              p_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_49;
          if(match_cons(t, sym_Seq_2))
            {
              r_49 = ATgetArgument(t, 0);
              w_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_49;
          if(match_cons(t, sym_Build_1))
            {
              v_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, p_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_49), w_49)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              a_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, a_50);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_50 = ATgetArgument(t, 0);
          t = h_50;
          if(match_cons(t, sym_Test_1))
            {
              a_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, a_50);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_50 = ATgetArgument(t, 0);
              t = h_50;
              if(match_cons(t, sym_Not_1))
                {
                  a_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, a_50);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_50 = ATgetArgument(t, 0);
                  i_50 = ATgetArgument(t, 1);
                  t = i_50;
                  if((h_50 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_50 = ATgetArgument(t, 0);
                      i_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_50;
                  if((h_50 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      s_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
      t = s_51;
      if(match_cons(t, sym_LChoice_2))
        {
          t_51 = ATgetArgument(t, 0);
          u_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, t_51, (ATerm) ATmakeAppl(sym_LChoice_2, u_51, v_51));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          s_51 = ATgetArgument(t, 0);
          v_51 = ATgetArgument(t, 1);
          t = s_51;
          if(match_cons(t, sym_Seq_2))
            {
              t_51 = ATgetArgument(t, 0);
              u_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, t_51, (ATerm) ATmakeAppl(sym_Seq_2, u_51, v_51));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              s_51 = ATgetArgument(t, 0);
              v_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_51;
          if(match_cons(t, sym_Choice_2))
            {
              t_51 = ATgetArgument(t, 0);
              u_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, t_51, (ATerm) ATmakeAppl(sym_Choice_2, u_51, v_51));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,h_53 = NULL,m_53 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      h_53 = ATgetArgument(t, 0);
      m_53 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, h_53, m_53);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          h_53 = ATgetArgument(t, 0);
          t = h_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_52 = ATgetFirst((ATermList) t);
              s_52 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, r_52, (ATerm) ATmakeAppl(sym_LChoices_1, s_52));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_p_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              h_53 = ATgetArgument(t, 0);
              t = h_53;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_52 = ATgetFirst((ATermList) t);
                  s_52 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_52, (ATerm) ATmakeAppl(sym_Choices_1, s_52));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_p_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  h_53 = ATgetArgument(t, 0);
                  t = h_53;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_52 = ATgetFirst((ATermList) t);
                      s_52 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_52, (ATerm) ATmakeAppl(sym_Seqs_1, s_52));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      h_53 = ATgetArgument(t, 0);
                      m_53 = ATgetArgument(t, 1);
                      t_52 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, m_53, (ATerm) ATmakeAppl(sym_Op_2, term_z_23, (ATerm) ATinsert(ATinsert(ATempty, t_52), h_53)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          h_53 = ATgetArgument(t, 0);
                          m_53 = ATgetArgument(t, 1);
                          t_52 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_52)), h_53), (ATerm) ATmakeAppl(sym_Build_1, m_53)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              h_53 = ATgetArgument(t, 0);
                              m_53 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_53, (ATerm) ATmakeAppl(sym_Match_1, m_53));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  h_53 = ATgetArgument(t, 0);
                                  m_53 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_53), m_53);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      h_53 = ATgetArgument(t, 0);
                                      m_53 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_53), h_53);
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
static ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      c_58 = ATgetArgument(t, 0);
      t = c_58;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_p_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          c_58 = ATgetArgument(t, 0);
          t = c_58;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              c_58 = ATgetArgument(t, 0);
              d_58 = ATgetArgument(t, 1);
              t = c_58;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_p_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  c_58 = ATgetArgument(t, 0);
                  d_58 = ATgetArgument(t, 1);
                  t = d_58;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_p_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      c_58 = ATgetArgument(t, 0);
                      d_58 = ATgetArgument(t, 1);
                      t = d_58;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_p_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          c_58 = ATgetArgument(t, 0);
                          t = c_58;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_p_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              c_58 = ATgetArgument(t, 0);
                              t = c_58;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_p_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  c_58 = ATgetArgument(t, 0);
                                  d_58 = ATgetArgument(t, 1);
                                  t = d_58;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_p_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      c_58 = ATgetArgument(t, 0);
                                      d_58 = ATgetArgument(t, 1);
                                      t = d_58;
                                      t = fetch_1_0(j_4, t);
                                      t = term_p_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          c_58 = ATgetArgument(t, 0);
                                          d_58 = ATgetArgument(t, 1);
                                          t = d_58;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = c_58;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = d_58;
                                                }
                                              else
                                                {
                                                  t = c_58;
                                                }
                                            }
                                          else
                                            {
                                              t = c_58;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = d_58;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              c_58 = ATgetArgument(t, 0);
                                              d_58 = ATgetArgument(t, 1);
                                              t = d_58;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = c_58;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = d_58;
                                                    }
                                                  else
                                                    {
                                                      t = c_58;
                                                    }
                                                }
                                              else
                                                {
                                                  t = c_58;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = d_58;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  c_58 = ATgetArgument(t, 0);
                                                  t = c_58;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_p_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      c_58 = ATgetArgument(t, 0);
                                                      d_58 = ATgetArgument(t, 1);
                                                      e_58 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_58;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_58, d_58);
                                                }
                                            }
                                        }
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm w_60 = NULL,y_60 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      y_60 = ATgetArgument(t, 0);
      t = y_60;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          y_60 = ATgetArgument(t, 0);
          t = y_60;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_p_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              y_60 = ATgetArgument(t, 0);
              w_60 = ATgetArgument(t, 1);
              t = w_60;
              if(match_cons(t, sym_Id_0))
                {
                  t = y_60;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = w_60;
                    }
                  else
                    {
                      t = y_60;
                    }
                }
              else
                {
                  t = y_60;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = w_60;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  y_60 = ATgetArgument(t, 0);
                  w_60 = ATgetArgument(t, 1);
                  t = y_60;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      y_60 = ATgetArgument(t, 0);
                      w_60 = ATgetArgument(t, 1);
                      t = w_60;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          y_60 = ATgetArgument(t, 0);
                          w_60 = ATgetArgument(t, 1);
                          t = w_60;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              y_60 = ATgetArgument(t, 0);
                              t = y_60;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  y_60 = ATgetArgument(t, 0);
                                  t = y_60;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_60 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_60;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_y_23;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm e_24 = t;
              int f_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(f_24);
                }
              else
                {
                  t = e_24;
                  {
                    ATerm g_24 = t;
                    int h_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(h_24);
                      }
                    else
                      {
                        t = g_24;
                        {
                          ATerm i_24 = t;
                          int j_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(j_24);
                            }
                          else
                            {
                              t = i_24;
                              {
                                ATerm k_24 = t;
                                int l_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_61 = NULL,v_61 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_61 = ATgetArgument(t, 0);
                                        v_61 = ATgetArgument(t, 1);
                                        t = u_61;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_61;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_61 = ATgetArgument(t, 0);
                                            v_61 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_61;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_61;
                                      }
                                    LocalPopChoice(l_24);
                                  }
                                else
                                  {
                                    t = k_24;
                                    {
                                      ATerm m_24 = t;
                                      int n_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(n_24);
                                        }
                                      else
                                        {
                                          t = m_24;
                                          {
                                            ATerm o_24 = t;
                                            int p_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(p_24);
                                              }
                                            else
                                              {
                                                t = o_24;
                                                {
                                                  ATerm q_24 = t;
                                                  int r_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(r_24);
                                                    }
                                                  else
                                                    {
                                                      t = q_24;
                                                      {
                                                        ATerm s_24 = t;
                                                        int t_24 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(t_24);
                                                          }
                                                        else
                                                          {
                                                            t = s_24;
                                                            {
                                                              ATerm u_24 = t;
                                                              int v_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(v_24);
                                                                }
                                                              else
                                                                {
                                                                  t = u_24;
                                                                  {
                                                                    ATerm w_24 = t;
                                                                    int x_24 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(x_24);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_24;
                                                                        {
                                                                          ATerm y_24 = t;
                                                                          int z_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(z_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_24;
                                                                              {
                                                                                ATerm a_25 = t;
                                                                                int b_25 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(b_25);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_25;
                                                                                    {
                                                                                      ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,i_62 = NULL;
                                                                                      c_62 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          d_62 = ATgetArgument(t, 0);
                                                                                          i_62 = ATgetArgument(t, 1);
                                                                                          t = d_62;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              b_62 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_62;
                                                                                          t = s_9(b_62, i_62, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              d_62 = ATgetArgument(t, 0);
                                                                                              i_62 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = d_62;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = i_62;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL,y_70 = NULL;
  u_70 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = u_70;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = u_70;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              v_70 = ATgetArgument(t, 0);
              {
                ATerm w_27 = NULL,k_28 = NULL,i_3 = NULL;
                t = SSLgetAnnotations(u_70);
                w_27 = t;
                t = v_70;
                {
                  static ATerm t_30 (ATerm t)
                  {
                    ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
                    q_30 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        r_30 = ATgetArgument(t, 0);
                        {
                          ATerm n_31 = NULL,d_3 = NULL;
                          t = SSLgetAnnotations(q_30);
                          n_31 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, r_30);
                          d_3 = t;
                          t = SSLsetAnnotations(d_3, n_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            r_30 = ATgetArgument(t, 0);
                            {
                              ATerm u_31 = NULL,e_3 = NULL;
                              t = SSLgetAnnotations(q_30);
                              u_31 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, r_30);
                              e_3 = t;
                              t = SSLsetAnnotations(e_3, u_31);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                r_30 = ATgetArgument(t, 0);
                                {
                                  ATerm c_32 = NULL,f_3 = NULL;
                                  t = SSLgetAnnotations(q_30);
                                  c_32 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, r_30);
                                  f_3 = t;
                                  t = SSLsetAnnotations(f_3, c_32);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    r_30 = ATgetArgument(t, 0);
                                    {
                                      ATerm j_32 = NULL,g_3 = NULL;
                                      t = SSLgetAnnotations(q_30);
                                      j_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, r_30);
                                      g_3 = t;
                                      t = SSLsetAnnotations(g_3, j_32);
                                    }
                                  }
                                else
                                  {
                                    ATerm x_32 = NULL,a_33 = NULL,h_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        r_30 = ATgetArgument(t, 0);
                                        s_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(q_30);
                                    x_32 = t;
                                    t = s_30;
                                    t = map_1_0(t_30, t);
                                    a_33 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, r_30, a_33);
                                    h_3 = t;
                                    t = SSLsetAnnotations(h_3, x_32);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = t_30(t);
                }
                k_28 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, k_28);
                i_3 = t;
                t = SSLsetAnnotations(i_3, w_27);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  v_70 = ATgetArgument(t, 0);
                  y_70 = ATgetArgument(t, 1);
                  {
                    ATerm j_33 = NULL,m_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,t_33 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL;
                    t = SSLgetAnnotations(u_70);
                    j_33 = t;
                    t = v_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        r_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(v_70);
                    q_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_33);
                    j_3 = t;
                    t = SSLsetAnnotations(j_3, q_33);
                    t_33 = t;
                    t = y_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        o_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_70);
                    m_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_33);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, m_33);
                    p_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, t_33, p_33);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, j_33);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      v_70 = ATgetArgument(t, 0);
                      {
                        ATerm b_34 = NULL,d_34 = NULL,p_34 = NULL,t_34 = NULL,n_3 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(u_70);
                        b_34 = t;
                        t = v_70;
                        if(match_cons(t, sym_Var_1))
                          {
                            p_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_70);
                        d_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_34);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, d_34);
                        t_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, t_34);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, b_34);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          v_70 = ATgetArgument(t, 0);
                          y_70 = ATgetArgument(t, 1);
                          {
                            ATerm a_35 = NULL,o_3 = NULL;
                            t = SSLgetAnnotations(u_70);
                            a_35 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, v_70, y_70);
                            o_3 = t;
                            t = SSLsetAnnotations(o_3, a_35);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              v_70 = ATgetArgument(t, 0);
                              y_70 = ATgetArgument(t, 1);
                              t_70 = ATgetArgument(t, 2);
                              {
                                ATerm l_35 = NULL,p_3 = NULL;
                                t = SSLgetAnnotations(u_70);
                                l_35 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, v_70, y_70, t_70);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, l_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  v_70 = ATgetArgument(t, 0);
                                  y_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_36 = NULL,r_36 = NULL,s_36 = NULL,q_3 = NULL;
                                    t = SSLgetAnnotations(u_70);
                                    n_36 = t;
                                    t = v_70;
                                    t = simple_strategy_0_0(t);
                                    r_36 = t;
                                    t = y_70;
                                    t = simple_strategy_0_0(t);
                                    s_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, r_36, s_36);
                                    q_3 = t;
                                    t = SSLsetAnnotations(q_3, n_36);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      v_70 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_37 = NULL,g_37 = NULL,r_3 = NULL;
                                        t = SSLgetAnnotations(u_70);
                                        e_37 = t;
                                        t = v_70;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        g_37 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, g_37);
                                        r_3 = t;
                                        t = SSLsetAnnotations(r_3, e_37);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_37 = NULL,a_38 = NULL,s_3 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          v_70 = ATgetArgument(t, 0);
                                          y_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(u_70);
                                      t_37 = t;
                                      t = y_70;
                                      t = simple_strategy_0_0(t);
                                      a_38 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, v_70, a_38);
                                      s_3 = t;
                                      t = SSLsetAnnotations(s_3, t_37);
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
static ATerm t_8 (ATerm s_125 (ATerm), ATerm a_56, ATerm z_55, ATerm t)
{
  static ATerm e_73 (ATerm t)
  {
    static ATerm f_73 (ATerm k_72, ATerm t)
    {
      ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,u_72 = NULL,w_72 = NULL,l_4 = NULL;
      t = k_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_72 = ATgetFirst((ATermList) t);
          p_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm k_4 (ATerm t)
        {
          t = z_55;
          return(t);
        }
        t = x_10(s_125, k_4, o_72, p_72, t);
      }
      t = k_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_72 = ATgetFirst((ATermList) t);
          u_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_72);
      q_72 = t;
      t = u_72;
      t = e_73(t);
      w_72 = t;
      t = (ATerm) ATinsert(CheckATermList(w_72), r_72);
      l_4 = t;
      t = SSLsetAnnotations(l_4, q_72);
      return(t);
    }
    ATerm x_72 = NULL,z_72 = NULL;
    x_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_72;
      }
    else
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_25 = ATgetFirst((ATermList) t);
                z_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(d_25);
            {
              ATerm f_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_73(x_72, t);
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = f_25;
                  t = z_72;
                  t = e_73(t);
                }
            }
          }
        else
          {
            t = c_25;
            t = f_73(x_72, t);
          }
      }
    return(t);
  }
  t = a_56;
  t = e_73(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(d_143, e_143, f_143, t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,i_38 = NULL,r_38 = NULL,w_38 = NULL,o_4 = NULL;
        b_74 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            c_74 = ATgetArgument(t, 0);
            d_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_74);
        i_38 = t;
        t = c_74;
        t = f_143(t);
        r_38 = t;
        t = d_74;
        t = d_143(t);
        w_38 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, r_38, w_38);
        o_4 = t;
        t = SSLsetAnnotations(o_4, i_38);
      }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_74);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_74 = ATgetArgument(t, 0);
                  y_74 = ATgetArgument(t, 1);
                  z_74 = ATgetArgument(t, 2);
                  a_75 = ATgetArgument(t, 3);
                  t = z_74;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_74 = ATgetArgument(t, 0);
                      y_74 = ATgetArgument(t, 1);
                      z_74 = ATgetArgument(t, 2);
                      a_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_74;
                  t = map_1_0(q_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm h_75 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_75 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_25);
      t = h_75;
    }
  else
    {
      t = n_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_75;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_75 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_75 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_25);
      t = w_75;
    }
  else
    {
      t = q_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_75;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_76);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_76 = ATgetArgument(t, 0);
                  w_76 = ATgetArgument(t, 1);
                  x_76 = ATgetArgument(t, 2);
                  y_76 = ATgetArgument(t, 3);
                  t = x_76;
                  t = map_1_0(f_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_76 = ATgetArgument(t, 0);
                      w_76 = ATgetArgument(t, 1);
                      x_76 = ATgetArgument(t, 2);
                      y_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_76;
                  t = map_1_0(i_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_77 = NULL;
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_77 = ATgetArgument(t, 0);
          {
            ATerm z_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_25);
      t = l_77;
    }
  else
    {
      t = x_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_77;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_77 = NULL;
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_77 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_26);
      t = y_77;
    }
  else
    {
      t = a_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_77;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm c_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_78);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            {
              ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_78 = ATgetArgument(t, 0);
                  f_78 = ATgetArgument(t, 1);
                  g_78 = ATgetArgument(t, 2);
                  h_78 = ATgetArgument(t, 3);
                  t = g_78;
                  t = map_1_0(l_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_78 = ATgetArgument(t, 0);
                      f_78 = ATgetArgument(t, 1);
                      g_78 = ATgetArgument(t, 2);
                      h_78 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_78;
                  t = map_1_0(n_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm o_78 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_78 = ATgetArgument(t, 0);
          {
            ATerm j_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_26);
      t = o_78;
    }
  else
    {
      t = h_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_78;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_78 = NULL;
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_78 = ATgetArgument(t, 0);
          {
            ATerm m_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_26);
      t = x_78;
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_78;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm b_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_79);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            {
              ATerm e_79 = NULL,g_79 = NULL,h_79 = NULL,j_79 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_79 = ATgetArgument(t, 0);
                  g_79 = ATgetArgument(t, 1);
                  h_79 = ATgetArgument(t, 2);
                  j_79 = ATgetArgument(t, 3);
                  t = h_79;
                  t = map_1_0(r_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_79 = ATgetArgument(t, 0);
                      g_79 = ATgetArgument(t, 1);
                      h_79 = ATgetArgument(t, 2);
                      j_79 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_79;
                  t = map_1_0(u_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm t_79 = NULL;
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_79 = ATgetArgument(t, 0);
          {
            ATerm t_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_26);
      t = t_79;
    }
  else
    {
      t = r_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_79;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_80 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_80 = ATgetArgument(t, 0);
          {
            ATerm w_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_26);
      t = g_80;
    }
  else
    {
      t = u_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_80;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_74 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      t_74 = ATgetArgument(t, 0);
      t = t_74;
      t = free_vars_3_0(m_4, n_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          t_74 = ATgetArgument(t, 0);
          t = t_74;
          t = free_vars_3_0(u_4, c_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              t_74 = ATgetArgument(t, 0);
              t = t_74;
              t = free_vars_3_0(j_5, k_5, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_74 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_74;
              t = free_vars_3_0(o_5, p_5, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,e_86 = NULL;
  z_85 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_86 = ATgetArgument(t, 0);
      w_85 = ATgetArgument(t, 1);
      {
        ATerm r_39 = NULL,u_39 = NULL,v_39 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(z_85);
        r_39 = t;
        t = e_86;
        t = a_110(t);
        u_39 = t;
        t = w_85;
        t = y_109(t);
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_39, v_39);
        t_4 = t;
        t = SSLsetAnnotations(t_4, r_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          e_86 = ATgetArgument(t, 0);
          w_85 = ATgetArgument(t, 1);
          x_85 = ATgetArgument(t, 2);
          y_85 = ATgetArgument(t, 3);
          {
            ATerm j_40 = NULL,v_40 = NULL,x_40 = NULL,y_40 = NULL,a_41 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(z_85);
            j_40 = t;
            t = e_86;
            t = a_110(t);
            v_40 = t;
            t = w_85;
            t = a_110(t);
            x_40 = t;
            t = x_85;
            t = a_110(t);
            y_40 = t;
            t = y_85;
            t = y_109(t);
            a_41 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_40, x_40, y_40, a_41);
            y_4 = t;
            t = SSLsetAnnotations(y_4, j_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              e_86 = ATgetArgument(t, 0);
              w_85 = ATgetArgument(t, 1);
              x_85 = ATgetArgument(t, 2);
              y_85 = ATgetArgument(t, 3);
              {
                ATerm n_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,d_5 = NULL;
                t = SSLgetAnnotations(z_85);
                n_41 = t;
                t = e_86;
                t = a_110(t);
                t_41 = t;
                t = w_85;
                t = a_110(t);
                u_41 = t;
                t = x_85;
                t = a_110(t);
                v_41 = t;
                t = y_85;
                t = y_109(t);
                w_41 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, t_41, u_41, v_41, w_41);
                d_5 = t;
                t = SSLsetAnnotations(d_5, n_41);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_86 = ATgetArgument(t, 0);
                  {
                    ATerm x_42 = NULL,z_42 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(z_85);
                    x_42 = t;
                    t = e_86;
                    t = y_109(t);
                    z_42 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, z_42);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, x_42);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      e_86 = ATgetArgument(t, 0);
                      {
                        ATerm p_43 = NULL,x_43 = NULL,q_5 = NULL;
                        t = SSLgetAnnotations(z_85);
                        p_43 = t;
                        t = e_86;
                        t = y_109(t);
                        x_43 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_43);
                        q_5 = t;
                        t = SSLsetAnnotations(q_5, p_43);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          e_86 = ATgetArgument(t, 0);
                          {
                            ATerm f_44 = NULL,h_44 = NULL,s_5 = NULL;
                            t = SSLgetAnnotations(z_85);
                            f_44 = t;
                            t = e_86;
                            t = y_109(t);
                            h_44 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, h_44);
                            s_5 = t;
                            t = SSLsetAnnotations(s_5, f_44);
                          }
                        }
                      else
                        {
                          ATerm p_44 = NULL,s_44 = NULL,t_5 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              e_86 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(z_85);
                          p_44 = t;
                          t = e_86;
                          t = y_109(t);
                          s_44 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, s_44);
                          t_5 = t;
                          t = SSLsetAnnotations(t_5, p_44);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_87);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_87 = ATgetArgument(t, 0);
                  y_87 = ATgetArgument(t, 1);
                  z_87 = ATgetArgument(t, 2);
                  a_88 = ATgetArgument(t, 3);
                  t = z_87;
                  t = map_1_0(x_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_87 = ATgetArgument(t, 0);
                      y_87 = ATgetArgument(t, 1);
                      z_87 = ATgetArgument(t, 2);
                      a_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_87;
                  t = map_1_0(y_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_88 = NULL;
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_88 = ATgetArgument(t, 0);
          {
            ATerm d_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_27);
      t = h_88;
    }
  else
    {
      t = b_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_88;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm r_88 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_88 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_27);
      t = r_88;
    }
  else
    {
      t = e_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_88;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_87 = NULL,q_87 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_87 = ATgetArgument(t, 0);
      t = q_87;
      if(match_cons(t, sym_Rule_3))
        {
          l_87 = ATgetArgument(t, 0);
          {
            ATerm h_27 = ATgetArgument(t, 1);
          }
          {
            ATerm i_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_87;
      t = free_vars_3_0(v_5, w_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_87 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_87;
    }
  return(t);
}
static ATerm y_8 (ATerm u_125 (ATerm), ATerm c_56, ATerm b_56, ATerm t)
{
  static ATerm m_89 (ATerm t)
  {
    ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL;
    h_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_89;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_89 = ATgetFirst((ATermList) t);
            j_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_89;
              {
                static ATerm z_5 (ATerm t)
                {
                  t = b_56;
                  return(t);
                }
                t = x_10(u_125, z_5, i_89, j_89, t);
              }
              t = m_89(t);
              LocalPopChoice(l_27);
            }
          else
            {
              t = k_27;
              {
                ATerm j_45 = NULL,s_45 = NULL,f_6 = NULL;
                t = SSLgetAnnotations(h_89);
                j_45 = t;
                t = j_89;
                t = m_89(t);
                s_45 = t;
                t = (ATerm) ATinsert(CheckATermList(s_45), i_89);
                f_6 = t;
                t = SSLsetAnnotations(f_6, j_45);
              }
            }
        }
      }
    return(t);
  }
  t = c_56;
  t = m_89(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(((ATgetType(m_27) != AT_LIST) || !(ATisEmpty(m_27))))
        _fail(t);
      {
        ATerm n_27 = ATgetArgument(t, 1);
        if(((ATgetType(n_27) != AT_LIST) || !(ATisEmpty(n_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
        {
          u_89 = ATgetFirst((ATermList) o_27);
          v_89 = (ATerm) ATgetNext((ATermList) o_27);
        }
      else
        _fail(t);
      {
        ATerm p_27 = ATgetArgument(t, 1);
        if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
          {
            w_89 = ATgetFirst((ATermList) p_27);
            x_89 = (ATerm) ATgetNext((ATermList) p_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_89, w_89), (ATerm) ATmakeAppl(sym__2, v_89, x_89));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL;
  if(match_cons(t, sym__2))
    {
      y_89 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_89), y_89);
  return(t);
}
static ATerm a_9 (ATerm i_712, ATerm n_712, ATerm t_71, ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL;
  t = SSL_explode_term(n_712);
  if(match_cons(t, sym__2))
    {
      p_89 = ATgetArgument(t, 0);
      r_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_712);
  if(match_cons(t, sym__2))
    {
      if((p_89 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_89, r_89);
  t = genzip_4_0(a_6, b_6, c_6, _id, t);
  s_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_89, t_71);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t)
{
  static ATerm b_90 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_117(t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = k_117(t);
        t = b_90(t);
      }
    return(t);
  }
  t = b_90(t);
  return(t);
}
ATerm for_3_0 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm t)
{
  t = m_117(t);
  t = while_not_2_0(n_117, o_117, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm i_90 = NULL;
  i_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_90);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,i_6 = NULL;
  m_90 = t;
  if(match_cons(t, sym__2))
    {
      k_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_90);
  j_90 = t;
  t = l_90;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_90, l_90);
  i_6 = t;
  t = SSLsetAnnotations(i_6, j_90);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,s_91 = NULL;
  l_91 = t;
  if(match_cons(t, sym__2))
    {
      m_91 = ATgetArgument(t, 0);
      n_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_91 = ATgetFirst((ATermList) t);
      s_91 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_92(m_91, n_91, l_91, t);
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_91), o_91), s_91);
          }
      }
    }
  else
    {
      t = e_92(m_91, n_91, l_91, t);
    }
  return(t);
}
static ATerm e_92 (ATerm p_90, ATerm q_90, ATerm r_90, ATerm t)
{
  ATerm s_90 = NULL,v_90 = NULL,j_6 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  t = SSLgetAnnotations(r_90);
  s_90 = t;
  t = q_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_91 = ATgetFirst((ATermList) t);
      f_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_91;
  if(match_cons(t, sym__2))
    {
      d_91 = ATgetArgument(t, 0);
      e_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_91;
        if((d_91 != t))
          {
            _fail(t);
          }
        t = f_91;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = q_90;
        t = a_9(d_91, e_91, f_91, t);
      }
  }
  v_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_90, v_90);
  j_6 = t;
  t = SSLsetAnnotations(j_6, s_90);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm d_92 = NULL;
  if(match_cons(t, sym__2))
    {
      d_92 = ATgetArgument(t, 0);
      if((d_92 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_6, e_6, g_6, t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
        y_91 = t;
        if(match_cons(t, sym__2))
          {
            z_91 = ATgetArgument(t, 0);
            a_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_91;
        t = y_8(k_6, z_91, a_92, t);
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  if(match_cons(t, sym__2))
    {
      m_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(q_6, m_46, n_46, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      o_46 = ATgetArgument(t, 0);
      if((o_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  if(match_cons(t, sym__2))
    {
      v_46 = ATgetArgument(t, 0);
      w_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(x_6, v_46, w_46, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm x_46 = NULL;
  if(match_cons(t, sym__2))
    {
      x_46 = ATgetArgument(t, 0);
      if((x_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_92 (ATerm t)
  {
    ATerm e_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_132(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = e_28;
        {
          ATerm l_28 = t;
          int m_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_92 = NULL,h_92 = NULL,h_46 = NULL,i_46 = NULL;
              g_92 = t;
              t = o_132(t);
              h_92 = t;
              t = g_92;
              {
                static ATerm l_6 (ATerm t)
                {
                  ATerm j_92 = NULL;
                  t = s_92(t);
                  j_92 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_92, h_92);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_132(l_6, s_92, n_6, t);
              }
              i_46 = t;
              t = SSL_explode_term(i_46);
              if(match_cons(t, sym__2))
                {
                  ATerm n_28 = ATgetArgument(t, 0);
                  h_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_46;
              t = foldr_3_0(o_6, p_6, _id, t);
              LocalPopChoice(m_28);
            }
          else
            {
              t = l_28;
              {
                ATerm q_46 = NULL,r_46 = NULL;
                r_46 = t;
                t = SSL_explode_term(r_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_28 = ATgetArgument(t, 0);
                    q_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_46;
                t = foldr_3_0(r_6, v_6, s_92, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_92(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm u_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_47);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
              ATerm v_47 = NULL,w_47 = NULL,f_48 = NULL,g_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_48 = ATgetArgument(t, 0);
                  g_48 = ATgetArgument(t, 1);
                  v_47 = ATgetArgument(t, 2);
                  w_47 = ATgetArgument(t, 3);
                  t = v_47;
                  t = map_1_0(e_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_48 = ATgetArgument(t, 0);
                      g_48 = ATgetArgument(t, 1);
                      v_47 = ATgetArgument(t, 2);
                      w_47 = ATgetArgument(t, 3);
                      t = v_47;
                      t = map_1_0(j_7, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Matrix_2))
                        {
                          f_48 = ATgetArgument(t, 0);
                          g_48 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_48;
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_48 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_48 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = o_48;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_48;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm f_49 = NULL;
  ATerm w_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_49 = ATgetArgument(t, 0);
          {
            ATerm c_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_29);
      t = f_49;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_49;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      if((k_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_49 = ATgetFirst((ATermList) t);
      m_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,x_49 = NULL,b_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(match_cons(e_29, sym__2))
        {
          n_49 = ATgetArgument(e_29, 0);
          o_49 = ATgetArgument(e_29, 1);
        }
      else
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
        if(match_cons(f_29, sym__2))
          {
            x_49 = ATgetArgument(f_29, 0);
            b_50 = ATgetArgument(f_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_49), n_49), (ATerm) ATinsert(CheckATermList(b_50), o_49));
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_50 = NULL;
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, c_50, term_j_29), (ATerm) ATmakeAppl(sym_Var_1, c_50));
  return(t);
}
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
  b_95 = t;
  if(match_cons(t, sym_Row_2))
    {
      c_95 = ATgetArgument(t, 0);
      d_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_47 = NULL,g_47 = NULL,n_47 = NULL,o_47 = NULL,t_47 = NULL;
        t = d_95;
        {
          ATerm m_29 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_29;
            }
        }
        t = new_0_0(t);
        e_47 = t;
        t = d_95;
        t = free_vars_3_0(z_6, c_7, tvars_matrix_boundin_3_0, t);
        t_47 = t;
        t = r_0(t);
        o_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_47, o_47);
        t = t_8(m_7, t_47, o_47, t);
        t = genzip_4_0(n_7, r_7, t_7, w_7, t);
        if(match_cons(t, sym__2))
          {
            g_47 = ATgetArgument(t, 0);
            n_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, e_47, (ATerm)ATempty, g_47, d_95)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, c_95, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_47), (ATerm)ATempty, n_47)));
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = d_95;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, c_95, d_95));
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_95 = ATgetFirst((ATermList) t);
      u_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_95, u_95);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(match_cons(n_29, sym__2))
        {
          v_95 = ATgetArgument(n_29, 0);
          w_95 = ATgetArgument(n_29, 1);
        }
      else
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(match_cons(o_29, sym__2))
          {
            x_95 = ATgetArgument(o_29, 0);
            y_95 = ATgetArgument(o_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_95), v_95), (ATerm) ATinsert(CheckATermList(y_95), w_95));
  return(t);
}
static ATerm c_9 (ATerm t_86, ATerm s_86, ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,k_95 = NULL,l_95 = NULL,p_95 = NULL,r_95 = NULL,s_95 = NULL,m_6 = NULL;
  t = s_86;
  {
    static ATerm b_8 (ATerm t)
    {
      static ATerm c_8 (ATerm t)
      {
        t = t_86;
        return(t);
      }
      t = RowLet_1_0(c_8, t);
      return(t);
    }
    t = genzip_4_0(x_7, z_7, a_8, b_8, t);
  }
  s_95 = t;
  if(match_cons(t, sym__2))
    {
      l_95 = ATgetArgument(t, 0);
      p_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_95);
  k_95 = t;
  t = l_95;
  t = concat_0_0(t);
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_95, p_95);
  m_6 = t;
  t = SSLsetAnnotations(m_6, k_95);
  if(match_cons(t, sym__2))
    {
      h_95 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, h_95, (ATerm) ATmakeAppl(sym_Scope_2, t_86, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_p_29))), (ATerm) ATmakeAppl(sym_Matrix_1, i_95))));
  return(t);
}
static ATerm d_9 (ATerm q_122 (ATerm), ATerm p_48, ATerm n_48, ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL;
  c_96 = t;
  t = q_122(t);
  z_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_95, p_48, n_48);
  t = w_11(z_95, p_48, n_48, t);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_96 = NULL;
        t = term_s_29;
        h_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_95, term_s_29);
        t = v_11(z_95, h_96, t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_96 = ATgetFirst((ATermList) t);
      b_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_95, term_s_29, (ATerm) ATinsert(CheckATermList(b_96), (ATerm) ATinsert(CheckATermList(a_96), p_48)));
  t = lookup_table_0_1(z_95, t);
  g_96 = t;
  t = term_s_29;
  d_96 = t;
  t = (ATerm) ATinsert(CheckATermList(b_96), (ATerm) ATinsert(CheckATermList(a_96), p_48));
  e_96 = t;
  t = g_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(d_96, e_96, f_96, t);
  t = c_96;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
        {
          ATerm u_29 = ATgetFirst((ATermList) t_29);
          if(match_cons(u_29, sym_As_2))
            {
              ATerm v_29 = ATgetArgument(u_29, 0);
              ATerm w_29 = ATgetArgument(u_29, 1);
              if(!(match_cons(w_29, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          k_96 = (ATerm) ATgetNext((ATermList) t_29);
        }
      else
        _fail(t);
      l_96 = ATgetArgument(t, 1);
      m_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, k_96, l_96, m_96);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm i_96 = NULL;
  t = filter_1_0(d_8, t);
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, i_96);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm c_98 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, c_98), term_x_29);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm q_51 = NULL,x_51 = NULL;
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(q_51, x_51, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_97 = NULL,a_98 = NULL,b_98 = NULL;
  y_97 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = y_97;
      t = p_0(t);
      t = map_1_0(e_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          a_98 = ATgetArgument(t, 0);
          t = y_97;
          t = o_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((a_98 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = p_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              a_98 = ATgetArgument(t, 0);
              t = y_97;
              t = o_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((a_98 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = p_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  a_98 = ATgetArgument(t, 0);
                  t = y_97;
                  t = o_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((a_98 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = p_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm o_51 = NULL,p_51 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      a_98 = ATgetArgument(t, 0);
                      b_98 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_97;
                  t = o_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((a_98 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      o_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_98;
                  t = foldr_3_0(g_8, h_8, j_8, t);
                  p_51 = t;
                  t = o_51;
                  if((p_51 != t))
                    {
                      _fail(t);
                    }
                  t = b_98;
                }
            }
        }
    }
  return(t);
}
static ATerm f_9 (ATerm o_142 (ATerm), ATerm g_85, ATerm d_85, ATerm e_85, ATerm f_85, ATerm t)
{
  ATerm h_98 = NULL,k_98 = NULL;
  t = g_85;
  t = o_142(t);
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_98, e_85);
  t = conc_0_0(t);
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, d_85, k_98, f_85);
  return(t);
}
static ATerm g_9 (ATerm z_84, ATerm a_85, ATerm b_85, ATerm t)
{
  ATerm m_98 = NULL;
  t = z_84;
  {
    static ATerm l_8 (ATerm t)
    {
      ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL;
      static ATerm w_8 (ATerm t)
      {
        static ATerm x_8 (ATerm t)
        {
          t = a_85;
          return(t);
        }
        static ATerm z_8 (ATerm t)
        {
          t = b_85;
          return(t);
        }
        t = MatchCons_2_0(x_8, z_8, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm y_29 = ATgetArgument(t, 0);
          if(((ATgetType(y_29) == AT_LIST) && !(ATisEmpty(y_29))))
            {
              ATerm z_29 = ATgetFirst((ATermList) y_29);
              if(match_cons(z_29, sym_As_2))
                {
                  ATerm a_30 = ATgetArgument(z_29, 0);
                  p_98 = ATgetArgument(z_29, 1);
                }
              else
                _fail(t);
              q_98 = (ATerm) ATgetNext((ATermList) y_29);
            }
          else
            _fail(t);
          r_98 = ATgetArgument(t, 1);
          s_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_9(w_8, p_98, q_98, r_98, s_98, t);
      return(t);
    }
    t = filter_1_0(l_8, t);
  }
  m_98 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, a_85, b_85, (ATerm) ATmakeAppl(sym_Matrix_1, m_98));
  return(t);
}
ATerm filter_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
  e_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_99;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_99 = ATgetFirst((ATermList) t);
          g_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_52 = NULL,p_52 = NULL,q_52 = NULL,s_6 = NULL;
            t = SSLgetAnnotations(e_99);
            m_52 = t;
            t = f_99;
            t = y_129(t);
            p_52 = t;
            t = g_99;
            t = filter_1_0(y_129, t);
            q_52 = t;
            t = (ATerm) ATinsert(CheckATermList(q_52), p_52);
            s_6 = t;
            t = SSLsetAnnotations(s_6, m_52);
            LocalPopChoice(d_30);
          }
        else
          {
            t = b_30;
            t = g_99;
            t = filter_1_0(y_129, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  static ATerm c_100 (ATerm t)
  {
    ATerm x_99 = NULL,y_99 = NULL,b_100 = NULL;
    t = p_124(t);
    x_99 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_99;
      }
    else
      {
        ATerm r_53 = NULL,u_53 = NULL,y_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_99 = ATgetFirst((ATermList) t);
            b_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_99);
        r_53 = t;
        t = b_100;
        t = c_100(t);
        u_53 = t;
        t = (ATerm) ATinsert(CheckATermList(u_53), y_99);
        y_6 = t;
        t = SSLsetAnnotations(y_6, r_53);
      }
    return(t);
  }
  t = c_100(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL;
  if(match_cons(t, sym__2))
    {
      w_101 = ATgetArgument(t, 0);
      x_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(w_101, x_101, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm z_101 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      if(match_cons(e_30, sym_Off_1))
        {
          z_101 = ATgetArgument(e_30, 0);
        }
      else
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, z_101);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,u_100 = NULL,w_100 = NULL,a_101 = NULL,d_101 = NULL;
  p_100 = t;
  if(match_cons(t, sym_Row_3))
    {
      q_100 = ATgetArgument(t, 0);
      {
        ATerm l_30 = ATgetArgument(t, 1);
      }
      {
        ATerm m_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_100 = ATgetFirst((ATermList) t);
      {
        ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_100;
  if(match_cons(t, sym_As_2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      w_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_100;
  if(match_cons(t, sym_Str_1))
    {
      a_101 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, a_101), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          a_101 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, a_101), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              a_101 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, a_101), (ATerm) ATempty);
            }
          else
            {
              ATerm p_101 = NULL,r_101 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  a_101 = ATgetArgument(t, 0);
                  d_101 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_101;
              t = foldr_3_0(b_9, e_9, h_9, t);
              p_101 = t;
              t = d_101;
              t = map_1_0(j_9, t);
              r_101 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, a_101, p_101), r_101);
            }
        }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  h_102 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_102 = ATgetFirst((ATermList) t);
      g_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_102 = NULL;
            t = g_102;
            {
              static ATerm p_9 (ATerm t)
              {
                ATerm v_30 = t;
                if((PushChoice() == 0))
                  {
                    if((f_102 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_30;
                  }
                return(t);
              }
              t = filter_1_0(p_9, t);
            }
            k_102 = t;
            t = (ATerm) ATinsert(CheckATermList(k_102), f_102);
            LocalPopChoice(u_30);
          }
        else
          {
            t = p_30;
            t = h_102;
          }
      }
    }
  else
    {
      t = h_102;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(n_9, t);
  return(t);
}
static ATerm z_104 (ATerm g_103, ATerm t)
{
  ATerm h_103 = NULL;
  t = SSL_explode_string(g_103);
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_105 (ATerm t)
        {
          ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
          g_104 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_104 = ATgetFirst((ATermList) t);
              i_104 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_54 = NULL,q_54 = NULL,a_7 = NULL;
                t = SSLgetAnnotations(g_104);
                k_54 = t;
                t = i_104;
                t = a_105(t);
                q_54 = t;
                t = (ATerm) ATinsert(CheckATermList(q_54), h_104);
                a_7 = t;
                t = SSLsetAnnotations(a_7, k_54);
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
                {
                  ATerm c_55 = NULL,b_7 = NULL;
                  t = SSLgetAnnotations(g_104);
                  c_55 = t;
                  t = h_104;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, h_104);
                  b_7 = t;
                  t = SSLsetAnnotations(b_7, c_55);
                }
              }
          }
          return(t);
        }
        t = a_105(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
  }
  h_103 = t;
  t = SSL_implode_string(h_103);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,v_104 = NULL;
  v_104 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_104 = ATgetFirst((ATermList) t);
            {
              ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_31);
        t = j_104;
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  k_104 = ATgetArgument(t, 0);
                  {
                    ATerm f_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm g_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(e_31);
              t = k_104;
              {
                ATerm i_31 = t;
                int j_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        l_104 = ATgetFirst((ATermList) t);
                        {
                          ATerm k_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_31);
                    t = l_104;
                    {
                      ATerm l_31 = t;
                      int m_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              m_104 = ATgetArgument(t, 0);
                              {
                                ATerm o_31 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_31);
                          t = m_104;
                          if(match_cons(t, sym_Off_1))
                            {
                              n_104 = ATgetArgument(t, 0);
                              t = n_104;
                            }
                          else
                            {
                              t = z_104(v_104, t);
                            }
                        }
                      else
                        {
                          t = l_31;
                          t = z_104(v_104, t);
                        }
                    }
                  }
                else
                  {
                    t = i_31;
                    t = z_104(v_104, t);
                  }
              }
            }
          else
            {
              t = d_31;
              t = z_104(v_104, t);
            }
        }
      }
    else
      {
        t = a_31;
        t = z_104(v_104, t);
      }
  }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      ATerm q_31 = ATgetArgument(t, 1);
      if(((ATgetType(q_31) != AT_LIST) || !(ATisEmpty(q_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL;
  if(match_cons(t, sym__2))
    {
      m_105 = ATgetArgument(t, 0);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
          {
            n_105 = ATgetFirst((ATermList) r_31);
            o_105 = (ATerm) ATgetNext((ATermList) r_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_105, n_105), (ATerm) ATmakeAppl(sym__2, m_105, o_105));
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL;
  if(match_cons(t, sym__2))
    {
      q_105 = ATgetArgument(t, 0);
      r_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_105), q_105);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL;
  if(match_cons(t, sym__2))
    {
      s_105 = ATgetArgument(t, 0);
      {
        ATerm s_31 = ATgetArgument(t, 1);
        if(match_cons(s_31, sym__2))
          {
            t_105 = ATgetArgument(s_31, 0);
            u_105 = ATgetArgument(s_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_9(s_105, t_105, u_105, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm k_9 (ATerm m_86, ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL;
  t = m_86;
  t = get_path_0_0(t);
  f_105 = t;
  t = m_86;
  t = outedges_0_0(t);
  g_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_86, g_105);
  t = genzip_4_0(r_9, t_9, x_9, e_10, t);
  h_105 = t;
  t = m_86;
  t = default_state_0_0(t);
  i_105 = t;
  t = new_0_0(t);
  j_105 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, m_86);
  k_105 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, j_105);
  l_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, m_86), (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, j_105));
  t = d_9(g_10, k_105, l_105, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, j_105, (ATerm)ATmakeAppl(sym_Var_1, f_105), h_105, i_105);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm e_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL,w_106 = NULL,x_106 = NULL,i_7 = NULL,g_7 = NULL,f_7 = NULL;
  x_106 = t;
  if(match_cons(t, sym_Row_3))
    {
      h_106 = ATgetArgument(t, 0);
      i_106 = ATgetArgument(t, 1);
      j_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_106);
  e_106 = t;
  t = h_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_106 = ATgetFirst((ATermList) t);
      m_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_106);
  k_106 = t;
  t = l_106;
  if(match_cons(t, sym_As_2))
    {
      s_106 = ATgetArgument(t, 0);
      t_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_106);
  r_106 = t;
  t = t_106;
  {
    ATerm w_31 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_31;
      }
  }
  u_106 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, s_106, u_106);
  f_7 = t;
  t = SSLsetAnnotations(f_7, r_106);
  w_106 = t;
  t = (ATerm) ATinsert(CheckATermList(m_106), w_106);
  g_7 = t;
  t = SSLsetAnnotations(g_7, k_106);
  n_106 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, n_106, i_106, j_106);
  i_7 = t;
  t = SSLsetAnnotations(i_7, e_106);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      a_107 = ATgetArgument(t, 0);
      {
        ATerm x_31 = ATgetArgument(t, 1);
        if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
          {
            b_107 = ATgetFirst((ATermList) x_31);
            c_107 = (ATerm) ATgetNext((ATermList) x_31);
          }
        else
          _fail(t);
      }
      d_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(a_107), b_107), c_107, d_107);
  return(t);
}
static ATerm m_9 (ATerm c_86, ATerm t)
{
  ATerm v_105 = NULL;
  t = c_86;
  {
    ATerm y_31 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(k_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_31;
      }
  }
  t = c_86;
  t = map_1_0(l_10, t);
  v_105 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_105);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,u_7 = NULL,q_7 = NULL,p_7 = NULL;
  u_107 = t;
  if(match_cons(t, sym_Row_3))
    {
      g_107 = ATgetArgument(t, 0);
      i_107 = ATgetArgument(t, 1);
      j_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_107);
  f_107 = t;
  t = i_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_107 = ATgetFirst((ATermList) t);
      p_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_107);
  l_107 = t;
  t = m_107;
  if(match_cons(t, sym_As_2))
    {
      r_107 = ATgetArgument(t, 0);
      s_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_107);
  q_107 = t;
  t = s_107;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, r_107, s_107);
  p_7 = t;
  t = SSLsetAnnotations(p_7, q_107);
  t_107 = t;
  t = (ATerm) ATinsert(CheckATermList(p_107), t_107);
  q_7 = t;
  t = SSLsetAnnotations(q_7, l_107);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_31 = ATgetFirst((ATermList) t);
      k_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, g_107, k_107, j_107);
  u_7 = t;
  t = SSLsetAnnotations(u_7, f_107);
  return(t);
}
static ATerm o_9 (ATerm a_86, ATerm t)
{
  ATerm e_107 = NULL;
  t = a_86;
  t = map_1_0(m_10, t);
  e_107 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, e_107);
  return(t);
}
ATerm repeat_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t)
{
  static ATerm v_107 (ATerm t)
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_116(t);
        t = v_107(t);
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = t_116(t);
      }
    return(t);
  }
  t = v_107(t);
  return(t);
}
static ATerm q_9 (ATerm y_49, ATerm z_49, ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL;
  x_107 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_49, z_49);
        t = v_11(y_49, z_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_32 = ATgetFirst((ATermList) t);
            w_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_32);
        {
          ATerm a_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, y_49, z_49, w_107);
          t = lookup_table_0_1(y_49, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(z_49, w_107, a_108, t);
          t = (ATerm) ATmakeAppl(sym__3, y_49, z_49, w_107);
        }
      }
    else
      {
        t = d_32;
        {
          ATerm e_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, y_49, z_49);
          t = lookup_table_0_1(y_49, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(z_49, e_108, t);
          t = (ATerm) ATmakeAppl(sym__2, y_49, z_49);
        }
      }
  }
  t = x_107;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm g_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL,m_108 = NULL,p_108 = NULL,q_108 = NULL;
  l_108 = t;
  t = n_122(t);
  k_108 = t;
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_108 = NULL;
        t = term_s_29;
        s_108 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_108, term_s_29);
        t = v_11(k_108, s_108, t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_108 = ATgetFirst((ATermList) t);
      g_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_108, term_s_29, g_108);
  t = lookup_table_0_1(k_108, t);
  q_108 = t;
  t = term_s_29;
  m_108 = t;
  t = q_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(m_108, g_108, p_108, t);
  t = j_108;
  {
    static ATerm n_10 (ATerm t)
    {
      ATerm t_108 = NULL;
      t_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_108, t_108);
      t = q_9(k_108, t_108, t);
      return(t);
    }
    t = map_1_0(n_10, t);
  }
  t = l_108;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t)
{
  ATerm i_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_114(t);
      t = f_114(t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = i_32;
      t = f_114(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_122 (ATerm), ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL;
  y_108 = t;
  t = m_122(t);
  x_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_108, term_s_29);
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_109 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_32 = ATgetArgument(t, 0);
            ATerm o_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_29;
        o_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_108, term_s_29);
        t = v_11(x_108, o_109, t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATempty;
      }
  }
  b_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_108, term_s_29, (ATerm) ATinsert(CheckATermList(b_109), (ATerm) ATempty));
  t = lookup_table_0_1(x_108, t);
  f_109 = t;
  t = term_s_29;
  c_109 = t;
  t = (ATerm) ATinsert(CheckATermList(b_109), (ATerm) ATempty);
  d_109 = t;
  t = f_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(c_109, d_109, e_109, t);
  t = y_108;
  return(t);
}
ATerm scope_2_0 (ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm t)
{
  static ATerm q_10 (ATerm t)
  {
    t = end_scope_1_0(o_122, t);
    return(t);
  }
  t = begin_scope_1_0(o_122, t);
  t = restore_always_2_0(p_122, q_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  static ATerm l_111 (ATerm t)
  {
    ATerm g_111 = NULL,j_111 = NULL,k_111 = NULL;
    k_111 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_111 = ATgetFirst((ATermList) t);
        j_111 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_55 = NULL,p_55 = NULL,f_8 = NULL;
          t = SSLgetAnnotations(k_111);
          m_55 = t;
          t = j_111;
          t = l_111(t);
          p_55 = t;
          t = (ATerm) ATinsert(CheckATermList(p_55), g_111);
          f_8 = t;
          t = SSLsetAnnotations(f_8, m_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_111;
        t = w_123(t);
      }
    return(t);
  }
  t = l_111(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,g_110 = NULL;
  u_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_109;
    }
  else
    {
      static ATerm r_10 (ATerm t)
      {
        t = not_null(g_110);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_109 = ATgetFirst((ATermList) t);
          if(((g_110 != NULL) && (g_110 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_109;
      t = at_end_1_0(r_10, t);
    }
  return(t);
}
static ATerm x_111 (ATerm p_111, ATerm t)
{
  ATerm q_111 = NULL;
  t = SSL_explode_term(p_111);
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_111;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL;
  u_111 = t;
  if(match_cons(t, sym__2))
    {
      s_111 = ATgetArgument(t, 0);
      t_111 = ATgetArgument(t, 1);
      {
        ATerm q_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_10 (ATerm t)
            {
              t = t_111;
              return(t);
            }
            t = s_111;
            t = at_end_1_0(s_10, t);
            LocalPopChoice(t_32);
          }
        else
          {
            t = q_32;
            t = x_111(u_111, t);
          }
      }
    }
  else
    {
      t = x_111(u_111, t);
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm u_113 = NULL;
  if(match_cons(t, sym__2))
    {
      u_113 = ATgetArgument(t, 0);
      if((u_113 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm c_114 = NULL;
  if(match_cons(t, sym__2))
    {
      c_114 = ATgetArgument(t, 0);
      if((c_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm l_114 = NULL;
  if(match_cons(t, sym__2))
    {
      l_114 = ATgetArgument(t, 0);
      if((l_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm t_114 = NULL;
  if(match_cons(t, sym__2))
    {
      t_114 = ATgetArgument(t, 0);
      if((t_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm b_115 = NULL;
  if(match_cons(t, sym__2))
    {
      b_115 = ATgetArgument(t, 0);
      if((b_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm i_115 = NULL;
  if(match_cons(t, sym__2))
    {
      i_115 = ATgetArgument(t, 0);
      if((i_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixMerge_0_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      e_113 = ATgetArgument(t, 0);
      l_113 = ATgetArgument(t, 1);
      t = e_113;
      if(match_cons(t, sym_Matrix_2))
        {
          f_113 = ATgetArgument(t, 0);
          g_113 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_113;
      if(match_cons(t, sym_Choice_2))
        {
          b_113 = ATgetArgument(t, 0);
          c_113 = ATgetArgument(t, 1);
          {
            ATerm r_113 = NULL,s_113 = NULL;
            t = b_113;
            if(match_cons(t, sym_Matrix_2))
              {
                z_112 = ATgetArgument(t, 0);
                a_113 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, f_113, z_112);
            t = y_10(t_10, f_113, z_112, t);
            r_113 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_113, a_113);
            t = conc_0_0(t);
            s_113 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, r_113, s_113), c_113);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              b_113 = ATgetArgument(t, 0);
              c_113 = ATgetArgument(t, 1);
              {
                ATerm a_114 = NULL,b_114 = NULL;
                t = b_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    z_112 = ATgetArgument(t, 0);
                    a_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, f_113, z_112);
                t = y_10(u_10, f_113, z_112, t);
                a_114 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_113, a_113);
                t = conc_0_0(t);
                b_114 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, a_114, b_114), c_113);
              }
            }
          else
            {
              ATerm j_114 = NULL,k_114 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  b_113 = ATgetArgument(t, 0);
                  c_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_113, b_113);
              t = y_10(v_10, f_113, b_113, t);
              j_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_113, c_113);
              t = conc_0_0(t);
              k_114 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, j_114, k_114);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          e_113 = ATgetArgument(t, 0);
          l_113 = ATgetArgument(t, 1);
          t = e_113;
          if(match_cons(t, sym_Matrix_2))
            {
              f_113 = ATgetArgument(t, 0);
              g_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_113;
          if(match_cons(t, sym_LChoice_2))
            {
              b_113 = ATgetArgument(t, 0);
              c_113 = ATgetArgument(t, 1);
              {
                ATerm r_114 = NULL,s_114 = NULL;
                t = b_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    z_112 = ATgetArgument(t, 0);
                    a_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, f_113, z_112);
                t = y_10(w_10, f_113, z_112, t);
                r_114 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_113, a_113);
                t = conc_0_0(t);
                s_114 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, r_114, s_114), c_113);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  b_113 = ATgetArgument(t, 0);
                  c_113 = ATgetArgument(t, 1);
                  {
                    ATerm z_114 = NULL,a_115 = NULL;
                    t = b_113;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        z_112 = ATgetArgument(t, 0);
                        a_113 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, f_113, z_112);
                    t = y_10(z_10, f_113, z_112, t);
                    z_114 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_113, a_113);
                    t = conc_0_0(t);
                    a_115 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, z_114, a_115), c_113);
                  }
                }
              else
                {
                  ATerm g_115 = NULL,h_115 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      b_113 = ATgetArgument(t, 0);
                      c_113 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_113, b_113);
                  t = y_10(a_11, f_113, b_113, t);
                  g_115 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_113, c_113);
                  t = conc_0_0(t);
                  h_115 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, g_115, h_115);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              e_113 = ATgetArgument(t, 0);
              l_113 = ATgetArgument(t, 1);
              {
                ATerm r_115 = NULL;
                t = l_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    b_113 = ATgetArgument(t, 0);
                    c_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_113;
                {
                  static ATerm b_11 (ATerm t)
                  {
                    ATerm s_115 = NULL,t_115 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        s_115 = ATgetArgument(t, 0);
                        t_115 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, s_115, (ATerm) ATmakeAppl(sym_Scope_2, e_113, t_115));
                    return(t);
                  }
                  t = map_1_0(b_11, t);
                }
                r_115 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, b_113, r_115);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  e_113 = ATgetArgument(t, 0);
                  l_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_113;
              if(match_cons(t, sym_Matrix_2))
                {
                  f_113 = ATgetArgument(t, 0);
                  g_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_113;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_113 = ATgetFirst((ATermList) t);
                  k_113 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_113;
              if(match_cons(t, sym_Row_2))
                {
                  i_113 = ATgetArgument(t, 0);
                  j_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_113;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, f_113, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, i_113, (ATerm) ATmakeAppl(sym_Seq_2, j_113, l_113))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  static ATerm d_11 (ATerm t)
  {
    t = bottomup_1_0(y_110, t);
    return(t);
  }
  t = SRTS_all(d_11, t);
  t = y_110(t);
  return(t);
}
static ATerm x_10 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm i_56, ATerm h_56, ATerm t)
{
  t = d_126(t);
  {
    static ATerm e_11 (ATerm t)
    {
      ATerm z_115 = NULL;
      z_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_56, z_115);
      t = c_126(t);
      return(t);
    }
    t = fetch_1_0(e_11, t);
  }
  t = h_56;
  return(t);
}
static ATerm y_10 (ATerm z_125 (ATerm), ATerm e_56, ATerm d_56, ATerm t)
{
  static ATerm p_116 (ATerm t)
  {
    ATerm k_116 = NULL,l_116 = NULL,m_116 = NULL;
    k_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_56;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_116 = ATgetFirst((ATermList) t);
            m_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_116;
              {
                static ATerm f_11 (ATerm t)
                {
                  t = d_56;
                  return(t);
                }
                t = x_10(z_125, f_11, l_116, m_116, t);
              }
              t = p_116(t);
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              {
                ATerm x_55 = NULL,g_56 = NULL,i_8 = NULL;
                t = SSLgetAnnotations(k_116);
                x_55 = t;
                t = m_116;
                t = p_116(t);
                g_56 = t;
                t = (ATerm) ATinsert(CheckATermList(g_56), l_116);
                i_8 = t;
                t = SSLsetAnnotations(i_8, x_55);
              }
            }
        }
      }
    return(t);
  }
  t = e_56;
  t = p_116(t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t)
{
  ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL;
  v_116 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_116;
      t = w_128(t);
    }
  else
    {
      ATerm a_117 = NULL,b_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_116 = ATgetFirst((ATermList) t);
          x_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_116;
      t = y_128(t);
      a_117 = t;
      t = x_116;
      t = foldr_3_0(w_128, x_128, y_128, t);
      b_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_117, b_117);
      t = x_128(t);
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm t)
{
  ATerm w_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_117 = NULL;
      t = t_127(t);
      e_117 = t;
      t = (ATerm) ATinsert(ATempty, e_117);
      LocalPopChoice(y_32);
    }
  else
    {
      t = w_32;
      {
        ATerm n_56 = NULL,o_56 = NULL;
        static ATerm i_11 (ATerm t)
        {
          t = collect_om_2_0(t_127, u_127, t);
          return(t);
        }
        o_56 = t;
        t = SSL_explode_term(o_56);
        if(match_cons(t, sym__2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            n_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_56;
        t = foldr_3_0(g_11, u_127, i_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm q_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL;
  if(match_cons(t, sym_As_2))
    {
      t_117 = ATgetArgument(t, 0);
      v_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_117;
  if(match_cons(t, sym_Var_1))
    {
      u_117 = ATgetArgument(t, 0);
      t = v_117;
      if(match_cons(t, sym_As_2))
        {
          w_117 = ATgetArgument(t, 0);
          {
            ATerm b_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_117;
      if(match_cons(t, sym_Off_1))
        {
          q_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, u_117), (ATerm) ATmakeAppl(sym_Var_1, q_117)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          u_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_117;
      if(match_cons(t, sym_Var_1))
        {
          w_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, w_117), (ATerm) ATmakeAppl(sym_Var_1, u_117)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,v_118 = NULL,w_118 = NULL;
  r_118 = t;
  if(match_cons(t, sym_As_2))
    {
      s_118 = ATgetArgument(t, 0);
      v_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_118;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_33);
        t = v_118;
        if(match_cons(t, sym_As_2))
          {
            w_118 = ATgetArgument(t, 0);
            q_118 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_118;
        if(match_cons(t, sym_Off_1))
          {
            p_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, p_118), q_118);
      }
    else
      {
        t = c_33;
        if(match_cons(t, sym_Off_1))
          {
            t_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_118;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_118;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_118;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_33 = ATgetFirst((ATermList) t);
                ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_118;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_118), term_x_29);
      }
  }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_119 = ATgetFirst((ATermList) t);
      o_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_119, o_119);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if(match_cons(i_33, sym__2))
        {
          p_119 = ATgetArgument(i_33, 0);
          q_119 = ATgetArgument(i_33, 1);
        }
      else
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(match_cons(k_33, sym__2))
          {
            r_119 = ATgetArgument(k_33, 0);
            s_119 = ATgetArgument(k_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_119), p_119), (ATerm) ATinsert(CheckATermList(s_119), q_119));
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm t_119 = NULL,u_119 = NULL;
  if(match_cons(t, sym__2))
    {
      t_119 = ATgetArgument(t, 0);
      u_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(f_12, t_119, u_119, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm v_119 = NULL;
  if(match_cons(t, sym__2))
    {
      v_119 = ATgetArgument(t, 0);
      if((v_119 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm w_119 = NULL;
  if(match_cons(t, sym__2))
    {
      w_119 = ATgetArgument(t, 0);
      if((w_119 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t)
{
  ATerm a_119 = NULL,b_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL;
  k_119 = t;
  l_119 = t;
  t = SSL_explode_term(l_119);
  if(match_cons(t, sym__2))
    {
      c_119 = ATgetArgument(t, 0);
      a_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_119);
  e_119 = t;
  t = a_119;
  t = genzip_4_0(s_11, x_11, b_12, w_126, t);
  if(match_cons(t, sym__2))
    {
      d_119 = ATgetArgument(t, 0);
      b_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(c_119, d_119);
  j_119 = t;
  t = SSLsetAnnotations(j_119, e_119);
  t = x_126(t);
  if(match_cons(t, sym__2))
    {
      f_119 = ATgetArgument(t, 0);
      g_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_119;
  t = foldr_2_0(d_12, e_12, t);
  i_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_119, i_119);
  t = y_10(g_12, g_119, i_119, t);
  h_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_119, h_119);
  return(t);
}
ATerm collect_split_2_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t)
{
  static ATerm f_120 (ATerm t)
  {
    static ATerm i_12 (ATerm t)
    {
      ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL;
      c_120 = t;
      {
        ATerm l_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_127(t);
            LocalPopChoice(n_33);
          }
        else
          {
            t = l_33;
          }
      }
      a_120 = t;
      t = c_120;
      {
        ATerm s_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_127(t);
            LocalPopChoice(u_33);
          }
        else
          {
            t = s_33;
            t = (ATerm) ATempty;
          }
      }
      b_120 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_120, b_120);
      return(t);
    }
    t = CollectSplit_2_0(f_120, i_12, t);
    return(t);
  }
  t = f_120(t);
  return(t);
}
ATerm genzip_4_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm t)
{
  static ATerm m_120 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_115(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL,l_120 = NULL,k_8 = NULL;
          t = k_115(t);
          l_120 = t;
          if(match_cons(t, sym__2))
            {
              h_120 = ATgetArgument(t, 0);
              i_120 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_120);
          g_120 = t;
          t = h_120;
          t = m_115(t);
          j_120 = t;
          t = i_120;
          t = m_120(t);
          k_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_120, k_120);
          k_8 = t;
          t = SSLsetAnnotations(k_8, g_120);
          t = l_115(t);
        }
      }
    return(t);
  }
  t = m_120(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      ATerm y_33 = ATgetArgument(t, 1);
      if(((ATgetType(y_33) != AT_LIST) || !(ATisEmpty(y_33))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL;
  if(match_cons(t, sym__2))
    {
      p_120 = ATgetArgument(t, 0);
      {
        ATerm a_34 = ATgetArgument(t, 1);
        if(((ATgetType(a_34) == AT_LIST) && !(ATisEmpty(a_34))))
          {
            q_120 = ATgetFirst((ATermList) a_34);
            r_120 = (ATerm) ATgetNext((ATermList) a_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_m_17;
  t_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_120, term_m_17);
  t = r_11(p_120, t_120, t);
  s_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_120, q_120), (ATerm) ATmakeAppl(sym__2, s_120, r_120));
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL;
  if(match_cons(t, sym__2))
    {
      u_120 = ATgetArgument(t, 0);
      v_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_120), u_120);
  return(t);
}
ATerm nzip0_1_0 (ATerm u_115 (ATerm), ATerm t)
{
  ATerm n_120 = NULL;
  n_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_29, n_120);
  t = genzip_4_0(k_12, n_12, p_12, u_115, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm a_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL;
  if(match_cons(t, sym_As_2))
    {
      c_121 = ATgetArgument(t, 0);
      e_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_121;
  if(match_cons(t, sym_Off_1))
    {
      d_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_121;
  {
    ATerm c_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm f_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_34);
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm r_12 (ATerm t)
              {
                ATerm j_121 = NULL,k_121 = NULL;
                if(match_cons(t, sym__2))
                  {
                    j_121 = ATgetArgument(t, 0);
                    k_121 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_121), j_121)), k_121);
                return(t);
              }
              t = e_121;
              t = nzip0_1_0(r_12, t);
              LocalPopChoice(h_34);
            }
          else
            {
              t = g_34;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_121), term_x_29);
            }
        }
      }
    else
      {
        t = c_34;
        if(match_cons(t, sym_As_2))
          {
            f_121 = ATgetArgument(t, 0);
            g_121 = ATgetArgument(t, 1);
            t = f_121;
            if(match_cons(t, sym_Var_1))
              {
                a_121 = ATgetArgument(t, 0);
                {
                  ATerm i_34 = t;
                  int j_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm t_12 (ATerm t)
                      {
                        ATerm o_121 = NULL,p_121 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            o_121 = ATgetArgument(t, 0);
                            p_121 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_121), o_121)), p_121);
                        return(t);
                      }
                      t = e_121;
                      t = nzip0_1_0(t_12, t);
                      LocalPopChoice(j_34);
                    }
                  else
                    {
                      t = i_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_121), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_121), g_121));
                    }
                }
              }
            else
              {
                static ATerm u_12 (ATerm t)
                {
                  ATerm v_121 = NULL,w_121 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      v_121 = ATgetArgument(t, 0);
                      w_121 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_121), v_121)), w_121);
                  return(t);
                }
                t = e_121;
                t = nzip0_1_0(u_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                f_121 = ATgetArgument(t, 0);
                g_121 = ATgetArgument(t, 1);
                {
                  ATerm k_34 = t;
                  int l_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm v_12 (ATerm t)
                      {
                        ATerm z_121 = NULL,a_122 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            z_121 = ATgetArgument(t, 0);
                            a_122 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_121), z_121)), a_122);
                        return(t);
                      }
                      t = e_121;
                      t = nzip0_1_0(v_12, t);
                      LocalPopChoice(l_34);
                    }
                  else
                    {
                      t = k_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_121), (ATerm) ATmakeAppl(sym_Op_2, f_121, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_121), g_121)));
                    }
                }
              }
            else
              {
                static ATerm w_12 (ATerm t)
                {
                  ATerm g_122 = NULL,h_122 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      g_122 = ATgetArgument(t, 0);
                      h_122 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_121), g_122)), h_122);
                  return(t);
                }
                t = e_121;
                t = nzip0_1_0(w_12, t);
              }
          }
      }
  }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL;
  x_122 = t;
  if(match_cons(t, sym_As_2))
    {
      v_122 = ATgetArgument(t, 0);
      w_122 = ATgetArgument(t, 1);
      t = v_122;
      if(match_cons(t, sym_Wld_0))
        {
          t = w_122;
        }
      else
        {
          t = x_122;
        }
    }
  else
    {
      t = x_122;
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm h_123 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      h_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_123;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL;
  if(match_cons(t, sym__2))
    {
      i_123 = ATgetArgument(t, 0);
      j_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(c_13, i_123, j_123, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm k_123 = NULL;
  if(match_cons(t, sym__2))
    {
      k_123 = ATgetArgument(t, 0);
      if((k_123 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  u_122 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_s_34, (ATerm) ATinsert(ATempty, u_122));
  t = topdown_1_0(x_12, t);
  t = topdown_1_0(y_12, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      r_122 = ATgetArgument(t, 0);
      s_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_122;
  t = collect_om_2_0(z_12, a_13, t);
  t_122 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, t_122, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, r_122, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_122), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_p_29)))))));
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = repeat_2_0(e_13, _id, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm f_126 (ATerm t)
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_124 = NULL,z_124 = NULL,a_125 = NULL;
            y_124 = t;
            if(match_cons(t, sym_Choice_2))
              {
                z_124 = ATgetArgument(t, 0);
                a_125 = ATgetArgument(t, 1);
                {
                  ATerm d_57 = NULL,g_57 = NULL,h_57 = NULL,r_8 = NULL;
                  t = SSLgetAnnotations(y_124);
                  d_57 = t;
                  t = z_124;
                  t = f_126(t);
                  g_57 = t;
                  t = a_125;
                  t = f_126(t);
                  h_57 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_57, h_57);
                  r_8 = t;
                  t = SSLsetAnnotations(r_8, d_57);
                }
              }
            else
              {
                ATerm p_57 = NULL,s_57 = NULL,t_57 = NULL,s_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    z_124 = ATgetArgument(t, 0);
                    a_125 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_124);
                p_57 = t;
                t = z_124;
                t = f_126(t);
                s_57 = t;
                t = a_125;
                t = f_126(t);
                t_57 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, s_57, t_57);
                s_8 = t;
                t = SSLsetAnnotations(s_8, p_57);
              }
            LocalPopChoice(z_34);
          }
        else
          {
            t = y_34;
            {
              static ATerm i_126 (ATerm t)
              {
                ATerm b_35 = t;
                int c_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL;
                    x_125 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        y_125 = ATgetArgument(t, 0);
                        w_125 = ATgetArgument(t, 1);
                        {
                          ATerm m_58 = NULL,p_58 = NULL,q_58 = NULL,o_10 = NULL;
                          t = SSLgetAnnotations(x_125);
                          m_58 = t;
                          t = y_125;
                          t = i_126(t);
                          p_58 = t;
                          t = w_125;
                          t = match_to_matrix_0_0(t);
                          q_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_58, q_58);
                          o_10 = t;
                          t = SSLsetAnnotations(o_10, m_58);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            y_125 = ATgetArgument(t, 0);
                            w_125 = ATgetArgument(t, 1);
                            {
                              ATerm f_59 = NULL,m_59 = NULL,p_10 = NULL;
                              t = SSLgetAnnotations(x_125);
                              f_59 = t;
                              t = w_125;
                              t = i_126(t);
                              m_59 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, y_125, m_59);
                              p_10 = t;
                              t = SSLsetAnnotations(p_10, f_59);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                y_125 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = y_125;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(c_35);
                  }
                else
                  {
                    t = b_35;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = i_126(t);
            }
          }
        return(t);
      }
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_123 = NULL,v_123 = NULL,y_123 = NULL,z_123 = NULL,p_8 = NULL;
          z_123 = t;
          if(match_cons(t, sym_Choice_2))
            {
              v_123 = ATgetArgument(t, 0);
              y_123 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_123);
          u_123 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, v_123, y_123);
          p_8 = t;
          t = SSLsetAnnotations(p_8, u_123);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm a_124 = NULL,b_124 = NULL,c_124 = NULL,d_124 = NULL,q_8 = NULL;
            d_124 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                b_124 = ATgetArgument(t, 0);
                c_124 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_124);
            a_124 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_124, c_124);
            q_8 = t;
            t = SSLsetAnnotations(q_8, a_124);
          }
        }
      t = f_126(t);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(d_13, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_t_31;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_126 = NULL,t_126 = NULL,u_126 = NULL;
      s_126 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          t_126 = ATgetArgument(t, 0);
          {
            ATerm h_35 = t;
            int i_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_126 = NULL;
                t = t_126;
                t = map_1_0(m_13, t);
                y_126 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, y_126);
                LocalPopChoice(i_35);
              }
            else
              {
                t = h_35;
                {
                  ATerm j_35 = t;
                  int k_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_126;
                      t = o_9(t_126, t);
                      LocalPopChoice(k_35);
                    }
                  else
                    {
                      t = j_35;
                      {
                        ATerm o_35 = t;
                        int v_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = s_126;
                            t = m_9(t_126, t);
                            LocalPopChoice(v_35);
                          }
                        else
                          {
                            t = o_35;
                            t = s_126;
                            t = k_9(t_126, t);
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Matrix_2))
            {
              t_126 = ATgetArgument(t, 0);
              u_126 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_126;
          t = c_9(t_126, u_126, t);
        }
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm z_126 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(((ATgetType(w_35) != AT_LIST) || !(ATisEmpty(w_35))))
        _fail(t);
      {
        ATerm x_35 = ATgetArgument(t, 1);
        if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
          _fail(t);
      }
      z_126 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_126;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm i_13 (ATerm t)
    {
      t = repeat_2_0(j_13, _id, t);
      t = SRTS_all(i_13, t);
      return(t);
    }
    t = scope_2_0(f_13, i_13, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  static ATerm o_13 (ATerm t)
  {
    t = topdown_1_0(x_110, t);
    return(t);
  }
  t = x_110(t);
  t = SRTS_all(o_13, t);
  return(t);
}
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  static ATerm a_128 (ATerm t)
  {
    ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL;
    x_127 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_127;
      }
    else
      {
        ATerm x_59 = NULL,a_60 = NULL,b_60 = NULL,c_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_127 = ATgetFirst((ATermList) t);
            z_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_127);
        x_59 = t;
        t = y_127;
        t = f_123(t);
        a_60 = t;
        t = z_127;
        t = a_128(t);
        b_60 = t;
        t = (ATerm) ATinsert(CheckATermList(b_60), a_60);
        c_12 = t;
        t = SSLsetAnnotations(c_12, x_59);
      }
    return(t);
  }
  t = a_128(t);
  return(t);
}
static ATerm j_11 (ATerm l_40, ATerm m_40, ATerm t)
{
  ATerm c_128 = NULL;
  t = SSL_fputc(l_40, m_40);
  c_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_128);
  return(t);
}
static ATerm k_11 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm e_128 = NULL;
  t = SSL_write_term_to_stream_text(d_39, e_39);
  e_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_128);
  return(t);
}
static ATerm m_11 (ATerm h_118 (ATerm), ATerm h_275, ATerm j_39, ATerm t)
{
  ATerm f_128 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_275, term_y_35);
  t = q_11(t);
  f_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_128, j_39);
  t = h_118(t);
  t = fclose_0_0(t);
  t = j_39;
  return(t);
}
static ATerm l_11 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm g_128 = NULL;
  t = SSL_write_term_to_stream_baf(z_38, a_39);
  g_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_128);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if(match_cons(z_35, sym_Stream_1))
        {
          p_60 = ATgetArgument(z_35, 0);
        }
      else
        _fail(t);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(p_60, q_60, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if(match_cons(a_36, sym_Stream_1))
        {
          o_61 = ATgetArgument(a_36, 0);
        }
      else
        _fail(t);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(o_61, p_61, t);
  l_61 = t;
  t = term_b_36;
  m_61 = t;
  t = l_61;
  if(match_cons(t, sym_Stream_1))
    {
      n_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_36, l_61);
  t = j_11(m_61, n_61, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL,n_128 = NULL,o_128 = NULL,q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,z_128 = NULL,a_130 = NULL,b_130 = NULL,l_12 = NULL,j_12 = NULL;
  l_128 = t;
  if(match_cons(t, sym__2))
    {
      s_128 = ATgetArgument(t, 0);
      t_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_128);
  r_128 = t;
  t = s_128;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_128 != NULL) && (k_128 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_128 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_13, t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = term_e_36;
        k_128 = t;
      }
  }
  z_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_128, t_128);
  j_12 = t;
  t = SSLsetAnnotations(j_12, r_128);
  t = l_128;
  if(match_cons(t, sym__2))
    {
      n_128 = ATgetArgument(t, 0);
      o_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_128);
  m_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_128, (ATerm) ATmakeAppl(sym__2, not_null(k_128), o_128));
  l_12 = t;
  t = SSLsetAnnotations(l_12, m_128);
  q_128 = t;
  if(match_cons(t, sym__2))
    {
      a_130 = ATgetArgument(t, 0);
      b_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,m_12 = NULL;
        t = SSLgetAnnotations(q_128);
        i_60 = t;
        t = a_130;
        t = fetch_1_0(r_13, t);
        l_60 = t;
        t = b_130;
        if(match_cons(t, sym__2))
          {
            n_60 = ATgetArgument(t, 0);
            o_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(u_13, n_60, o_60, t);
        m_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_60, m_60);
        m_12 = t;
        t = SSLsetAnnotations(m_12, i_60);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        {
          ATerm v_60 = NULL,h_61 = NULL,i_61 = NULL,k_61 = NULL,o_12 = NULL;
          t = SSLgetAnnotations(q_128);
          v_60 = t;
          t = b_130;
          if(match_cons(t, sym__2))
            {
              i_61 = ATgetArgument(t, 0);
              k_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(w_13, i_61, k_61, t);
          h_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_130, h_61);
          o_12 = t;
          t = SSLsetAnnotations(o_12, v_60);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm u_137 (ATerm), ATerm t)
{
  ATerm e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL;
  i_130 = t;
  t = dtime_0_0(t);
  t = i_130;
  t = u_137(t);
  h_130 = t;
  t = dtime_0_0(t);
  e_130 = t;
  t = h_130;
  if(match_cons(t, sym__2))
    {
      f_130 = ATgetArgument(t, 0);
      g_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_130), (ATerm) ATmakeAppl(sym_Runtime_1, e_130)), g_130);
  return(t);
}
static ATerm h_131 (ATerm z_130, ATerm t)
{
  t = SSL_fclose(z_130);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_131 = NULL,f_131 = NULL;
  f_131 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_131 = ATgetArgument(t, 0);
      {
        ATerm h_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_131);
            LocalPopChoice(k_36);
          }
        else
          {
            t = h_36;
            t = h_131(f_131, t);
          }
      }
    }
  else
    {
      t = h_131(f_131, t);
    }
  return(t);
}
static ATerm n_11 (ATerm f_39, ATerm t)
{
  t = SSL_read_term_from_stream(f_39);
  return(t);
}
static ATerm o_11 (ATerm h_65, ATerm i_65, ATerm t)
{
  t = SSL_strcat(h_65, i_65);
  return(t);
}
static ATerm p_11 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm i_131 = NULL;
  t = SSL_fopen(n_40, o_40);
  i_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_131);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_131 = NULL;
  t = SSL_stdin_stream();
  j_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_131);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_131 = NULL;
  t = SSL_stdout_stream();
  k_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_131);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_131 = NULL;
  t = SSL_stderr_stream();
  l_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_131);
  return(t);
}
static ATerm w_132 (ATerm r_131, ATerm t)
{
  ATerm s_131 = NULL;
  t = SSL_explode_term(r_131);
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
          {
            s_131 = ATgetFirst((ATermList) p_36);
            {
              ATerm q_36 = (ATerm) ATgetNext((ATermList) p_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_131;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_131;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_131;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_131;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_132 (ATerm v_131, ATerm w_131, ATerm x_131, ATerm t)
{
  ATerm y_131 = NULL,z_131 = NULL,a_132 = NULL,d_132 = NULL,g_13 = NULL;
  t = SSLgetAnnotations(x_131);
  a_132 = t;
  t = v_131;
  if(match_cons(t, sym_Path_1))
    {
      d_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_132, w_131);
  g_13 = t;
  t = SSLsetAnnotations(g_13, a_132);
  if(match_cons(t, sym__2))
    {
      y_131 = ATgetArgument(t, 0);
      z_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(y_131, z_131, t);
  return(t);
}
static ATerm y_132 (ATerm f_132, ATerm g_132, ATerm h_132, ATerm t)
{
  ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL,r_132 = NULL,h_13 = NULL;
  t = SSLgetAnnotations(h_132);
  k_132 = t;
  t = SSL_is_string(f_132);
  r_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_132, g_132);
  h_13 = t;
  t = SSLsetAnnotations(h_13, k_132);
  if(match_cons(t, sym__2))
    {
      i_132 = ATgetArgument(t, 0);
      j_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(i_132, j_132, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm t_132 = NULL,u_132 = NULL,v_132 = NULL;
  t_132 = t;
  if(match_cons(t, sym__2))
    {
      u_132 = ATgetArgument(t, 0);
      v_132 = ATgetArgument(t, 1);
      {
        ATerm t_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_132(t_132, t);
            LocalPopChoice(w_36);
          }
        else
          {
            t = t_36;
            {
              ATerm x_36 = t;
              int y_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_132(u_132, v_132, t_132, t);
                  LocalPopChoice(y_36);
                }
              else
                {
                  t = x_36;
                  t = y_132(u_132, v_132, t_132, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_132(t_132, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_133 = NULL,b_133 = NULL,c_133 = NULL,h_133 = NULL;
  h_133 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_133, term_b_37);
        t = q_11(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        {
          ATerm m_62 = NULL,n_62 = NULL;
          t = term_c_37;
          n_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_37, h_133);
          t = o_11(n_62, h_133, t);
          m_62 = t;
          t = SSL_perror(m_62);
          _fail(t);
        }
      }
  }
  b_133 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(c_133, t);
  a_133 = t;
  t = b_133;
  t = fclose_0_0(t);
  t = a_133;
  return(t);
}
ATerm fetch_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  static ATerm g_134 (ATerm t)
  {
    ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL;
    d_134 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_134 = ATgetFirst((ATermList) t);
        f_134 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_62 = NULL,v_62 = NULL,k_13 = NULL;
          t = SSLgetAnnotations(d_134);
          s_62 = t;
          t = e_134;
          t = p_123(t);
          v_62 = t;
          t = (ATerm) ATinsert(CheckATermList(f_134), v_62);
          k_13 = t;
          t = SSLsetAnnotations(k_13, s_62);
          LocalPopChoice(f_37);
        }
      else
        {
          t = d_37;
          {
            ATerm d_63 = NULL,g_63 = NULL,l_13 = NULL;
            t = SSLgetAnnotations(d_134);
            d_63 = t;
            t = f_134;
            t = g_134(t);
            g_63 = t;
            t = (ATerm) ATinsert(CheckATermList(g_63), e_134);
            l_13 = t;
            t = SSLsetAnnotations(l_13, d_63);
          }
        }
    }
    return(t);
  }
  t = g_134(t);
  return(t);
}
static ATerm v_11 (ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm j_134 = NULL;
  t = lookup_table_0_1(m_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(n_51, j_134, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm m_134 = NULL;
  m_134 = t;
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL;
        t = term_m_37;
        p_134 = t;
        t = term_o_37;
        q_134 = t;
        t = term_p_37;
        t = v_11(p_134, q_134, t);
        o_134 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_134, term_q_37);
        t = geq_0_0(t);
        t = m_134;
        t = y_119(t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = m_134;
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm t_134 = NULL;
  t_134 = t;
  if(match_string(t, "-k"))
    {
      t = t_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_134;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm u_134 = NULL,v_134 = NULL,w_134 = NULL;
  u_134 = t;
  t = SSL_string_to_int(u_134);
  v_134 = t;
  t = term_r_37;
  w_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, v_134);
  t = y_11(w_134, v_134, t);
  t = u_134;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_13, z_13, a_14, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm y_134 = NULL;
  y_134 = t;
  if(match_string(t, "-S"))
    {
      t = y_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_134;
    }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm z_134 = NULL,a_135 = NULL;
  t = term_o_37;
  z_134 = t;
  t = term_p_29;
  a_135 = t;
  t = term_w_37;
  t = y_11(z_134, a_135, t);
  t = term_x_37;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm b_135 = NULL,c_135 = NULL,d_135 = NULL;
  b_135 = t;
  t = SSL_string_to_int(b_135);
  c_135 = t;
  t = term_o_37;
  d_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_37, c_135);
  t = y_11(d_135, c_135, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_135);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_z_37;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm e_135 = NULL,f_135 = NULL;
  t = term_b_38;
  e_135 = t;
  t = term_b_17;
  f_135 = t;
  t = term_c_38;
  t = y_11(e_135, f_135, t);
  t = term_d_38;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_14, d_14, e_14, t);
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      {
        ATerm h_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_14, g_14, i_14, t);
            LocalPopChoice(j_38);
          }
        else
          {
            t = h_38;
            t = Option_3_0(o_14, p_14, r_14, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL;
  t = term_m_37;
  g_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, j_44, k_44);
  t = lookup_table_0_1(g_135, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(j_44, k_44, h_135, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, j_44, k_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_135 = NULL,m_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
      t = term_b_17;
      t = e_0(t);
      n_135 = t;
      t = term_n_38;
      o_135 = t;
      t = term_p_38;
      p_135 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_38, term_p_38, n_135);
      t = w_11(o_135, p_135, n_135, t);
      _fail(t);
    }
  else
    {
      ATerm s_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_135 = ATgetFirst((ATermList) t);
          m_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_135;
      t = c_0(t);
      t = term_b_17;
      t = d_0(t);
      s_135 = t;
      t = (ATerm) ATinsert(CheckATermList(m_135), s_135);
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm u_135 = NULL;
  u_135 = t;
  if(match_string(t, "-o"))
    {
      t = u_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_135;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm v_135 = NULL,w_135 = NULL;
  v_135 = t;
  t = term_q_38;
  w_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_38, v_135);
  t = y_11(w_135, v_135, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_135);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_14, t_14, u_14, t);
  return(t);
}
static ATerm w_11 (ATerm t_49, ATerm u_49, ATerm s_49, ATerm t)
{
  ATerm y_135 = NULL,z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL;
  y_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
  {
    ATerm y_38 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_39 = ATgetArgument(t, 0);
            ATerm g_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
        t = v_11(t_49, u_49, t);
        LocalPopChoice(b_39);
      }
    else
      {
        t = y_38;
        t = (ATerm) ATempty;
      }
  }
  z_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_49, u_49, (ATerm) ATinsert(CheckATermList(z_135), s_49));
  t = lookup_table_0_1(t_49, t);
  c_136 = t;
  t = (ATerm) ATinsert(CheckATermList(z_135), s_49);
  a_136 = t;
  t = c_136;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(u_49, a_136, b_136, t);
  t = y_135;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_136 = NULL,k_136 = NULL,l_136 = NULL,m_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL;
      t = term_b_17;
      t = n_0(t);
      n_136 = t;
      t = term_n_38;
      o_136 = t;
      t = term_p_38;
      p_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_38, term_p_38, n_136);
      t = w_11(o_136, p_136, n_136, t);
      _fail(t);
    }
  else
    {
      ATerm t_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_136 = ATgetFirst((ATermList) t);
          k_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_136 = ATgetFirst((ATermList) t);
          m_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_136;
      t = k_0(t);
      t = l_136;
      t = l_0(t);
      t_136 = t;
      t = (ATerm) ATinsert(CheckATermList(m_136), t_136);
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm v_136 = NULL;
  v_136 = t;
  if(match_string(t, "-i"))
    {
      t = v_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_136;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm w_136 = NULL,x_136 = NULL;
  w_136 = t;
  t = term_h_39;
  x_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_39, w_136);
  t = y_11(x_136, w_136, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_136);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_14, w_14, y_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL,b_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_17;
  t = whoami_0_0(t);
  y_136 = t;
  t = term_e_17;
  a_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_39), y_136);
  b_137 = t;
  t = SSL_printnl(a_137, b_137);
  t = term_m_17;
  z_136 = t;
  t = SSL_exit(z_136);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL;
  t = term_m_37;
  c_137 = t;
  t = term_l_39;
  d_137 = t;
  t = term_m_39;
  t = v_11(c_137, d_137, t);
  return(t);
}
static ATerm r_11 (ATerm b_47, ATerm c_47, ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_47, c_47);
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      t = SSL_addr(b_47, c_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm f_137 = NULL,g_137 = NULL,h_137 = NULL;
  f_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_137;
      t = u_128(t);
    }
  else
    {
      ATerm k_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_137 = ATgetFirst((ATermList) t);
          h_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_137;
      t = foldr_2_0(u_128, v_128, t);
      k_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_137, k_137);
      t = v_128(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm a_64 = NULL,f_64 = NULL;
  if(match_cons(t, sym__2))
    {
      a_64 = ATgetArgument(t, 0);
      f_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(a_64, f_64, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_137 = NULL,u_63 = NULL,v_63 = NULL;
  t = times_0_0(t);
  v_63 = t;
  t = SSL_explode_term(v_63);
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_63;
  t = foldr_2_0(z_14, a_15, t);
  n_137 = t;
  t = SSL_TicksToSeconds(n_137);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL;
  z_137 = t;
  if(match_cons(t, sym__2))
    {
      a_138 = ATgetArgument(t, 0);
      b_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_138;
        if((a_138 != t))
          {
            _fail(t);
          }
        t = z_137;
        LocalPopChoice(s_39);
      }
    else
      {
        t = q_39;
        t = (ATerm) ATmakeAppl(sym__2, a_138, b_138);
        {
          ATerm t_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_138, b_138);
              LocalPopChoice(w_39);
            }
          else
            {
              t = t_39;
              t = SSL_gtr(a_138, b_138);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_138, b_138);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm i_138 = NULL;
  i_138 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL;
        t = term_m_37;
        l_138 = t;
        t = term_o_37;
        m_138 = t;
        t = term_p_37;
        t = v_11(l_138, m_138, t);
        k_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_138, term_m_17);
        t = geq_0_0(t);
        t = i_138;
        t = x_119(t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = i_138;
      }
  }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,r_138 = NULL,t_138 = NULL;
  t = run_time_0_0(t);
  o_138 = t;
  t = term_b_17;
  t = whoami_0_0(t);
  p_138 = t;
  t = term_e_17;
  r_138 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_40), o_138), term_z_39), p_138);
  t_138 = t;
  t = SSL_printnl(r_138, t_138);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_40), o_138), term_z_39), p_138));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_138 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_29;
  y_138 = t;
  t = SSL_exit(y_138);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL;
  j_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_139 = ATgetArgument(t, 0);
          {
            ATerm d_65 = NULL,q_13 = NULL;
            t = SSLgetAnnotations(j_139);
            d_65 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_139);
            q_13 = t;
            t = SSLsetAnnotations(q_13, d_65);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_139;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_138 (ATerm), ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_139 = NULL,c_139 = NULL;
      t = term_m_37;
      b_139 = t;
      t = term_f_40;
      c_139 = t;
      t = term_g_40;
      t = v_11(b_139, c_139, t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      t = fetch_1_0(c_15, t);
    }
  t = s_138(t);
  return(t);
}
static ATerm z_11 (ATerm a_53, ATerm b_53, ATerm c_53, ATerm t)
{
  ATerm l_139 = NULL;
  t = SSL_hashtable_put(c_53, a_53, b_53);
  l_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_139);
  return(t);
}
static ATerm a_12 (ATerm d_53, ATerm e_53, ATerm t)
{
  t = SSL_hashtable_get(e_53, d_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_51, ATerm t)
{
  ATerm u_139 = NULL;
  t = table_hashtable_0_0(t);
  u_139 = t;
  {
    ATerm i_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_65 = NULL;
        t = u_139;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(f_51, p_65, t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = i_40;
        {
          ATerm a_66 = NULL;
          t = f_51;
          t = table_create_0_0(t);
          t = u_139;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(f_51, a_66, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm x_139 = NULL;
  t = SSL_hashtable_create(i_53, j_53);
  x_139 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_139);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL,c_140 = NULL,d_140 = NULL;
  y_139 = t;
  t = term_p_40;
  c_140 = t;
  t = term_q_40;
  d_140 = t;
  t = y_139;
  t = new_hashtable_0_2(c_140, d_140, t);
  z_139 = t;
  t = y_139;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(y_139, z_139, a_140, t);
  t = y_139;
  return(t);
}
static ATerm t_11 (ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm e_140 = NULL;
  t = SSL_hashtable_remove(g_53, f_53);
  e_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_140);
  return(t);
}
static ATerm u_11 (ATerm k_53, ATerm t)
{
  ATerm f_140 = NULL;
  t = SSL_hashtable_destroy(k_53);
  f_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_140);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_140 = NULL;
  t = SSL_table_hashtable();
  g_140 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_140);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL;
  h_140 = t;
  t = table_hashtable_0_0(t);
  i_140 = t;
  t = lookup_table_0_1(h_140, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(k_140, t);
  t = i_140;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(h_140, j_140, t);
  t = h_140;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_140 = NULL,n_140 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_140 = ATgetFirst((ATermList) t);
      n_140 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_140 = NULL,s_140 = NULL;
        static ATerm d_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_140)), not_null(s_140));
          return(t);
        }
        t = n_140;
        t = i_0(t);
        if(((r_140 != NULL) && (r_140 != t)))
          _fail(t);
        else
          r_140 = t;
        t = m_140;
        t = g_0(t);
        if(((s_140 != NULL) && (s_140 != t)))
          _fail(t);
        else
          s_140 = t;
        t = n_140;
        t = reverse_acc_2_0(g_0, d_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL,v_13 = NULL;
  c_141 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_141);
  a_141 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_141);
  v_13 = t;
  t = SSLsetAnnotations(v_13, a_141);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm e_141 = NULL;
  e_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_141), term_t_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_140 = NULL,x_140 = NULL;
  ATerm u_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_140 = NULL,z_140 = NULL;
      t = term_m_37;
      y_140 = t;
      t = term_l_39;
      z_140 = t;
      t = term_m_39;
      t = v_11(y_140, z_140, t);
      LocalPopChoice(w_40);
    }
  else
    {
      t = u_40;
      t = fetch_1_0(e_15, t);
    }
  t = term_z_40;
  t = echo_0_0(t);
  t = term_n_38;
  w_140 = t;
  t = term_p_38;
  x_140 = t;
  t = term_b_41;
  t = v_11(w_140, x_140, t);
  t = reverse_acc_2_0(_id, o_15, t);
  t = map_1_0(p_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL;
  g_141 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_141;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_41 = ATgetFirst((ATermList) t);
                ATerm f_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_141;
          }
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = (ATerm) ATinsert(ATempty, g_141);
      }
  }
  h_141 = t;
  t = term_e_36;
  i_141 = t;
  t = SSL_printnl(i_141, h_141);
  t = g_141;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_141 = NULL,n_141 = NULL;
  t = term_m_37;
  m_141 = t;
  t = term_l_39;
  n_141 = t;
  t = term_m_39;
  t = v_11(m_141, n_141, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm o_141 = NULL,p_141 = NULL;
  t = term_g_41;
  o_141 = t;
  t = term_b_17;
  p_141 = t;
  t = term_h_41;
  t = y_11(o_141, p_141, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm q_141 = NULL,r_141 = NULL,s_141 = NULL,t_141 = NULL;
  t = term_g_41;
  s_141 = t;
  t = term_b_17;
  t_141 = t;
  t = term_h_41;
  t = y_11(s_141, t_141, t);
  t = term_j_41;
  q_141 = t;
  t = term_b_17;
  r_141 = t;
  t = term_k_41;
  t = y_11(q_141, r_141, t);
  t = term_l_41;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_15, r_15, s_15, t);
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      t = Option_3_0(t_15, v_15, w_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL,x_141 = NULL,y_141 = NULL,z_141 = NULL,y_13 = NULL;
  z_141 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_141 = ATgetFirst((ATermList) t);
      w_141 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_141);
  u_141 = t;
  t = v_141;
  t = p_96(t);
  x_141 = t;
  t = w_141;
  t = q_96(t);
  y_141 = t;
  t = (ATerm) ATinsert(CheckATermList(y_141), x_141);
  y_13 = t;
  t = SSLsetAnnotations(y_13, u_141);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_140 (ATerm), ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,j_142 = NULL,k_142 = NULL,b_14 = NULL;
  e_142 = t;
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_41;
        t = v_140(t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
      }
  }
  t = e_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_142 = ATgetFirst((ATermList) t);
      h_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_142);
  f_142 = t;
  t = term_l_39;
  k_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_39, g_142);
  t = y_11(k_142, g_142, t);
  t = h_142;
  {
    static ATerm v_142 (ATerm t)
    {
      ATerm a_42 = t;
      int b_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_42 = t;
          int d_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_142 = NULL;
              n_142 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_142;
              LocalPopChoice(d_42);
            }
          else
            {
              t = c_42;
              t = v_140(t);
              t = Cons_2_0(_id, v_142, t);
            }
          LocalPopChoice(b_42);
        }
      else
        {
          t = a_42;
          {
            ATerm r_142 = NULL,s_142 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_142 = ATgetFirst((ATermList) t);
                s_142 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_142), (ATerm) ATmakeAppl(sym_Undefined_1, r_142));
          }
        }
      return(t);
    }
    t = v_142(t);
  }
  j_142 = t;
  t = (ATerm) ATinsert(CheckATermList(j_142), (ATerm) ATmakeAppl(sym_Program_1, g_142));
  b_14 = t;
  t = SSLsetAnnotations(b_14, f_142);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm n_143 = NULL;
  n_143 = t;
  if(match_string(t, "--help"))
    {
      t = n_143;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_143;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_143;
        }
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL;
  t = term_f_40;
  o_143 = t;
  t = term_b_17;
  p_143 = t;
  t = term_e_42;
  t = y_11(o_143, p_143, t);
  t = term_i_42;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_o_42;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm b_143 = NULL,c_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL,j_143 = NULL,k_143 = NULL,m_143 = NULL;
  g_143 = t;
  t = term_n_38;
  h_143 = t;
  t = term_p_42;
  t = lookup_table_0_1(h_143, t);
  m_143 = t;
  t = term_p_38;
  i_143 = t;
  t = (ATerm) ATempty;
  j_143 = t;
  t = m_143;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(i_143, j_143, k_143, t);
  t = g_143;
  {
    static ATerm x_15 (ATerm t)
    {
      ATerm q_42 = t;
      int r_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_140(t);
          LocalPopChoice(r_42);
        }
      else
        {
          t = q_42;
          {
            ATerm t_42 = t;
            int w_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_15, z_15, a_16, t);
                LocalPopChoice(w_42);
              }
            else
              {
                t = t_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_15, t);
  }
  {
    ATerm y_42 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_144 = NULL;
        b_144 = t;
        {
          ATerm h_43 = t;
          int i_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_66 = NULL;
              t = b_144;
              {
                ATerm j_43 = t;
                int k_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_66 = NULL,q_66 = NULL;
                    t = term_m_37;
                    h_66 = t;
                    t = term_f_40;
                    q_66 = t;
                    t = term_g_40;
                    t = v_11(h_66, q_66, t);
                    LocalPopChoice(k_43);
                  }
                else
                  {
                    t = j_43;
                    t = fetch_1_0(b_16, t);
                  }
              }
              t = b_144;
              t = default_system_usage_0_0(t);
              t = term_p_29;
              g_66 = t;
              t = SSL_exit(g_66);
              LocalPopChoice(i_43);
            }
          else
            {
              t = h_43;
              {
                ATerm b_67 = NULL,d_67 = NULL,h_67 = NULL;
                t = term_m_37;
                d_67 = t;
                t = term_g_41;
                h_67 = t;
                t = term_m_43;
                t = v_11(d_67, h_67, t);
                t = b_144;
                t = default_system_about_0_0(t);
                t = term_p_29;
                b_67 = t;
                t = SSL_exit(b_67);
              }
            }
        }
        LocalPopChoice(g_43);
      }
    else
      {
        t = y_42;
        {
          ATerm n_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_144 = NULL,d_144 = NULL,e_144 = NULL;
              static ATerm d_16 (ATerm t)
              {
                ATerm f_144 = NULL,g_144 = NULL,h_144 = NULL,h_14 = NULL;
                h_144 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_144 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_144);
                f_144 = t;
                t = g_144;
                if(((b_143 != NULL) && (b_143 != t)))
                  _fail(t);
                else
                  b_143 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_144);
                h_14 = t;
                t = SSLsetAnnotations(h_14, f_144);
                return(t);
              }
              t = fetch_1_0(d_16, t);
              t = term_e_17;
              d_144 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_143)), term_w_43);
              e_144 = t;
              t = SSL_printnl(d_144, e_144);
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_143)), term_w_43));
              t = default_system_usage_0_0(t);
              t = term_m_17;
              c_144 = t;
              t = SSL_exit(c_144);
              LocalPopChoice(o_43);
            }
          else
            {
              t = n_43;
            }
        }
      }
  }
  c_143 = t;
  t = term_n_38;
  t = table_destroy_0_0(t);
  t = c_143;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm t)
{
  ATerm m_144 = NULL,n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL;
  t = parse_options_1_0(u_138, t);
  m_144 = t;
  t = term_a_44;
  t = table_create_0_0(t);
  t = term_a_44;
  n_144 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_44, term_b_44, m_144);
  t = lookup_table_0_1(n_144, t);
  q_144 = t;
  t = term_b_44;
  o_144 = t;
  t = q_144;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(o_144, m_144, p_144, t);
  t = m_144;
  t = w_138(t);
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_138, t);
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        {
          ATerm e_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_138(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_44);
            }
          else
            {
              t = e_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = if_verbose2_1_0(q_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm r_144 = NULL,t_144 = NULL;
  t = term_i_44;
  r_144 = t;
  t = term_b_17;
  t_144 = t;
  t = term_l_44;
  t = y_11(r_144, t_144, t);
  t = term_m_44;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_n_44;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm u_144 = NULL,v_144 = NULL,w_144 = NULL,x_144 = NULL,y_144 = NULL,z_144 = NULL;
  u_144 = t;
  t = term_m_37;
  y_144 = t;
  t = term_l_39;
  z_144 = t;
  t = term_m_39;
  t = v_11(y_144, z_144, t);
  v_144 = t;
  t = term_e_17;
  w_144 = t;
  t = (ATerm) ATinsert(ATempty, v_144);
  x_144 = t;
  t = SSL_printnl(w_144, x_144);
  t = u_144;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t)
{
  static ATerm f_16 (ATerm t)
  {
    ATerm o_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        LocalPopChoice(q_44);
      }
    else
      {
        t = o_44;
        {
          ATerm r_44 = t;
          int t_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(t_44);
            }
          else
            {
              t = r_44;
              {
                ATerm u_44 = t;
                int v_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(v_44);
                  }
                else
                  {
                    t = u_44;
                    {
                      ATerm w_44 = t;
                      int x_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_16, m_16, o_16, t);
                          LocalPopChoice(x_44);
                        }
                      else
                        {
                          t = w_44;
                          {
                            ATerm y_44 = t;
                            int z_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_44);
                              }
                            else
                              {
                                t = y_44;
                                t = keep_option_0_0(t);
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
  static ATerm j_16 (ATerm t)
  {
    ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL;
    b_145 = t;
    {
      ATerm a_45 = t;
      int b_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_145 != NULL) && (a_145 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_16, t);
          LocalPopChoice(b_45);
        }
      else
        {
          t = a_45;
          t = term_c_45;
          a_145 = t;
        }
    }
    t = not_null(a_145);
    t = ReadFromFile_0_0(t);
    c_145 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_145, c_145);
    t = apply_strategy_1_0(d_138, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_16, f_138, g_16, j_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL,m_145 = NULL,n_145 = NULL,o_145 = NULL,p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL,x_145 = NULL,y_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL,q_14 = NULL,n_14 = NULL,m_14 = NULL,l_14 = NULL,k_14 = NULL;
  c_146 = t;
  if(match_cons(t, sym__2))
    {
      k_145 = ATgetArgument(t, 0);
      l_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_146);
  j_145 = t;
  t = l_145;
  if(match_cons(t, sym_Specification_1))
    {
      n_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_145);
  m_145 = t;
  t = n_145;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_145 = ATgetFirst((ATermList) t);
      r_145 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_145);
  p_145 = t;
  t = r_145;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_145 = ATgetFirst((ATermList) t);
      v_145 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_145);
  t_145 = t;
  t = u_145;
  if(match_cons(t, sym_Strategies_1))
    {
      y_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_145);
  x_145 = t;
  t = y_145;
  t = map_1_0(v_16, t);
  a_146 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_146);
  k_14 = t;
  t = SSLsetAnnotations(k_14, x_145);
  b_146 = t;
  t = v_145;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_145), b_146);
  l_14 = t;
  t = SSLsetAnnotations(l_14, t_145);
  w_145 = t;
  t = (ATerm) ATinsert(CheckATermList(w_145), q_145);
  m_14 = t;
  t = SSLsetAnnotations(m_14, p_145);
  s_145 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_145);
  n_14 = t;
  t = SSLsetAnnotations(n_14, m_145);
  o_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_145, o_145);
  q_14 = t;
  t = SSLsetAnnotations(q_14, j_145);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL;
  y_146 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_146 = ATgetArgument(t, 0);
      v_146 = ATgetArgument(t, 1);
      w_146 = ATgetArgument(t, 2);
      x_146 = ATgetArgument(t, 3);
      {
        ATerm d_45 = t;
        int e_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_67 = NULL,u_67 = NULL,j_14 = NULL;
            t = SSLgetAnnotations(y_146);
            o_67 = t;
            t = x_146;
            t = topdown_1_0(w_16, t);
            t = match_to_dfa_0_0(t);
            u_67 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_146, v_146, w_146, u_67);
            j_14 = t;
            t = SSLsetAnnotations(j_14, o_67);
            LocalPopChoice(e_45);
          }
        else
          {
            t = d_45;
            t = y_146;
          }
      }
    }
  else
    {
      t = y_146;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm x_67 = NULL;
  x_67 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm f_45 = t;
      int g_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_68 = NULL;
          t = x_67;
          t = new_0_0(t);
          a_68 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_68)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_68))));
          LocalPopChoice(g_45);
        }
      else
        {
          t = f_45;
          t = x_67;
        }
    }
  else
    {
      t = x_67;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_16, _fail, default_usage_0_0, t);
  return(t);
}
