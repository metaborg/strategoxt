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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_e_45;
ATerm term_p_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_c_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_o_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_o_41;
ATerm term_m_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_u_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_i_38;
ATerm term_z_37;
ATerm term_o_37;
ATerm term_h_37;
ATerm term_e_37;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_d_36;
ATerm term_s_34;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_c_30;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_n_23;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_i_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_g_29, (ATerm) ATempty);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_p_29);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_29);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_z_38, term_i_17);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_m_39);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_m_41, term_i_17);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym__2, term_t_41, term_i_17);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_z_40, term_i_17);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym__2, term_l_44, term_i_17);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm u_0 (ATerm t);
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
ATerm spaste_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm h_8 (ATerm g_32, ATerm f_32, ATerm t);
ATerm SVar_1_0 (ATerm r_88 (ATerm), ATerm t);
static ATerm i_8 (ATerm c_127 (ATerm), ATerm d_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_56, ATerm w_56, ATerm v_56, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_8 (ATerm w_126 (ATerm), ATerm x_126 (ATerm (ATerm), ATerm), ATerm p_56, ATerm s_56, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm k_127 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm r_126 (ATerm (ATerm), ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_126 (ATerm (ATerm), ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm tpaste_1_0 (ATerm s_106 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm g_85 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm n_9 (ATerm t_79, ATerm s_79, ATerm t);
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
ATerm oncetd_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm o_8 (ATerm g_122 (ATerm), ATerm m_53, ATerm l_53, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_8 (ATerm i_122 (ATerm), ATerm o_53, ATerm n_53, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm v_8 (ATerm i_685, ATerm n_685, ATerm f_69, ATerm t);
ATerm while_not_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm a_91 (ATerm k_89, ATerm l_89, ATerm m_89, ATerm t);
static ATerm j_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm free_vars_3_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm w_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm x_8 (ATerm p_83, ATerm o_83, ATerm t);
static ATerm y_8 (ATerm l_119 (ATerm), ATerm e_48, ATerm c_48, ATerm t);
static ATerm u_8 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm a_9 (ATerm o_138 (ATerm), ATerm c_82, ATerm z_81, ATerm a_82, ATerm b_82, ATerm t);
static ATerm b_9 (ATerm v_81, ATerm w_81, ATerm x_81, ATerm t);
ATerm filter_1_0 (ATerm f_126 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm j_121 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm o_103 (ATerm a_102, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm f_9 (ATerm i_83, ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm h_9 (ATerm y_82, ATerm t);
static ATerm m_10 (ATerm t);
static ATerm j_9 (ATerm w_82, ATerm t);
ATerm repeat_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
static ATerm l_9 (ATerm n_49, ATerm o_49, ATerm t);
ATerm end_scope_1_0 (ATerm i_119 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_119 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_120 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm s_109 (ATerm j_109, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm t_107 (ATerm), ATerm t);
static ATerm s_10 (ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm u_53, ATerm t_53, ATerm t);
static ATerm t_10 (ATerm n_122 (ATerm), ATerm q_53, ATerm p_53, ATerm t);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t);
static ATerm t_11 (ATerm t);
ATerm collect_om_2_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm CollectSplit_2_0 (ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm nzip0_1_0 (ATerm p_112 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm s_107 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_120 (ATerm), ATerm t);
static ATerm f_11 (ATerm w_39, ATerm x_39, ATerm t);
static ATerm g_11 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm i_11 (ATerm c_115 (ATerm), ATerm t_268, ATerm v_38, ATerm t);
static ATerm h_11 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm b_134 (ATerm), ATerm t);
static ATerm p_128 (ATerm j_128, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_11 (ATerm t_38, ATerm t);
static ATerm k_11 (ATerm y_39, ATerm z_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_130 (ATerm d_129, ATerm t);
static ATerm f_130 (ATerm h_129, ATerm i_129, ATerm j_129, ATerm t);
static ATerm g_130 (ATerm r_129, ATerm s_129, ATerm t_129, ATerm t);
static ATerm l_11 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_120 (ATerm), ATerm t);
static ATerm e_11 (ATerm t_62, ATerm u_62, ATerm t);
ATerm debug_1_0 (ATerm a_115 (ATerm), ATerm t);
static ATerm x_13 (ATerm t);
static ATerm e_14 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm t_116 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_11 (ATerm t_43, ATerm u_43, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_11 (ATerm i_49, ATerm j_49, ATerm h_49, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_11 (ATerm q_46, ATerm r_46, ATerm t);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_116 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm need_help_1_0 (ATerm z_134 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_11 (ATerm z_50, ATerm a_51, ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_137 (ATerm), ATerm t);
static ATerm d_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm parse_options_1_0 (ATerm b_137 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm iowrap_3_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,f_0 = NULL,j_0 = NULL,m_0 = NULL,q_0 = NULL;
  e_0 = t;
  t = term_i_17;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_p_17;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_17), f_0), term_q_17);
  q_0 = t;
  t = SSL_printnl(m_0, q_0);
  t = term_s_17;
  j_0 = t;
  t = SSL_exit(j_0);
  t = e_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
        _fail(t);
      {
        ATerm u_17 = ATgetArgument(t, 1);
        if(((ATgetType(u_17) != AT_LIST) || !(ATisEmpty(u_17))))
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
      ATerm v_17 = ATgetArgument(t, 0);
      if(((ATgetType(v_17) == AT_LIST) && !(ATisEmpty(v_17))))
        {
          a_1 = ATgetFirst((ATermList) v_17);
          b_1 = (ATerm) ATgetNext((ATermList) v_17);
        }
      else
        _fail(t);
      {
        ATerm w_17 = ATgetArgument(t, 1);
        if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
          {
            c_1 = ATgetFirst((ATermList) w_17);
            d_1 = (ATerm) ATgetNext((ATermList) w_17);
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
static ATerm c_0 (ATerm t)
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
static ATerm u_0 (ATerm t)
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
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm a_18 = ATgetArgument(t, 0);
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
        t = x_17;
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
      ATerm c_18 = ATgetArgument(t, 0);
      if(((ATgetType(c_18) != AT_LIST) || !(ATisEmpty(c_18))))
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
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
  ATerm v_4 = NULL,a_5 = NULL,b_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
        {
          v_4 = ATgetFirst((ATermList) e_18);
          a_5 = (ATerm) ATgetNext((ATermList) e_18);
        }
      else
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
          {
            b_5 = ATgetFirst((ATermList) f_18);
            d_5 = (ATerm) ATgetNext((ATermList) f_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_4, b_5), (ATerm) ATmakeAppl(sym__2, a_5, d_5));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_5), e_5);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_5);
      }
    else
      {
        t = g_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_18 = ATgetArgument(t, 0);
            l_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_5, l_5);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(((ATgetType(k_18) != AT_LIST) || !(ATisEmpty(k_18))))
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(((ATgetType(l_18) != AT_LIST) || !(ATisEmpty(l_18))))
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
  ATerm k_7 = NULL,n_7 = NULL,r_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
        {
          k_7 = ATgetFirst((ATermList) m_18);
          n_7 = (ATerm) ATgetNext((ATermList) m_18);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
          {
            r_7 = ATgetFirst((ATermList) n_18);
            t_7 = (ATerm) ATgetNext((ATermList) n_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_7, r_7), (ATerm) ATmakeAppl(sym__2, n_7, t_7));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_7), v_7);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm y_7 = NULL,c_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7;
  {
    ATerm q_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_8);
      }
    else
      {
        t = q_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            c_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_8, c_8);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      if(((ATgetType(v_18) != AT_LIST) || !(ATisEmpty(v_18))))
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
  ATerm b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
        {
          b_10 = ATgetFirst((ATermList) y_18);
          c_10 = (ATerm) ATgetNext((ATermList) y_18);
        }
      else
        _fail(t);
      {
        ATerm a_19 = ATgetArgument(t, 1);
        if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
          {
            e_10 = ATgetFirst((ATermList) a_19);
            f_10 = (ATerm) ATgetNext((ATermList) a_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_10, e_10), (ATerm) ATmakeAppl(sym__2, c_10, f_10));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_10), g_10);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm j_10 = NULL,n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_10);
      }
    else
      {
        t = b_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_19 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_10, n_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
      {
        ATerm s_0 = NULL,x_0 = NULL,y_0 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(p_8);
        s_0 = t;
        t = q_8;
        t = w_106(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, y_0);
        t = genzip_4_0(a_0, b_0, c_0, u_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, r_8);
        s_1 = t;
        t = SSLsetAnnotations(s_1, s_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_8 = ATgetArgument(t, 0);
          r_8 = ATgetArgument(t, 1);
          m_8 = ATgetArgument(t, 2);
          {
            ATerm d_4 = NULL,r_4 = NULL,s_4 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(p_8);
            d_4 = t;
            t = r_8;
            t = w_106(t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_8, s_4);
            t = genzip_4_0(w_0, z_0, g_1, i_1, t);
            r_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, q_8, r_4, m_8);
            t_1 = t;
            t = SSLsetAnnotations(t_1, d_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_8 = ATgetArgument(t, 0);
              r_8 = ATgetArgument(t, 1);
              m_8 = ATgetArgument(t, 2);
              n_8 = ATgetArgument(t, 3);
              {
                ATerm k_6 = NULL,y_6 = NULL,g_7 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(p_8);
                k_6 = t;
                t = r_8;
                t = w_106(t);
                g_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_8, g_7);
                t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                y_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_8, y_6, m_8, n_8);
                u_1 = t;
                t = SSLsetAnnotations(u_1, k_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  q_8 = ATgetArgument(t, 0);
                  r_8 = ATgetArgument(t, 1);
                  m_8 = ATgetArgument(t, 2);
                  n_8 = ATgetArgument(t, 3);
                  {
                    ATerm t_9 = NULL,y_9 = NULL,z_9 = NULL,w_1 = NULL;
                    t = SSLgetAnnotations(p_8);
                    t_9 = t;
                    t = r_8;
                    t = w_106(t);
                    z_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_8, z_9);
                    t = genzip_4_0(r_1, v_1, y_1, z_1, t);
                    y_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, q_8, y_9, m_8, n_8);
                    w_1 = t;
                    t = SSLsetAnnotations(w_1, t_9);
                  }
                }
              else
                {
                  ATerm v_11 = NULL,y_11 = NULL,x_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_8 = ATgetArgument(t, 0);
                      r_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_8);
                  v_11 = t;
                  t = q_8;
                  t = w_106(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm i_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_11, r_8);
                  x_1 = t;
                  t = SSLsetAnnotations(x_1, v_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,u_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      {
        ATerm n_12 = NULL,q_12 = NULL,r_12 = NULL,e_2 = NULL;
        t = SSLgetAnnotations(w_14);
        n_12 = t;
        t = x_14;
        t = x_106(t);
        q_12 = t;
        t = y_14;
        t = x_106(t);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_12, r_12);
        e_2 = t;
        t = SSLsetAnnotations(e_2, n_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_14 = ATgetArgument(t, 0);
          y_14 = ATgetArgument(t, 1);
          s_14 = ATgetArgument(t, 2);
          {
            ATerm n_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(w_14);
            n_13 = t;
            t = x_14;
            t = z_106(t);
            u_13 = t;
            t = y_14;
            t = z_106(t);
            v_13 = t;
            t = s_14;
            t = x_106(t);
            w_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_13, v_13, w_13);
            h_2 = t;
            t = SSLsetAnnotations(h_2, n_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_14 = ATgetArgument(t, 0);
              y_14 = ATgetArgument(t, 1);
              s_14 = ATgetArgument(t, 2);
              u_14 = ATgetArgument(t, 3);
              {
                ATerm d_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(w_14);
                d_15 = t;
                t = x_14;
                t = z_106(t);
                u_15 = t;
                t = y_14;
                t = z_106(t);
                w_15 = t;
                t = s_14;
                t = z_106(t);
                x_15 = t;
                t = u_14;
                t = x_106(t);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_15, w_15, x_15, y_15);
                i_2 = t;
                t = SSLsetAnnotations(i_2, d_15);
              }
            }
          else
            {
              ATerm v_16 = NULL,b_17 = NULL,c_17 = NULL,j_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  x_14 = ATgetArgument(t, 0);
                  y_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_14);
              v_16 = t;
              t = x_14;
              t = z_106(t);
              b_17 = t;
              t = y_14;
              t = x_106(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, b_17, c_17);
              j_2 = t;
              t = SSLsetAnnotations(j_2, v_16);
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm k_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm n_19 = ATgetArgument(t, 1);
          }
          {
            ATerm o_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      t = j_15;
    }
  else
    {
      t = k_19;
      if(match_cons(t, sym_SDefT_4))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm p_19 = ATgetArgument(t, 1);
          }
          {
            ATerm q_19 = ATgetArgument(t, 2);
          }
          {
            ATerm r_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_15;
    }
  return(t);
}
static ATerm h_8 (ATerm g_32, ATerm f_32, ATerm t)
{
  t = g_32;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,v_15 = NULL,r_2 = NULL;
  v_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  r_15 = t;
  t = s_15;
  t = r_88(t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, t_15);
  r_2 = t;
  t = SSLsetAnnotations(r_2, r_15);
  return(t);
}
static ATerm i_8 (ATerm c_127 (ATerm), ATerm d_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_56, ATerm w_56, ATerm v_56, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm z_15 = NULL;
    z_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_15, v_56);
    t = c_127(t);
    return(t);
  }
  static ATerm c_2 (ATerm t)
  {
    ATerm a_16 = NULL;
    a_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, w_56);
    t = c_127(t);
    return(t);
  }
  t = x_56;
  t = d_127(b_2, c_2, _id, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if(((ATgetType(s_19) != AT_LIST) || !(ATisEmpty(s_19))))
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
        {
          r_16 = ATgetFirst((ATermList) u_19);
          s_16 = (ATerm) ATgetNext((ATermList) u_19);
        }
      else
        _fail(t);
      {
        ATerm v_19 = ATgetArgument(t, 1);
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            t_16 = ATgetFirst((ATermList) v_19);
            u_16 = (ATerm) ATgetNext((ATermList) v_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_16, t_16), (ATerm) ATmakeAppl(sym__2, s_16, u_16));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_16), x_16);
  return(t);
}
static ATerm j_8 (ATerm w_126 (ATerm), ATerm x_126 (ATerm (ATerm), ATerm), ATerm p_56, ATerm s_56, ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL;
  t = p_56;
  t = w_126(t);
  e_16 = t;
  t = map_1_0(new_0_0, t);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_16, f_16);
  t = genzip_4_0(d_2, f_2, g_2, _id, t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, s_56);
  t = conc_0_0(t);
  n_16 = t;
  t = p_56;
  {
    static ATerm k_2 (ATerm t)
    {
      t = f_16;
      return(t);
    }
    t = x_126(k_2, t);
  }
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_16, s_56, n_16);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm h_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_17 = ATgetFirst((ATermList) t);
      o_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_17;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_17;
            if((l_17 != t))
              {
                _fail(t);
              }
            t = j_17;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = (ATerm) ATmakeAppl(sym__2, l_17, o_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_17, o_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_127 (ATerm), ATerm t)
{
  static ATerm f_19 (ATerm t)
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_127(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        {
          ATerm w_18 = NULL,z_18 = NULL,e_19 = NULL;
          static ATerm l_2 (ATerm t)
          {
            ATerm z_17 = NULL;
            z_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_17, not_null(e_19));
            t = f_19(t);
            return(t);
          }
          w_18 = t;
          if(match_cons(t, sym__2))
            {
              z_18 = ATgetArgument(t, 0);
              if(((e_19 != NULL) && (e_19 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_18;
          t = SRTS_all(l_2, t);
        }
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm r_126 (ATerm (ATerm), ATerm), ATerm s_126 (ATerm), ATerm t_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_126 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_19 = NULL;
  static ATerm p_20 (ATerm t)
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
      c_20 = t;
      if(match_cons(t, sym__2))
        {
          d_20 = ATgetArgument(t, 0);
          e_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              ATerm n_20 = NULL;
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_20, e_20);
              t = lookup_0_0(t);
              return(t);
            }
            t = d_20;
            t = r_126(n_2, t);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL;
              t = c_20;
              t = j_8(s_126, u_126, d_20, e_20, t);
              if(match_cons(t, sym__3))
                {
                  o_18 = ATgetArgument(t, 0);
                  p_18 = ATgetArgument(t, 1);
                  r_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_8(p_20, t_126, o_18, p_18, r_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(m_2, t);
    return(t);
  }
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_19, (ATerm) ATempty);
  t = p_20(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(((ATgetType(g_20) != AT_LIST) || !(ATisEmpty(g_20))))
        _fail(t);
      {
        ATerm h_20 = ATgetArgument(t, 1);
        if(((ATgetType(h_20) != AT_LIST) || !(ATisEmpty(h_20))))
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
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
        {
          s_20 = ATgetFirst((ATermList) i_20);
          t_20 = (ATerm) ATgetNext((ATermList) i_20);
        }
      else
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
          {
            u_20 = ATgetFirst((ATermList) j_20);
            v_20 = (ATerm) ATgetNext((ATermList) j_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_20, u_20), (ATerm) ATmakeAppl(sym__2, t_20, v_20));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_20), w_20);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm z_20 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_20;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_21);
      }
    else
      {
        t = k_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_21, b_21);
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if(((ATgetType(y_20) != AT_LIST) || !(ATisEmpty(y_20))))
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) != AT_LIST) || !(ATisEmpty(a_21))))
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
      ATerm d_21 = ATgetArgument(t, 0);
      if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
        {
          e_22 = ATgetFirst((ATermList) d_21);
          f_22 = (ATerm) ATgetNext((ATermList) d_21);
        }
      else
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
          {
            g_22 = ATgetFirst((ATermList) e_21);
            h_22 = (ATerm) ATgetNext((ATermList) e_21);
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
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_22);
      }
    else
      {
        t = f_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            n_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_22, n_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      {
        ATerm d_19 = NULL,j_19 = NULL,v_2 = NULL;
        t = SSLgetAnnotations(k_27);
        d_19 = t;
        t = l_27;
        t = s_106(t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_19, o_27);
        v_2 = t;
        t = SSLsetAnnotations(v_2, d_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_27 = ATgetArgument(t, 0);
          o_27 = ATgetArgument(t, 1);
          p_27 = ATgetArgument(t, 2);
          q_27 = ATgetArgument(t, 3);
          {
            ATerm f_20 = NULL,m_20 = NULL,o_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(k_27);
            f_20 = t;
            t = p_27;
            t = s_106(t);
            o_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_27, o_20);
            t = genzip_4_0(o_2, p_2, q_2, s_2, t);
            m_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_27, o_27, m_20, q_27);
            w_2 = t;
            t = SSLsetAnnotations(w_2, f_20);
          }
        }
      else
        {
          ATerm v_21 = NULL,b_22 = NULL,c_22 = NULL,x_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              l_27 = ATgetArgument(t, 0);
              o_27 = ATgetArgument(t, 1);
              p_27 = ATgetArgument(t, 2);
              q_27 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_27);
          v_21 = t;
          t = p_27;
          t = s_106(t);
          c_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_27, c_22);
          t = genzip_4_0(t_2, u_2, y_2, z_2, t);
          b_22 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, l_27, o_27, b_22, q_27);
          x_2 = t;
          t = SSLsetAnnotations(x_2, v_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,b_3 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  u_27 = t;
  t = v_27;
  t = g_85(t);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_27);
  b_3 = t;
  t = SSLsetAnnotations(b_3, u_27);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            m_28 = ATgetArgument(t, 0);
            n_28 = ATgetArgument(t, 1);
            o_28 = ATgetArgument(t, 2);
            p_28 = ATgetArgument(t, 3);
            t = o_28;
            t = map_1_0(c_3, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                m_28 = ATgetArgument(t, 0);
                n_28 = ATgetArgument(t, 1);
                o_28 = ATgetArgument(t, 2);
                p_28 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = o_28;
            t = map_1_0(t_3, t);
          }
      }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm w_28 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_28 = ATgetArgument(t, 0);
          {
            ATerm n_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_21);
      t = w_28;
    }
  else
    {
      t = l_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_28;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm j_29 = NULL;
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_29 = ATgetArgument(t, 0);
          {
            ATerm q_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_21);
      t = j_29;
    }
  else
    {
      t = o_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_29;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
      t = u_29;
      t = h_8(v_29, x_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
          y_29 = ATgetArgument(t, 2);
          t = x_29;
          t = map_1_0(v_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              v_29 = ATgetArgument(t, 0);
              x_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, v_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_29 = ATgetArgument(t, 0);
                  x_29 = ATgetArgument(t, 1);
                  y_29 = ATgetArgument(t, 2);
                  z_29 = ATgetArgument(t, 3);
                  t = x_29;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_29 = ATgetArgument(t, 0);
                      x_29 = ATgetArgument(t, 1);
                      y_29 = ATgetArgument(t, 2);
                      z_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_29;
                  t = map_1_0(x_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_30 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = j_30;
    }
  else
    {
      t = r_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_30;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm u_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_32 = ATgetArgument(t, 0);
          {
            ATerm x_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_21);
      t = z_32;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_32;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm b_34 = NULL;
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_34 = ATgetArgument(t, 0);
          {
            ATerm a_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_21);
      t = b_34;
    }
  else
    {
      t = y_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_34;
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
  ATerm d_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm m_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(k_22);
      {
        ATerm f_34 = NULL,g_34 = NULL;
        f_34 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm p_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        g_34 = t;
        t = SSLgetAnnotations(f_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) q_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(r_22) != AT_LIST) || !(ATisEmpty(r_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_34;
      }
    }
  else
    {
      t = d_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm u_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm v_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_22);
            _fail(t);
          }
        else
          {
            t = s_22;
          }
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t_79, ATerm s_79, ATerm t)
{
  t = t_79;
  t = topdown_1_0(y_3, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, t_79);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_35;
  if(match_cons(t, sym_Match_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_35;
  if(match_cons(t, sym_Var_1))
    {
      f_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_35;
  if(match_cons(t, sym_Seq_2))
    {
      h_35 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
      t = h_35;
      if(match_cons(t, sym_Build_1))
        {
          i_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_35;
      if(match_cons(t, sym_Var_1))
        {
          u_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_34;
      if((f_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_35)), v_34);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_35;
      if(match_cons(t, sym_Var_1))
        {
          i_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_35;
      if((f_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_35));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_35 = ATgetArgument(t, 0);
      b_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_35;
  if(match_cons(t, sym_Build_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_36;
  if(match_cons(t, sym_Seq_2))
    {
      c_36 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
      t = c_36;
      if(match_cons(t, sym_Match_1))
        {
          w_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_35;
      if((a_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_36), x_35);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          c_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_36;
      if((a_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, a_36);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm u_36 = NULL,x_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_37;
  if(match_cons(t, sym_Match_1))
    {
      b_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_37;
  if(match_cons(t, sym_Seq_2))
    {
      d_37 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
      t = d_37;
      if(match_cons(t, sym_Match_1))
        {
          u_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_36;
      if((b_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_37), x_36);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          d_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_37;
      if((b_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, b_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm u_37 = NULL,w_37 = NULL,b_38 = NULL,d_38 = NULL,f_38 = NULL,g_38 = NULL,j_38 = NULL,k_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_38;
  if(match_cons(t, sym_Seq_2))
    {
      g_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
      t = g_38;
      if(match_cons(t, sym_PrimT_3))
        {
          u_37 = ATgetArgument(t, 0);
          w_37 = ATgetArgument(t, 1);
          b_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, u_37, w_37, b_38), j_38);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          g_38 = ATgetArgument(t, 0);
          j_38 = ATgetArgument(t, 1);
          k_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, g_38, j_38, k_38);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,t_39 = NULL,v_39 = NULL,f_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_39;
  if(match_cons(t, sym_Build_1))
    {
      ATerm x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_39;
  if(match_cons(t, sym_Seq_2))
    {
      f_40 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
      t = f_40;
      if(match_cons(t, sym_Build_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_39), k_39);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, f_40);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      if(((ATgetType(y_22) != AT_LIST) || !(ATisEmpty(y_22))))
        _fail(t);
      {
        ATerm z_22 = ATgetArgument(t, 1);
        if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
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
  ATerm i_42 = NULL,k_42 = NULL,l_42 = NULL,q_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
        {
          i_42 = ATgetFirst((ATermList) a_23);
          k_42 = (ATerm) ATgetNext((ATermList) a_23);
        }
      else
        _fail(t);
      {
        ATerm b_23 = ATgetArgument(t, 1);
        if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
          {
            l_42 = ATgetFirst((ATermList) b_23);
            q_42 = (ATerm) ATgetNext((ATermList) b_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_42, l_42), (ATerm) ATmakeAppl(sym__2, k_42, q_42));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_42), r_42);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_42), (ATerm) ATmakeAppl(sym_Match_1, u_42));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(((ATgetType(c_23) != AT_LIST) || !(ATisEmpty(c_23))))
        _fail(t);
      {
        ATerm e_23 = ATgetArgument(t, 1);
        if(((ATgetType(e_23) != AT_LIST) || !(ATisEmpty(e_23))))
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
  ATerm b_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
        {
          b_43 = ATgetFirst((ATermList) f_23);
          g_43 = (ATerm) ATgetNext((ATermList) f_23);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
          {
            h_43 = ATgetFirst((ATermList) g_23);
            i_43 = (ATerm) ATgetNext((ATermList) g_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_43, h_43), (ATerm) ATmakeAppl(sym__2, g_43, i_43));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_43), j_43);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_43), (ATerm) ATmakeAppl(sym_Match_1, m_43));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,i_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_41;
  if(match_cons(t, sym_Build_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_41;
  if(match_cons(t, sym_Op_2))
    {
      r_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_41;
  if(match_cons(t, sym_Seq_2))
    {
      z_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
      {
        ATerm h_42 = NULL;
        t = z_41;
        if(match_cons(t, sym_Match_1))
          {
            b_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_42;
        if(match_cons(t, sym_Op_2))
          {
            d_41 = ATgetArgument(t, 0);
            e_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_41;
        if((r_41 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, x_41, e_41);
        t = genzip_4_0(z_3, a_4, b_4, c_4, t);
        h_42 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_41, x_41)), i_41));
      }
    }
  else
    {
      ATerm a_43 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          z_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_41;
      if(match_cons(t, sym_Op_2))
        {
          b_42 = ATgetArgument(t, 0);
          c_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_42;
      if((r_41 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, x_41, c_42);
      t = genzip_4_0(e_4, f_4, g_4, h_4, t);
      a_43 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_43), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_41, x_41)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm c_45 = NULL,h_45 = NULL,i_45 = NULL,k_45 = NULL,l_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_45 = ATgetArgument(t, 0);
      r_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_45;
  if(match_cons(t, sym_Build_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_45;
  if(match_cons(t, sym_Op_2))
    {
      l_45 = ATgetArgument(t, 0);
      {
        ATerm h_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_45;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            s_45 = ATgetArgument(t, 0);
            {
              ATerm k_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_23);
        t = s_45;
        if(match_cons(t, sym_Match_1))
          {
            t_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_45;
        if(match_cons(t, sym_Op_2))
          {
            c_45 = ATgetArgument(t, 0);
            {
              ATerm l_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, c_45);
        {
          ATerm m_23 = t;
          if((PushChoice() == 0))
            {
              ATerm d_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  d_23 = ATgetArgument(t, 0);
                  if((d_23 != ATgetArgument(t, 1)))
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
              t = m_23;
            }
        }
        t = term_n_23;
      }
    else
      {
        t = i_23;
        if(match_cons(t, sym_Match_1))
          {
            s_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_45;
        if(match_cons(t, sym_Op_2))
          {
            t_45 = ATgetArgument(t, 0);
            {
              ATerm p_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, t_45);
        {
          ATerm q_23 = t;
          if((PushChoice() == 0))
            {
              ATerm o_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  o_23 = ATgetArgument(t, 0);
                  if((o_23 != ATgetArgument(t, 1)))
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
              t = q_23;
            }
        }
        t = term_n_23;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  static ATerm z_45 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_108(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = SRTS_one(z_45, t);
      }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,u_47 = NULL,v_47 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  f_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_47;
  if(match_cons(t, sym_Let_2))
    {
      h_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
      {
        ATerm q_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, g_47, h_48);
        t = conc_0_0(t);
        q_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_48, j_48);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          h_48 = ATgetArgument(t, 0);
          j_48 = ATgetArgument(t, 1);
          k_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_47 = ATgetFirst((ATermList) t);
          u_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_47;
      if(match_cons(t, sym_SDefT_4))
        {
          k_47 = ATgetArgument(t, 0);
          l_47 = ATgetArgument(t, 1);
          m_47 = ATgetArgument(t, 2);
          n_47 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = l_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_48;
      if(match_cons(t, sym_SVar_1))
        {
          i_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_48;
      if((k_47 != t))
        {
          _fail(t);
        }
      t = n_47;
      {
        ATerm t_23 = t;
        if((PushChoice() == 0))
          {
            static ATerm i_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm u_23 = ATgetArgument(t, 0);
                  if(match_cons(u_23, sym_SVar_1))
                    {
                      if((k_47 != ATgetArgument(u_23, 0)))
                        {
                          _fail(ATgetArgument(u_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_23 = ATgetArgument(t, 1);
                    if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
                      _fail(t);
                  }
                  {
                    ATerm w_23 = ATgetArgument(t, 2);
                    if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
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
            t = t_23;
          }
      }
      t = n_47;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm l_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,w_49 = NULL,x_49 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      w_49 = ATgetArgument(t, 0);
      t = w_49;
      if(match_cons(t, sym_Seq_2))
        {
          u_49 = ATgetArgument(t, 0);
          p_49 = ATgetArgument(t, 1);
          t = u_49;
          if(match_cons(t, sym_Where_1))
            {
              l_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_49;
          if(match_cons(t, sym_Seq_2))
            {
              r_49 = ATgetArgument(t, 0);
              t_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_49;
          if(match_cons(t, sym_Build_1))
            {
              s_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, l_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_49), t_49)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              u_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, u_49);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          w_49 = ATgetArgument(t, 0);
          t = w_49;
          if(match_cons(t, sym_Test_1))
            {
              u_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, u_49);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              w_49 = ATgetArgument(t, 0);
              t = w_49;
              if(match_cons(t, sym_Not_1))
                {
                  u_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, u_49);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  w_49 = ATgetArgument(t, 0);
                  x_49 = ATgetArgument(t, 1);
                  t = x_49;
                  if((w_49 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      w_49 = ATgetArgument(t, 0);
                      x_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_49;
                  if((w_49 != t))
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
  ATerm e_51 = NULL,f_51 = NULL,k_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      e_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
      t = e_51;
      if(match_cons(t, sym_LChoice_2))
        {
          f_51 = ATgetArgument(t, 0);
          k_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_51, (ATerm) ATmakeAppl(sym_LChoice_2, k_51, l_51));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          e_51 = ATgetArgument(t, 0);
          l_51 = ATgetArgument(t, 1);
          t = e_51;
          if(match_cons(t, sym_Seq_2))
            {
              f_51 = ATgetArgument(t, 0);
              k_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, f_51, (ATerm) ATmakeAppl(sym_Seq_2, k_51, l_51));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              e_51 = ATgetArgument(t, 0);
              l_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_51;
          if(match_cons(t, sym_Choice_2))
            {
              f_51 = ATgetArgument(t, 0);
              k_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_51, (ATerm) ATmakeAppl(sym_Choice_2, k_51, l_51));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,t_52 = NULL,u_52 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_52 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_52, u_52);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_52 = ATgetArgument(t, 0);
          t = t_52;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_52 = ATgetFirst((ATermList) t);
              o_52 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_52, (ATerm) ATmakeAppl(sym_LChoices_1, o_52));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              t_52 = ATgetArgument(t, 0);
              t = t_52;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_52 = ATgetFirst((ATermList) t);
                  o_52 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_52, (ATerm) ATmakeAppl(sym_Choices_1, o_52));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  t_52 = ATgetArgument(t, 0);
                  t = t_52;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_52 = ATgetFirst((ATermList) t);
                      o_52 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_52, (ATerm) ATmakeAppl(sym_Seqs_1, o_52));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_x_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      t_52 = ATgetArgument(t, 0);
                      u_52 = ATgetArgument(t, 1);
                      p_52 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, u_52, (ATerm) ATmakeAppl(sym_Op_2, term_y_23, (ATerm) ATinsert(ATinsert(ATempty, p_52), t_52)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          t_52 = ATgetArgument(t, 0);
                          u_52 = ATgetArgument(t, 1);
                          p_52 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_52)), t_52), (ATerm) ATmakeAppl(sym_Build_1, u_52)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              t_52 = ATgetArgument(t, 0);
                              u_52 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_52, (ATerm) ATmakeAppl(sym_Match_1, u_52));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  t_52 = ATgetArgument(t, 0);
                                  u_52 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_52), u_52);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      t_52 = ATgetArgument(t, 0);
                                      u_52 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_52), t_52);
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
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      t_57 = ATgetArgument(t, 0);
      t = t_57;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_n_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          t_57 = ATgetArgument(t, 0);
          t = t_57;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_x_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              t_57 = ATgetArgument(t, 0);
              u_57 = ATgetArgument(t, 1);
              t = t_57;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  t_57 = ATgetArgument(t, 0);
                  u_57 = ATgetArgument(t, 1);
                  t = u_57;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_n_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      t_57 = ATgetArgument(t, 0);
                      u_57 = ATgetArgument(t, 1);
                      t = u_57;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_n_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          t_57 = ATgetArgument(t, 0);
                          t = t_57;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_n_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              t_57 = ATgetArgument(t, 0);
                              t = t_57;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_n_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  t_57 = ATgetArgument(t, 0);
                                  u_57 = ATgetArgument(t, 1);
                                  t = u_57;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_n_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      t_57 = ATgetArgument(t, 0);
                                      u_57 = ATgetArgument(t, 1);
                                      t = u_57;
                                      t = fetch_1_0(j_4, t);
                                      t = term_n_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          t_57 = ATgetArgument(t, 0);
                                          u_57 = ATgetArgument(t, 1);
                                          t = u_57;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = t_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = u_57;
                                                }
                                              else
                                                {
                                                  t = t_57;
                                                }
                                            }
                                          else
                                            {
                                              t = t_57;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = u_57;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              t_57 = ATgetArgument(t, 0);
                                              u_57 = ATgetArgument(t, 1);
                                              t = u_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = t_57;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = u_57;
                                                    }
                                                  else
                                                    {
                                                      t = t_57;
                                                    }
                                                }
                                              else
                                                {
                                                  t = t_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = u_57;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  t_57 = ATgetArgument(t, 0);
                                                  t = t_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_n_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      t_57 = ATgetArgument(t, 0);
                                                      u_57 = ATgetArgument(t, 1);
                                                      v_57 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, t_57, u_57);
                                                }
                                            }
                                        }
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
  ATerm y_59 = NULL,e_60 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_60 = ATgetArgument(t, 0);
      t = e_60;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_x_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          e_60 = ATgetArgument(t, 0);
          t = e_60;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_n_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              e_60 = ATgetArgument(t, 0);
              y_59 = ATgetArgument(t, 1);
              t = y_59;
              if(match_cons(t, sym_Id_0))
                {
                  t = e_60;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = y_59;
                    }
                  else
                    {
                      t = e_60;
                    }
                }
              else
                {
                  t = e_60;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_59;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  e_60 = ATgetArgument(t, 0);
                  y_59 = ATgetArgument(t, 1);
                  t = e_60;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_x_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      e_60 = ATgetArgument(t, 0);
                      y_59 = ATgetArgument(t, 1);
                      t = y_59;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_x_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          e_60 = ATgetArgument(t, 0);
                          y_59 = ATgetArgument(t, 1);
                          t = y_59;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_x_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              e_60 = ATgetArgument(t, 0);
                              t = e_60;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_x_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  e_60 = ATgetArgument(t, 0);
                                  t = e_60;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_x_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      e_60 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = e_60;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_x_23;
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
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            {
              ATerm d_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = d_24;
                  {
                    ATerm f_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(g_24);
                      }
                    else
                      {
                        t = f_24;
                        {
                          ATerm h_24 = t;
                          int i_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(i_24);
                            }
                          else
                            {
                              t = h_24;
                              {
                                ATerm j_24 = t;
                                int k_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_60 = NULL,a_61 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        z_60 = ATgetArgument(t, 0);
                                        a_61 = ATgetArgument(t, 1);
                                        t = z_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_61;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            z_60 = ATgetArgument(t, 0);
                                            a_61 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = z_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_61;
                                      }
                                    LocalPopChoice(k_24);
                                  }
                                else
                                  {
                                    t = j_24;
                                    {
                                      ATerm l_24 = t;
                                      int m_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(m_24);
                                        }
                                      else
                                        {
                                          t = l_24;
                                          {
                                            ATerm n_24 = t;
                                            int o_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(o_24);
                                              }
                                            else
                                              {
                                                t = n_24;
                                                {
                                                  ATerm p_24 = t;
                                                  int q_24 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(q_24);
                                                    }
                                                  else
                                                    {
                                                      t = p_24;
                                                      {
                                                        ATerm r_24 = t;
                                                        int s_24 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(s_24);
                                                          }
                                                        else
                                                          {
                                                            t = r_24;
                                                            {
                                                              ATerm t_24 = t;
                                                              int u_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(u_24);
                                                                }
                                                              else
                                                                {
                                                                  t = t_24;
                                                                  {
                                                                    ATerm v_24 = t;
                                                                    int w_24 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(w_24);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_24;
                                                                        {
                                                                          ATerm x_24 = t;
                                                                          int y_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(y_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_24;
                                                                              {
                                                                                ATerm z_24 = t;
                                                                                int a_25 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(a_25);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_24;
                                                                                    {
                                                                                      ATerm e_61 = NULL,f_61 = NULL,j_61 = NULL,k_61 = NULL;
                                                                                      f_61 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          j_61 = ATgetArgument(t, 0);
                                                                                          k_61 = ATgetArgument(t, 1);
                                                                                          t = j_61;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              e_61 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = f_61;
                                                                                          t = n_9(e_61, k_61, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              j_61 = ATgetArgument(t, 0);
                                                                                              k_61 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = j_61;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = k_61;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,h_70 = NULL;
  d_70 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = d_70;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = d_70;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              e_70 = ATgetArgument(t, 0);
              {
                ATerm e_28 = NULL,g_28 = NULL,i_3 = NULL;
                t = SSLgetAnnotations(d_70);
                e_28 = t;
                t = e_70;
                {
                  static ATerm b_31 (ATerm t)
                  {
                    ATerm w_30 = NULL,x_30 = NULL,a_31 = NULL;
                    w_30 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        x_30 = ATgetArgument(t, 0);
                        {
                          ATerm m_31 = NULL,d_3 = NULL;
                          t = SSLgetAnnotations(w_30);
                          m_31 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, x_30);
                          d_3 = t;
                          t = SSLsetAnnotations(d_3, m_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            x_30 = ATgetArgument(t, 0);
                            {
                              ATerm u_31 = NULL,e_3 = NULL;
                              t = SSLgetAnnotations(w_30);
                              u_31 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, x_30);
                              e_3 = t;
                              t = SSLsetAnnotations(e_3, u_31);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                x_30 = ATgetArgument(t, 0);
                                {
                                  ATerm e_32 = NULL,f_3 = NULL;
                                  t = SSLgetAnnotations(w_30);
                                  e_32 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, x_30);
                                  f_3 = t;
                                  t = SSLsetAnnotations(f_3, e_32);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    x_30 = ATgetArgument(t, 0);
                                    {
                                      ATerm o_32 = NULL,g_3 = NULL;
                                      t = SSLgetAnnotations(w_30);
                                      o_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, x_30);
                                      g_3 = t;
                                      t = SSLsetAnnotations(g_3, o_32);
                                    }
                                  }
                                else
                                  {
                                    ATerm w_32 = NULL,a_33 = NULL,h_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        x_30 = ATgetArgument(t, 0);
                                        a_31 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(w_30);
                                    w_32 = t;
                                    t = a_31;
                                    t = map_1_0(b_31, t);
                                    a_33 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, x_30, a_33);
                                    h_3 = t;
                                    t = SSLsetAnnotations(h_3, w_32);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = b_31(t);
                }
                g_28 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, g_28);
                i_3 = t;
                t = SSLsetAnnotations(i_3, e_28);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  e_70 = ATgetArgument(t, 0);
                  h_70 = ATgetArgument(t, 1);
                  {
                    ATerm j_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL;
                    t = SSLgetAnnotations(d_70);
                    j_33 = t;
                    t = e_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        s_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_70);
                    q_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_33);
                    j_3 = t;
                    t = SSLsetAnnotations(j_3, q_33);
                    t_33 = t;
                    t = h_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        o_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(h_70);
                    n_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_33);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, n_33);
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
                      e_70 = ATgetArgument(t, 0);
                      {
                        ATerm l_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,n_3 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(d_70);
                        l_34 = t;
                        t = e_70;
                        if(match_cons(t, sym_Var_1))
                          {
                            o_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(e_70);
                        n_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_34);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, n_34);
                        p_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_34);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, l_34);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          e_70 = ATgetArgument(t, 0);
                          h_70 = ATgetArgument(t, 1);
                          {
                            ATerm z_34 = NULL,o_3 = NULL;
                            t = SSLgetAnnotations(d_70);
                            z_34 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, e_70, h_70);
                            o_3 = t;
                            t = SSLsetAnnotations(o_3, z_34);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              e_70 = ATgetArgument(t, 0);
                              h_70 = ATgetArgument(t, 1);
                              c_70 = ATgetArgument(t, 2);
                              {
                                ATerm t_35 = NULL,p_3 = NULL;
                                t = SSLgetAnnotations(d_70);
                                t_35 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, e_70, h_70, c_70);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, t_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  e_70 = ATgetArgument(t, 0);
                                  h_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_36 = NULL,s_36 = NULL,t_36 = NULL,q_3 = NULL;
                                    t = SSLgetAnnotations(d_70);
                                    p_36 = t;
                                    t = e_70;
                                    t = simple_strategy_0_0(t);
                                    s_36 = t;
                                    t = h_70;
                                    t = simple_strategy_0_0(t);
                                    t_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, s_36, t_36);
                                    q_3 = t;
                                    t = SSLsetAnnotations(q_3, p_36);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      e_70 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_37 = NULL,m_37 = NULL,r_3 = NULL;
                                        t = SSLgetAnnotations(d_70);
                                        i_37 = t;
                                        t = e_70;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        m_37 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_37);
                                        r_3 = t;
                                        t = SSLsetAnnotations(r_3, i_37);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_37 = NULL,y_37 = NULL,s_3 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          e_70 = ATgetArgument(t, 0);
                                          h_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(d_70);
                                      t_37 = t;
                                      t = h_70;
                                      t = simple_strategy_0_0(t);
                                      y_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, e_70, y_37);
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
static ATerm o_8 (ATerm g_122 (ATerm), ATerm m_53, ATerm l_53, ATerm t)
{
  static ATerm j_72 (ATerm t)
  {
    static ATerm k_72 (ATerm m_71, ATerm t)
    {
      ATerm p_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,l_4 = NULL;
      t = m_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_71 = ATgetFirst((ATermList) t);
          r_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm k_4 (ATerm t)
        {
          t = l_53;
          return(t);
        }
        t = s_10(g_122, k_4, p_71, r_71, t);
      }
      t = m_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_71 = ATgetFirst((ATermList) t);
          u_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_71);
      s_71 = t;
      t = u_71;
      t = j_72(t);
      v_71 = t;
      t = (ATerm) ATinsert(CheckATermList(v_71), t_71);
      l_4 = t;
      t = SSLsetAnnotations(l_4, s_71);
      return(t);
    }
    ATerm x_71 = NULL,d_72 = NULL;
    x_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_71;
      }
    else
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_25 = ATgetFirst((ATermList) t);
                d_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(c_25);
            {
              ATerm e_25 = t;
              int f_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_72(x_71, t);
                  LocalPopChoice(f_25);
                }
              else
                {
                  t = e_25;
                  t = d_72;
                  t = j_72(t);
                }
            }
          }
        else
          {
            t = b_25;
            t = k_72(x_71, t);
          }
      }
    return(t);
  }
  t = m_53;
  t = j_72(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(d_139, e_139, f_139, t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,y_38 = NULL,e_39 = NULL,f_39 = NULL,o_4 = NULL;
        g_73 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            h_73 = ATgetArgument(t, 0);
            i_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_73);
        y_38 = t;
        t = h_73;
        t = f_139(t);
        e_39 = t;
        t = i_73;
        t = d_139(t);
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, e_39, f_39);
        o_4 = t;
        t = SSLsetAnnotations(o_4, y_38);
      }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_74);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm k_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_25);
          }
        else
          {
            t = k_25;
            {
              ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_74 = ATgetArgument(t, 0);
                  l_74 = ATgetArgument(t, 1);
                  m_74 = ATgetArgument(t, 2);
                  n_74 = ATgetArgument(t, 3);
                  t = m_74;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_74 = ATgetArgument(t, 0);
                      l_74 = ATgetArgument(t, 1);
                      m_74 = ATgetArgument(t, 2);
                      n_74 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_74;
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
  ATerm a_75 = NULL;
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_75 = ATgetArgument(t, 0);
          {
            ATerm o_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_25);
      t = a_75;
    }
  else
    {
      t = m_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_75;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm r_75 = NULL;
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_75 = ATgetArgument(t, 0);
          {
            ATerm r_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_25);
      t = r_75;
    }
  else
    {
      t = p_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_75;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm v_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_75);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            {
              ATerm x_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_75 = ATgetArgument(t, 0);
                  a_76 = ATgetArgument(t, 1);
                  b_76 = ATgetArgument(t, 2);
                  c_76 = ATgetArgument(t, 3);
                  t = b_76;
                  t = map_1_0(i_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_75 = ATgetArgument(t, 0);
                      a_76 = ATgetArgument(t, 1);
                      b_76 = ATgetArgument(t, 2);
                      c_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_76;
                  t = map_1_0(k_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_76 = NULL;
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_76 = ATgetArgument(t, 0);
          {
            ATerm y_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = l_76;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_76;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm u_76 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_76 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = u_76;
    }
  else
    {
      t = z_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_76;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm y_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_76);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_77 = ATgetArgument(t, 0);
                  b_77 = ATgetArgument(t, 1);
                  c_77 = ATgetArgument(t, 2);
                  d_77 = ATgetArgument(t, 3);
                  t = c_77;
                  t = map_1_0(p_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_77 = ATgetArgument(t, 0);
                      b_77 = ATgetArgument(t, 1);
                      c_77 = ATgetArgument(t, 2);
                      d_77 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_77;
                  t = map_1_0(q_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm k_77 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_77 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_26);
      t = k_77;
    }
  else
    {
      t = g_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_77;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm a_78 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_78 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = a_78;
    }
  else
    {
      t = j_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_78;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm e_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_78);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            {
              ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_78 = ATgetArgument(t, 0);
                  h_78 = ATgetArgument(t, 1);
                  i_78 = ATgetArgument(t, 2);
                  j_78 = ATgetArgument(t, 3);
                  t = i_78;
                  t = map_1_0(t_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_78 = ATgetArgument(t, 0);
                      h_78 = ATgetArgument(t, 1);
                      i_78 = ATgetArgument(t, 2);
                      j_78 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_78;
                  t = map_1_0(u_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm s_78 = NULL;
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_78 = ATgetArgument(t, 0);
          {
            ATerm s_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_26);
      t = s_78;
    }
  else
    {
      t = q_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_78;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm f_79 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_79 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_26);
      t = f_79;
    }
  else
    {
      t = t_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_79;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm g_74 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      g_74 = ATgetArgument(t, 0);
      t = g_74;
      t = free_vars_3_0(m_4, n_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          g_74 = ATgetArgument(t, 0);
          t = g_74;
          t = free_vars_3_0(u_4, h_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              g_74 = ATgetArgument(t, 0);
              t = g_74;
              t = free_vars_3_0(n_5, o_5, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_74 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_74;
              t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
  s_85 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_85 = ATgetArgument(t, 0);
      o_85 = ATgetArgument(t, 1);
      {
        ATerm q_39 = NULL,a_40 = NULL,b_40 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(s_85);
        q_39 = t;
        t = t_85;
        t = v_106(t);
        a_40 = t;
        t = o_85;
        t = t_106(t);
        b_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_40, b_40);
        t_4 = t;
        t = SSLsetAnnotations(t_4, q_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          t_85 = ATgetArgument(t, 0);
          o_85 = ATgetArgument(t, 1);
          p_85 = ATgetArgument(t, 2);
          r_85 = ATgetArgument(t, 3);
          {
            ATerm p_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(s_85);
            p_40 = t;
            t = t_85;
            t = v_106(t);
            u_40 = t;
            t = o_85;
            t = v_106(t);
            v_40 = t;
            t = p_85;
            t = v_106(t);
            w_40 = t;
            t = r_85;
            t = t_106(t);
            x_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_40, v_40, w_40, x_40);
            w_4 = t;
            t = SSLsetAnnotations(w_4, p_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              t_85 = ATgetArgument(t, 0);
              o_85 = ATgetArgument(t, 1);
              p_85 = ATgetArgument(t, 2);
              r_85 = ATgetArgument(t, 3);
              {
                ATerm n_41 = NULL,v_41 = NULL,w_41 = NULL,a_42 = NULL,j_42 = NULL,x_4 = NULL;
                t = SSLgetAnnotations(s_85);
                n_41 = t;
                t = t_85;
                t = v_106(t);
                v_41 = t;
                t = o_85;
                t = v_106(t);
                w_41 = t;
                t = p_85;
                t = v_106(t);
                a_42 = t;
                t = r_85;
                t = t_106(t);
                j_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, v_41, w_41, a_42, j_42);
                x_4 = t;
                t = SSLsetAnnotations(x_4, n_41);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_85 = ATgetArgument(t, 0);
                  {
                    ATerm e_43 = NULL,n_43 = NULL,y_4 = NULL;
                    t = SSLgetAnnotations(s_85);
                    e_43 = t;
                    t = t_85;
                    t = t_106(t);
                    n_43 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_43);
                    y_4 = t;
                    t = SSLsetAnnotations(y_4, e_43);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      t_85 = ATgetArgument(t, 0);
                      {
                        ATerm v_43 = NULL,x_43 = NULL,z_4 = NULL;
                        t = SSLgetAnnotations(s_85);
                        v_43 = t;
                        t = t_85;
                        t = t_106(t);
                        x_43 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_43);
                        z_4 = t;
                        t = SSLsetAnnotations(z_4, v_43);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          t_85 = ATgetArgument(t, 0);
                          {
                            ATerm d_44 = NULL,f_44 = NULL,c_5 = NULL;
                            t = SSLgetAnnotations(s_85);
                            d_44 = t;
                            t = t_85;
                            t = t_106(t);
                            f_44 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, f_44);
                            c_5 = t;
                            t = SSLsetAnnotations(c_5, d_44);
                          }
                        }
                      else
                        {
                          ATerm o_44 = NULL,u_44 = NULL,g_5 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              t_85 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(s_85);
                          o_44 = t;
                          t = t_85;
                          t = t_106(t);
                          u_44 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, u_44);
                          g_5 = t;
                          t = SSLsetAnnotations(g_5, o_44);
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
  ATerm s_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_86);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_86 = ATgetArgument(t, 0);
                  v_86 = ATgetArgument(t, 1);
                  w_86 = ATgetArgument(t, 2);
                  x_86 = ATgetArgument(t, 3);
                  t = w_86;
                  t = map_1_0(x_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_86 = ATgetArgument(t, 0);
                      v_86 = ATgetArgument(t, 1);
                      w_86 = ATgetArgument(t, 2);
                      x_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_86;
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
  ATerm g_87 = NULL;
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_87 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_27);
      t = g_87;
    }
  else
    {
      t = a_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_87;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm p_87 = NULL;
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_87 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_27);
      t = p_87;
    }
  else
    {
      t = d_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_87;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_86 = NULL,p_86 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_86 = ATgetArgument(t, 0);
      t = p_86;
      if(match_cons(t, sym_Rule_3))
        {
          k_86 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
          {
            ATerm h_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_86;
      t = free_vars_3_0(v_5, w_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_86 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_86;
    }
  return(t);
}
static ATerm t_8 (ATerm i_122 (ATerm), ATerm o_53, ATerm n_53, ATerm t)
{
  static ATerm i_88 (ATerm t)
  {
    ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
    d_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_88;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_88 = ATgetFirst((ATermList) t);
            f_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_88;
              {
                static ATerm z_5 (ATerm t)
                {
                  t = n_53;
                  return(t);
                }
                t = s_10(i_122, z_5, e_88, f_88, t);
              }
              t = i_88(t);
              LocalPopChoice(m_27);
            }
          else
            {
              t = j_27;
              {
                ATerm n_45 = NULL,w_45 = NULL,d_6 = NULL;
                t = SSLgetAnnotations(d_88);
                n_45 = t;
                t = f_88;
                t = i_88(t);
                w_45 = t;
                t = (ATerm) ATinsert(CheckATermList(w_45), e_88);
                d_6 = t;
                t = SSLsetAnnotations(d_6, n_45);
              }
            }
        }
      }
    return(t);
  }
  t = o_53;
  t = i_88(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(((ATgetType(n_27) != AT_LIST) || !(ATisEmpty(n_27))))
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(((ATgetType(r_27) != AT_LIST) || !(ATisEmpty(r_27))))
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
  ATerm q_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
        {
          q_88 = ATgetFirst((ATermList) s_27);
          s_88 = (ATerm) ATgetNext((ATermList) s_27);
        }
      else
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
          {
            t_88 = ATgetFirst((ATermList) t_27);
            u_88 = (ATerm) ATgetNext((ATermList) t_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_88, t_88), (ATerm) ATmakeAppl(sym__2, s_88, u_88));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL;
  if(match_cons(t, sym__2))
    {
      v_88 = ATgetArgument(t, 0);
      w_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_88), v_88);
  return(t);
}
static ATerm v_8 (ATerm i_685, ATerm n_685, ATerm f_69, ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
  t = SSL_explode_term(n_685);
  if(match_cons(t, sym__2))
    {
      l_88 = ATgetArgument(t, 0);
      n_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_685);
  if(match_cons(t, sym__2))
    {
      if((l_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_88, n_88);
  t = genzip_4_0(a_6, b_6, c_6, _id, t);
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_88, f_69);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_114 (ATerm), ATerm f_114 (ATerm), ATerm t)
{
  static ATerm y_88 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_114(t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = f_114(t);
        t = y_88(t);
      }
    return(t);
  }
  t = y_88(t);
  return(t);
}
ATerm for_3_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t)
{
  t = h_114(t);
  t = while_not_2_0(i_114, j_114, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm f_89 = NULL;
  f_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_89);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,g_6 = NULL;
  j_89 = t;
  if(match_cons(t, sym__2))
    {
      h_89 = ATgetArgument(t, 0);
      i_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_89);
  g_89 = t;
  t = i_89;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_89, i_89);
  g_6 = t;
  t = SSLsetAnnotations(g_6, g_89);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
  i_90 = t;
  if(match_cons(t, sym__2))
    {
      j_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_90 = ATgetFirst((ATermList) t);
      m_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_91(j_90, k_90, i_90, t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_90), l_90), m_90);
          }
      }
    }
  else
    {
      t = a_91(j_90, k_90, i_90, t);
    }
  return(t);
}
static ATerm a_91 (ATerm k_89, ATerm l_89, ATerm m_89, ATerm t)
{
  ATerm n_89 = NULL,q_89 = NULL,h_6 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL;
  t = SSLgetAnnotations(m_89);
  n_89 = t;
  t = l_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_89 = ATgetFirst((ATermList) t);
      w_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_89;
  if(match_cons(t, sym__2))
    {
      u_89 = ATgetArgument(t, 0);
      v_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89;
        if((u_89 != t))
          {
            _fail(t);
          }
        t = w_89;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = l_89;
        t = v_8(u_89, v_89, w_89, t);
      }
  }
  q_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_89, q_89);
  h_6 = t;
  t = SSLsetAnnotations(h_6, n_89);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_90 = NULL;
  if(match_cons(t, sym__2))
    {
      z_90 = ATgetArgument(t, 0);
      if((z_90 != ATgetArgument(t, 1)))
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
  ATerm f_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_6, f_6, i_6, t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = f_28;
      {
        ATerm t_90 = NULL,u_90 = NULL,w_90 = NULL;
        t_90 = t;
        if(match_cons(t, sym__2))
          {
            u_90 = ATgetArgument(t, 0);
            w_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_90;
        t = t_8(j_6, u_90, w_90, t);
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
static ATerm q_6 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(s_6, i_46, j_46, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm k_46 = NULL;
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      if((k_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm t_46 = NULL,v_46 = NULL;
  if(match_cons(t, sym__2))
    {
      t_46 = ATgetArgument(t, 0);
      v_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(x_6, t_46, v_46, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm y_46 = NULL;
  if(match_cons(t, sym__2))
    {
      y_46 = ATgetArgument(t, 0);
      if((y_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm w_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm o_91 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_128(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        {
          ATerm k_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_91 = NULL,d_91 = NULL,d_46 = NULL,e_46 = NULL;
              c_91 = t;
              t = v_128(t);
              d_91 = t;
              t = c_91;
              {
                static ATerm l_6 (ATerm t)
                {
                  ATerm f_91 = NULL;
                  t = o_91(t);
                  f_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_91, d_91);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_128(l_6, o_91, n_6, t);
              }
              e_46 = t;
              t = SSL_explode_term(e_46);
              if(match_cons(t, sym__2))
                {
                  ATerm q_28 = ATgetArgument(t, 0);
                  d_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_46;
              t = foldr_3_0(o_6, q_6, _id, t);
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              {
                ATerm m_46 = NULL,n_46 = NULL;
                n_46 = t;
                t = SSL_explode_term(n_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_28 = ATgetArgument(t, 0);
                    m_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_46;
                t = foldr_3_0(v_6, w_6, o_91, t);
              }
            }
        }
      }
    return(t);
  }
  t = o_91(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm t_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_47);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            {
              ATerm w_47 = NULL,x_47 = NULL,z_47 = NULL,a_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_47 = ATgetArgument(t, 0);
                  a_48 = ATgetArgument(t, 1);
                  w_47 = ATgetArgument(t, 2);
                  x_47 = ATgetArgument(t, 3);
                  t = w_47;
                  t = map_1_0(e_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_47 = ATgetArgument(t, 0);
                      a_48 = ATgetArgument(t, 1);
                      w_47 = ATgetArgument(t, 2);
                      x_47 = ATgetArgument(t, 3);
                      t = w_47;
                      t = map_1_0(f_7, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Matrix_2))
                        {
                          z_47 = ATgetArgument(t, 0);
                          a_48 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_47;
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
  ATerm r_48 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_48 = ATgetArgument(t, 0);
          {
            ATerm z_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_28);
      t = r_48;
    }
  else
    {
      t = x_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_48;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm b_49 = NULL;
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm c_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_29);
      t = b_49;
    }
  else
    {
      t = a_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_49;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      if((g_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm k_49 = NULL,m_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_49 = ATgetFirst((ATermList) t);
      m_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_49, m_49);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm q_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(match_cons(e_29, sym__2))
        {
          q_49 = ATgetArgument(e_29, 0);
          y_49 = ATgetArgument(e_29, 1);
        }
      else
        _fail(t);
      {
        ATerm f_29 = ATgetArgument(t, 1);
        if(match_cons(f_29, sym__2))
          {
            z_49 = ATgetArgument(f_29, 0);
            a_50 = ATgetArgument(f_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_49), q_49), (ATerm) ATinsert(CheckATermList(a_50), y_49));
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm c_50 = NULL;
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, c_50, term_i_29), (ATerm) ATmakeAppl(sym_Var_1, c_50));
  return(t);
}
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,f_94 = NULL;
  a_94 = t;
  if(match_cons(t, sym_Row_2))
    {
      b_94 = ATgetArgument(t, 0);
      f_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
        t = f_94;
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
        j_47 = t;
        t = f_94;
        t = free_vars_3_0(z_6, a_7, tvars_matrix_boundin_3_0, t);
        s_47 = t;
        t = v_0(t);
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_47, r_47);
        t = o_8(h_7, s_47, r_47, t);
        t = genzip_4_0(i_7, o_7, p_7, q_7, t);
        if(match_cons(t, sym__2))
          {
            p_47 = ATgetArgument(t, 0);
            q_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_47, (ATerm)ATempty, p_47, f_94)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, b_94, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_47), (ATerm)ATempty, q_47)));
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = f_94;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, b_94, f_94));
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_94 = ATgetFirst((ATermList) t);
      s_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_94, s_94);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(match_cons(n_29, sym__2))
        {
          t_94 = ATgetArgument(n_29, 0);
          u_94 = ATgetArgument(n_29, 1);
        }
      else
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(match_cons(o_29, sym__2))
          {
            v_94 = ATgetArgument(o_29, 0);
            w_94 = ATgetArgument(o_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_94), t_94), (ATerm) ATinsert(CheckATermList(w_94), u_94));
  return(t);
}
static ATerm x_8 (ATerm p_83, ATerm o_83, ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,m_6 = NULL;
  t = o_83;
  {
    static ATerm b_8 (ATerm t)
    {
      static ATerm e_8 (ATerm t)
      {
        t = p_83;
        return(t);
      }
      t = RowLet_1_0(e_8, t);
      return(t);
    }
    t = genzip_4_0(u_7, x_7, z_7, b_8, t);
  }
  q_94 = t;
  if(match_cons(t, sym__2))
    {
      n_94 = ATgetArgument(t, 0);
      o_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_94);
  m_94 = t;
  t = n_94;
  t = concat_0_0(t);
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_94, o_94);
  m_6 = t;
  t = SSLsetAnnotations(m_6, m_94);
  if(match_cons(t, sym__2))
    {
      k_94 = ATgetArgument(t, 0);
      l_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, k_94, (ATerm) ATmakeAppl(sym_Scope_2, p_83, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_p_29))), (ATerm) ATmakeAppl(sym_Matrix_1, l_94))));
  return(t);
}
static ATerm y_8 (ATerm l_119 (ATerm), ATerm e_48, ATerm c_48, ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,e_95 = NULL;
  b_95 = t;
  t = l_119(t);
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_94, e_48, c_48);
  t = p_11(y_94, e_48, c_48, t);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_95 = NULL;
        t = term_s_29;
        g_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_94, term_s_29);
        t = o_11(y_94, g_95, t);
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
      z_94 = ATgetFirst((ATermList) t);
      a_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_29;
  c_95 = t;
  t = (ATerm) ATinsert(CheckATermList(a_95), (ATerm) ATinsert(CheckATermList(z_94), e_48));
  e_95 = t;
  t = SSL_table_put(y_94, c_95, e_95);
  t = b_95;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm k_95 = NULL,q_95 = NULL,r_95 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
        {
          ATerm w_29 = ATgetFirst((ATermList) t_29);
          if(match_cons(w_29, sym_As_2))
            {
              ATerm a_30 = ATgetArgument(w_29, 0);
              ATerm b_30 = ATgetArgument(w_29, 1);
              if(!(match_cons(b_30, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          k_95 = (ATerm) ATgetNext((ATermList) t_29);
        }
      else
        _fail(t);
      q_95 = ATgetArgument(t, 1);
      r_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, k_95, q_95, r_95);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm i_95 = NULL;
  t = filter_1_0(u_8, t);
  i_95 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, i_95);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm z_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, z_96), term_c_30);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm r_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      r_51 = ATgetArgument(t, 0);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(r_51, v_51, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,y_96 = NULL;
  v_96 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = v_96;
      t = t_0(t);
      t = map_1_0(w_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          w_96 = ATgetArgument(t, 0);
          t = v_96;
          t = r_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((w_96 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = t_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              w_96 = ATgetArgument(t, 0);
              t = v_96;
              t = r_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((w_96 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = t_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  w_96 = ATgetArgument(t, 0);
                  t = v_96;
                  t = r_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((w_96 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = t_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm p_51 = NULL,q_51 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      w_96 = ATgetArgument(t, 0);
                      y_96 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_96;
                  t = r_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((w_96 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      p_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_96;
                  t = foldr_3_0(z_8, c_9, d_9, t);
                  q_51 = t;
                  t = p_51;
                  if((q_51 != t))
                    {
                      _fail(t);
                    }
                  t = y_96;
                }
            }
        }
    }
  return(t);
}
static ATerm a_9 (ATerm o_138 (ATerm), ATerm c_82, ATerm z_81, ATerm a_82, ATerm b_82, ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL;
  t = c_82;
  t = o_138(t);
  h_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_97, a_82);
  t = conc_0_0(t);
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, z_81, i_97, b_82);
  return(t);
}
static ATerm b_9 (ATerm v_81, ATerm w_81, ATerm x_81, ATerm t)
{
  ATerm k_97 = NULL;
  t = v_81;
  {
    static ATerm g_9 (ATerm t)
    {
      ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
      static ATerm i_9 (ATerm t)
      {
        static ATerm k_9 (ATerm t)
        {
          t = w_81;
          return(t);
        }
        static ATerm m_9 (ATerm t)
        {
          t = x_81;
          return(t);
        }
        t = MatchCons_2_0(k_9, m_9, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm d_30 = ATgetArgument(t, 0);
          if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
            {
              ATerm e_30 = ATgetFirst((ATermList) d_30);
              if(match_cons(e_30, sym_As_2))
                {
                  ATerm f_30 = ATgetArgument(e_30, 0);
                  l_97 = ATgetArgument(e_30, 1);
                }
              else
                _fail(t);
              m_97 = (ATerm) ATgetNext((ATermList) d_30);
            }
          else
            _fail(t);
          n_97 = ATgetArgument(t, 1);
          o_97 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_9(i_9, l_97, m_97, n_97, o_97, t);
      return(t);
    }
    t = filter_1_0(g_9, t);
  }
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, w_81, x_81, (ATerm) ATmakeAppl(sym_Matrix_1, k_97));
  return(t);
}
ATerm filter_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
  a_98 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_98;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_98 = ATgetFirst((ATermList) t);
          c_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_52 = NULL,k_52 = NULL,l_52 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(a_98);
            h_52 = t;
            t = b_98;
            t = f_126(t);
            k_52 = t;
            t = c_98;
            t = filter_1_0(f_126, t);
            l_52 = t;
            t = (ATerm) ATinsert(CheckATermList(l_52), k_52);
            p_6 = t;
            t = SSLsetAnnotations(p_6, h_52);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            t = c_98;
            t = filter_1_0(f_126, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm j_121 (ATerm), ATerm t)
{
  static ATerm f_99 (ATerm t)
  {
    ATerm v_98 = NULL,b_99 = NULL,c_99 = NULL;
    t = j_121(t);
    v_98 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_98;
      }
    else
      {
        ATerm c_53 = NULL,j_53 = NULL,r_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_99 = ATgetFirst((ATermList) t);
            c_99 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_98);
        c_53 = t;
        t = c_99;
        t = f_99(t);
        j_53 = t;
        t = (ATerm) ATinsert(CheckATermList(j_53), b_99);
        r_6 = t;
        t = SSLsetAnnotations(r_6, c_53);
      }
    return(t);
  }
  t = f_99(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm s_100 = NULL,u_100 = NULL;
  if(match_cons(t, sym__2))
    {
      s_100 = ATgetArgument(t, 0);
      u_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(s_100, u_100, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm v_100 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm i_30 = ATgetArgument(t, 0);
      if(match_cons(i_30, sym_Off_1))
        {
          v_100 = ATgetArgument(i_30, 0);
        }
      else
        _fail(t);
      {
        ATerm k_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, v_100);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,s_99 = NULL,u_99 = NULL,y_99 = NULL,z_99 = NULL;
  n_99 = t;
  if(match_cons(t, sym_Row_3))
    {
      o_99 = ATgetArgument(t, 0);
      {
        ATerm l_30 = ATgetArgument(t, 1);
      }
      {
        ATerm m_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_99 = ATgetFirst((ATermList) t);
      {
        ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_99;
  if(match_cons(t, sym_As_2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_99;
  if(match_cons(t, sym_Str_1))
    {
      y_99 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, y_99), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          y_99 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, y_99), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              y_99 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, y_99), (ATerm) ATempty);
            }
          else
            {
              ATerm m_100 = NULL,q_100 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  y_99 = ATgetArgument(t, 0);
                  z_99 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_99;
              t = foldr_3_0(o_9, p_9, q_9, t);
              m_100 = t;
              t = z_99;
              t = map_1_0(r_9, t);
              q_100 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, y_99, m_100), q_100);
            }
        }
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL;
  d_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_101 = ATgetFirst((ATermList) t);
      c_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_101 = NULL;
            t = c_101;
            {
              static ATerm v_9 (ATerm t)
              {
                ATerm r_30 = t;
                if((PushChoice() == 0))
                  {
                    if((b_101 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_30;
                  }
                return(t);
              }
              t = filter_1_0(v_9, t);
            }
            i_101 = t;
            t = (ATerm) ATinsert(CheckATermList(i_101), b_101);
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            t = d_101;
          }
      }
    }
  else
    {
      t = d_101;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(u_9, t);
  return(t);
}
static ATerm o_103 (ATerm a_102, ATerm t)
{
  ATerm b_102 = NULL;
  t = SSL_explode_string(a_102);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_103 (ATerm t)
        {
          ATerm w_102 = NULL,x_102 = NULL,y_102 = NULL;
          w_102 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_102 = ATgetFirst((ATermList) t);
              y_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_54 = NULL,i_54 = NULL,t_6 = NULL;
                t = SSLgetAnnotations(w_102);
                c_54 = t;
                t = y_102;
                t = p_103(t);
                i_54 = t;
                t = (ATerm) ATinsert(CheckATermList(i_54), x_102);
                t_6 = t;
                t = SSLsetAnnotations(t_6, c_54);
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                {
                  ATerm s_54 = NULL,u_6 = NULL;
                  t = SSLgetAnnotations(w_102);
                  s_54 = t;
                  t = x_102;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, x_102);
                  u_6 = t;
                  t = SSLsetAnnotations(u_6, s_54);
                }
              }
          }
          return(t);
        }
        t = p_103(t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
  }
  b_102 = t;
  t = SSL_implode_string(b_102);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm z_102 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,l_103 = NULL;
  l_103 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_102 = ATgetFirst((ATermList) t);
            {
              ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_30);
        t = z_102;
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  c_103 = ATgetArgument(t, 0);
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
              t = c_103;
              {
                ATerm h_31 = t;
                int i_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        d_103 = ATgetFirst((ATermList) t);
                        {
                          ATerm j_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_31);
                    t = d_103;
                    {
                      ATerm k_31 = t;
                      int l_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              e_103 = ATgetArgument(t, 0);
                              {
                                ATerm n_31 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_31);
                          t = e_103;
                          if(match_cons(t, sym_Off_1))
                            {
                              f_103 = ATgetArgument(t, 0);
                              t = f_103;
                            }
                          else
                            {
                              t = o_103(l_103, t);
                            }
                        }
                      else
                        {
                          t = k_31;
                          t = o_103(l_103, t);
                        }
                    }
                  }
                else
                  {
                    t = h_31;
                    t = o_103(l_103, t);
                  }
              }
            }
          else
            {
              t = d_31;
              t = o_103(l_103, t);
            }
        }
      }
    else
      {
        t = y_30;
        t = o_103(l_103, t);
      }
  }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(((ATgetType(p_31) != AT_LIST) || !(ATisEmpty(p_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,l_104 = NULL;
  if(match_cons(t, sym__2))
    {
      h_104 = ATgetArgument(t, 0);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
          {
            i_104 = ATgetFirst((ATermList) q_31);
            l_104 = (ATerm) ATgetNext((ATermList) q_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_104, i_104), (ATerm) ATmakeAppl(sym__2, h_104, l_104));
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL;
  if(match_cons(t, sym__2))
    {
      m_104 = ATgetArgument(t, 0);
      n_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_104), m_104);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL;
  if(match_cons(t, sym__2))
    {
      o_104 = ATgetArgument(t, 0);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(match_cons(r_31, sym__2))
          {
            p_104 = ATgetArgument(r_31, 0);
            q_104 = ATgetArgument(r_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_9(o_104, p_104, q_104, t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm f_9 (ATerm i_83, ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL;
  t = i_83;
  t = get_path_0_0(t);
  y_103 = t;
  t = i_83;
  t = outedges_0_0(t);
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_83, z_103);
  t = genzip_4_0(w_9, x_9, a_10, d_10, t);
  a_104 = t;
  t = i_83;
  t = default_state_0_0(t);
  c_104 = t;
  t = new_0_0(t);
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, i_83);
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_31, d_104);
  f_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, i_83), (ATerm) ATmakeAppl(sym_Defined_2, term_t_31, d_104));
  t = y_8(i_10, e_104, f_104, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, d_104, (ATerm)ATmakeAppl(sym_Var_1, y_103), a_104, c_104);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,g_105 = NULL,j_105 = NULL,k_105 = NULL,d_7 = NULL,c_7 = NULL,b_7 = NULL;
  k_105 = t;
  if(match_cons(t, sym_Row_3))
    {
      u_104 = ATgetArgument(t, 0);
      v_104 = ATgetArgument(t, 1);
      w_104 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_105);
  t_104 = t;
  t = u_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_104 = ATgetFirst((ATermList) t);
      z_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_104);
  x_104 = t;
  t = y_104;
  if(match_cons(t, sym_As_2))
    {
      c_105 = ATgetArgument(t, 0);
      d_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_104);
  b_105 = t;
  t = d_105;
  {
    ATerm v_31 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_31;
      }
  }
  g_105 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, c_105, g_105);
  b_7 = t;
  t = SSLsetAnnotations(b_7, b_105);
  j_105 = t;
  t = (ATerm) ATinsert(CheckATermList(z_104), j_105);
  c_7 = t;
  t = SSLsetAnnotations(c_7, x_104);
  a_105 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, a_105, v_104, w_104);
  d_7 = t;
  t = SSLsetAnnotations(d_7, t_104);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL,o_105 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      l_105 = ATgetArgument(t, 0);
      {
        ATerm w_31 = ATgetArgument(t, 1);
        if(((ATgetType(w_31) == AT_LIST) && !(ATisEmpty(w_31))))
          {
            m_105 = ATgetFirst((ATermList) w_31);
            n_105 = (ATerm) ATgetNext((ATermList) w_31);
          }
        else
          _fail(t);
      }
      o_105 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(l_105), m_105), n_105, o_105);
  return(t);
}
static ATerm h_9 (ATerm y_82, ATerm t)
{
  ATerm r_104 = NULL;
  t = y_82;
  {
    ATerm x_31 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(k_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_31;
      }
  }
  t = y_82;
  t = map_1_0(l_10, t);
  r_104 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, r_104);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm w_105 = NULL,y_105 = NULL,b_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,q_106 = NULL,c_107 = NULL,d_107 = NULL,m_7 = NULL,l_7 = NULL,j_7 = NULL;
  d_107 = t;
  if(match_cons(t, sym_Row_3))
    {
      y_105 = ATgetArgument(t, 0);
      b_106 = ATgetArgument(t, 1);
      e_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_107);
  w_105 = t;
  t = b_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_106 = ATgetFirst((ATermList) t);
      k_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_106);
  g_106 = t;
  t = h_106;
  if(match_cons(t, sym_As_2))
    {
      m_106 = ATgetArgument(t, 0);
      q_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_106);
  l_106 = t;
  t = q_106;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, m_106, q_106);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_106);
  c_107 = t;
  t = (ATerm) ATinsert(CheckATermList(k_106), c_107);
  l_7 = t;
  t = SSLsetAnnotations(l_7, g_106);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_31 = ATgetFirst((ATermList) t);
      f_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, y_105, f_106, e_106);
  m_7 = t;
  t = SSLsetAnnotations(m_7, w_105);
  return(t);
}
static ATerm j_9 (ATerm w_82, ATerm t)
{
  ATerm s_105 = NULL;
  t = w_82;
  t = map_1_0(m_10, t);
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, s_105);
  return(t);
}
ATerm repeat_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  static ATerm e_107 (ATerm t)
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_113(t);
        t = e_107(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = o_113(t);
      }
    return(t);
  }
  t = e_107(t);
  return(t);
}
static ATerm l_9 (ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL;
  g_107 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_49, o_49);
        t = o_11(n_49, o_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_32 = ATgetFirst((ATermList) t);
            f_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_32);
        t = SSL_table_put(n_49, o_49, f_107);
        t = (ATerm) ATmakeAppl(sym__3, n_49, o_49, f_107);
      }
    else
      {
        t = b_32;
        t = SSL_table_remove(n_49, o_49);
        t = (ATerm) ATmakeAppl(sym__2, n_49, o_49);
      }
  }
  t = g_107;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL;
  k_107 = t;
  t = i_119(t);
  j_107 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_107 = NULL;
        t = term_s_29;
        m_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_107, term_s_29);
        t = o_11(j_107, m_107, t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_107 = ATgetFirst((ATermList) t);
      h_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_29;
  l_107 = t;
  t = SSL_table_put(j_107, l_107, h_107);
  t = i_107;
  {
    static ATerm p_10 (ATerm t)
    {
      ATerm n_107 = NULL;
      n_107 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_107, n_107);
      t = l_9(j_107, n_107, t);
      return(t);
    }
    t = map_1_0(p_10, t);
  }
  t = k_107;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_110(t);
      t = a_111(t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = a_111(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,u_107 = NULL,v_107 = NULL;
  q_107 = t;
  t = h_119(t);
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_107, term_s_29);
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_108 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_32 = ATgetArgument(t, 0);
            ATerm p_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_29;
        d_108 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_107, term_s_29);
        t = o_11(p_107, d_108, t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATempty;
      }
  }
  r_107 = t;
  t = term_s_29;
  u_107 = t;
  t = (ATerm) ATinsert(CheckATermList(r_107), (ATerm) ATempty);
  v_107 = t;
  t = SSL_table_put(p_107, u_107, v_107);
  t = q_107;
  return(t);
}
ATerm scope_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t)
{
  static ATerm q_10 (ATerm t)
  {
    t = end_scope_1_0(j_119, t);
    return(t);
  }
  t = begin_scope_1_0(j_119, t);
  t = restore_always_2_0(k_119, q_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  static ATerm f_109 (ATerm t)
  {
    ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL;
    e_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_109 = ATgetFirst((ATermList) t);
        d_109 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_55 = NULL,i_55 = NULL,s_7 = NULL;
          t = SSLgetAnnotations(e_109);
          f_55 = t;
          t = d_109;
          t = f_109(t);
          i_55 = t;
          t = (ATerm) ATinsert(CheckATermList(i_55), c_109);
          s_7 = t;
          t = SSLsetAnnotations(s_7, f_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_109;
        t = q_120(t);
      }
    return(t);
  }
  t = f_109(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL,l_108 = NULL;
  h_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_108;
    }
  else
    {
      static ATerm r_10 (ATerm t)
      {
        t = not_null(l_108);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_108 = ATgetFirst((ATermList) t);
          if(((l_108 != NULL) && (l_108 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_108;
      t = at_end_1_0(r_10, t);
    }
  return(t);
}
static ATerm s_109 (ATerm j_109, ATerm t)
{
  ATerm l_109 = NULL;
  t = SSL_explode_term(j_109);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_109;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
  p_109 = t;
  if(match_cons(t, sym__2))
    {
      n_109 = ATgetArgument(t, 0);
      o_109 = ATgetArgument(t, 1);
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_10 (ATerm t)
            {
              t = o_109;
              return(t);
            }
            t = n_109;
            t = at_end_1_0(u_10, t);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = s_109(p_109, t);
          }
      }
    }
  else
    {
      t = s_109(p_109, t);
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm d_111 = NULL;
  if(match_cons(t, sym__2))
    {
      d_111 = ATgetArgument(t, 0);
      if((d_111 != ATgetArgument(t, 1)))
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
  ATerm l_111 = NULL;
  if(match_cons(t, sym__2))
    {
      l_111 = ATgetArgument(t, 0);
      if((l_111 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm s_111 = NULL;
  if(match_cons(t, sym__2))
    {
      s_111 = ATgetArgument(t, 0);
      if((s_111 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm a_112 = NULL;
  if(match_cons(t, sym__2))
    {
      a_112 = ATgetArgument(t, 0);
      if((a_112 != ATgetArgument(t, 1)))
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
  ATerm n_112 = NULL;
  if(match_cons(t, sym__2))
    {
      n_112 = ATgetArgument(t, 0);
      if((n_112 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm v_112 = NULL;
  if(match_cons(t, sym__2))
    {
      v_112 = ATgetArgument(t, 0);
      if((v_112 != ATgetArgument(t, 1)))
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
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_110 = ATgetArgument(t, 0);
      t_110 = ATgetArgument(t, 1);
      t = m_110;
      if(match_cons(t, sym_Matrix_2))
        {
          n_110 = ATgetArgument(t, 0);
          o_110 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_110;
      if(match_cons(t, sym_Choice_2))
        {
          j_110 = ATgetArgument(t, 0);
          k_110 = ATgetArgument(t, 1);
          {
            ATerm b_111 = NULL,c_111 = NULL;
            t = j_110;
            if(match_cons(t, sym_Matrix_2))
              {
                h_110 = ATgetArgument(t, 0);
                i_110 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, n_110, h_110);
            t = t_10(v_10, n_110, h_110, t);
            b_111 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_110, i_110);
            t = conc_0_0(t);
            c_111 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, b_111, c_111), k_110);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              j_110 = ATgetArgument(t, 0);
              k_110 = ATgetArgument(t, 1);
              {
                ATerm j_111 = NULL,k_111 = NULL;
                t = j_110;
                if(match_cons(t, sym_Matrix_2))
                  {
                    h_110 = ATgetArgument(t, 0);
                    i_110 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_110, h_110);
                t = t_10(w_10, n_110, h_110, t);
                j_111 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_110, i_110);
                t = conc_0_0(t);
                k_111 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, j_111, k_111), k_110);
              }
            }
          else
            {
              ATerm q_111 = NULL,r_111 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  j_110 = ATgetArgument(t, 0);
                  k_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, n_110, j_110);
              t = t_10(x_10, n_110, j_110, t);
              q_111 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_110, k_110);
              t = conc_0_0(t);
              r_111 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, q_111, r_111);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          m_110 = ATgetArgument(t, 0);
          t_110 = ATgetArgument(t, 1);
          t = m_110;
          if(match_cons(t, sym_Matrix_2))
            {
              n_110 = ATgetArgument(t, 0);
              o_110 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_110;
          if(match_cons(t, sym_LChoice_2))
            {
              j_110 = ATgetArgument(t, 0);
              k_110 = ATgetArgument(t, 1);
              {
                ATerm y_111 = NULL,z_111 = NULL;
                t = j_110;
                if(match_cons(t, sym_Matrix_2))
                  {
                    h_110 = ATgetArgument(t, 0);
                    i_110 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_110, h_110);
                t = t_10(y_10, n_110, h_110, t);
                y_111 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_110, i_110);
                t = conc_0_0(t);
                z_111 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, y_111, z_111), k_110);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  j_110 = ATgetArgument(t, 0);
                  k_110 = ATgetArgument(t, 1);
                  {
                    ATerm l_112 = NULL,m_112 = NULL;
                    t = j_110;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        h_110 = ATgetArgument(t, 0);
                        i_110 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_110, h_110);
                    t = t_10(z_10, n_110, h_110, t);
                    l_112 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_110, i_110);
                    t = conc_0_0(t);
                    m_112 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, l_112, m_112), k_110);
                  }
                }
              else
                {
                  ATerm t_112 = NULL,u_112 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      j_110 = ATgetArgument(t, 0);
                      k_110 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_110, j_110);
                  t = t_10(b_11, n_110, j_110, t);
                  t_112 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_110, k_110);
                  t = conc_0_0(t);
                  u_112 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, t_112, u_112);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              m_110 = ATgetArgument(t, 0);
              t_110 = ATgetArgument(t, 1);
              {
                ATerm z_112 = NULL;
                t = t_110;
                if(match_cons(t, sym_Matrix_2))
                  {
                    j_110 = ATgetArgument(t, 0);
                    k_110 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_110;
                {
                  static ATerm c_11 (ATerm t)
                  {
                    ATerm a_113 = NULL,b_113 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        a_113 = ATgetArgument(t, 0);
                        b_113 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, a_113, (ATerm) ATmakeAppl(sym_Scope_2, m_110, b_113));
                    return(t);
                  }
                  t = map_1_0(c_11, t);
                }
                z_112 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, j_110, z_112);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  m_110 = ATgetArgument(t, 0);
                  t_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_110;
              if(match_cons(t, sym_Matrix_2))
                {
                  n_110 = ATgetArgument(t, 0);
                  o_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_110;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_110 = ATgetFirst((ATermList) t);
                  s_110 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_110;
              if(match_cons(t, sym_Row_2))
                {
                  q_110 = ATgetArgument(t, 0);
                  r_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_110;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, n_110, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, q_110, (ATerm) ATmakeAppl(sym_Seq_2, r_110, t_110))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  static ATerm d_11 (ATerm t)
  {
    t = bottomup_1_0(t_107, t);
    return(t);
  }
  t = SRTS_all(d_11, t);
  t = t_107(t);
  return(t);
}
static ATerm s_10 (ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm u_53, ATerm t_53, ATerm t)
{
  t = r_122(t);
  {
    static ATerm n_11 (ATerm t)
    {
      ATerm g_113 = NULL;
      g_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_53, g_113);
      t = q_122(t);
      return(t);
    }
    t = fetch_1_0(n_11, t);
  }
  t = t_53;
  return(t);
}
static ATerm t_10 (ATerm n_122 (ATerm), ATerm q_53, ATerm p_53, ATerm t)
{
  static ATerm z_113 (ATerm t)
  {
    ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
    u_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_113 = ATgetFirst((ATermList) t);
            w_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_113;
              {
                static ATerm q_11 (ATerm t)
                {
                  t = p_53;
                  return(t);
                }
                t = s_10(n_122, q_11, v_113, w_113, t);
              }
              t = z_113(t);
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              {
                ATerm q_55 = NULL,t_55 = NULL,a_8 = NULL;
                t = SSLgetAnnotations(u_113);
                q_55 = t;
                t = w_113;
                t = z_113(t);
                t_55 = t;
                t = (ATerm) ATinsert(CheckATermList(t_55), v_113);
                a_8 = t;
                t = SSLsetAnnotations(a_8, q_55);
              }
            }
        }
      }
    return(t);
  }
  t = q_53;
  t = z_113(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL,k_114 = NULL;
  c_114 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_114;
      t = d_125(t);
    }
  else
    {
      ATerm n_114 = NULL,o_114 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_114 = ATgetFirst((ATermList) t);
          k_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_114;
      t = f_125(t);
      n_114 = t;
      t = k_114;
      t = foldr_3_0(d_125, e_125, f_125, t);
      o_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_114, o_114);
      t = e_125(t);
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm h_124 (ATerm), ATerm i_124 (ATerm), ATerm t)
{
  ATerm v_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_114 = NULL;
      t = h_124(t);
      r_114 = t;
      t = (ATerm) ATinsert(ATempty, r_114);
      LocalPopChoice(x_32);
    }
  else
    {
      t = v_32;
      {
        ATerm y_55 = NULL,z_55 = NULL;
        static ATerm w_11 (ATerm t)
        {
          t = collect_om_2_0(h_124, i_124, t);
          return(t);
        }
        z_55 = t;
        t = SSL_explode_term(z_55);
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            y_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_55;
        t = foldr_3_0(t_11, i_124, w_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm x_114 = NULL,b_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL;
  if(match_cons(t, sym_As_2))
    {
      b_115 = ATgetArgument(t, 0);
      e_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_115;
  if(match_cons(t, sym_Var_1))
    {
      d_115 = ATgetArgument(t, 0);
      t = e_115;
      if(match_cons(t, sym_As_2))
        {
          f_115 = ATgetArgument(t, 0);
          {
            ATerm b_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_115;
      if(match_cons(t, sym_Off_1))
        {
          x_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, d_115), (ATerm) ATmakeAppl(sym_Var_1, x_114)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          d_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_115;
      if(match_cons(t, sym_Var_1))
        {
          f_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, f_115), (ATerm) ATmakeAppl(sym_Var_1, d_115)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL;
  a_116 = t;
  if(match_cons(t, sym_As_2))
    {
      b_116 = ATgetArgument(t, 0);
      d_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_116;
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
        t = d_116;
        if(match_cons(t, sym_As_2))
          {
            e_116 = ATgetArgument(t, 0);
            z_115 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_116;
        if(match_cons(t, sym_Off_1))
          {
            y_115 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_115), z_115);
      }
    else
      {
        t = c_33;
        if(match_cons(t, sym_Off_1))
          {
            c_116 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_116;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_116;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_116;
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
            t = c_116;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, c_116), term_c_30);
      }
  }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_116 = ATgetFirst((ATermList) t);
      y_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_116, y_116);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if(match_cons(i_33, sym__2))
        {
          z_116 = ATgetArgument(i_33, 0);
          a_117 = ATgetArgument(i_33, 1);
        }
      else
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(match_cons(k_33, sym__2))
          {
            b_117 = ATgetArgument(k_33, 0);
            c_117 = ATgetArgument(k_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_117), z_116), (ATerm) ATinsert(CheckATermList(c_117), a_117));
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL;
  if(match_cons(t, sym__2))
    {
      d_117 = ATgetArgument(t, 0);
      e_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(f_12, d_117, e_117, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm f_117 = NULL;
  if(match_cons(t, sym__2))
    {
      f_117 = ATgetArgument(t, 0);
      if((f_117 != ATgetArgument(t, 1)))
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
  ATerm g_117 = NULL;
  if(match_cons(t, sym__2))
    {
      g_117 = ATgetArgument(t, 0);
      if((g_117 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm t)
{
  ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL,n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,u_116 = NULL,v_116 = NULL;
  u_116 = t;
  v_116 = t;
  t = SSL_explode_term(v_116);
  if(match_cons(t, sym__2))
    {
      k_116 = ATgetArgument(t, 0);
      i_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_116);
  m_116 = t;
  t = i_116;
  t = genzip_4_0(x_11, z_11, c_12, k_123, t);
  if(match_cons(t, sym__2))
    {
      l_116 = ATgetArgument(t, 0);
      j_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(k_116, l_116);
  r_116 = t;
  t = SSLsetAnnotations(r_116, m_116);
  t = l_123(t);
  if(match_cons(t, sym__2))
    {
      n_116 = ATgetArgument(t, 0);
      o_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_116;
  t = foldr_2_0(d_12, e_12, t);
  q_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_116, q_116);
  t = t_10(g_12, o_116, q_116, t);
  p_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_116, p_116);
  return(t);
}
ATerm collect_split_2_0 (ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm t)
{
  static ATerm n_117 (ATerm t)
  {
    static ATerm h_12 (ATerm t)
    {
      ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL;
      k_117 = t;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_124(t);
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
          }
      }
      i_117 = t;
      t = k_117;
      {
        ATerm r_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_124(t);
            LocalPopChoice(u_33);
          }
        else
          {
            t = r_33;
            t = (ATerm) ATempty;
          }
      }
      j_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_117, j_117);
      return(t);
    }
    t = CollectSplit_2_0(n_117, h_12, t);
    return(t);
  }
  t = n_117(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  static ATerm u_117 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL,d_8 = NULL;
          t = f_112(t);
          t_117 = t;
          if(match_cons(t, sym__2))
            {
              p_117 = ATgetArgument(t, 0);
              q_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_117);
          o_117 = t;
          t = p_117;
          t = h_112(t);
          r_117 = t;
          t = q_117;
          t = u_117(t);
          s_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_117, s_117);
          d_8 = t;
          t = SSLsetAnnotations(d_8, o_117);
          t = g_112(t);
        }
      }
    return(t);
  }
  t = u_117(t);
  return(t);
}
static ATerm i_12 (ATerm t)
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
static ATerm k_12 (ATerm t)
{
  ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
  if(match_cons(t, sym__2))
    {
      x_117 = ATgetArgument(t, 0);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
          {
            y_117 = ATgetFirst((ATermList) z_33);
            z_117 = (ATerm) ATgetNext((ATermList) z_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_s_17;
  b_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_117, term_s_17);
  t = m_11(x_117, b_118, t);
  a_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_117, y_117), (ATerm) ATmakeAppl(sym__2, a_118, z_117));
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL;
  if(match_cons(t, sym__2))
    {
      c_118 = ATgetArgument(t, 0);
      d_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_118), c_118);
  return(t);
}
ATerm nzip0_1_0 (ATerm p_112 (ATerm), ATerm t)
{
  ATerm v_117 = NULL;
  v_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_29, v_117);
  t = genzip_4_0(i_12, k_12, l_12, p_112, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm i_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL;
  if(match_cons(t, sym_As_2))
    {
      k_118 = ATgetArgument(t, 0);
      m_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_118;
  if(match_cons(t, sym_Off_1))
    {
      l_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_118;
  {
    ATerm a_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm d_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_34);
        {
          ATerm e_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm m_12 (ATerm t)
              {
                ATerm r_118 = NULL,s_118 = NULL;
                if(match_cons(t, sym__2))
                  {
                    r_118 = ATgetArgument(t, 0);
                    s_118 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(l_118), r_118)), s_118);
                return(t);
              }
              t = m_118;
              t = nzip0_1_0(m_12, t);
              LocalPopChoice(h_34);
            }
          else
            {
              t = e_34;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, l_118), term_c_30);
            }
        }
      }
    else
      {
        t = a_34;
        if(match_cons(t, sym_As_2))
          {
            n_118 = ATgetArgument(t, 0);
            o_118 = ATgetArgument(t, 1);
            t = n_118;
            if(match_cons(t, sym_Var_1))
              {
                i_118 = ATgetArgument(t, 0);
                {
                  ATerm i_34 = t;
                  int j_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm o_12 (ATerm t)
                      {
                        ATerm w_118 = NULL,x_118 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            w_118 = ATgetArgument(t, 0);
                            x_118 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(l_118), w_118)), x_118);
                        return(t);
                      }
                      t = m_118;
                      t = nzip0_1_0(o_12, t);
                      LocalPopChoice(j_34);
                    }
                  else
                    {
                      t = i_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_118), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, l_118), o_118));
                    }
                }
              }
            else
              {
                static ATerm p_12 (ATerm t)
                {
                  ATerm d_119 = NULL,e_119 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      d_119 = ATgetArgument(t, 0);
                      e_119 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(l_118), d_119)), e_119);
                  return(t);
                }
                t = m_118;
                t = nzip0_1_0(p_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                n_118 = ATgetArgument(t, 0);
                o_118 = ATgetArgument(t, 1);
                {
                  ATerm k_34 = t;
                  int m_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm s_12 (ATerm t)
                      {
                        ATerm m_119 = NULL,n_119 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            m_119 = ATgetArgument(t, 0);
                            n_119 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(l_118), m_119)), n_119);
                        return(t);
                      }
                      t = m_118;
                      t = nzip0_1_0(s_12, t);
                      LocalPopChoice(m_34);
                    }
                  else
                    {
                      t = k_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, l_118), (ATerm) ATmakeAppl(sym_Op_2, n_118, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, l_118), o_118)));
                    }
                }
              }
            else
              {
                static ATerm t_12 (ATerm t)
                {
                  ATerm t_119 = NULL,u_119 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      t_119 = ATgetArgument(t, 0);
                      u_119 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(l_118), t_119)), u_119);
                  return(t);
                }
                t = m_118;
                t = nzip0_1_0(t_12, t);
              }
          }
      }
  }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm g_120 = NULL,h_120 = NULL,i_120 = NULL;
  i_120 = t;
  if(match_cons(t, sym_As_2))
    {
      g_120 = ATgetArgument(t, 0);
      h_120 = ATgetArgument(t, 1);
      t = g_120;
      if(match_cons(t, sym_Wld_0))
        {
          t = h_120;
        }
      else
        {
          t = i_120;
        }
    }
  else
    {
      t = i_120;
    }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
    }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm t_120 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      t_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_120;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL;
  if(match_cons(t, sym__2))
    {
      u_120 = ATgetArgument(t, 0);
      v_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(b_13, u_120, v_120, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm w_120 = NULL;
  if(match_cons(t, sym__2))
    {
      w_120 = ATgetArgument(t, 0);
      if((w_120 != ATgetArgument(t, 1)))
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
  ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL;
  f_120 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_s_34, (ATerm) ATinsert(ATempty, f_120));
  t = topdown_1_0(u_12, t);
  t = topdown_1_0(w_12, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      c_120 = ATgetArgument(t, 0);
      d_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_120;
  t = collect_om_2_0(x_12, a_13, t);
  e_120 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, e_120, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, c_120, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_120), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_p_29)))))));
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = repeat_2_0(e_13, _id, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm t_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(w_34);
    }
  else
    {
      t = t_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm u_123 (ATerm t)
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL;
            k_122 = t;
            if(match_cons(t, sym_Choice_2))
              {
                l_122 = ATgetArgument(t, 0);
                m_122 = ATgetArgument(t, 1);
                {
                  ATerm o_56 = NULL,t_56 = NULL,u_56 = NULL,k_8 = NULL;
                  t = SSLgetAnnotations(k_122);
                  o_56 = t;
                  t = l_122;
                  t = u_123(t);
                  t_56 = t;
                  t = m_122;
                  t = u_123(t);
                  u_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_56, u_56);
                  k_8 = t;
                  t = SSLsetAnnotations(k_8, o_56);
                }
              }
            else
              {
                ATerm f_57 = NULL,i_57 = NULL,j_57 = NULL,l_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    l_122 = ATgetArgument(t, 0);
                    m_122 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_122);
                f_57 = t;
                t = l_122;
                t = u_123(t);
                i_57 = t;
                t = m_122;
                t = u_123(t);
                j_57 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, i_57, j_57);
                l_8 = t;
                t = SSLsetAnnotations(l_8, f_57);
              }
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              static ATerm x_123 (ATerm t)
              {
                ATerm c_35 = t;
                int j_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
                    q_123 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        r_123 = ATgetArgument(t, 0);
                        p_123 = ATgetArgument(t, 1);
                        {
                          ATerm s_57 = NULL,i_58 = NULL,j_58 = NULL,e_9 = NULL;
                          t = SSLgetAnnotations(q_123);
                          s_57 = t;
                          t = r_123;
                          t = x_123(t);
                          i_58 = t;
                          t = p_123;
                          t = match_to_matrix_0_0(t);
                          j_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_58, j_58);
                          e_9 = t;
                          t = SSLsetAnnotations(e_9, s_57);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            r_123 = ATgetArgument(t, 0);
                            p_123 = ATgetArgument(t, 1);
                            {
                              ATerm x_58 = NULL,a_59 = NULL,s_9 = NULL;
                              t = SSLgetAnnotations(q_123);
                              x_58 = t;
                              t = p_123;
                              t = x_123(t);
                              a_59 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, r_123, a_59);
                              s_9 = t;
                              t = SSLsetAnnotations(s_9, x_58);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                r_123 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = r_123;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(j_35);
                  }
                else
                  {
                    t = c_35;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = x_123(t);
            }
          }
        return(t);
      }
      ATerm k_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL,f_8 = NULL;
          h_121 = t;
          if(match_cons(t, sym_Choice_2))
            {
              f_121 = ATgetArgument(t, 0);
              g_121 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_121);
          e_121 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_121, g_121);
          f_8 = t;
          t = SSLsetAnnotations(f_8, e_121);
          LocalPopChoice(l_35);
        }
      else
        {
          t = k_35;
          {
            ATerm i_121 = NULL,l_121 = NULL,m_121 = NULL,n_121 = NULL,g_8 = NULL;
            n_121 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                l_121 = ATgetArgument(t, 0);
                m_121 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_121);
            i_121 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, l_121, m_121);
            g_8 = t;
            t = SSLsetAnnotations(g_8, i_121);
          }
        }
      t = u_123(t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(d_13, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_124 = NULL,g_124 = NULL,j_124 = NULL;
      f_124 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          g_124 = ATgetArgument(t, 0);
          {
            ATerm o_35 = t;
            int p_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_124 = NULL;
                t = g_124;
                t = map_1_0(k_13, t);
                l_124 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, l_124);
                LocalPopChoice(p_35);
              }
            else
              {
                t = o_35;
                {
                  ATerm q_35 = t;
                  int r_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_124;
                      t = j_9(g_124, t);
                      LocalPopChoice(r_35);
                    }
                  else
                    {
                      t = q_35;
                      {
                        ATerm s_35 = t;
                        int u_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_124;
                            t = h_9(g_124, t);
                            LocalPopChoice(u_35);
                          }
                        else
                          {
                            t = s_35;
                            t = f_124;
                            t = f_9(g_124, t);
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
              g_124 = ATgetArgument(t, 0);
              j_124 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_124;
          t = x_8(g_124, j_124, t);
        }
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm m_124 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if(((ATgetType(v_35) != AT_LIST) || !(ATisEmpty(v_35))))
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(((ATgetType(y_35) != AT_LIST) || !(ATisEmpty(y_35))))
          _fail(t);
      }
      m_124 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_124;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm h_13 (ATerm t)
    {
      t = repeat_2_0(j_13, _id, t);
      t = SRTS_all(h_13, t);
      return(t);
    }
    t = scope_2_0(f_13, h_13, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  static ATerm l_13 (ATerm t)
  {
    t = topdown_1_0(s_107, t);
    return(t);
  }
  t = s_107(t);
  t = SRTS_all(l_13, t);
  return(t);
}
ATerm map_1_0 (ATerm a_120 (ATerm), ATerm t)
{
  static ATerm o_125 (ATerm t)
  {
    ATerm l_125 = NULL,m_125 = NULL,n_125 = NULL;
    l_125 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_125;
      }
    else
      {
        ATerm i_59 = NULL,l_59 = NULL,m_59 = NULL,a_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_125 = ATgetFirst((ATermList) t);
            n_125 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_125);
        i_59 = t;
        t = m_125;
        t = a_120(t);
        l_59 = t;
        t = n_125;
        t = o_125(t);
        m_59 = t;
        t = (ATerm) ATinsert(CheckATermList(m_59), l_59);
        a_11 = t;
        t = SSLsetAnnotations(a_11, i_59);
      }
    return(t);
  }
  t = o_125(t);
  return(t);
}
static ATerm f_11 (ATerm w_39, ATerm x_39, ATerm t)
{
  ATerm q_125 = NULL;
  t = SSL_fputc(w_39, x_39);
  q_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_125);
  return(t);
}
static ATerm g_11 (ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm r_125 = NULL;
  t = SSL_write_term_to_stream_text(r_38, s_38);
  r_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_125);
  return(t);
}
static ATerm i_11 (ATerm c_115 (ATerm), ATerm t_268, ATerm v_38, ATerm t)
{
  ATerm s_125 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_268, term_d_36);
  t = l_11(t);
  s_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_125, v_38);
  t = c_115(t);
  t = fclose_0_0(t);
  t = v_38;
  return(t);
}
static ATerm h_11 (ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm t_125 = NULL;
  t = SSL_write_term_to_stream_baf(n_38, o_38);
  t_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_125);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(match_cons(e_36, sym_Stream_1))
        {
          c_60 = ATgetArgument(e_36, 0);
        }
      else
        _fail(t);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11(c_60, d_60, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,b_61 = NULL,g_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(match_cons(f_36, sym_Stream_1))
        {
          g_61 = ATgetArgument(f_36, 0);
        }
      else
        _fail(t);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(g_61, h_61, t);
  w_60 = t;
  t = term_g_36;
  x_60 = t;
  t = w_60;
  if(match_cons(t, sym_Stream_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_36, w_60);
  t = f_11(x_60, b_61, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL,d_126 = NULL,e_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL,t_127 = NULL,u_127 = NULL,u_11 = NULL,s_11 = NULL;
  y_125 = t;
  if(match_cons(t, sym__2))
    {
      g_126 = ATgetArgument(t, 0);
      h_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_125);
  e_126 = t;
  t = g_126;
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_125 != NULL) && (x_125 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_125 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(m_13, t);
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        t = term_j_36;
        x_125 = t;
      }
  }
  i_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_126, h_126);
  s_11 = t;
  t = SSLsetAnnotations(s_11, e_126);
  t = y_125;
  if(match_cons(t, sym__2))
    {
      a_126 = ATgetArgument(t, 0);
      b_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_125);
  z_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_126, (ATerm) ATmakeAppl(sym__2, not_null(x_125), b_126));
  u_11 = t;
  t = SSLsetAnnotations(u_11, z_125);
  d_126 = t;
  if(match_cons(t, sym__2))
    {
      t_127 = ATgetArgument(t, 0);
      u_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_59 = NULL,w_59 = NULL,x_59 = NULL,a_60 = NULL,b_60 = NULL,a_12 = NULL;
        t = SSLgetAnnotations(d_126);
        t_59 = t;
        t = t_127;
        t = fetch_1_0(p_13, t);
        w_59 = t;
        t = u_127;
        if(match_cons(t, sym__2))
          {
            a_60 = ATgetArgument(t, 0);
            b_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_11(q_13, a_60, b_60, t);
        x_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_59, x_59);
        a_12 = t;
        t = SSLsetAnnotations(a_12, t_59);
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        {
          ATerm q_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(d_126);
          q_60 = t;
          t = u_127;
          if(match_cons(t, sym__2))
            {
              u_60 = ATgetArgument(t, 0);
              v_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_11(r_13, u_60, v_60, t);
          t_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_127, t_60);
          b_12 = t;
          t = SSLsetAnnotations(b_12, q_60);
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
ATerm apply_strategy_1_0 (ATerm b_134 (ATerm), ATerm t)
{
  ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL;
  b_128 = t;
  t = dtime_0_0(t);
  t = b_128;
  t = b_134(t);
  a_128 = t;
  t = dtime_0_0(t);
  x_127 = t;
  t = a_128;
  if(match_cons(t, sym__2))
    {
      y_127 = ATgetArgument(t, 0);
      z_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_127), (ATerm) ATmakeAppl(sym_Runtime_1, x_127)), z_127);
  return(t);
}
static ATerm p_128 (ATerm j_128, ATerm t)
{
  t = SSL_fclose(j_128);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_128 = NULL,n_128 = NULL;
  n_128 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_128 = ATgetArgument(t, 0);
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_128);
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            t = p_128(n_128, t);
          }
      }
    }
  else
    {
      t = p_128(n_128, t);
    }
  return(t);
}
static ATerm j_11 (ATerm t_38, ATerm t)
{
  t = SSL_read_term_from_stream(t_38);
  return(t);
}
static ATerm k_11 (ATerm y_39, ATerm z_39, ATerm t)
{
  ATerm q_128 = NULL;
  t = SSL_fopen(y_39, z_39);
  q_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_128);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_128 = NULL;
  t = SSL_stdin_stream();
  r_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_128);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_128 = NULL;
  t = SSL_stdout_stream();
  s_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_128);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_128 = NULL;
  t = SSL_stderr_stream();
  t_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_128);
  return(t);
}
static ATerm e_130 (ATerm d_129, ATerm t)
{
  ATerm e_129 = NULL;
  t = SSL_explode_term(d_129);
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_36 = ATgetArgument(t, 1);
        if(((ATgetType(q_36) == AT_LIST) && !(ATisEmpty(q_36))))
          {
            e_129 = ATgetFirst((ATermList) q_36);
            {
              ATerm r_36 = (ATerm) ATgetNext((ATermList) q_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_129;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_129;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_129;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_129;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_130 (ATerm h_129, ATerm i_129, ATerm j_129, ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,p_129 = NULL,j_12 = NULL;
  t = SSLgetAnnotations(j_129);
  m_129 = t;
  t = h_129;
  if(match_cons(t, sym_Path_1))
    {
      p_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_129, i_129);
  j_12 = t;
  t = SSLsetAnnotations(j_12, m_129);
  if(match_cons(t, sym__2))
    {
      k_129 = ATgetArgument(t, 0);
      l_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(k_129, l_129, t);
  return(t);
}
static ATerm g_130 (ATerm r_129, ATerm s_129, ATerm t_129, ATerm t)
{
  ATerm u_129 = NULL,v_129 = NULL,w_129 = NULL,z_129 = NULL,v_12 = NULL;
  t = SSLgetAnnotations(t_129);
  w_129 = t;
  t = SSL_is_string(r_129);
  z_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_129, s_129);
  v_12 = t;
  t = SSLsetAnnotations(v_12, w_129);
  if(match_cons(t, sym__2))
    {
      u_129 = ATgetArgument(t, 0);
      v_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(u_129, v_129, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm b_130 = NULL,c_130 = NULL,d_130 = NULL;
  b_130 = t;
  if(match_cons(t, sym__2))
    {
      c_130 = ATgetArgument(t, 0);
      d_130 = ATgetArgument(t, 1);
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_130(b_130, t);
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            {
              ATerm y_36 = t;
              int z_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_130(c_130, d_130, b_130, t);
                  LocalPopChoice(z_36);
                }
              else
                {
                  t = y_36;
                  t = g_130(c_130, d_130, b_130, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_130(b_130, t);
    }
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_130 = NULL,i_130 = NULL,j_130 = NULL;
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_130 = NULL;
      k_130 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_130, term_h_37);
      t = l_11(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      t = debug_1_0(t_13, t);
      _fail(t);
    }
  i_130 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(j_130, t);
  h_130 = t;
  t = i_130;
  t = fclose_0_0(t);
  t = h_130;
  return(t);
}
ATerm fetch_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  static ATerm i_131 (ATerm t)
  {
    ATerm f_131 = NULL,g_131 = NULL,h_131 = NULL;
    f_131 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_131 = ATgetFirst((ATermList) t);
        h_131 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_37 = t;
      int k_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_61 = NULL,b_62 = NULL,y_12 = NULL;
          t = SSLgetAnnotations(f_131);
          y_61 = t;
          t = g_131;
          t = k_120(t);
          b_62 = t;
          t = (ATerm) ATinsert(CheckATermList(h_131), b_62);
          y_12 = t;
          t = SSLsetAnnotations(y_12, y_61);
          LocalPopChoice(k_37);
        }
      else
        {
          t = j_37;
          {
            ATerm j_62 = NULL,m_62 = NULL,z_12 = NULL;
            t = SSLgetAnnotations(f_131);
            j_62 = t;
            t = h_131;
            t = i_131(t);
            m_62 = t;
            t = (ATerm) ATinsert(CheckATermList(m_62), g_131);
            z_12 = t;
            t = SSLsetAnnotations(z_12, j_62);
          }
        }
    }
    return(t);
  }
  t = i_131(t);
  return(t);
}
static ATerm e_11 (ATerm t_62, ATerm u_62, ATerm t)
{
  t = SSL_strcat(t_62, u_62);
  return(t);
}
ATerm debug_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL;
  l_131 = t;
  t = a_115(t);
  m_131 = t;
  t = term_p_17;
  n_131 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_131), m_131);
  o_131 = t;
  t = SSL_printnl(n_131, o_131);
  t = l_131;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm l_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(n_37);
    }
  else
    {
      t = l_37;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_131 = NULL;
      v_131 = t;
      t = SSL_is_string(v_131);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_13, t);
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            {
              ATerm b_132 = NULL,c_132 = NULL,d_132 = NULL;
              b_132 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_132 = ATgetArgument(t, 0);
                  t = c_132;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_132 = ATgetArgument(t, 0);
                      t = c_132;
                      {
                        ATerm v_37 = t;
                        int x_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_37);
                          }
                        else
                          {
                            t = v_37;
                            t = debug_1_0(e_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_132 = NULL,i_132 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_132 = ATgetArgument(t, 0);
                          d_132 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_132;
                      t = eval_config_0_0(t);
                      h_132 = t;
                      t = d_132;
                      t = eval_config_0_0(t);
                      i_132 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_132, i_132);
                      t = e_11(h_132, i_132, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL;
  m_132 = t;
  t = term_z_37;
  n_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_37, m_132);
  t = o_11(n_132, m_132, t);
  {
    ATerm a_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_132 = NULL,p_132 = NULL;
        t = eval_config_0_0(t);
        o_132 = t;
        t = term_z_37;
        p_132 = t;
        t = SSL_table_put(p_132, m_132, o_132);
        t = o_132;
        LocalPopChoice(c_38);
      }
    else
      {
        t = a_38;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_116 (ATerm), ATerm t)
{
  ATerm t_132 = NULL;
  t_132 = t;
  {
    ATerm e_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_132 = NULL;
        t = term_i_38;
        t = get_config_0_0(t);
        v_132 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_132, term_l_38);
        t = geq_0_0(t);
        t = t_132;
        t = t_116(t);
        LocalPopChoice(h_38);
      }
    else
      {
        t = e_38;
        t = t_132;
      }
  }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm y_132 = NULL;
  y_132 = t;
  if(match_string(t, "-k"))
    {
      t = y_132;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_132;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
  z_132 = t;
  t = SSL_string_to_int(z_132);
  a_133 = t;
  t = term_m_38;
  b_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_38, a_133);
  t = r_11(b_133, a_133, t);
  t = z_132;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_14, g_14, h_14, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm d_133 = NULL;
  d_133 = t;
  if(match_string(t, "-S"))
    {
      t = d_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_133;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm e_133 = NULL,f_133 = NULL;
  t = term_i_38;
  e_133 = t;
  t = term_p_29;
  f_133 = t;
  t = term_q_38;
  t = r_11(e_133, f_133, t);
  t = term_u_38;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm g_133 = NULL,h_133 = NULL,i_133 = NULL;
  g_133 = t;
  t = SSL_string_to_int(g_133);
  h_133 = t;
  t = term_i_38;
  i_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_38, h_133);
  t = r_11(i_133, h_133, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_133);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_x_38;
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
  ATerm j_133 = NULL,k_133 = NULL;
  t = term_z_38;
  j_133 = t;
  t = term_i_17;
  k_133 = t;
  t = term_a_39;
  t = r_11(j_133, k_133, t);
  t = term_b_39;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_14, j_14, k_14, t);
      LocalPopChoice(g_39);
    }
  else
    {
      t = d_39;
      {
        ATerm h_39 = t;
        int i_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_14, m_14, n_14, t);
            LocalPopChoice(i_39);
          }
        else
          {
            t = h_39;
            t = Option_3_0(o_14, p_14, q_14, t);
          }
      }
    }
  return(t);
}
static ATerm r_11 (ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm l_133 = NULL;
  t = term_z_37;
  l_133 = t;
  t = SSL_table_put(l_133, t_43, u_43);
  t = (ATerm) ATmakeAppl(sym__3, term_z_37, t_43, u_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_133 = NULL,p_133 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL;
      t = term_i_17;
      t = i_0(t);
      q_133 = t;
      t = term_l_39;
      r_133 = t;
      t = term_m_39;
      s_133 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_39, term_m_39, q_133);
      t = p_11(r_133, s_133, q_133, t);
      _fail(t);
    }
  else
    {
      ATerm v_133 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_133 = ATgetFirst((ATermList) t);
          p_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_133;
      t = d_0(t);
      t = term_i_17;
      t = g_0(t);
      v_133 = t;
      t = (ATerm) ATinsert(CheckATermList(p_133), v_133);
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm x_133 = NULL;
  x_133 = t;
  if(match_string(t, "-o"))
    {
      t = x_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_133;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm y_133 = NULL,z_133 = NULL;
  y_133 = t;
  t = term_n_39;
  z_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_39, y_133);
  t = r_11(z_133, y_133, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_133);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_o_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_14, t_14, v_14, t);
  return(t);
}
static ATerm p_11 (ATerm i_49, ATerm j_49, ATerm h_49, ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL,e_134 = NULL;
  c_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
  {
    ATerm p_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_39 = ATgetArgument(t, 0);
            ATerm u_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
        t = o_11(i_49, j_49, t);
        LocalPopChoice(r_39);
      }
    else
      {
        t = p_39;
        t = (ATerm) ATempty;
      }
  }
  d_134 = t;
  t = (ATerm) ATinsert(CheckATermList(d_134), h_49);
  e_134 = t;
  t = SSL_table_put(i_49, j_49, e_134);
  t = c_134;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL;
      t = term_i_17;
      t = p_0(t);
      s_134 = t;
      t = term_l_39;
      t_134 = t;
      t = term_m_39;
      u_134 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_39, term_m_39, s_134);
      t = p_11(t_134, u_134, s_134, t);
      _fail(t);
    }
  else
    {
      ATerm y_134 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_134 = ATgetFirst((ATermList) t);
          p_134 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_134;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_134 = ATgetFirst((ATermList) t);
          r_134 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_134;
      t = n_0(t);
      t = q_134;
      t = o_0(t);
      y_134 = t;
      t = (ATerm) ATinsert(CheckATermList(r_134), y_134);
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm f_135 = NULL;
  f_135 = t;
  if(match_string(t, "-i"))
    {
      t = f_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_135;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm g_135 = NULL,h_135 = NULL;
  g_135 = t;
  t = term_c_40;
  h_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_40, g_135);
  t = r_11(h_135, g_135, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_135);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_d_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_14, a_15, b_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_17;
  t = whoami_0_0(t);
  i_135 = t;
  t = term_p_17;
  k_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_40), i_135);
  l_135 = t;
  t = SSL_printnl(k_135, l_135);
  t = term_s_17;
  j_135 = t;
  t = SSL_exit(j_135);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_40;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_11 (ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_46, r_46);
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
      t = SSL_addr(q_46, r_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
  n_135 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_135;
      t = b_125(t);
    }
  else
    {
      ATerm s_135 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_135 = ATgetFirst((ATermList) t);
          p_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_135;
      t = foldr_2_0(b_125, c_125, t);
      s_135 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_135, s_135);
      t = c_125(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm d_64 = NULL,h_64 = NULL;
  if(match_cons(t, sym__2))
    {
      d_64 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(d_64, h_64, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_135 = NULL,y_63 = NULL,a_64 = NULL;
  t = times_0_0(t);
  a_64 = t;
  t = SSL_explode_term(a_64);
  if(match_cons(t, sym__2))
    {
      ATerm j_40 = ATgetArgument(t, 0);
      y_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_63;
  t = foldr_2_0(c_15, e_15, t);
  v_135 = t;
  t = SSL_TicksToSeconds(v_135);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL,i_136 = NULL;
  g_136 = t;
  if(match_cons(t, sym__2))
    {
      h_136 = ATgetArgument(t, 0);
      i_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_136;
        if((h_136 != t))
          {
            _fail(t);
          }
        t = g_136;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATmakeAppl(sym__2, h_136, i_136);
        {
          ATerm m_40 = t;
          int n_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_136, i_136);
              LocalPopChoice(n_40);
            }
          else
            {
              t = m_40;
              t = SSL_gtr(h_136, i_136);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_136, i_136);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm m_136 = NULL;
  m_136 = t;
  {
    ATerm o_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_136 = NULL;
        t = term_i_38;
        t = get_config_0_0(t);
        o_136 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_136, term_s_17);
        t = geq_0_0(t);
        t = m_136;
        t = s_116(t);
        LocalPopChoice(q_40);
      }
    else
      {
        t = o_40;
        t = m_136;
      }
  }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm q_136 = NULL,r_136 = NULL,t_136 = NULL,u_136 = NULL;
  t = run_time_0_0(t);
  q_136 = t;
  t = term_i_17;
  t = whoami_0_0(t);
  r_136 = t;
  t = term_p_17;
  t_136 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), q_136), term_r_40), r_136);
  u_136 = t;
  t = SSL_printnl(t_136, u_136);
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_40), q_136), term_r_40), r_136));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_136 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_29;
  v_136 = t;
  t = SSL_exit(v_136);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm f_137 = NULL,g_137 = NULL;
  g_137 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_137;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_137 = ATgetArgument(t, 0);
          {
            ATerm y_64 = NULL,c_13 = NULL;
            t = SSLgetAnnotations(g_137);
            y_64 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_137);
            c_13 = t;
            t = SSLsetAnnotations(c_13, y_64);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_137;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_134 (ATerm), ATerm t)
{
  ATerm t_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_40;
      t = get_config_0_0(t);
      LocalPopChoice(y_40);
    }
  else
    {
      t = t_40;
      t = fetch_1_0(g_15, t);
    }
  t = z_134(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_137 = NULL,k_137 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_137 = ATgetFirst((ATermList) t);
      k_137 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_137 = NULL,p_137 = NULL;
        static ATerm h_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_137)), not_null(p_137));
          return(t);
        }
        t = k_137;
        t = l_0(t);
        if(((o_137 != NULL) && (o_137 != t)))
          _fail(t);
        else
          o_137 = t;
        t = j_137;
        t = k_0(t);
        if(((p_137 != NULL) && (p_137 != t)))
          _fail(t);
        else
          p_137 = t;
        t = k_137;
        t = reverse_acc_2_0(k_0, h_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_17;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_11 (ATerm z_50, ATerm a_51, ATerm t)
{
  t = SSL_table_get(z_50, a_51);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL,g_13 = NULL;
  v_137 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_137);
  t_137 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_137);
  g_13 = t;
  t = SSLsetAnnotations(g_13, t_137);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm x_137 = NULL;
  x_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_137), term_a_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_137 = NULL,s_137 = NULL;
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_40;
      t = get_config_0_0(t);
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      t = fetch_1_0(i_15, t);
    }
  t = term_f_41;
  t = echo_0_0(t);
  t = term_l_39;
  r_137 = t;
  t = term_m_39;
  s_137 = t;
  t = term_g_41;
  t = o_11(r_137, s_137, t);
  t = reverse_acc_2_0(_id, k_15, t);
  t = map_1_0(l_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL;
  z_137 = t;
  {
    ATerm h_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_137;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_41 = ATgetFirst((ATermList) t);
                ATerm l_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_137;
          }
        LocalPopChoice(j_41);
      }
    else
      {
        t = h_41;
        t = (ATerm) ATinsert(ATempty, z_137);
      }
  }
  a_138 = t;
  t = term_j_36;
  b_138 = t;
  t = SSL_printnl(b_138, a_138);
  t = z_137;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm f_138 = NULL,g_138 = NULL;
  t = term_m_41;
  f_138 = t;
  t = term_i_17;
  g_138 = t;
  t = term_o_41;
  t = r_11(f_138, g_138, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL;
  t = term_m_41;
  j_138 = t;
  t = term_i_17;
  k_138 = t;
  t = term_o_41;
  t = r_11(j_138, k_138, t);
  t = term_t_41;
  h_138 = t;
  t = term_i_17;
  i_138 = t;
  t = term_u_41;
  t = r_11(h_138, i_138, t);
  t = term_d_42;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_15, n_15, o_15, t);
      LocalPopChoice(g_42);
    }
  else
    {
      t = f_42;
      t = Option_3_0(p_15, q_15, b_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL,n_138 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL,i_13 = NULL;
  r_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_138 = ATgetFirst((ATermList) t);
      n_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_138);
  l_138 = t;
  t = m_138;
  t = l_93(t);
  p_138 = t;
  t = n_138;
  t = m_93(t);
  q_138 = t;
  t = (ATerm) ATinsert(CheckATermList(q_138), p_138);
  i_13 = t;
  t = SSLsetAnnotations(i_13, l_138);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_137 (ATerm), ATerm t)
{
  ATerm w_138 = NULL,x_138 = NULL,y_138 = NULL,a_139 = NULL,c_139 = NULL,g_139 = NULL,o_13 = NULL;
  w_138 = t;
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_42;
        t = c_137(t);
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
      }
  }
  t = w_138;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_138 = ATgetFirst((ATermList) t);
      a_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_138);
  x_138 = t;
  t = term_g_40;
  g_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_40, y_138);
  t = r_11(g_139, y_138, t);
  t = a_139;
  {
    static ATerm r_139 (ATerm t)
    {
      ATerm p_42 = t;
      int v_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_139 = NULL;
              j_139 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_139;
              LocalPopChoice(x_42);
            }
          else
            {
              t = w_42;
              t = c_137(t);
              t = Cons_2_0(_id, r_139, t);
            }
          LocalPopChoice(v_42);
        }
      else
        {
          t = p_42;
          {
            ATerm n_139 = NULL,o_139 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_139 = ATgetFirst((ATermList) t);
                o_139 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_139), (ATerm) ATmakeAppl(sym_Undefined_1, n_139));
          }
        }
      return(t);
    }
    t = r_139(t);
  }
  c_139 = t;
  t = (ATerm) ATinsert(CheckATermList(c_139), (ATerm) ATmakeAppl(sym_Program_1, y_138));
  o_13 = t;
  t = SSLsetAnnotations(o_13, x_138);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm e_140 = NULL;
  e_140 = t;
  if(match_string(t, "--help"))
    {
      t = e_140;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_140;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_140;
        }
    }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL;
  t = term_z_40;
  f_140 = t;
  t = term_i_17;
  g_140 = t;
  t = term_y_42;
  t = r_11(f_140, g_140, t);
  t = term_z_42;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_c_43;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_137 (ATerm), ATerm t)
{
  ATerm w_139 = NULL,x_139 = NULL,z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL;
  z_139 = t;
  t = term_l_39;
  b_140 = t;
  t = term_m_39;
  c_140 = t;
  t = (ATerm) ATempty;
  d_140 = t;
  t = SSL_table_put(b_140, c_140, d_140);
  t = z_139;
  {
    static ATerm c_16 (ATerm t)
    {
      ATerm d_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_137(t);
          LocalPopChoice(f_43);
        }
      else
        {
          t = d_43;
          {
            ATerm o_43 = t;
            int p_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_16, g_16, h_16, t);
                LocalPopChoice(p_43);
              }
            else
              {
                t = o_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_16, t);
  }
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_140 = NULL;
        n_140 = t;
        {
          ATerm s_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_65 = NULL;
              t = n_140;
              {
                ATerm y_43 = t;
                int z_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_z_40;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_43);
                  }
                else
                  {
                    t = y_43;
                    t = fetch_1_0(i_16, t);
                  }
              }
              t = n_140;
              t = default_system_usage_0_0(t);
              t = term_p_29;
              l_65 = t;
              t = SSL_exit(l_65);
              LocalPopChoice(w_43);
            }
          else
            {
              t = s_43;
              {
                ATerm y_65 = NULL;
                t = term_m_41;
                t = get_config_0_0(t);
                t = n_140;
                t = default_system_about_0_0(t);
                t = term_p_29;
                y_65 = t;
                t = SSL_exit(y_65);
              }
            }
        }
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm a_44 = t;
          int b_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_140 = NULL,p_140 = NULL,q_140 = NULL;
              static ATerm j_16 (ATerm t)
              {
                ATerm r_140 = NULL,s_140 = NULL,u_140 = NULL,s_13 = NULL;
                u_140 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_140 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_140);
                r_140 = t;
                t = s_140;
                if(((w_139 != NULL) && (w_139 != t)))
                  _fail(t);
                else
                  w_139 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_140);
                s_13 = t;
                t = SSLsetAnnotations(s_13, r_140);
                return(t);
              }
              t = fetch_1_0(j_16, t);
              t = term_p_17;
              p_140 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_139)), term_c_44);
              q_140 = t;
              t = SSL_printnl(p_140, q_140);
              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_139)), term_c_44));
              t = default_system_usage_0_0(t);
              t = term_s_17;
              o_140 = t;
              t = SSL_exit(o_140);
              LocalPopChoice(b_44);
            }
          else
            {
              t = a_44;
            }
        }
      }
  }
  x_139 = t;
  t = term_l_39;
  a_140 = t;
  t = SSL_table_destroy(a_140);
  t = x_139;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t)
{
  ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL,c_141 = NULL;
  t = parse_options_1_0(b_135, t);
  z_140 = t;
  t = term_e_44;
  c_141 = t;
  t = SSL_table_create(c_141);
  t = term_e_44;
  a_141 = t;
  t = term_g_44;
  b_141 = t;
  t = SSL_table_put(a_141, b_141, z_140);
  t = z_140;
  t = d_135(t);
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_135, t);
        LocalPopChoice(i_44);
      }
    else
      {
        t = h_44;
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_135(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = if_verbose2_1_0(a_17, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm d_141 = NULL,e_141 = NULL;
  t = term_l_44;
  d_141 = t;
  t = term_i_17;
  e_141 = t;
  t = term_m_44;
  t = r_11(d_141, e_141, t);
  t = term_n_44;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_p_44;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL,j_141 = NULL;
  g_141 = t;
  t = term_g_40;
  t = get_config_0_0(t);
  h_141 = t;
  t = term_p_17;
  i_141 = t;
  t = (ATerm) ATinsert(ATempty, h_141);
  j_141 = t;
  t = SSL_printnl(i_141, j_141);
  t = g_141;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t)
{
  static ATerm k_16 (ATerm t)
  {
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_134(t);
        LocalPopChoice(r_44);
      }
    else
      {
        t = q_44;
        {
          ATerm s_44 = t;
          int t_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(t_44);
            }
          else
            {
              t = s_44;
              {
                ATerm v_44 = t;
                int w_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_44);
                  }
                else
                  {
                    t = v_44;
                    {
                      ATerm x_44 = t;
                      int y_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_16, w_16, z_16, t);
                          LocalPopChoice(y_44);
                        }
                      else
                        {
                          t = x_44;
                          {
                            ATerm z_44 = t;
                            int a_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(a_45);
                              }
                            else
                              {
                                t = z_44;
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
  static ATerm m_16 (ATerm t)
  {
    ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL;
    l_141 = t;
    {
      ATerm b_45 = t;
      int d_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_141 != NULL) && (k_141 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_141 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_17, t);
          LocalPopChoice(d_45);
        }
      else
        {
          t = b_45;
          t = term_e_45;
          k_141 = t;
        }
    }
    t = not_null(k_141);
    t = ReadFromFile_0_0(t);
    m_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_141, m_141);
    t = apply_strategy_1_0(k_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(k_16, m_134, l_16, m_16, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL,u_141 = NULL,v_141 = NULL,w_141 = NULL,x_141 = NULL,y_141 = NULL,z_141 = NULL,b_142 = NULL,c_142 = NULL,d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL,k_142 = NULL,l_142 = NULL,d_14 = NULL,c_14 = NULL,b_14 = NULL,a_14 = NULL,z_13 = NULL;
  l_142 = t;
  if(match_cons(t, sym__2))
    {
      t_141 = ATgetArgument(t, 0);
      u_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_142);
  s_141 = t;
  t = u_141;
  if(match_cons(t, sym_Specification_1))
    {
      w_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_141);
  v_141 = t;
  t = w_141;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_141 = ATgetFirst((ATermList) t);
      b_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_141);
  y_141 = t;
  t = b_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_142 = ATgetFirst((ATermList) t);
      f_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_142);
  d_142 = t;
  t = e_142;
  if(match_cons(t, sym_Strategies_1))
    {
      i_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_142);
  h_142 = t;
  t = i_142;
  t = map_1_0(f_17, t);
  j_142 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_142);
  z_13 = t;
  t = SSLsetAnnotations(z_13, h_142);
  k_142 = t;
  t = f_142;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_142), k_142);
  a_14 = t;
  t = SSLsetAnnotations(a_14, d_142);
  g_142 = t;
  t = (ATerm) ATinsert(CheckATermList(g_142), z_141);
  b_14 = t;
  t = SSLsetAnnotations(b_14, y_141);
  c_142 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_142);
  c_14 = t;
  t = SSLsetAnnotations(c_14, v_141);
  x_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_141, x_141);
  d_14 = t;
  t = SSLsetAnnotations(d_14, s_141);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,i_143 = NULL;
  i_143 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_143 = ATgetArgument(t, 0);
      e_143 = ATgetArgument(t, 1);
      f_143 = ATgetArgument(t, 2);
      g_143 = ATgetArgument(t, 3);
      {
        ATerm f_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_66 = NULL,v_66 = NULL,y_13 = NULL;
            t = SSLgetAnnotations(i_143);
            q_66 = t;
            t = g_143;
            t = topdown_1_0(g_17, t);
            t = match_to_dfa_0_0(t);
            v_66 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_143, e_143, f_143, v_66);
            y_13 = t;
            t = SSLsetAnnotations(y_13, q_66);
            LocalPopChoice(g_45);
          }
        else
          {
            t = f_45;
            t = i_143;
          }
      }
    }
  else
    {
      t = i_143;
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm y_66 = NULL;
  y_66 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm j_45 = t;
      int m_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_67 = NULL;
          t = y_66;
          t = new_0_0(t);
          a_67 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_67)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_67))));
          LocalPopChoice(m_45);
        }
      else
        {
          t = j_45;
          t = y_66;
        }
    }
  else
    {
      t = y_66;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(e_17, _fail, default_usage_0_0, t);
  return(t);
}
